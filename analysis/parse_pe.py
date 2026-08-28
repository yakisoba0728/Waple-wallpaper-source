#!/usr/bin/env py
"""PE32+ structure parser for wallpaper64.exe.
Outputs pe-structure.json and a data structure for the markdown writer."""
import struct
import json
import sys
from pathlib import Path

BIN = r"C:\Users\<user>\Desktop\wallpaper_source\..\..\..\..\..\..\z\SteamLibrary\steamapps\common\wallpaper_engine\wallpaper64.exe"
# Use direct absolute Windows path to be safe
BIN = r"Z:\SteamLibrary\steamapps\common\wallpaper_engine\wallpaper64.exe"
OUT_DIR = Path(r"C:\Users\<user>\Desktop\wallpaper_source\analysis")

# [2026-08-28] argv 폴백을 붙인다. 위 두 경로는 최초 작성 환경의 절대 경로라 이 리포를
# 클론한 어디에서도 안 돌았고, 그래서 `pe-structure.json` 을 **재생성해 검증할 수 없었다**.
# 실제로 이 파일의 옵션 헤더 언팩 두 줄이 틀린 채 남아 있었다(아래 [FIX 2026-08-28]).
# 돌릴 수 없는 생성기는 그 산출물이 정본이 되는 순간 검증 밖에 놓인다.
#   py analysis/parse_pe.py [binaries/wallpaper64.exe] [out_dir]
if len(sys.argv) > 1:
    BIN = sys.argv[1]
if len(sys.argv) > 2:
    OUT_DIR = Path(sys.argv[2])

data = open(BIN, "rb").read()
print(f"[*] File size: {len(data)} bytes (0x{len(data):x})", file=sys.stderr)

# --- DOS header ---
e_magic = data[0:2]
assert e_magic == b"MZ", "Not an MZ binary"
e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
print(f"[*] e_lfanew = 0x{e_lfanew:x}", file=sys.stderr)

# --- PE signature ---
pe_sig = data[e_lfanew:e_lfanew+4]
assert pe_sig == b"PE\x00\x00", f"Bad PE sig: {pe_sig!r}"

coff_off = e_lfanew + 4
(machine, num_sections, timestamp, ptr_sym, num_sym, sz_opt, chars) = struct.unpack_from("<HHIIIHH", data, coff_off)

opt_off = coff_off + 20  # COFF header is 20 bytes
magic = struct.unpack_from("<H", data, opt_off)[0]
assert magic == 0x20b, f"Not PE32+ (magic=0x{magic:x})"
print(f"[*] PE32+ confirmed, {num_sections} sections, opt header size {sz_opt}", file=sys.stderr)

# --- Optional header (PE32+) ---
# Layout: magic(2) majLink(1) minLink(1) szCode(4) szInitData(4) szUninitData(4)
#  PE32+ has no BaseOfData field
#         entryPoint(4) baseCode(4)
#  ImageBase(8) SectionAlignment(4) FileAlignment(4)
#  OsVer(4) ImageVer(4) SubsysVer(4) Win32VerValue(4)
#  SizeOfImage(4) SizeOfHeaders(4) CheckSum(4) Subsystem(2) DllChars(2)
#  Stack Reserve/Commit(8/8) Heap Reserve/Commit(8/8) LoaderFlags(4) NumDataDirs(4)
# Then NumDataDirs * 8 bytes of [RVA, Size]
# [FIX 2026-08-28] Two struct strings here were misaligned. Verified against
# binaries/wallpaper64.exe (PE32+, e_lfanew 0x40):
#
#   was "<HBHIIIII" -> MinorLinkerVersion read as u16, shifting every field after
#       it by one byte. AddressOfEntryPoint came out 0x28b7; the real value is
#       0x28b710 (VA 0x14028b710), and BaseOfCode came out 0x10 instead of 0x1000.
#       MinorLinkerVersion is a **u8**.
#
#   was "<HHH" @ +40 plus a u32 @ +46 -> the version block is SIX u16s
#       (MajorOS, MinorOS, MajorImage, MinorImage, MajorSubsystem, MinorSubsystem)
#       spanning +40..+52, then Win32VersionValue is a u32 at **+52**. Reading three
#       u16s at +40 grabs MajorOS/MinorOS/MajorImage and mislabels them, and the
#       "win32_ver" at +46 is actually MinorImageVersion|MajorSubsystemVersion.
#       Observed: current code printed subsys_ver=0 and win32_ver=393216; correct is
#       OS 6.0 / Image 0.0 / Subsystem 6.0 / Win32VersionValue 0.
#
# Everything from SizeOfImage(+56) onward was already right, which is why this went
# unnoticed -- the fields the script is usually asked for happened to sit past the gap.
(magic, maj_link, min_link, sz_code, sz_init, sz_uninit, entry_rva, base_code) = struct.unpack_from("<HBBIIIII", data, opt_off)
(image_base,) = struct.unpack_from("<Q", data, opt_off + 24)
(section_align, file_align) = struct.unpack_from("<II", data, opt_off + 32)
# OsVer(2+2) ImageVer(2+2) SubsysVer(2+2) = 12 bytes, then Win32VersionValue(4) at +52
(os_maj, os_min, img_maj, img_min, subsys_maj, subsys_min) = struct.unpack_from("<HHHHHH", data, opt_off + 40)
os_ver = (os_maj, os_min)
img_ver = (img_maj, img_min)
subsys_ver = (subsys_maj, subsys_min)
win32_ver = struct.unpack_from("<I", data, opt_off + 52)[0]
(size_of_image, size_of_headers, checksum) = struct.unpack_from("<III", data, opt_off + 56)
(subsystem, dll_chars) = struct.unpack_from("<HH", data, opt_off + 68)
(stack_reserve, stack_commit) = struct.unpack_from("<QQ", data, opt_off + 72)
(heap_reserve, heap_commit) = struct.unpack_from("<QQ", data, opt_off + 88)
(loader_flags, num_data_dirs) = struct.unpack_from("<II", data, opt_off + 104)

print(f"[*] ImageBase=0x{image_base:x} EntryRVA=0x{entry_rva:x} Subsystem={subsystem}", file=sys.stderr)
print(f"[*] NumDataDirs={num_data_dirs}", file=sys.stderr)

data_dir_off = opt_off + 112  # PE32+: data dirs start at offset 112
data_dirs = []
for i in range(num_data_dirs):
    rva, size = struct.unpack_from("<II", data, data_dir_off + i*8)
    data_dirs.append([rva, size])

DD_NAMES = [
    "EXPORT","IMPORT","RESOURCE","EXCEPTION","SECURITY","BASERELOC",
    "DEBUG","ARCH","GLOBALPTR","TLS","LOAD_CONFIG","BOUND_IMPORT",
    "IAT","DELAY_IMPORT","CLR","RESERVED"
]
data_dir_named = {DD_NAMES[i]: data_dirs[i] if i < len(data_dirs) else [0,0] for i in range(len(DD_NAMES))}

# --- Section headers ---
sec_off = opt_off + sz_opt
sections = []
for i in range(num_sections):
    base = sec_off + i*40
    name = data[base:base+8].rstrip(b"\x00").decode("latin-1", "replace")
    (vsize, vaddr, raw_size, raw_ptr) = struct.unpack_from("<IIII", data, base+8)
    (relocs_ptr, lns_ptr, num_relocs, num_lns) = struct.unpack_from("<IIHH", data, base+24)
    chars_sec = struct.unpack_from("<I", data, base+36)[0]
    sections.append({
        "name": name, "virtual_size": vsize, "virtual_addr": vaddr,
        "raw_size": raw_size, "raw_ptr": raw_ptr,
        "relocs_ptr": relocs_ptr, "lines_ptr": lns_ptr,
        "num_relocs": num_relocs, "num_lines": num_lns,
        "characteristics": chars_sec,
    })
    print(f"[*] Section {name:8} VA=0x{vaddr:08x} VSize=0x{vsize:08x} Raw=0x{raw_ptr:08x} RawSz=0x{raw_size:08x} Char=0x{chars_sec:08x}", file=sys.stderr)

def rva_to_file(rva):
    for s in sections:
        if s["virtual_addr"] <= rva < s["virtual_addr"] + max(s["virtual_size"], s["raw_size"]):
            return s["raw_ptr"] + (rva - s["virtual_addr"])
    return None

# --- IMPORT table ---
imports = []
imp_rva, imp_size = data_dirs[1]
def read_cstr(off):
    end = data.find(b"\x00", off)
    return data[off:end].decode("latin-1", "replace") if end != -1 else ""

if imp_rva:
    desc_off = rva_to_file(imp_rva)
    while True:
        ilt_rva, ts, fwd, name_rva, fpt_rva = struct.unpack_from("<IIIII", data, desc_off)
        if ilt_rva == 0 and name_rva == 0:
            break
        name_off = rva_to_file(name_rva)
        dll_name = read_cstr(name_off) if name_off else ""
        # ILT (Import Lookup Table)
        funcs = []
        lookup_rva = ilt_rva or fpt_rva
        lookup_off = rva_to_file(lookup_rva) if lookup_rva else None
        idx = 0
        if lookup_off:
            while True:
                ent = struct.unpack_from("<Q", data, lookup_off + idx*8)[0]
                if ent == 0:
                    break
                if ent & (1 << 63):  # ordinal
                    funcs.append({"kind": "ordinal", "ordinal": ent & 0xFFFF})
                else:
                    hint_name_rva = ent & 0x7FFFFFFF
                    hn_off = rva_to_file(hint_name_rva)
                    if hn_off:
                        hint = struct.unpack_from("<H", data, hn_off)[0]
                        fname = read_cstr(hn_off + 2)
                        funcs.append({"kind": "name", "hint": hint, "name": fname})
                    else:
                        funcs.append({"kind": "name", "hint": 0, "name": f"<unresolved RVA 0x{hint_name_rva:x}>"})
                idx += 1
        imports.append({"dll": dll_name, "functions": funcs, "descriptor_file_offset": desc_off, "name_rva": name_rva})
        desc_off += 20

# --- EXPORT table ---
exports = {"present": False}
exp_rva, exp_size = data_dirs[0]
if exp_rva:
    exports["present"] = True
    exp_off = rva_to_file(exp_rva)
    # EXPORT_DIRECTORY_TABLE: flags(4) ts(4) maj(2) min(2) nameRVA(4) ordBase(4) numFuncs(4) numNames(4) addrFuncs(4) addrNames(4) addrOrds(4)
    (flags, ts, maj, minn, name_rva, ord_base, num_funcs, num_names, addr_funcs_rva, addr_names_rva, addr_ords_rva) = struct.unpack_from("<IIHHIIIIIII", data, exp_off)
    dll_name_off = rva_to_file(name_rva)
    exports["dll_name"] = read_cstr(dll_name_off) if dll_name_off else ""
    exports["ordinal_base"] = ord_base
    exports["num_functions"] = num_funcs
    exports["num_names"] = num_names
    exports["addresses_rva"] = addr_funcs_rva
    exports["names_rva"] = addr_names_rva
    exports["ordinals_rva"] = addr_ords_rva
    exp_names = []
    names_off = rva_to_file(addr_names_rva) if addr_names_rva else None
    if names_off:
        for i in range(num_names):
            n_rva = struct.unpack_from("<I", data, names_off + i*4)[0]
            n_off = rva_to_file(n_rva)
            exp_names.append(read_cstr(n_off) if n_off else f"<rva 0x{n_rva:x}>")
    exports["named_exports"] = exp_names

# --- DEBUG dir ---
debug = {"present": False}
dbg_rva, dbg_size = data_dirs[6]
if dbg_rva:
    debug["present"] = True
    debug["rva"] = dbg_rva
    debug["size"] = dbg_size
    debug["num_entries"] = dbg_size // 28
    debug["entries"] = []
    dbg_off = rva_to_file(dbg_rva)
    if dbg_off:
        for i in range(dbg_size // 28):
            b = dbg_off + i*28
            (chars_dbg, ts_dbg, maj_dbg, min_dbg, typ, sz_dbg, rva_dbg, raw_dbg) = struct.unpack_from("<IIHHIIII", data, b)
            entry = {
                "characteristics": chars_dbg, "time_date_stamp": ts_dbg,
                "major": maj_dbg, "minor": min_dbg, "type": typ,
                "size_of_data": sz_dbg, "address_of_raw_data_rva": rva_dbg,
                "pointer_to_raw_data": raw_dbg,
            }
            TYPE_NAMES = {1:"COFF", 2:"CODEVIEW", 3:"FPO", 4:"MISC", 5:"EXCEPTION", 6:"FIXUP", 7:"OMAP_TO_SRC", 8:"OMAP_FROM_SRC", 9:"BORLAND", 10:"RESERVED10", 11:"CLSID", 12:"VC_FEATURE", 13:"POGO", 14:"ILTCG", 15:"MPX", 16:"REPRO", 17:"EX_DLLCHARACTERISTICS"}
            entry["type_name"] = TYPE_NAMES.get(typ, f"UNKNOWN({typ})")
            # For CODEVIEW (type 2), the data is an NB10/rsds record pointing to a PDB
            if typ == 2 and raw_dbg:
                sig = data[raw_dbg:raw_dbg+4]
                entry["cv_signature"] = sig.decode("latin-1", "replace")
                if sig == b"RSDS":
                    # RSDS: sig(4) GUID(16) age(4) pdb_name(zstring)
                    guid = data[raw_dbg+4:raw_dbg+20]
                    age = struct.unpack_from("<I", data, raw_dbg+20)[0]
                    pdb = read_cstr(raw_dbg+24)
                    entry["guid_hex"] = guid.hex()
                    entry["age"] = age
                    entry["pdb_path"] = pdb
            debug["entries"].append(entry)

# --- TLS dir ---
tls = {"present": False}
tls_rva, tls_size = data_dirs[9]
if tls_rva:
    tls["present"] = True
    tls["rva"] = tls_rva
    tls["size"] = tls_size
    tls_off = rva_to_file(tls_rva)
    if tls_off:
        # PE32+ TLS: raw_start(8) raw_end(8) index_addr(8) callbacks(8) zs(4) sz(4) char(4)
        (raw_start, raw_end, index_addr, callbacks) = struct.unpack_from("<QQQQ", data, tls_off)
        (zero_fill, sz_of_sz, char_tls) = struct.unpack_from("<III", data, tls_off+32)
        tls.update({
            "raw_data_start_va": raw_start, "raw_data_end_va": raw_end,
            "address_of_index_va": index_addr, "address_of_callbacks_va": callbacks,
            "size_of_zero_fill": zero_fill, "characteristics": char_tls,
        })
        # Read callback array (array of VAs ending in 0)
        cbs = []
        cb_off = rva_to_file(callbacks - image_base) if callbacks else None
        if cb_off:
            for i in range(64):  # safety bound
                cb_va = struct.unpack_from("<Q", data, cb_off + i*8)[0]
                if cb_va == 0:
                    break
                cbs.append(hex(cb_va))
        tls["callbacks"] = cbs

# --- LOAD_CONFIG ---
load_config = {"present": False}
lc_rva, lc_size = data_dirs[10]
if lc_rva:
    load_config["present"] = True
    load_config["rva"] = lc_rva
    load_config["size"] = lc_size
    lc_off = rva_to_file(lc_rva)
    if lc_off:
        lc_size_field = struct.unpack_from("<I", data, lc_off)[0]
        load_config["declared_size"] = lc_size_field
        # Guard CFG fields are at offsets 0x5C (GuardCFCheckFunctionPointer) etc., only if size >= 0x60
        # Also security cookie is at offset 0x58 (PE32+)
        if lc_size_field >= 0x58 + 8:
            sec_cookie = struct.unpack_from("<Q", data, lc_off + 0x58)[0]
            load_config["security_cookie_va"] = hex(sec_cookie)
        if lc_size_field >= 0x60:
            load_config["guard_cf_check_function_pointer"] = hex(struct.unpack_from("<Q", data, lc_off + 0x5C)[0])
            load_config["guard_cf_dispatch_function_pointer"] = hex(struct.unpack_from("<Q", data, lc_off + 0x60)[0])

result = {
    "binary": BIN,
    "file_size": len(data),
    "dos_header": {
        "e_magic": "MZ",
        "e_lfanew": e_lfanew,
    },
    "pe_signature": "PE\\x00\\x00",
    "coff_header": {
        "machine": machine,
        "machine_name": "AMD64" if machine == 0x8664 else f"UNKNOWN(0x{machine:x})",
        "number_of_sections": num_sections,
        "time_date_stamp": timestamp,
        "number_of_symbols": num_sym,
        "size_of_optional_header": sz_opt,
        "characteristics": chars,
    },
    "optional_header": {
        "magic": "PE32+",
        "linker_version": f"{maj_link}.{min_link}",
        "size_of_code": sz_code,
        "size_of_initialized_data": sz_init,
        "size_of_uninitialized_data": sz_uninit,
        "address_of_entry_point_rva": entry_rva,
        "base_of_code": base_code,
        "base_of_data": None,
        "image_base": image_base,
        "section_alignment": section_align,
        "file_alignment": file_align,
        # [FIX 2026-08-28] These unpacked a u16 as major<<8|minor. PE32+ stores each
        # version as **two separate u16 fields**, so the shift produced garbage
        # (wallpaper64.exe reported subsystem_version "0.0"; the real value is 6.0).
        "os_version": f"{os_ver[0]}.{os_ver[1]}",
        "image_version": f"{img_ver[0]}.{img_ver[1]}",
        "subsystem_version": f"{subsys_ver[0]}.{subsys_ver[1]}",
        "win32_version_value": win32_ver,
        "size_of_image": size_of_image,
        "size_of_headers": size_of_headers,
        "check_sum": checksum,
        "subsystem": subsystem,
        "subsystem_name": {2:"WINDOWS_GUI",3:"WINDOWS_CUI",9:"WINDOWS_CE_GUI"}.get(subsystem, f"UNKNOWN({subsystem})"),
        "dll_characteristics": dll_chars,
        "dll_characteristic_names": [
            n for m,n in [
                (0x0020,"HIGH_ENTROPY_VA"),(0x0040,"DYNAMIC_BASE/ASLR"),(0x0080,"FORCE_INTEGRITY"),
                (0x0100,"NX_COMPAT/DEP"),(0x0200,"NO_ISOLATION"),(0x0400,"NO_SEH"),
                (0x0800,"NO_BIND"),(0x1000,"APPCONTAINER"),(0x2000,"WDM_DRIVER"),
                (0x4000,"GUARD_CF"),(0x8000,"TERMINAL_SERVER_AWARE"),
            ] if dll_chars & m
        ],
        "stack_reserve": stack_reserve,
        "stack_commit": stack_commit,
        "heap_reserve": heap_reserve,
        "heap_commit": heap_commit,
        "loader_flags": loader_flags,
        "number_of_rva_and_sizes": num_data_dirs,
    },
    "sections": sections,
    "data_directories": data_dir_named,
    "imports": imports,
    "exports": exports,
    "debug": debug,
    "tls": tls,
    "load_config": load_config,
}

# Security flags summary
dll_chars = result["optional_header"]["dll_characteristics"]
result["security_summary"] = {
    "aslr": bool(dll_chars & 0x0040),
    "dep_nx": bool(dll_chars & 0x0100),
    "high_entropy_va": bool(dll_chars & 0x0020),
    "guard_cf": bool(dll_chars & 0x4000),
    "no_seh": bool(dll_chars & 0x0400),
    "terminal_server_aware": bool(dll_chars & 0x8000),
}

out_json = OUT_DIR / "pe-structure.json"
out_json.write_text(json.dumps(result, indent=2), encoding="utf-8")
print(f"[+] Wrote {out_json}", file=sys.stderr)
print(f"[+] Imports: {len(imports)} DLLs, total funcs {sum(len(d['functions']) for d in imports)}", file=sys.stderr)
print(f"[+] Exports present: {exports['present']}, named: {len(exports.get('named_exports',[]))}", file=sys.stderr)
print(f"[+] Debug entries: {len(debug.get('entries',[]))}", file=sys.stderr)
print(f"[+] TLS present: {tls['present']}", file=sys.stderr)
# Save rva_to_file in the json so downstream tools can find it
print("[*] DONE", file=sys.stderr)
