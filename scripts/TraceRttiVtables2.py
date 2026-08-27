"""
Improved RTTI trace: COL signature may not be 1. Instead, find any u32 == TD-RVA,
then validate the surrounding structure is a COL by checking self-RVA at +0x10.
"""
import struct, json, os, re

SRC = r"C:\Users\<user>\Desktop\wallpaper_source\binaries\wallpaper64_rich.exe"
with open(SRC, 'rb') as f: d = f.read()

e_lfanew = struct.unpack_from('<I', d, 0x3C)[0]
opt_off = e_lfanew + 24
image_base = struct.unpack_from('<Q', d, opt_off + 24)[0]
numsec = struct.unpack_from('<H', d, e_lfanew+6)[0]
optsz = struct.unpack_from('<H', d, e_lfanew+20)[0]
sec_off = e_lfanew + 24 + optsz
secs = []
for i in range(numsec):
    s = sec_off + i*40
    name = d[s:s+8].rstrip(b'\x00').decode('ascii','replace')
    vaddr = struct.unpack_from('<I', d, s+12)[0]
    rawoff = struct.unpack_from('<I', d, s+20)[0]
    rawsz = struct.unpack_from('<I', d, s+16)[0]
    vsize = struct.unpack_from('<I', d, s+8)[0]
    secs.append((name, vaddr, vsize, rawoff, rawsz))

def foff2rva(foff):
    for n,va,vs,ro,rs in secs:
        if ro<=foff<ro+rs: return va+(foff-ro)
    return None
def rva2foff(rva):
    for n,va,vs,ro,rs in secs:
        if va<=rva<va+vs: return ro+(rva-va)
    return None

text_sec = [s for s in secs if s[0]=='.text'][0]
text_va_lo = image_base + text_sec[1]
text_va_hi = image_base + text_sec[1] + text_sec[2]

# Step 1: TDs
tds = {}
for m in re.finditer(rb'\.\?A[VUW]([A-Za-z_][A-Za-z0-9_]*?)@@', d):
    cls = m.group(1).decode('ascii','replace')
    name_foff = m.start()
    desc_foff = name_foff - 0x10
    desc_rva = foff2rva(desc_foff)
    if desc_rva is None: continue
    vft = struct.unpack_from('<Q', d, desc_foff)[0]
    if vft == 0: continue
    tds[cls] = (desc_foff, desc_rva)
print(f"TDs: {len(tds)}")

# Step 2: For each TD, find all u32 occurrences of its RVA anywhere in .rdata.
# Each such occurrence is a candidate COL (at +8 field). Verify by structure:
#   COL+0x00 sig (u32)
#   COL+0x04 offset (u32)
#   COL+0x06 ... actually offset is u32 then cdOffset u32
# Actually COL x64:
#   +0x00 sig
#   +0x04 offset
#   +0x08 td_rva   <-- this is what we match
#   +0x0c chd_rva
#   +0x10 self_rva <-- equals COL's own RVA
# So candidate COL foff = (occurrence - 8). Validate self_rva at +0x10.
td_rva_set = {rva: cls for cls,(_,rva) in tds.items()}
cols = {}
for off in range(0, len(d) - 0x14, 4):
    val = struct.unpack_from('<I', d, off)[0]
    if val in td_rva_set:
        col_foff = off - 8
        if col_foff < 0: continue
        # check self RVA at col_foff+0x10
        self_rva = struct.unpack_from('<I', d, col_foff + 0x10)[0]
        col_rva = foff2rva(col_foff)
        if col_rva is not None and self_rva == col_rva:
            cls = td_rva_set[val]
            cols.setdefault(cls, []).append((col_foff, col_rva))
print(f"COLs: {sum(len(v) for v in cols.values())} across {len(cols)} classes")

# Step 3: vtables. vtable[-1] = COL RVA (u32). Find u32==col_rva, vtable starts at +4.
vtables = {}
for cls, col_list in cols.items():
    for col_foff, col_rva in col_list:
        target = struct.pack('<I', col_rva)
        search_from = 0
        while True:
            idx = d.find(target, search_from)
            if idx < 0: break
            search_from = idx + 4
            vt_foff = idx + 4
            funcs = []
            for i in range(80):
                p = struct.unpack_from('<Q', d, vt_foff + i*8)[0]
                if p == 0: break
                if text_va_lo <= p < text_va_hi:
                    funcs.append(p)
                else:
                    break
            if len(funcs) >= 1:
                vt_rva = foff2rva(vt_foff)
                vtables.setdefault(cls, []).append((vt_foff, vt_rva, funcs))

print(f"vtables: {sum(len(v) for v in vtables.values())} across {len(vtables)} classes")

result = {}
for cls, vts in vtables.items():
    result[cls] = []
    for vt_foff, vt_rva, funcs in vts:
        result[cls].append({
            'vt_rva': vt_rva, 'vt_foff': vt_foff,
            'funcs_va': funcs,
            'funcs_rva': [p - image_base for p in funcs],
        })

priority = ['SceneWallpaper','VideoWallpaper','CEFWallpaper','WallpaperManager','AudioProcessor',
            'AudioEventHandler','ParticleVbo','MaterialSystem','Material','Texture','Obj','ImageLayer']
print("\n=== Recovered vtables (priority) ===")
for cls in priority:
    if cls not in result: continue
    for vt in result[cls]:
        vt_rva = vt["vt_rva"]
        n = len(vt["funcs_va"])
        print(f"\n  {cls} @ vt RVA 0x{vt_rva:x} ({n} methods):")
        for i, va in enumerate(vt["funcs_va"]):
            rva = va - image_base
            print(f"    [{i}] VA=0x{va:x} RVA=0x{rva:x}")

with open(r"C:\Users\<user>\Desktop\wallpaper_source\analysis\rtti-vtables.json", "w") as f:
    json.dump(result, f, indent=2)
print(f"\nSaved {len(result)} classes to rtti-vtables.json")
