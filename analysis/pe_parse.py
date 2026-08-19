#!/usr/bin/env py
"""Parse the PE structure of wallpaper64.exe using only the struct module.
Writes pe-structure.json (machine) and prints a markdown-friendly summary.
"""
import struct
import json
import sys

BIN = r"C:\Users\yakihyuk0728\Desktop\wallpaper_source\..\..\..\..\..\..\z\SteamLibrary\steamapps\common\wallpaper_engine\wallpaper64.exe"
# Use the direct drive path instead:
BIN = r"Z:\SteamLibrary\steamapps\common\wallpaper_engine\wallpaper64.exe"

with open(BIN, "rb") as f:
    data = f.read()

print(f"file_size = {len(data)} (0x{len(data):x})", file=sys.stderr)

# ---- DOS header ----
dos_sig = data[0:2]
assert dos_sig == b"MZ", "not MZ"
e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]

# ---- PE signature ----
pe_sig = data[e_lfanew:e_lfanew+4]
assert pe_sig == b"PE\x00\x00", f"bad PE sig {pe_sig!r}"

coff_off = e_lfanew + 4
(machine, num_sections, timestamp, ptr_symtab, num_sym,
 sz_opt_hdr, chars) = struct.unpack_from("<HHIIIHH", data, coff_off)

opt_off = coff_off + 20  # COFF header is 20 bytes
magic = struct.unpack_from("<H", data, opt_off)[0]
assert magic == 0x20b, f"not PE32+ (magic=0x{magic:x})"

# PE32+ optional header fields
(magic, maj_link, min_link, size_code, size_init, size_uninit,
 entry_rva, base_code, image_base, sect_align, file_align,
 maj_os, min_os, maj_img, min_img, maj_sub, min_sub,
 win_ver, size_image, size_headers, checksum, subsystem, dll_chars,
 size_stack_reserve, size_stack_commit, size_heap_reserve, size_heap_commit,
 loader_flags, num_data_dirs) = struct.unpack_from("<HBBIIIIIQIIHHHHHHIIIIHHQQQQII", data, opt_off)

# Data directories (16 entries, each 8 bytes: RVA, size)
dd_off = opt_off + 112  # PE32+ optional header fixed part is 112 bytes
DATA_DIR_NAMES = [
    "EXPORT", "IMPORT", "RESOURCE", "EXCEPTION", "CERTIFICATE",
    "BASE_RELOC", "DEBUG", "ARCHITECTURE", "GLOBAL_PTR", "TLS",
    "LOAD_CONFIG", "BOUND_IMPORT", "IAT", "DELAY_IMPORT",
    "CLR_RUNTIME", "RESERVED",
]
data_dirs = {}
for i in range(16):
    rva, size = struct.unpack_from("<II", data, dd_off + i*8)
    data_dirs[DATA_DIR_NAMES[i]] = {"rva": rva, "size": size}

# Section headers start right after optional header
sect_off = opt_off + sz_opt_hdr
sections = []
for i in range(num_sections):
    base = sect_off + i*40
    name = data[base:base+8].rstrip(b"\x00").decode("latin-1", "replace")
    vsize, vaddr, raw_size, raw_addr = struct.unpack_from("<IIII", data, base+8)
    relocs, linenum = struct.unpack_from("<II", data, base+24)
    num_relocs, num_lines = struct.unpack_from("<HH", data, base+32)
    sect_chars = struct.unpack_from("<I", data, base+36)[0]
    sections.append({
        "name": name, "virtual_size": vsize, "virtual_address": vaddr,
        "raw_size": raw_size, "raw_address": raw_addr,
        "characteristics": sect_chars,
    })

def rva_to_offset(rva):
    for s in sections:
        if s["virtual_address"] <= rva < s["virtual_address"] + max(s["virtual_size"], s["raw_size"]):
            return rva - s["virtual_address"] + s["raw_address"]
    return None

# ---- IMPORT table (full dump) ----
def read_cstr(off, maxlen=512):
    end = data.find(b"\x00", off, off+maxlen)
    if end == -1:
        end = off + maxlen
    return data[off:end].decode("latin-1", "replace")

def read_wstr(off, maxlen=512):
    end = off
    while end < off + maxlen*2 and (end+1) < len(data):
        if data[end] == 0 and data[end+1] == 0:
            break
        end += 2
    return data[off:end].decode("utf-16le", "replace")

imports = []
imp = data_dirs["IMPORT"]
if imp["rva"] and imp["size"]:
    off = rva_to_offset(imp["rva"])
    while off is not None:
        ilt_rva, tds, fwd, name_rva, fta_rva = struct.unpack_from("<IIIII", data, off)
        if ilt_rva == 0 and name_rva == 0:
            break
        dll_name = read_cstr(rva_to_offset(name_rva)) if name_rva else ""
        funcs = []
        # Use ILT (or FTA if ILT is 0)
        lookup_rva = ilt_rva if ilt_rva else fta_rva
        if lookup_rva:
            loff = rva_to_offset(lookup_rva)
            while loff is not None:
                entry = struct.unpack_from("<Q", data, loff)[0]
                if entry == 0:
                    break
                if entry & (1 << 63):  # ordinal
                    funcs.append({"ordinal": int(entry & 0xFFFF), "name": None})
                else:
                    hint_rva = entry & 0x7FFFFFFF
                    ho = rva_to_offset(hint_rva)
                    if ho is not None:
                        hint = struct.unpack_from("<H", data, ho)[0]
                        nm = read_cstr(ho + 2)
                        funcs.append({"hint": hint, "name": nm})
                    else:
                        funcs.append({"name": "?unresolved", "hint_rva": hint_rva})
                loff += 8
        imports.append({"dll": dll_name, "functions": funcs})
        off += 20

# ---- EXPORT table ----
exports = None
exp = data_dirs["EXPORT"]
if exp["rva"] and exp["size"]:
    eo = rva_to_offset(exp["rva"])
    if eo is not None:
        (flags, ts, mv, mn, name_rva, ord_base, num_funcs,
         num_names, funcs_rva, names_rva, addrs_rva) = struct.unpack_from("<IIHHIIIIIII", data, eo)
        dll_name = read_cstr(rva_to_offset(name_rva)) if name_rva else ""
        names = []
        no = rva_to_offset(names_rva)
        ao = rva_to_offset(addrs_rva)
        if no and ao:
            for i in range(min(num_names, 4096)):
                nrva = struct.unpack_from("<I", data, no + i*4)[0]
                nm = read_cstr(rva_to_offset(nrva)) if nrva else ""
                names.append(nm)
        exports = {
            "dll_name": dll_name, "ordinal_base": ord_base,
            "num_functions": num_funcs, "num_names": num_names,
            "names_first4096": names,
        }

# ---- DEBUG directory ----
debug_entries = []
dbg = data_dirs["DEBUG"]
if dbg["rva"] and dbg["size"]:
    do = rva_to_offset(dbg["rva"])
    if do is not None:
        n = dbg["size"] // 28
        for i in range(n):
            (chars, ts, maj, mn, debug_type, sz, rva2, raw_off) = struct.unpack_from("<IIHHIIII", data, do + i*28)
            debug_entries.append({
                "type": debug_type, "size": sz, "rva": rva2,
                "raw_offset": raw_off, "timestamp": ts,
            })

DEBUG_TYPE_NAMES = {1:"COFF",2:"CODEVIEW",3:"FPO",4:"MISC",5:"EXCEPTION",6:"FIXUP",
                    7:"OMAP_TO_SRC",8:"OMAP_FROM_SRC",9:"BORLAND",10:"RESERVED",
                    11:"WPO",12:"POGO",13:"ILTCG",14:"MPX",15:"REPRO",16:"EX_DLLCHAR"}
for d in debug_entries:
    d["type_name"] = DEBUG_TYPE_NAMES.get(d["type"], str(d["type"]))

# ---- TLS ----
tls = None
tls_dir = data_dirs["TLS"]
if tls_dir["rva"] and tls_dir["size"]:
    to = rva_to_offset(tls_dir["rva"])
    if to is not None:
        (raw_start, raw_end, idx, cb_list, sz_zf, chars_t) = struct.unpack_from("<QQQQII", data, to)
        tls = {
            "raw_data_start_rva": raw_start, "raw_data_end_rva": raw_end,
            "index_rva": idx, "callback_rva": cb_list,
            "zero_fill_size": sz_zf, "characteristics": chars_t,
        }

# ---- Resource directory basic summary ----
res_summary = None
res = data_dirs["RESOURCE"]
if res["rva"] and res["size"]:
    res_summary = {"rva": res["rva"], "size": res["size"]}

# ---- Load config (for CFG) ----
load_cfg = None
lc = data_dirs["LOAD_CONFIG"]
if lc["rva"] and lc["size"]:
    lco = rva_to_offset(lc["rva"])
    if lco is not None:
        lc_size = struct.unpack_from("<I", data, lco)[0]
        load_cfg = {"size": lc_size, "rva": lc["rva"]}
        if lc_size >= 0x70:
            # GuardCF flag at offset 0x5c (size 4) in modern load config
            guard_flags = struct.unpack_from("<I", data, lco + 0x5c)[0]
            load_cfg["guard_flags"] = guard_flags
        if lc_size >= 0x58:
            sec_offset = struct.unpack_from("<I", data, lco + 0x40)[0]  # SecurityCookie
            load_cfg["security_cookie_rva"] = sec_offset

# ---- Build JSON output ----
CHARS_MEANING = {
    0x0001:"RELOCS_STRIPPED", 0x0002:"EXECUTABLE_IMAGE", 0x0004:"LINE_NUMS_STRIPPED",
    0x0008:"LOCAL_SYMS_STRIPPED", 0x0010:"AGGRESSIVE_WS_TRIM", 0x0020:"LARGE_ADDRESS_AWARE",
    0x0080:"BYTES_REVERSED_LO", 0x0100:"32BIT_MACHINE", 0x0200:"DEBUG_STRIPPED",
    0x0400:"REMOVABLE_RUN_FROM_SWAP", 0x0800:"NET_RUN_FROM_SWAP", 0x1000:"SYSTEM",
    0x2000:"DLL", 0x4000:"UP_SYSTEM_ONLY", 0x8000:"BYTES_REVERSED_HI",
}
file_chars = [n for b,n in CHARS_MEANING.items() if chars & b]

DLL_CHARS_MEANING = {
    0x0020:"HIGH_ENTROPY_VA", 0x0040:"DYNAMIC_BASE", 0x0080:"FORCE_INTEGRITY",
    0x0100:"NX_COMPAT", 0x0200:"NO_ISOLATION", 0x0400:"NO_SEH",
    0x0800:"NO_BIND", 0x1000:"APPCONTAINER", 0x2000:"WDM_DRIVER",
    0x4000:"GUARD_CF", 0x8000:"TERMINAL_SERVER_AWARE",
}
dll_flags = [n for b,n in DLL_CHARS_MEANING.items() if dll_chars & b]

SECTION_FLAG_NAMES = {
    0x00000020:"CODE", 0x00000040:"INITIALIZED_DATA", 0x00000080:"UNINITIALIZED_DATA",
    0x02000000:"DISCARDABLE", 0x10000000:"SHARED", 0x20000000:"EXECUTE",
    0x40000000:"READ", 0x80000000:"WRITE",
}
for s in sections:
    s["flags"] = [n for b,n in SECTION_FLAG_NAMES.items() if s["characteristics"] & b]

result = {
    "file_size": len(data),
    "dos": {"e_lfanew": e_lfanew},
    "pe_signature_offset": e_lfanew,
    "coff": {
        "machine": f"0x{machine:04x}", "num_sections": num_sections,
        "timestamp_unix": timestamp, "size_of_optional_header": sz_opt_hdr,
        "characteristics": f"0x{chars:04x}", "characteristics_meaning": file_chars,
    },
    "optional_header": {
        "magic": f"0x{magic:04x} (PE32+)", "entry_rva": entry_rva,
        "entry_rva_hex": f"0x{entry_rva:x}",
        "image_base": image_base, "image_base_hex": f"0x{image_base:x}",
        "section_alignment": sect_align, "file_alignment": file_align,
        "size_of_code": size_code, "size_of_initialized_data": size_init,
        "size_of_uninitialized_data": size_uninit, "size_of_image": size_image,
        "size_of_headers": size_headers, "subsystem": subsystem,
        "dll_characteristics": f"0x{dll_chars:04x}", "dll_characteristics_meaning": dll_flags,
        "os_version": f"{maj_os}.{min_os}", "subsystem_version": f"{maj_sub}.{min_sub}",
        "number_of_rva_and_sizes": num_data_dirs,
        "size_of_stack_reserve": size_stack_reserve,
    },
    "sections": sections,
    "data_directories": data_dirs,
    "imports": imports,
    "exports": exports,
    "debug_entries": debug_entries,
    "tls": tls,
    "load_config": load_cfg,
    "resource_directory": res_summary,
    "analysis": {
        "aslr_dynamic_base": bool(dll_chars & 0x0040),
        "dep_nx_compat": bool(dll_chars & 0x0100),
        "high_entropy_va": bool(dll_chars & 0x0020),
        "cfg_guard": bool(dll_chars & 0x4000),
        "no_seh": bool(dll_chars & 0x0400),
        "is_dll": bool(chars & 0x2000),
        "entry_point_file_offset": rva_to_offset(entry_rva),
    },
}

OUT = r"C:\Users\yakihyuk0728\Desktop\wallpaper_source\analysis\pe-structure.json"
with open(OUT, "w", encoding="utf-8") as f:
    json.dump(result, f, indent=2)
print(f"wrote {OUT}", file=sys.stderr)
print(f"num imports dlls = {len(imports)}", file=sys.stderr)
print(f"total imported funcs = {sum(len(d['functions']) for d in imports)}", file=sys.stderr)
print(f"exports present = {exports is not None}", file=sys.stderr)
print(f"entry file offset = 0x{rva_to_offset(entry_rva):x}", file=sys.stderr)
