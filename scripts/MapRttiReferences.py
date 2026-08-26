"""
Find functions that reference RTTI type-descriptor strings (MSVC .?AV/.?AU names).

The RTTI type descriptors live at known .rdata offsets (found by Agent A):
  SceneWallpaper @ ~0x4e003a
  VideoWallpaper @ ~0x4dfe5b
  CEFWallpaper   @ ~0x4e0090
  WallpaperManager @ ~0x4df648
  ReadTextureData @ ~0x4e02d5
  AudioProcessor @ ~0x4dfd80
  ParticleVbo    @ ~0x4e0780
  MaterialSystem @ ~0x4e0213

A type descriptor struct in MSVC x64 RTTI is:
  +0x00  void*  (vtable of type_info, points into vcruntime)
  +0x08  void*  (spare, usually 0)
  +0x10  char[] name (".?AVClassName@@")

So the *string* ".?AV..." begins at offset+0x10 of the descriptor.
But the function code references the *descriptor address* (start), or sometimes
the string address, when doing RTTI lookups / throwing / dynamic_cast.

We want: which code addresses reference these descriptor offsets (or string offsets).
Then map each referencing code address -> its containing function (via manifest).

Method:
  1. Scan the .text section of the binary for any 8-byte aligned pointer that
     points to one of the known RTTI descriptor offsets.
  2. Those are likely LEA RIP-relative computations or pointer table entries.
  3. Map file-offset -> function via the manifest's addr (RVA-based).

Since the binary is position-independent (ASLR, ImageBase 0x140000000), we
match on RVA. We search the file for the *RVA value* of each descriptor,
because LEA encodes RIP-relative offsets, but RTTI's Complete Object Locator
and vtables store absolute-image-based pointers (RVA-relative-to-imagebase
under /vtordisp relaxation). Simplest robust approach: scan for occurrences
of the 4-byte LE value of the RVA at every file offset, record candidates.
"""
import struct, json, os, sys

WE = r"Z:\SteamLibrary\steamapps\common\wallpaper_engine\wallpaper64.exe"
# use the rich-injected copy if present, else original
RICH = r"C:\Users\<user>\Desktop\wallpaper_source\binaries\wallpaper64_rich.exe"
SRC = RICH if os.path.exists(RICH) else WE
print("Scanning:", SRC)
with open(SRC, 'rb') as f:
    d = f.read()

# parse PE to get imagebase + sections
e_lfanew = struct.unpack_from('<I', d, 0x3C)[0]
machine = struct.unpack_from('<H', d, e_lfanew+4)[0]
assert machine == 0x8664
opt_off = e_lfanew + 24
image_base = struct.unpack_from('<Q', d, opt_off + 24)[0]
numsec = struct.unpack_from('<H', d, e_lfanew+6)[0]
optsz = struct.unpack_from('<H', d, e_lfanew+20)[0]
sec_off = e_lfanew + 24 + optsz
sections = []
for i in range(numsec):
    s = sec_off + i*40
    name = d[s:s+8].rstrip(b'\x00').decode('ascii','replace')
    vsize = struct.unpack_from('<I', d, s+8)[0]
    vaddr = struct.unpack_from('<I', d, s+12)[0]
    rawsz = struct.unpack_from('<I', d, s+16)[0]
    rawoff = struct.unpack_from('<I', d, s+20)[0]
    sections.append((name, vaddr, vsize, rawoff, rawsz))

def file_to_rva(foff):
    for name, vaddr, vsize, rawoff, rawsz in sections:
        if rawoff <= foff < rawoff + rawsz:
            return vaddr + (foff - rawoff)
    return None
def rva_to_file(rva):
    for name, vaddr, vsize, rawoff, rawsz in sections:
        if vaddr <= rva < vaddr + vsize:
            return rawoff + (rva - vaddr)
    return None

# Find the file offset of each known RTTI string (Agent A's offsets are file offsets)
# Agent A reported e.g. SceneWallpaper @ 0x4e003a as a file offset.
# The RTTI descriptor string ".?AVSceneWallpaper@@" starts there.
RTTI_STRINGS = {
    'SceneWallpaper': 0x4e003a,
    'VideoWallpaper': 0x4dfe5b,
    'CEFWallpaper':   0x4e0090,
    'WallpaperManager': 0x4df648,
    'ReadTextureData': 0x4e02d5,
    'AudioProcessor': 0x4dfd80,
    'AudioEventHandler': 0x4dfcb0,  # Agent B/F final reported 0x4DFCB0
    'ParticleVbo':    0x4e0780,
    'MaterialSystem': 0x4e0213,
    'LoadSceneAndProperties': 0x4e0023,
    'Main_LoadScene': 0x4e053c,  # Agent final reported 0x4E053C
    'DWriteFontFileLoader': 0x4e17f0,
}

# The RTTI TypeDescriptor struct begins 0x10 bytes before the name string.
# Functions/tables reference the *descriptor start*, not the name.
desc_by_class = {}
for cls, str_off in RTTI_STRINGS.items():
    desc_off = str_off - 0x10
    rva = file_to_rva(desc_off)
    if rva is None:
        # try as RVA directly
        rva = desc_off
    desc_by_class[cls] = (desc_off, rva, str_off)
    print(f"  {cls:24s} desc@0x{desc_off:x} RVA=0x{rva:x} name@0x{str_off:x}")

# Now scan the whole binary for 8-byte-aligned 8-byte values == image_base + rva (full VA)
# and also 4-byte values == rva (RVA table entries)
print("\n=== Scanning for references to RTTI descriptors ===")
results = {cls: [] for cls in RTTI_STRINGS}
for off in range(0, len(d) - 8, 1):
    # check 8-byte VA reference (image_base + rva)
    val8 = struct.unpack_from('<Q', d, off)[0]
    for cls, (desc_off, rva, str_off) in desc_by_class.items():
        target_va = image_base + rva
        if val8 == target_va:
            results[cls].append((off, 'VA8', val8))
        # also string VA (some refs point at the name)
        target_str_va = image_base + file_to_rva(str_off) if file_to_rva(str_off) else None
        if target_str_va and val8 == target_str_va:
            results[cls].append((off, 'VA8-str', val8))
    if off % 4 == 0:
        # check 4-byte RVA reference (relative table)
        val4 = struct.unpack_from('<I', d, off)[0]
        for cls, (desc_off, rva, str_off) in desc_by_class.items():
            if val4 == rva:
                results[cls].append((off, 'RVA4', val4))

print("\n=== References found per class ===")
out = {}
for cls, refs in results.items():
    # dedupe
    seen = set()
    uniq = []
    for off, kind, val in refs:
        if off not in seen:
            seen.add(off)
            uniq.append((off, kind))
    out[cls] = uniq
    # which section?
    secnames = []
    for off, kind in uniq:
        r = file_to_rva(off)
        for name, vaddr, vsize, rawoff, rawsz in sections:
            if vaddr <= r < vaddr + vsize:
                secnames.append(f"0x{off:x}({name[:6]})")
                break
    print(f"  {cls:24s} {len(uniq):3d} refs: {', '.join(secnames[:8])}")

# Save
import json
with open(r"C:\Users\<user>\Desktop\wallpaper_source\analysis\rtti-references.json", "w") as f:
    json.dump({cls: [{"file_off": off, "kind": k} for off,k in refs] for cls,refs in out.items()}, f, indent=2)
print("\nSaved: rtti-references.json")
