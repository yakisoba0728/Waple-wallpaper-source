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

## TEXI payload (metadata) — starts at offset 0x11

Immediately after `TEXI0001` there is one `0x00` byte (index 0x11), then a run
of little-endian u32 fields starting at **offset 0x12 (decimal 18)**:

```
off   type   field           meaning / evidence
----  ----   --------------  -----------------------------------------------
0x12  u32    format          pixel-format enum (see table below)
0x16  u32    flags           bitfield; observed values 0, 2, 4. flags=2 on the
                              overwhelming majority (sRGB? mip-mapped?).
0x1A  u32    alloc_width     GPU texture width. Often padded to power-of-two
                              (e.g. 4096 for a 3840-wide source image).
0x1E  u32    alloc_height    GPU texture height (e.g. 4096 for 2160-tall source).
0x22  u32    orig_width?     original/source width (matches PNG IHDR when fmt=0
                              embeds a PNG). For Hu Tao's main tex: 3840.
0x26  u32    orig_height?    original/source height (Hu Tao: 2160).
0x2A  u32    field6          small integer, often 1; possibly mip count or array size.
0x2E  u32    field7          observed 0x00000000 mostly; sometimes 0xFFxxxxxx
                              (looks like a border/background color, e.g. 0xFF000000).
```

**Evidence for the width/height split:** Hu Tao `materials/FY38OR9UsAAnUC6_digital_art_custom.tex`
has `alloc_width=4096, alloc_height=4096, orig_width=3840, orig_height=2160`, and
the PNG embedded later in the same blob has IHDR `width=0x0F00=3840, height=0x0870=2160`.
The 4096 is the next-power-of-two bound on 3840. The 1×1 mask
`opacity_mask_b795512d.tex` has all four = 1.

**Caveat (needs dynamic confirmation):** the field at 0x22/0x26 could equally be
a second dimension pair (e.g. tile size) rather than "orig" dims; for non-PNG
formats they sometimes equal alloc_width/height and sometimes don't. Flagged as
an unknown.

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

`opacity_mask_b795512d.tex` (92 bytes, 1×1 R8, fmt=9):

```
00: 54 45 58 56 30 30 30 35   "TEXV0005"            container magic
08: 00                         separator
09: 54 45 58 49 30 30 30 31   "TEXI0001"            image-info tag
11: 00                         separator
12: 09 00 00 00                format = 9 (R8 mask)
16: 02 00 00 00                flags = 2
1A: 01 00 00 00                alloc_width = 1
1E: 01 00 00 00                alloc_height = 1
22: 01 00 00 00                orig_width = 1
26: 01 00 00 00                orig_height = 1
2A: 01 00 00 00                field6 = 1
2E: 00 00 00 00                field7 = 0
   --- next section ---
32: ff                         single R8 pixel (0xFF = opaque white)
   ... actually the 0xFF sits just before TEXB; see byte 0x2D in the full file
33: 54 45 58 42 30 30 30 34   "TEXB0004"            body tag (version 0004)
3B: 00 01 00 00 00 ff ff ff ff ff 00   TEXB header + (empty) body
```

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
4. **`flags` (0x16) bitfield semantics** (sRGB / alpha-premultiplied / etc.).
5. **TEXI fields at 0x22/0x26** — "orig dims" vs "tile dims".
