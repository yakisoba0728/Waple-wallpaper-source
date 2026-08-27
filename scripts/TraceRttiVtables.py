"""
Trace MSVC x64 RTTI to recover class -> vtable -> virtual function addresses.

MSVC RTTI x64 layout:
  TypeDescriptor (TD):
    +0x00  void*  type_info vftable (points to vcruntime)
    +0x08  void*  spare (0)
    +0x10  char[] name ".?AVClassName@@"

  CompleteObjectLocator (COL):
    +0x00  u32 signature (1 = x64)
    +0x04  u32 offset
    +0x06  u32 cdOffset
    +0x08  u32 TD RVA (to TypeDescriptor)
    +0x0c  u32 CHD RVA (to ClassHierarchyDescriptor)
    +0x10  u32 self RVA (to this COL)  -- x64 only

  vtable:
    vtable[-1] (the slot just before vtable[0]) = COL RVA (as u32)
    vtable[0], vtable[1], ... = function pointers (VA, 8 bytes each)

So to recover:
  1. Find all TDs (.?AV...@@).
  2. Find all COLs (look for u32 signature==1, then TD-RVA matches a known TD).
  3. Find all vtables: scan .rdata for u32 value == COL RVA, where the next QWORDs
     look like code pointers (image_base + .text RVA range).
  4. The vtable's function pointers are the class's virtual methods.
  5. Map each function VA -> file offset -> function (via Ghidra manifest addr).

Also: any function that *references* a vtable (LEA) is a constructor / uses that class.
We additionally scan .text for references to vtable RVAs to find constructors.
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
def secname(foff):
    r=foff2rva(foff)
    if r is None: return '?'
    for n,va,vs,ro,rs in secs:
        if va<=r<va+vs: return n
    return '?'

text_sec = [s for s in secs if s[0]=='.text'][0]
text_rva_lo = text_sec[1]
text_rva_hi = text_sec[1] + text_sec[2]
text_va_lo = image_base + text_rva_lo
text_va_hi = image_base + text_rva_hi

# Step 1: find all TypeDescriptors
print("=== Step 1: TypeDescriptors (.?AV/.?AU/.?AW) ===")
tds = {}  # cls_name -> (desc_foff, desc_rva)
for m in re.finditer(rb'\.\?A[VUW]([A-Za-z_][A-Za-z0-9_]*?)@@', d):
    cls = m.group(1).decode('ascii','replace')
    name_foff = m.start()
    desc_foff = name_foff - 0x10
    desc_rva = foff2rva(desc_foff)
    if desc_rva is None: continue
    # verify TD vftable ptr at +0 looks plausible (non-zero, in image)
    vft = struct.unpack_from('<Q', d, desc_foff)[0]
    if vft == 0: continue
    tds[cls] = (desc_foff, desc_rva)
print(f"  {len(tds)} type descriptors found")

# Step 2: find COLs. A COL has signature=1 and TD-RVA matching one of ours.
print("\n=== Step 2: Complete Object Locators ===")
td_rva_set = {rva: cls for cls,(_,rva) in tds.items()}
cols = {}  # cls -> list of (col_foff, col_rva)
# scan .rdata for u32==1 followed by u32 TD-RVA at +8
rdata = [s for s in secs if s[0]=='.rdata'][0]
for off in range(rdata[3], rdata[3]+rdata[4]-0x14, 4):
    sig = struct.unpack_from('<I', d, off)[0]
    if sig != 1: continue
    td_rva = struct.unpack_from('<I', d, off+8)[0]
    if td_rva in td_rva_set:
        cls = td_rva_set[td_rva]
        col_rva = foff2rva(off)
        cols.setdefault(cls, []).append((off, col_rva))
print(f"  {sum(len(v) for v in cols.values())} COLs across {len(cols)} classes")

# Step 3: find vtables. vtable[-1] = COL RVA (u32). vtable[0..] = function VAs.
# Scan .rdata for u32 == COL RVA, then the following QWORDs must be code pointers.
print("\n=== Step 3: vtables ===")
vtables = {}  # cls -> list of (vt_foff, vt_rva, [func_vas])
for cls, col_list in cols.items():
    for col_foff, col_rva in col_list:
        # find places where u32 == col_rva, immediately followed by 8-byte code pointers
        target = struct.pack('<I', col_rva)
        search_from = 0
        while True:
            idx = d.find(target, search_from)
            if idx < 0: break
            search_from = idx + 4
            # the vtable starts at idx+4; check first 1-8 QWORDs look like code ptrs
            vt_foff = idx + 4
            funcs = []
            bad = False
            for i in range(64):
                p = struct.unpack_from('<Q', d, vt_foff + i*8)[0]
                if p == 0: break
                if text_va_lo <= p < text_va_hi:
                    funcs.append(p)
                else:
                    # allow one non-code slot? no — stop
                    break
            if len(funcs) >= 1:
                vt_rva = foff2rva(vt_foff)
                vtables.setdefault(cls, []).append((vt_foff, vt_rva, funcs))

# report
print(f"  {sum(len(v) for v in vtables.values())} vtables across {len(vtables)} classes")
print("\n=== Recovered vtables (key classes) ===")
priority = ['SceneWallpaper','VideoWallpaper','CEFWallpaper','WallpaperManager','AudioProcessor',
            'AudioEventHandler','ParticleVbo','MaterialSystem','Material','Texture','Obj','ImageLayer',
            'DesktopMediaExtensions','InterProcessMessageHandler','DWriteFontFileLoader','Main',
            'PropertySystem','DataCache']
result = {}
for cls in sorted(vtables.keys()):
    vts = vtables[cls]
    result[cls] = []
    for vt_foff, vt_rva, funcs in vts:
        funcs_rva = [p - image_base for p in funcs]
        result[cls].append({'vt_rva': vt_rva, 'vt_foff': vt_foff, 'funcs_va': funcs, 'funcs_rva': funcs_rva})

# print priority
    for cls in priority:
        if cls in result:
            for vt in result[cls]:
                vt_rva = vt["vt_rva"]
                nfuncs = len(vt["funcs_va"])
                print(f"\n  {cls} @ vtable RVA 0x{vt_rva:x} ({nfuncs} virtual methods):")
                for i, (va, rva) in enumerate(zip(vt["funcs_va"], vt["funcs_rva"])):
                    print(f"    [{i}] VA=0x{va:x} RVA=0x{rva:x}")

# save full
with open(r"C:\Users\<user>\Desktop\wallpaper_source\analysis\rtti-vtables.json", "w") as f:
    json.dump(result, f, indent=2)
print(f"\n=== Saved rtti-vtables.json: {len(result)} classes ===")

# Step 4: also find LEA references to vtables in .text (constructors)
print("\n=== Step 4: .text references to priority vtables (constructors/users) ===")
for cls in priority:
    if cls not in result: continue
    for vt in result[cls]:
        vt_va = image_base + vt['vt_rva']
        # scan .text for this VA as 8-byte or as RIP-relative (harder); do 8-byte ptr in data, and 4-byte rel32 in text
        refs = []
        # 1) data tables referencing vtable VA
        target8 = struct.pack('<Q', vt_va)
        i = 0
        cnt = 0
        while cnt < 5:
            j = d.find(target8, i)
            if j < 0: break
            i = j + 8
            sn = secname(j)
            if sn == '.text':
                refs.append((j, 'text-ptr'))
            elif sn == '.rdata':
                refs.append((j, 'rdata-ptr'))
            cnt += 1
        if refs:
            print(f"  {cls} vt@0x{vt['vt_rva']:x}: {len(refs)} direct refs (first 5): {[(hex(o),k) for o,k in refs[:5]]}")
