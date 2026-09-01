#!/usr/bin/env python3
# =============================================================================
# WARNING — the previous revision of this script produced a corrupted binary
# (corrected 2026-08-26)
# =============================================================================
#
# The previous revision inserted a donor DOS-stub + Rich Header block (exactly
# 0xD0 bytes in this repository) in front of the PE header, but **never updated
# any section header's PointerToRawData**. Every body byte in the file moved
# forward by 0xD0 while the coordinates pointing at them stayed put, so the
# output is a PE whose section table points 0xD0 *before* the real body.
#
# Measured consequences (all re-confirmed directly against
# binaries/wallpaper64.exe in this repository):
#
#   * binaries/wallpaper64.exe and binaries/wallpaper64_rich.exe are MD5-identical
#     (263677f0891626089b3553dcf52018ac). The injected output overwrote the copy
#     in binaries/. However, **pristine originals are still present in this
#     repository** — wallpaper_engine/wallpaper64.exe and
#     wallpaper_engine/distribution/wallpaper64.exe are both 5,360,112 bytes,
#     MD5 438cb215f20a8f6c38f57fbc3d9da588, and pass `--verify-only` with
#     .pdata 14,792/14,792 (100%) consistent. The input needed to regenerate the
#     corpus is already on hand.
#   * Both damaged files have e_lfanew = 0x110 (WE originals use 0x40).
#     0x110 - 0x40 = 0xD0.
#   * The section table says .text RawPtr = 0x400, but file offset 0x400 is zero
#     padding — the real code starts at 0x4D0 (48 83 ec 28 = sub rsp,0x28).
#   * Parsing .pdata at the offset the header states yields 0 entries inside
#     .text; parsing at +0xD0 yields 14,792, all 14,792 inside .text (100%).
#
# =============================================================================
# UPDATE 2026-08-27 - the corpus was regenerated, and a second defect was found here
# =============================================================================
#
# The corpus described below has been rebuilt with Ghidra 12.1.2 from an output of this
# (fixed) script. Measured against the .pdata ground truth it now scores 6,824/6,824
# primary function starts (100%), with no shift; the damaged corpus scored 1.26%.
#
#   NOTE ON THE ORACLE: the 14,792 .pdata entries are NOT 14,792 functions. 7,968 of them
#   carry UNW_FLAG_CHAININFO and are additional fragments of a function already listed.
#   The real primary-start count is 6,824. Scoring a corpus against 14,792 halves the
#   apparent coverage - that error was made once during the regeneration.
#
# **FIXED (later the same day): the FileAlignment violation.** The 2026-08-26 revision
# shifted file offsets by the stub length (0xD0), but the PE format requires every
# PointerToRawData to be a multiple of OptionalHeader.FileAlignment (0x200 for these
# binaries), so its output broke alignment in 8 of 8 sections while the pristine input
# satisfies 8/8. The stub is now padded to a FileAlignment multiple (0xD0 -> 0x200), and
# verify() gained an alignment check - it previously looked only at content and therefore
# passed its own broken output.
#
# The corpus was regenerated from the aligned build and the outcome is unchanged: same
# 7,748 functions, same 6,824/6,824 primary-start match, and 7,747 of the 7,748 decompiled
# files are byte-identical to the misaligned build. The one that differs, FUN_1402ed040,
# references PE header structures ~160 times - the region the padding changed. Its
# "Unable to read bytes at ram:143020103" warning is present in BOTH builds, so this is a
# difference in symbol/type resolution over the header area, not a repair of that warning.
#
# That the violation changed nothing was established by control experiment rather than
# assumed: analysing the pristine binary directly yields 7,702 functions versus 7,748 from
# the injected file - effectively identical. It was fixed on its own merits.
#
# **Any Ghidra corpus built with the old revision is invalid** — every address in
# it is displaced. The direction is: an address the corpus calls X actually holds
# the content of X - 0xD0. Measured against the 14,792 real function starts in
# .pdata as ground truth:
#
#     corpus address as-is    matched     86 / 11,252   ( 0.76%)
#     corpus address + 0xD0   matched    145 / 11,252   ( 1.29%)
#     corpus address - 0xD0   matched  3,290 / 11,252   (29.24%)   <- correct direction
#
# The residual 71% is not a different shift — it is **phantom function boundaries**
# invented by disassembling displaced bytes. So **the corpus cannot be salvaged by
# arithmetic; it must be regenerated from a pristine binary** — that binary is
# wallpaper_engine/wallpaper64.exe. See WE-ENGINE-ANALYSIS-2026-07-27.md §6 for
# the full account.
#
# Regeneration:
#   python3 scripts/inject_rich_header.py \
#       --target wallpaper_engine/wallpaper64.exe \
#       --donor  wallpaper_engine/bin/assimp-vc143-mt64.dll \
#       --out    binaries/wallpaper64_rich.exe
#   -> re-run Ghidra on that output. Do not use binaries/wallpaper64.exe as input;
#      it is the damaged copy.
#
# The revision below fixes the defect: it shifts **every file-offset field in the
# PE header** by the same amount the stub added (section PointerToRawData,
# SizeOfHeaders, the SECURITY directory, and the DEBUG directory's
# PointerToRawData entries). It also drops the hardcoded personal absolute paths
# in favour of CLI arguments.
#
# =============================================================================
"""Inject a valid MSVC Rich Header into a PE whose DOS stub was stripped.

Wallpaper Engine binaries have e_lfanew=0x40 (no DOS stub, no Rich Header),
which stops Ghidra's PeLoader.CompilerOpinion from recognising them as
MSVC-compiled; the RTTI analyzer then refuses with "only valid for Visual Studio
windows PE". This script prepends a DOS stub + Rich Header so that recognition
succeeds.

Procedure:
  1. Read the target's PE body (everything from e_lfanew onward) — kept verbatim.
  2. Take the DOS stub + Rich Header from a donor PE (e.g. assimp-vc143-mt64.dll).
  3. New file = target MZ header + donor stub + Rich Header + target PE body.
  4. Move e_lfanew past the stub.
  5. **The body moved back by `growth` bytes, so add `growth` to every file-offset
     field that points into it.** (This step was missing from the old revision.)

Section payloads stay byte-for-byte identical. What changes is the body's *file
position*, which is exactly why step 5 is mandatory. Skip step 5 and every loader
and disassembler reads bytes displaced by `growth` in each section — that was the
old revision's defect.

Strictly speaking step 5 also rewrites body bytes in one place: the
PointerToRawData fields of the DEBUG directory entries, which live inside
`.rdata` (3 entries, 5 bytes measured, in this binary). Those fields are
themselves file offsets, so they have to move too. Every other section payload is
unchanged (verified against wallpaper64.exe).

Note: this injection invalidates the Authenticode signature (the signature hashes
the headers). The SECURITY directory offset is shifted for internal consistency,
but signature verification will fail regardless. The output is an analysis
artifact, not something to run or ship.

Usage:
  python3 inject_rich_header.py --target wallpaper64.exe \\
                                --donor  assimp-vc143-mt64.dll \\
                                --out    wallpaper64_rich.exe

`--out` may not equal `--target`. Overwriting the original is what lost the
pristine copy in the first place.
"""
import argparse
import os
import struct
import sys

# Offsets inside IMAGE_OPTIONAL_HEADER (same for PE32 and PE32+)
OPT_FILEALIGNMENT = 36
OPT_SIZEOFHEADERS = 60
OPT_CHECKSUM = 64
# DataDirectory start offset, per optional-header magic
DD_START = {0x10b: 96, 0x20b: 112}
DIR_SECURITY = 4
DIR_BASERELOC = 5
DIR_DEBUG = 6
IMAGE_DEBUG_DIRECTORY_SIZE = 28


def _u16(b, o):
    return struct.unpack_from('<H', b, o)[0]


def _u32(b, o):
    return struct.unpack_from('<I', b, o)[0]


def _p32(b, o, v):
    struct.pack_into('<I', b, o, v)


class PE:
    """Minimal view for reading and writing header fields in the output buffer."""

    def __init__(self, buf):
        self.b = buf
        self.e_lfanew = _u32(buf, 0x3C)
        if buf[self.e_lfanew:self.e_lfanew + 4] != b'PE\x00\x00':
            raise ValueError("PE signature not found")
        self.nsec = _u16(buf, self.e_lfanew + 6)
        self.optsz = _u16(buf, self.e_lfanew + 20)
        self.opt = self.e_lfanew + 24
        self.magic = _u16(buf, self.opt)
        if self.magic not in DD_START:
            raise ValueError(f"unknown optional header magic 0x{self.magic:x}")
        self.dd = self.opt + DD_START[self.magic]
        self.nrva = _u32(buf, self.opt + 108 if self.magic == 0x20b else self.opt + 92)
        self.sect = self.opt + self.optsz

    def sec_hdr(self, i):
        return self.sect + i * 40

    def sections(self):
        for i in range(self.nsec):
            o = self.sec_hdr(i)
            name = self.b[o:o + 8].rstrip(b'\0').decode('latin1')
            vsize, vaddr, rsize, rptr = struct.unpack_from('<IIII', self.b, o + 8)
            yield i, name, vaddr, vsize, rptr, rsize

    def dir_entry(self, idx):
        if idx >= self.nrva:
            return 0, 0
        return struct.unpack_from('<II', self.b, self.dd + idx * 8)

    def rva_to_off(self, rva):
        for _, _, vaddr, vsize, rptr, rsize in self.sections():
            if rptr and vaddr <= rva < vaddr + max(vsize, rsize):
                return rptr + (rva - vaddr)
        return None


def read_donor_stub(donor_path):
    """Extract the DOS stub + Rich Header region (0x40 .. end of Rich) from a donor PE."""
    with open(donor_path, 'rb') as f:
        d = f.read()
    if d[:2] != b'MZ':
        raise ValueError(f"donor is not MZ: {donor_path}")
    e_lfanew = _u32(d, 0x3C)
    rich_pos = d.find(b'Rich', 0, e_lfanew)
    if rich_pos < 0:
        raise ValueError(f"donor has no Rich Header: {donor_path}")
    block = bytearray(d[0:rich_pos + 8])   # through 'Rich' + its 4-byte XOR key
    while len(block) % 8 != 0:             # pad to 8-byte alignment
        block.append(0)
    return bytes(block[0x40:])             # drop the donor MZ header, keep the stub


def shift_file_offsets(pe, growth):
    """Shift every file-offset field by `growth`, because the body moved back.

    This function is what the old revision was missing. RVA-based fields are left
    alone: the in-memory layout did not change, only the position within the file.
    """
    log = []

    # (1) Each section header's PointerToRawData
    for i, name, _vaddr, _vsize, rptr, _rsize in list(pe.sections()):
        if rptr == 0:
            continue                       # BSS-like: no raw data, nothing to shift
        _p32(pe.b, pe.sec_hdr(i) + 20, rptr + growth)
        log.append(f"    {name:<8} PointerToRawData 0x{rptr:x} -> 0x{rptr + growth:x}")

    # (2) SizeOfHeaders - the header region before the first section's raw data grew too
    soh = _u32(pe.b, pe.opt + OPT_SIZEOFHEADERS)
    _p32(pe.b, pe.opt + OPT_SIZEOFHEADERS, soh + growth)
    log.append(f"    SizeOfHeaders    0x{soh:x} -> 0x{soh + growth:x}")

    # (3) SECURITY directory - this entry's VirtualAddress is a file offset, not an RVA
    sec_off, sec_size = pe.dir_entry(DIR_SECURITY)
    if sec_off:
        _p32(pe.b, pe.dd + DIR_SECURITY * 8, sec_off + growth)
        log.append(f"    SECURITY dir     0x{sec_off:x} -> 0x{sec_off + growth:x} (file offset)")

    # (4) PointerToRawData of each DEBUG directory entry
    #     (the section table is already fixed, so rva_to_off returns correct values)
    dbg_rva, dbg_size = pe.dir_entry(DIR_DEBUG)
    if dbg_rva:
        dbg_off = pe.rva_to_off(dbg_rva)
        if dbg_off is None:
            log.append("    DEBUG dir        RVA mapping failed - skipped (check manually)")
        else:
            for k in range(dbg_size // IMAGE_DEBUG_DIRECTORY_SIZE):
                p = dbg_off + k * IMAGE_DEBUG_DIRECTORY_SIZE + 24
                ptr = _u32(pe.b, p)
                if ptr:
                    _p32(pe.b, p, ptr + growth)
                    log.append(f"    DEBUG[{k}]        PointerToRawData "
                               f"0x{ptr:x} -> 0x{ptr + growth:x}")
    return log


def verify(path):
    """Self-check that the output is actually consistent. Returns False on failure."""
    with open(path, 'rb') as f:
        buf = bytearray(f.read())
    pe = PE(buf)
    ok = True

    text = next((s for s in pe.sections() if s[1] == '.text'), None)
    if text is None:
        print("  [!] no .text section")
        return False
    _, _, tva, tvs, trp, _ = text

    head = buf[trp:trp + 16]
    if len(head) < 16:
        # [정정 2026-08-30] 종전 이 자리에는 길이 검사가 없었다. buf[trp:trp+16] 은 EOF 를
        # 넘어 슬라이싱하면 예외 없이 짧은 바이트열(잘린 파일이면 b'')을 돌려주고,
        # b'' == b'\0'*16 은 False 이므로 아래 else 가지가 공허하게 통과했다.
        # 실측: 768바이트로 자른 PE32 는 `[ok] .text RawPtr 0x400 first bytes: `
        # (빈 필드)를 찍고 종료코드 0 을 냈다. 초록이 곧 거짓이었던 자리다.
        print(f"  [!] .text RawPtr 0x{trp:x} is past EOF or truncated "
              f"(got {len(head)} of 16 bytes, file is {len(buf)} bytes) - "
              "the file is truncated or the section table is wrong")
        return False
    if head == b'\0' * 16:
        print(f"  [!] .text RawPtr 0x{trp:x} points at zero padding - offsets are displaced")
        ok = False
    else:
        print(f"  [ok] .text RawPtr 0x{trp:x} first bytes: {head[:8].hex(' ')}")

    # Cross-check via the fraction of .pdata RUNTIME_FUNCTIONs landing inside .text
    pdata = next((s for s in pe.sections() if s[1] == '.pdata'), None)
    if pdata:
        _, _, _, pvs, prp, _ = pdata
        n = pvs // 12
        # [정정 2026-08-30] 상한 검사를 추가했다. 종전에는 잘린 파일에서
        # struct.unpack_from 이 `struct.error: unpack_from requires a buffer of at
        # least 5118988 bytes` 로 판정 없이 죽었다(실측: 64비트 768바이트 절단본).
        # 판정기는 트레이스백이 아니라 판정을 내야 한다.
        if prp + 12 * n > len(buf):
            print(f"  [!] .pdata claims {n} entries at 0x{prp:x} "
                  f"(needs 0x{prp + 12 * n:x} bytes) but the file is only "
                  f"{len(buf)} bytes - truncated")
            return False
        inside = 0
        for i in range(n):
            begin, end, _u = struct.unpack_from('<III', buf, prp + i * 12)
            if begin and tva <= begin < tva + tvs and end > begin:
                inside += 1
        pct = 100.0 * inside / n if n else 0.0
        mark = "ok" if pct > 95.0 else "!"
        print(f"  [{mark}] .pdata {inside}/{n} entries inside .text ({pct:.2f}%)")
        if pct <= 95.0:
            ok = False

    # Displacement cross-check that does NOT depend on .pdata.
    #
    # [정정 2026-08-30] 종전 이 검사가 없었고, 변위 탐지의 유일한 강한 축이 위
    # `.pdata` 블록 안에만 있었다. `.pdata` 가 없는 대상에서는 위의 `.text` 내용
    # 검사만 남는데 그것은 "16바이트 전부 0" 만 거부하므로, 섹션 전체가
    # FileAlignment 배수만큼 밀린 PE 가 초록으로 통과했다.
    #
    # 실측(2026-08-30, 이 정정을 낳은 재현):
    #   wallpaper_engine/wallpaper32.exe (PE32, 6섹션, .pdata 없음) 의 모든
    #   PointerToRawData 에 +0x200 을 더한 사본에 `--verify-only` 를 돌리면 정정 전에는
    #     [ok] .text RawPtr 0x600 first bytes: 07 00 00 00 c7 05 fc 96
    #     [ok] 6/6 sections aligned to FileAlignment 0x200
    #     EXIT=0
    #   이 나왔다. 0x600 의 그 바이트열은 명령 중간이고, 진짜 코드는 0x400 의
    #   `6a 38 e8 c9 a1 20 00 83` 이다. 0x200 배수 변위라 정렬 검사에는 걸리지 않는다.
    #   이것은 2026-08-26 사태(코퍼스 전체가 조용히 변위된 것)와 같은 모양이고,
    #   §10 이 실제 실행 대상으로 지목한 바로 그 바이너리에서 재현된다.
    #
    # 프롤로그 패턴 매칭은 쓰지 않는다. wallpaper32.exe 의 진짜 .text 첫 바이트는
    # `6a 38 e8 ...` (push 0x38; call) 으로 표준 프롤로그(`55 8b ec` / `48 83 ec`)가
    # 아니다 — 패턴 매처는 무손상 32비트 원본을 빨강으로 만들어 사각을 오경보로
    # 바꿔놓는다. 대신 코드젠을 추측하지 않는 구조 불변식을 쓴다: `.reloc` 블록
    # 체인은 PageRVA/SizeOfBlock 이 디렉터리 크기를 정확히 타일링해야 하고 모든
    # PageRVA 가 섹션 안에서 해소돼야 한다. 변위되면 첫 블록부터 쓰레기를 읽는다.
    # 리포의 PE 12개 전부가 이 검사를 blocks>0 / bad=0 / 정확 타일링으로 통과한다
    # (binaries/ 6개 · wallpaper_engine/ 4개 · distribution/ 2개, 실측 2026-08-30).
    reloc_rva, reloc_size = pe.dir_entry(DIR_BASERELOC)
    if reloc_rva and reloc_size:
        rrp = pe.rva_to_off(reloc_rva)
        if rrp is None:
            print(f"  [!] .reloc directory RVA 0x{reloc_rva:x} resolves to no section")
            ok = False
        else:
            secs = list(pe.sections())
            pos = nblocks = 0
            reason = None
            while pos + 8 <= reloc_size:
                if rrp + pos + 8 > len(buf):
                    reason = f"block {nblocks} header runs past EOF"
                    break
                page_rva, blk_size = struct.unpack_from('<II', buf, rrp + pos)
                if blk_size < 8 or blk_size % 2 or pos + blk_size > reloc_size:
                    reason = (f"block {nblocks} SizeOfBlock 0x{blk_size:x} is invalid "
                              f"at +0x{pos:x} of 0x{reloc_size:x}")
                    break
                if not any(rp and va <= page_rva < va + max(vs, rs)
                           for _i, _n, va, vs, rp, rs in secs):
                    reason = (f"block {nblocks} PageRVA 0x{page_rva:x} "
                              "resolves to no section")
                    break
                nblocks += 1
                pos += blk_size
            if reason is not None or pos != reloc_size:
                if reason is None:
                    reason = (f"blocks tile 0x{pos:x} of 0x{reloc_size:x} bytes, "
                              "not exactly")
                print(f"  [!] .reloc block chain is inconsistent ({reason}) - "
                      "section file offsets are displaced")
                ok = False
            else:
                print(f"  [ok] .reloc {nblocks} blocks tile 0x{reloc_size:x} bytes "
                      "exactly, all PageRVAs inside sections")
    elif pdata is None:
        # Neither axis available. Say so rather than printing green on no evidence.
        print("  [!] this PE has neither .pdata nor a base-relocation directory - "
              "verify() has no displacement oracle for it and its verdict here "
              "means only 'not obviously broken', not 'verified'")
        ok = False

    # Alignment: every PointerToRawData must be a multiple of FileAlignment. The
    # 2026-08-26 revision shifted offsets by the stub length (0xD0) and broke this in 8 of 8
    # sections, and *this function passed it anyway* because it only looked at content.
    # Checking structure as well as content is the point.
    file_alignment = _u32(buf, pe.opt + OPT_FILEALIGNMENT)
    if file_alignment:
        bad = [n for _i, n, _va, _vs, rp, _rs in pe.sections()
               if rp and rp % file_alignment]
        total = sum(1 for _ in pe.sections())
        if bad:
            print(f"  [!] {len(bad)}/{total} sections violate FileAlignment "
                  f"0x{file_alignment:x}: {', '.join(bad)}")
            ok = False
        else:
            print(f"  [ok] {total}/{total} sections aligned to FileAlignment "
                  f"0x{file_alignment:x}")

    csum = _u32(buf, pe.opt + OPT_CHECKSUM)
    if csum:
        print(f"  [note] OptionalHeader.CheckSum = 0x{csum:x}. In an injected file this"
              " value and the Authenticode signature are both invalid. Not"
              " recomputed - this is an analysis artifact.")
    return ok


def inject(target_path, donor_path, out_path):
    if os.path.abspath(target_path) == os.path.abspath(out_path):
        raise SystemExit("refused: --out equals --target. Overwriting the original "
                         "is what lost the pristine copy in the first place.")

    with open(target_path, 'rb') as f:
        target = f.read()
    if target[:2] != b'MZ':
        raise ValueError(f"target is not MZ: {target_path}")

    old_lfanew = _u32(target, 0x3C)
    pe_body = target[old_lfanew:]
    donor_stub = read_donor_stub(donor_path)
    new_lfanew = 0x40 + len(donor_stub)
    growth = new_lfanew - old_lfanew
    if growth <= 0:
        raise SystemExit(f"target e_lfanew (0x{old_lfanew:x}) is already >= stub "
                         f"length (0x{new_lfanew:x}) - no injection needed")

    # `growth` is added to every PointerToRawData below, and the PE format requires each of
    # those to stay a multiple of OptionalHeader.FileAlignment. An 8-byte-aligned stub
    # therefore is not enough: pad it until `growth` itself is a FileAlignment multiple.
    #
    # [2026-08-27] Omitting this is what made the 2026-08-26 output violate alignment in
    # 8 of 8 sections while its own self-check still passed - the check looked at content
    # (is .text zero padding? does .pdata land inside .text?) and never at alignment.
    # Zero padding between the Rich Header and the PE signature is what MSVC emits anyway,
    # so growing the gap is faithful, not a hack.
    tgt = PE(bytearray(target))
    file_alignment = _u32(tgt.b, tgt.opt + OPT_FILEALIGNMENT)
    if file_alignment and growth % file_alignment:
        padded = ((growth + file_alignment - 1) // file_alignment) * file_alignment
        donor_stub = donor_stub + b'\0' * (padded - growth)
        print(f"padding stub 0x{growth:x} -> 0x{padded:x} to keep "
              f"FileAlignment 0x{file_alignment:x}")
        growth = padded
        new_lfanew = old_lfanew + growth

    out = bytearray()
    out += target[0:0x3C]                    # MZ header up to the e_lfanew field
    out += struct.pack('<I', new_lfanew)     # patched e_lfanew
    out += donor_stub                        # DOS stub + Rich Header
    out += pe_body                           # PE signature and everything after

    if out[new_lfanew:new_lfanew + 4] != b'PE\x00\x00':
        raise ValueError(f"PE signature misaligned: got "
                         f"{bytes(out[new_lfanew:new_lfanew + 4])!r} "
                         f"at 0x{new_lfanew:x}")
    if out.find(b'Rich', 0, new_lfanew) < 0:
        raise ValueError("Rich Header not found in output")

    pe = PE(out)
    print(f"body moved back by 0x{growth:x} bytes - shifting file-offset fields to match:")
    for line in shift_file_offsets(pe, growth):
        print(line)

    # Exact proof that every section body moved together with its pointer.
    #
    # [정정 2026-08-30] 종전에는 이 확인이 없었고, inject() 의 유일한 안전망이 아래
    # verify() 였다. verify() 의 변위 탐지는 `.pdata` 에 의존했으므로, `.pdata` 가 없는
    # 대상(이 리포의 wallpaper32.exe 가 그렇다)에서 shift_file_offsets 가 회귀하면
    # 자체검증이 그대로 통과했다. 실측 재현: shift_file_offsets 를 no-op 으로 되돌리고
    # (2026-08-26 5단계 결함) 현재의 0x200 패딩은 유지한 채 wallpaper32.exe 에
    # inject() 를 돌리면 `[ok] .text RawPtr 0x400 first bytes: 2e 72 65 6c 6f 63 00 00`
    # — 섹션 테이블의 ".reloc" ASCII 문자열이지 코드가 아니다 — 를 찍고 통과했다.
    #
    # inject() 는 무손상 입력 버퍼를 손에 들고 있으므로 추측할 필요가 없다.
    # 새 RawPtr 이 가리키는 바이트열이 원본의 옛 RawPtr 이 가리켰던 바이트열과
    # 정확히 같은지 비교하면 된다. 비트수·섹션 구성·코드젠에 무관한 검사다.
    tgt_secs = {n: (rp, rs) for _i, n, _va, _vs, rp, rs in PE(bytearray(target)).sections()}
    for _i, name, _va, _vs, new_rp, rsize in pe.sections():
        if not new_rp or not rsize:
            continue
        old_rp, old_rs = tgt_secs.get(name, (None, None))
        if old_rp is None:
            raise ValueError(f"section {name!r} in output has no counterpart in target")
        ncmp = min(rsize, old_rs, 4096)
        if bytes(out[new_rp:new_rp + ncmp]) != target[old_rp:old_rp + ncmp]:
            raise SystemExit(
                f"refused: section {name} body does not match the target at its new "
                f"PointerToRawData (out 0x{new_rp:x} vs target 0x{old_rp:x}). The "
                "section table is displaced relative to the payload - this is the "
                "2026-08-26 corruption shape. Do not use this output.")
    print(f"  [ok] all {sum(1 for _ in pe.sections())} section bodies are "
          "byte-identical to the target at their new PointerToRawData")

    with open(out_path, 'wb') as f:
        f.write(out)

    print(f"\nwrote: {out_path}")
    print(f"  original size {len(target)} (e_lfanew 0x{old_lfanew:x})")
    print(f"  output size   {len(out)} (e_lfanew 0x{new_lfanew:x}, +{growth})")
    print("\nself-check:")
    if not verify(out_path):
        raise SystemExit("self-check failed - do not trust this output. "
                         "Any corpus built from it is invalid.")
    print("  passed.")


def main(argv=None):
    ap = argparse.ArgumentParser(
        description="Inject an MSVC Rich Header into a PE whose DOS stub was "
                    "stripped (also corrects section file offsets).",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="example:\n"
               "  python3 inject_rich_header.py \\\n"
               "      --target binaries/wallpaper64.exe \\\n"
               "      --donor  /path/to/wallpaper_engine/bin/assimp-vc143-mt64.dll \\\n"
               "      --out    binaries/wallpaper64_rich.exe\n")
    ap.add_argument('--target',
                    help="target PE lacking a Rich Header (a WE binary). Use a pristine copy.")
    ap.add_argument('--donor',
                    help="MSVC binary with an intact Rich Header "
                         "(e.g. bin/assimp-vc143-mt64.dll from a WE install)")
    ap.add_argument('--out',
                    help="output path. Refused if equal to --target.")
    ap.add_argument('--verify-only', metavar='PE',
                    help="only check an existing file's offset consistency; do not inject")
    args = ap.parse_args(argv)

    if args.verify_only:
        sys.exit(0 if verify(args.verify_only) else 1)
    missing = [n for n in ('target', 'donor', 'out') if not getattr(args, n)]
    if missing:
        ap.error("missing required arguments: " + ", ".join('--' + m for m in missing))
    inject(args.target, args.donor, args.out)


if __name__ == '__main__':
    main()
