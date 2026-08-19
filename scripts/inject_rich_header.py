"""
Inject a valid MSVC Rich Header into a PE whose DOS stub was stripped.

Wallpaper Engine binaries have e_lfanew=0x40 (no DOS stub, no Rich Header),
which prevents Ghidra's PeLoader.CompilerOpinion from recognizing them as
MSVC-compiled. This rebuilds the file with a DOS stub + Rich Header so RTTI
analysis works.

Strategy:
  1. Read source's full PE (from e_lfanew onward) — this is the part we keep.
  2. Read a donor Rich Header from a known MSVC binary (assimp-vc143-mt64.dll).
  3. Build a new file: MZ header + minimal DOS stub + donor Rich Header + PE.
  4. Fix e_lfanew in the new MZ header to point past the stub.

The PE body is byte-for-byte identical; only the pre-PE-header region grows.
"""
import struct
import sys

def read_rich_header_block(donor_path):
    """Extract the DOS header + stub + Rich Header block from a donor PE.
    Returns (block_bytes, donor_e_lfanew). The block excludes the PE header."""
    with open(donor_path, 'rb') as f:
        d = f.read()
    if d[:2] != b'MZ':
        raise ValueError("donor not MZ")
    e_lfanew = struct.unpack_from('<I', d, 0x3C)[0]
    rich_pos = d.find(b'Rich', 0, e_lfanew)
    if rich_pos < 0:
        raise ValueError("donor has no Rich header")
    # Rich header end = 'Rich' + 4-byte XOR key
    rich_end = rich_pos + 8
    # The block we want: bytes [0 : rich_end], everything before PE header
    # but we need to align to 8 bytes for safety
    block = bytearray(d[0:rich_end])
    # Pad to 8-byte alignment
    while len(block) % 8 != 0:
        block.append(0)
    return bytes(block), len(block)

def inject(target_path, donor_path, out_path):
    with open(target_path, 'rb') as f:
        target = f.read()
    if target[:2] != b'MZ':
        raise ValueError("target not MZ")
    target_e_lfanew = struct.unpack_from('<I', target, 0x3C)[0]
    pe_body = target[target_e_lfanew:]  # from PE signature to end
    # DOS header of target is first 0x40 bytes (MZ + reserved fields + e_lfanew)
    # We keep target's MZ header but will overwrite e_lfanew.

    # Get donor stub+rich block (without its own MZ header fields that conflict)
    block, new_lfanew = read_rich_header_block(donor_path)

    # Build new file:
    #   - target DOS header (0x40 bytes) with e_lfanew patched
    #   - donor's stub region (bytes 0x40 .. end of rich header)
    #   - original PE body
    new_e_lfanew = len(block)  # donor block includes its own MZ; but we use target's MZ
    # Actually: donor block[0:0x40] is donor MZ header; we want target's MZ.
    # Reconstruct: target_MZ_header(0x40) + donor_stub(0x40..new_lfanew) + PE_body
    donor_stub = block[0x40:new_lfanew]  # stub + rich header region
    new_e_lfanew = 0x40 + len(donor_stub)

    out = bytearray()
    out += target[0:0x3C]                      # MZ header up to e_lfanew field
    out += struct.pack('<I', new_e_lfanew)     # patched e_lfanew
    out += donor_stub                          # DOS stub + Rich Header
    out += pe_body                             # PE signature + rest

    # Sanity: verify PE sig lands correctly
    pe_check = out[new_e_lfanew:new_e_lfanew+4]
    if pe_check != b'PE\x00\x00':
        raise ValueError(f"PE signature misaligned: got {pe_check!r} at 0x{new_e_lfanew:x}")

    # Verify Rich present
    rich_check = out.find(b'Rich', 0, new_e_lfanew)
    if rich_check < 0:
        raise ValueError("Rich header not found in output")

    with open(out_path, 'wb') as f:
        f.write(out)
    print(f"OK: {out_path}")
    print(f"  original size: {len(target)} (e_lfanew 0x{target_e_lfanew:x})")
    print(f"  new size:      {len(out)} (e_lfanew 0x{new_e_lfanew:x})")
    print(f"  Rich header @  0x{rich_check:x}")
    print(f"  PE sig @       0x{new_e_lfanew:x}")
    return out

if __name__ == '__main__':
    WE = r"Z:\SteamLibrary\steamapps\common\wallpaper_engine"
    target = r"C:\Users\yakihyuk0728\Desktop\wallpaper_source\binaries\wallpaper64.exe"
    donor = WE + r"\bin\assimp-vc143-mt64.dll"
    out = r"C:\Users\yakihyuk0728\Desktop\wallpaper_source\binaries\wallpaper64_rich.exe"
    inject(target, donor, out)
