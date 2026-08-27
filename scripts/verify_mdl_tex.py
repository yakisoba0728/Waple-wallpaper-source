#!/usr/bin/env python3
"""MDL/TEX 디코더 정독 결과의 실물 전수 검증기 (2026-08-27).

`analysis/reports/mdl-tex-decoders-2026-08-27.md` 가 주장하는 프레이밍을 그대로 코드로 옮겨
저장소 안의 실물 에셋에 돌린다. 주장과 실물이 어긋나면 여기서 터진다.

  * MDL: 무손상 원본에서 정점 속성 표(mask/size ×26)를 떠서 stride 를 계산하고,
         28개 .mdl 이 파일 끝에 정확히 착지하는지 본다.
  * TEX: `0x14015c760`(TEXI 파서)이 읽는 순서대로 소비한 뒤 다음 8바이트가
         유효한 `TEX?000N` 태그인지 본다.

모든 주소는 무손상 원본 wallpaper_engine/wallpaper64.exe (ImageBase 0x140000000) 기준 VA.

    python3 scripts/verify_mdl_tex.py [--root .]
"""
import argparse
import glob
import os
import struct
import sys
from collections import Counter

IMAGE_BASE = 0x140000000
VA_ATTR_MASK = 0x140484A20   # u32[26]  스트라이드 누산 루프의 마스크 배열
VA_ATTR_SIZE = 0x1404849B0   # u32[26]  같은 루프의 바이트크기 배열
VA_ATTR_NAME = 0x140484A90   # char*[26] 속성 이름
VA_ATTR_DESC = 0x140482AF0   # D3D11_INPUT_ELEMENT_DESC[26] (엔트리 32B)
DXGI_SIZE = {2: 16, 3: 16, 6: 12, 16: 8}


class PE:
    def __init__(self, path):
        self.d = open(path, "rb").read()
        d = self.d
        e = struct.unpack_from("<I", d, 0x3C)[0]
        assert d[e:e + 4] == b"PE\0\0", "not a PE"
        nsec = struct.unpack_from("<H", d, e + 6)[0]
        so = e + 4 + 20 + struct.unpack_from("<H", d, e + 20)[0]
        self.sections = [struct.unpack_from("<8sIIII", d, so + 40 * i) for i in range(nsec)]

    def off(self, rva):
        for _n, vsz, va, rsz, rp in self.sections:
            if va <= rva < va + max(vsz, rsz):
                return rva - va + rp
        return None

    def at(self, va):
        return self.off(va - IMAGE_BASE)

    def u32s(self, va, n):
        return list(struct.unpack_from("<%dI" % n, self.d, self.at(va)))

    def cstr_at_va(self, va):
        p = self.at(va)
        return self.d[p:self.d.index(b"\0", p)].decode("latin1")


def attr_table(pe):
    """(mask, size, name, semantic, semIdx, dxgi) ×26 — 네 평행 배열을 합쳐 돌려준다."""
    mask = pe.u32s(VA_ATTR_MASK, 26)
    size = pe.u32s(VA_ATTR_SIZE, 26)
    names = struct.unpack_from("<26Q", pe.d, pe.at(VA_ATTR_NAME))
    out = []
    for i in range(26):
        sem_ptr, sem_idx, dxgi = struct.unpack_from("<QII", pe.d, pe.at(VA_ATTR_DESC) + 32 * i)
        out.append((mask[i], size[i], pe.cstr_at_va(names[i]),
                    pe.cstr_at_va(sem_ptr), sem_idx, dxgi))
    return out


class Reader:
    """엔진 리더(0x14009c4e0 계열)와 같은 의미의 커서."""

    def __init__(self, d):
        self.d, self.p = d, 0

    def cstr(self):
        e = self.d.index(b"\0", self.p)
        s = self.d[self.p:e]
        self.p = e + 1
        return s

    def u32(self):
        v = struct.unpack_from("<I", self.d, self.p)[0]
        self.p += 4
        return v

    def u64(self):
        v = struct.unpack_from("<Q", self.d, self.p)[0]
        self.p += 8
        return v

    def u8(self):
        v = self.d[self.p]
        self.p += 1
        return v

    def blob(self):
        n = self.u32()
        off = self.p
        self.p += n
        return off, n


def stride_of(flag, table):
    return sum(sz for m, sz, *_ in table if flag & m)


def parse_mdl(path, table):
    d = open(path, "rb").read()
    r = Reader(d)
    magic = r.cstr().decode("latin1")
    ver = int(magic[4:])
    header_flag, skin_count, mesh_count = r.u32(), r.u32(), r.u32()
    meshes = []
    for _ in range(mesh_count):
        mats = [r.cstr().decode("latin1") for _ in range(skin_count)]
        gate = r.u32() if ver >= 4 else 0
        if gate & 2:
            r.u32()
        if ver >= 17:
            [r.u32() for _ in range(6)]                       # AABB min/max (float32)
        flag = r.u32() if ver >= 15 else header_flag
        st = stride_of(flag, table)
        _voff, vlen = r.blob()
        _ioff, ilen = r.blob()
        if ver >= 21:
            if r.u8():
                r.u32(); r.blob()
            if r.u8():
                r.blob()
        if ver >= 23:
            for _ in range(r.u32()):
                r.u64(); r.cstr(); r.u32()
                for _k in range(r.u32()):
                    r.u32()
                for _k in range(r.u32()):
                    r.u32()
        meshes.append(dict(mats=mats, gate=gate, flag=flag, stride=st, vlen=vlen, ilen=ilen))
    if ver >= 13:                                             # 서브청크 섹션 루프
        while True:
            tag = r.cstr()
            if len(tag) < 4:
                break
            r.p += r.u32()
    return dict(magic=magic, ver=ver, size=len(d), end=r.p, meshes=meshes)


def parse_tex(path):
    d = open(path, "rb").read()
    r = Reader(d)
    container = r.cstr().decode("latin1")
    tag = r.cstr().decode("latin1")
    ver = int(tag[4:]) if len(tag) > 4 and tag[4:].isdigit() else 0
    fmt, flags = r.u32(), r.u32()
    tex_w, tex_h = r.u32(), r.u32()
    img_w, img_h = r.u32(), r.u32()
    depth = r.u32() if flags & 0x40 else None                 # 0x14015c760: flags & 0x40
    border = r.u32() if ver > 0 else None
    nxt = d[r.p:r.p + 9]
    ok = len(nxt) == 9 and nxt[:3] == b"TEX" and nxt[4:8].isdigit() and nxt[8:9] == b"\0"
    return dict(container=container, tag=tag, fmt=fmt, flags=flags, tex=(tex_w, tex_h),
                img=(img_w, img_h), depth=depth, border=border,
                next_tag=nxt[:8].decode("latin1", "replace"), ok=ok)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--root", default=".", help="저장소 루트")
    ap.add_argument("--exe", default="wallpaper_engine/wallpaper64.exe",
                    help="무손상 원본(md5 438cb215f20a8f6c38f57fbc3d9da588)")
    a = ap.parse_args()
    root = a.root
    pe = PE(os.path.join(root, a.exe))
    table = attr_table(pe)

    print("== 정점 속성 표 (mask@0x140484a20 / size@0x1404849b0 / name@0x140484a90 / "
          "D3D11_INPUT_ELEMENT_DESC@0x140482af0) ==")
    bad_size = [i for i, e in enumerate(table) if DXGI_SIZE.get(e[5]) != e[1]]
    known = 0
    for m, *_ in table:
        known |= m
    for i, (m, sz, nm, sem, si, dx) in enumerate(table):
        print("  %2d 0x%08x %2d  %-18s %s%d  DXGI=%d" % (i, m, sz, nm, sem, si, dx))
    print("  size == DXGI 크기: %s (불일치 %d)" % (not bad_size, len(bad_size)))
    print("  마스크 OR = 0x%08X (기대 0x03FFFFFF)" % known)

    print("\n== .mdl 전수 ==")
    mdls = sorted(glob.glob(os.path.join(root, "wallpaper_engine/**/*.mdl"), recursive=True))
    vers, flags, nmesh, fails = Counter(), Counter(), 0, []
    for f in mdls:
        try:
            o = parse_mdl(f, table)
        except Exception as ex:                                # noqa: BLE001
            fails.append((f, repr(ex)))
            continue
        vers[o["magic"]] += 1
        for m in o["meshes"]:
            nmesh += 1
            flags[(hex(m["flag"]), m["stride"])] += 1
            if m["stride"] == 0 or m["vlen"] % m["stride"]:
                fails.append((f, "vlen %d %% stride %d" % (m["vlen"], m["stride"])))
            if m["ilen"] % 6:
                fails.append((f, "ilen %d not u16-triangles" % m["ilen"]))
        if o["end"] != o["size"]:
            fails.append((f, "landed %d of %d" % (o["end"], o["size"])))
    u32_impossible = 0
    for f in mdls:
        try:
            o = parse_mdl(f, table)
        except Exception:                                      # noqa: BLE001
            continue
        u32_impossible += sum(1 for m in o["meshes"] if m["ilen"] % 12)
    print("  파일 %d  메시 %d  버전 %s" % (len(mdls), nmesh, dict(sorted(vers.items()))))
    print("  formatFlag -> stride: %s" % dict(sorted(flags.items())))
    print("  u32 인덱스가 불가능한 메시(ilen %% 12 != 0): %d" % u32_impossible)
    print("  실패: %d" % len(fails))
    for f in fails[:10]:
        print("    FAIL", f)

    print("\n== .tex 전수 ==")
    texs = sorted(glob.glob(os.path.join(root, "wallpaper_engine/**/*.tex"), recursive=True))
    ok = 0
    cont, sect, fmts, depth_files = Counter(), Counter(), Counter(), []
    tex_fails = []
    for f in texs:
        try:
            o = parse_tex(f)
        except Exception as ex:                                # noqa: BLE001
            tex_fails.append((f, repr(ex)))
            continue
        cont[o["container"]] += 1
        sect[o["next_tag"]] += 1
        fmts[o["fmt"]] += 1
        if o["depth"] is not None:
            depth_files.append((os.path.basename(f), o["tex"], o["depth"], o["img"]))
        if o["ok"]:
            ok += 1
        else:
            tex_fails.append((f, "next tag %r" % o["next_tag"]))
    print("  파일 %d  TEXI 프레이밍 OK %d  실패 %d" % (len(texs), ok, len(tex_fails)))
    print("  컨테이너 %s" % dict(cont))
    print("  TEXI 다음 섹션 태그 %s" % dict(sorted(sect.items())))
    print("  format enum %s" % dict(sorted(fmts.items())))
    print("  flags & 0x40 (3D/볼륨, depth 필드 존재): %d개" % len(depth_files))
    for x in depth_files[:3]:
        print("    ", x)
    for f in tex_fails[:10]:
        print("    FAIL", f)

    return 1 if (fails or tex_fails or bad_size) else 0


if __name__ == "__main__":
    sys.exit(main())
