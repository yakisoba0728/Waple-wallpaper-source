# TEX Texture Chunk Format (`*.tex`)

Reverse-engineered from 4,679 `.tex` chunks across the Wallpaper Engine workshop
corpus (`Z:\SteamLibrary\steamapps\workshop\content\431960`). All multi-byte
integers are **little-endian**. A `.tex` blob is a self-describing texture
container embedded as one PKGV entry (see `pkgv_parse.py`).

A representative small sample (`3563096027/materials/masks/opacity_mask_b795512d.tex`,
92 bytes, a 1×1 R8 mask) was used to anchor the field layout; larger samples
confirm it.

## Top-level structure

A `.tex` blob is a sequence of length-tagged sections. Each section begins with
an 8-byte ASCII tag/version of the form `XXXX000N` (4-letter + 4-digit) preceded
by a single `0x00` separator (the `0x00` that follows the previous tag is the
separator; the next 8 bytes are the next tag).

```
offset  bytes   meaning
------  -----   -------
0x00    8       b"TEXV0005"                 ; container magic + container version
0x08    1       0x00                        ; separator
0x09    8       b"TEXI0001"                 ; "image info" section, version 0001
0x11    ...     TEXI payload (see below)
...     1       0x00                        ; separator
...     8       b"TEXB0003" / b"TEXB0004"   ; "body" section (pixel data + mip table)
...     ...     TEXB payload
```

The two-section split (TEXI = metadata, TEXB = pixels) is consistent across all
4,679 samples. TEXB version 0003 (1,933 samples) and 0004 (2,746 samples) are
both present; 0004 adds one extra leading field.

> **CORRECTION (2026-08-27) — there are more section tags than this.** Read out of the
> container walker `0x14015e580` in `wallpaper64.exe` and re-measured on the 440 `.tex`
> files shipped in this repository:
>
> - **The engine compares only the 4-character tag** (`_strnicmp(tag, "TEXB0004", 4)`) and
>   turns the 4 digits into a number with `atoi(tag+4)`, which it passes to the sub-parser
>   as a version. That is why the binary contains only the `TEXB0004` literal while the
>   wild carries four body versions: **`TEXB0001` 42, `TEXB0002` 29, `TEXB0003` 242,
>   `TEXB0004` 127** in this repository's 440 files.
> - A fifth tag exists, **`TEXS0003`**. **[CORRECTED 2026-08-28 — this entry had the
>   dispatch backwards.]** It does *not* terminate the loop: it is **parsed**, by
>   `0x14015e1d0`, and that handler is the **sprite-sheet parser**, not a catch-all.
>   Read the bytes:
>
>   ```
>   0x14015e7e0  41 b8 04 00 00 00      mov  r8d, 4
>   0x14015e7e6  48 8d 15 f3 d0 32 00   lea  rdx, [rip+0x32d0f3]  ; 0x14048B8E0 = "TEXS0003\0"
>   0x14015e7f2  e8 ..                  call 0x1402c9e60          ; _strnicmp(tag, "TEXS0003", 4)
>   0x14015e7f9  75 ..                  jnz  0x14015e86b          ; MISMATCH -> leave
>   0x14015e811  e8 ..                  call 0x14015e1d0          ; MATCH    -> parse
>   ```
>
>   So the branch that "leaves" is the **mismatch** arm and the branch that calls
>   `0x14015e1d0` is the **match** arm — the opposite of what this file said. The layout
>   `0x14015e1d0` parses (`i32 frameCount`, then per-frame geometry, with `v>=3` carrying
>   explicit gif width/height) is documented in the Waple repo at
>   `docs/re/tex-format.md` §1.3, and `Sources/WapleCore/TexImage.swift:866-868` carries
>   the same three-way dispatch with the same three `mov r8d, 4` call sites. **The Swift
>   decoder is right and this document was wrong** — do not "fix" the decoder to match it.
> - A second container magic exists, **`TEXV0004`**, handled by a fallback that calls the
>   TEXI and TEXB parsers directly with version 0 and **no section tags at all**. (All 440
>   files here are `TEXV0005`.)
> - Only the first 4 characters of a tag are ever compared (all three call sites pass
>   `r8d = 4`), so the trailing digits select a *version* via `atoi(tag+4)` and never a
>   *branch*. A tag matching none of TEXI/TEXB/TEXS falls through the chain.
>
> Detail: `analysis/reports/mdl-tex-decoders-2026-08-27.md` §3. Reproduce:
> `python3 scripts/verify_mdl_tex.py`.

## TEXI payload (metadata) — starts at offset 0x12

Immediately after `TEXI0001` there is one `0x00` byte (index 0x11), then a run
of little-endian u32 fields starting at **offset 0x12 (decimal 18)**.

**The last two fields are NOT both unconditional** — corrected 2026-08-27 against
the TEXI parser `0x14015c760`, and re-checked on all 440 `.tex` files here
(440/440 land exactly on the next section tag):

```
off   type   field           meaning / evidence
----  ----   --------------  -----------------------------------------------
0x12  u32    format          pixel-format enum (see table below)
0x16  u32    flags           bitfield. bit 6 (0x40) = 3D/volume texture.
                              Observed here: 0,1,2,3,4,5,6,7,0x12,0x42,
                              0x80000,0x80002,0x80004 — wider than "0/2/4".
0x1A  u32    tex_width       GPU allocation width (power-of-two padded).
0x1E  u32    tex_height      GPU allocation height.
0x22  u32    image_width     stored image width.
0x26  u32    image_height    stored image height.
 --   u32    tex_depth       *** ONLY IF (flags & 0x40) *** volume depth.
 --   u32    border_color    *** ONLY IF TEXI version > 0 *** (so: always, for
                              TEXI0001). ARGB, e.g. 0xFF000000, 0xFFBD7603.
```

~~`field6` (mip count)~~ **does not exist.** With `flags & 0x40` clear — 412 of the 440
files here — there is exactly **one** u32 after the four dimensions, and it is the
colour. The old table listed two unconditional trailing fields and its own worked
example contradicted itself about where the next tag begins.

**`flags & 0x40` = 3D texture.** The 28 files here that set it are all colour-grading
LUTs: `format=0, flags=0x42, tex=32x32, tex_depth=32, image=1024x32` — a 32-cubed LUT
flattened into a 1024x32 2D image (`lutx32_*.tex`, and the filename says so).

**The alloc-vs-source reading is confirmed for 2D**: of the 440 files, 72 have
`(tex_w,tex_h) != (image_w,image_h)`; 44 of those have `tex >= image` (power-of-two
padding), and the remaining 28 are exactly the LUTs above, where the pair means
something else. So the old "Caveat" about 0x22/0x26 is discharged for 2D textures.

**Evidence for the width/height split:** Hu Tao `materials/FY38OR9UsAAnUC6_digital_art_custom.tex`
has `alloc_width=4096, alloc_height=4096, orig_width=3840, orig_height=2160`, and
the PNG embedded later in the same blob has IHDR `width=0x0F00=3840, height=0x0870=2160`.
The 4096 is the next-power-of-two bound on 3840. The 1×1 mask
`opacity_mask_b795512d.tex` has all four = 1.

~~**Caveat (needs dynamic confirmation):** the field at 0x22/0x26 could equally be
a second dimension pair (e.g. tile size) rather than "orig" dims; for non-PNG
formats they sometimes equal alloc_width/height and sometimes don't. Flagged as
an unknown.~~ **Discharged 2026-08-27** — see the measurement in the block above.
The one case where the pair does mean something else is the volume texture
(`flags & 0x40`).

## Format enum (offset 0x12)

Distribution across the corpus and the best-supported interpretation:

| fmt | count  | interpretation (size-evidence) | evidence |
|----:|-------:|--------------------------------|----------|
|  0  | 1,243  | **PNG-embedded**               | The body section contains a full PNG stream (`89 50 4E 47 0D 0A 1A 0A`) for some samples (e.g. Hu Tao main tex). Other fmt=0 samples have no PNG sig and a body smaller than any uncompressed size, suggesting the body is a raw DXT1 block run that may itself be LZ4-compressed — *needs dynamic confirmation.* |
|  4  | 1,787  | **BC7 / DXT5** (16 B per 4×4 block) | `bg_day.tex` 3840×1028 = 1,051,301 B body; BC7/DXT5 base = 986,880 B (3840×1028/4); difference ≈ mip chain + header. Most common colour format. |
|  6  |    38  | BC4/ATI1 (8 B/block) or uncompressed variant | Rare; `day_photoshop.tex` 6216×8192 with flags=4. |
|  7  |    73  | **DXT1/BC1** (8 B per 4×4 block)? | `cielo.tex` 3840×928 body 164,140 B vs DXT1 base 445,440 B — body is *smaller*, so it is compressed (LZ4 over DXT1 blocks likely). |
|  8  |   265  | **R8 / single-channel** (masks) | `shake_mask_747aeb5f.tex` 1060×592 body 24,389 B vs R8 base 627,520 B — heavily compressed. Used for shake/opacity masks. |
|  9  | 1,273  | **R8 (masks, dominant)**        | `opacity_mask_*` and `shake_mask_*`. 1×1 sample stores a single `0xFF` byte. Larger ones compressed. |

`flags` at 0x16: value 2 dominates; 4 appears on a few large textures
(`day_photoshop.tex`); 0 on a handful. Likely a usage/hint bitfield (sRGB,
premultiplied alpha, mipmap generation) — **needs dynamic confirmation.**

## TEXB payload (body) — pixel data + mip table

Starts after the `TEXB000X` tag at a position that varies with the preceding
TEXI length. The body is **not** a flat pixel buffer: it begins with a small
header describing the mip chain, then concatenated mip levels.

Decoded TEXB header fields (offsets relative to the byte after `TEXB000X`):

```
rel   type   meaning
----  ----   ----------------------------------------------------------
+0x00 u32    flags/mode (e.g. 0x00000100, 0xFFFFFF00) — meaning unknown
+0x04 u32    secondary flags / colour key (e.g. 0xFFFFFFFF, 0x00000D00)
+0x08 u32    mip-count or first-mip descriptor
+0x0C ...    per-mip entries: appears to be {width, height, byte_offset, byte_size}
             tuples for each mip level (4 × u32 each).
<rest>       concatenated mip data, base resolution first.
```

**Evidence the body carries a mip table:** for `bg_day.tex` (fmt=4, 3840×1028)
the TEXB u32 sequence is `256, 0xFFFFFF00, 511, 983040 (0xF0000), 263168 (0x40400), 256, ...`
The values 983040 and 263168 are close to the BC7 sizes of successive mip
levels (3840×1028/4 ≈ 986,688 for mip 0; 1920×514/4 ≈ 246,720 for mip 1).
The 4:1 ratio between consecutive entries matches the 4× area reduction per mip
level. **Exact mip-entry layout needs dynamic confirmation.**

## Compression

- No sample contains the LZ4 frame magic `04 22 4D 18` or gzip/zlib stream
  magic at the blob start, so whole-blob LZ4 framing is **not** used.
- For compressed-looking bodies (fmt 7/8/9 and several fmt 0/4), the byte budget
  is far below the uncompressed size, so per-mip or per-block compression is in
  use. The most likely scheme given WE's GLSL/D3D11 heritage is **LZ4 block
  compression applied per mip level** (a length prefix per mip, then raw LZ4
  block data without the frame magic). The host install ships FreeImage DLLs but
  LZ4 is a separate dep — **needs dynamic confirmation** by instrumenting the
  loader.
- fmt=0 with an embedded PNG is the only format with an unambiguous,
  self-identifying payload (PNG chunk structure is intact: IHDR, pHYs, IDAT,
  IEND all visible).

## Canonical byte-layout summary (annotated hex)

~~`opacity_mask_b795512d.tex`~~ — that example was self-contradictory (it placed the
next tag at both 0x32 and 0x33). Replaced 2026-08-27 with a file present in this
repository, decoded with the corrected TEXI framing:

`demon_core/.../opacity_mask_ee0d9bbc….tex` (TEXV0005, fmt=0, flags=0):

```
00: 54 45 58 56 30 30 30 35 00   "TEXV0005\0"       container magic (NUL-terminated)
09: 54 45 58 49 30 30 30 31 00   "TEXI0001\0"       image-info tag; version = atoi("0001") = 1
12: 00 00 00 00                  format = 0
16: 00 00 00 00                  flags  = 0        -> bit 6 clear, so NO tex_depth field
1A: 00 01 00 00                  tex_width    = 256
1E: 00 01 00 00                  tex_height   = 256
22: 00 01 00 00                  image_width  = 256
26: 00 01 00 00                  image_height = 256
2A: 00 00 00 ff                  border_color = 0xFF000000   (version > 0)
2E: 54 45 58 42 30 30 30 31 00   "TEXB0001\0"       body tag -> version 1 to the body parser
```

Every section tag is a NUL-terminated string, so the "separator" byte described
earlier in this file is really each tag's own terminator.

(See the per-sample evidence in `chunk-type-census.md` for magics of each format.)

## Open questions for dynamic confirmation

1. **fmt enum → DXGI/GL format mapping.** The size-based inference (0=PNG/DXT1,
   4=BC7/DXT5, 7=DXT1, 8/9=R8) must be confirmed by reading the engine's
   format-table constant.
2. **Per-mip compression scheme.** Bodies are smaller than uncompressed budgets
   but carry no LZ4 frame magic. Confirm whether each mip entry is
   `[u32 compressed_size][LZ4 block]`.
3. **TEXB header exact layout.** The mip-table tuple ordering and the meaning of
   the leading flags/mode u32 pair.
4. **`flags` (0x16) bitfield semantics** — bit 6 (`0x40`) is now known to mean
   3D/volume texture (and to add a `tex_depth` u32). The other bits
   (`0x1,0x2,0x4,0x10,0x80000`) are still **[UNRESOLVED]**.
5. ~~**TEXI fields at 0x22/0x26** — "orig dims" vs "tile dims".~~ ✅ **RESOLVED** — stored
   image dims, versus the GPU allocation at 0x1A/0x1E. Measured over 440 files.
6. **[UNRESOLVED]** The TEXB body itself. The decoder entry point is now pinned —
   `0x14015c8d0` (6,388 B), one of only two functions in the binary that reference
   `LZ4 error.` (VA `0x1404863f8`) — but **that function was not read**. The mip-table
   layout and the per-mip compression scheme in this file remain inference.
7. **[UNRESOLVED]** `0x14015e1d0`, the handler for section tags that are none of
   TEXI/TEXB/TEXS.
