# MDL Mesh Chunk Format (`*.mdl`)

Reverse-engineered from 423 `.mdl` chunks across the Wallpaper Engine workshop
corpus. All multi-byte integers are **little-endian**; vertex attributes are
**float32**. A `.mdl` blob is a self-describing mesh embedded as one PKGV entry.

**Important:** the MDL format is **NOT** an embedded FBX or OBJ. No sample
contains the FBX binary magic (`Kaydara FBX Binary  `) or OBJ text (`# ... obj`).
It is Wallpaper Engine's own binary geometry format consumed by its assimp-like
importer. The "puppet" suffix on many filenames (`图层 6_puppet.mdl`,
`1x1_puppet.mdl`) indicates puppet-warp meshes that carry bone weights.

## Version distribution

The 8-byte magic is `MDLV` + a 4-digit ascii version. Versions observed:

| magic      | count | notes |
|------------|------:|-------|
| `MDLV0023` |   378 | dominant current version |
| `MDLV0019` |    18 | older |
| `MDLV0021` |    17 | older |
| `MDLV0016` |     8 | older |
| `MDLV0017` |     2 | older |

The layout below is documented against `MDLV0023`; older versions have a
shorter/simpler header (e.g. `MDLV0016` uses flag word `0x80000900`,
`MDLV0023` uses `0x0900` or `0x0f00`).

## Top-level layout (MDLV0023)

Annotated against `models/1x1_puppet.mdl` (1,663 bytes) and
`models/OBJOBJBone/OBJOBJBone.mdl` (1,715 bytes):

```
offset  type/bytes  field                evidence / notes
------  ----------  -------------------  ----------------------------------------
0x00    8 bytes     b"MDLV0023"          magic + version
0x08    u16         vertex_format_lo     0x0900 or 0x0f00 — vertex-attribute mask
0x0A    u16         vertex_format_hi     0x8000 (puppet/boned) or 0x0000 (static)
0x0C    u32         count_A              0x00000101 (257) on boned; 0x00000001 on static
0x10    u32         count_B              0x00000100 (256) on boned; 0x00000001 on static
0x14    1 byte      0x00                 null separator before material string
0x15    cstr        material_ref         null-terminated UTF-8 path to the
                                          material .json, e.g.
                                          "materials/1x1.json" or
                                          "materials/models/OBJOBJBone/12312.json"
...     ~20-40 B    bounding-box floats  6 × float32 (min xyz, max xyz) — values
                                          like -26.0, 18.0, 1.0 seen; the pattern
                                          0x0000803f (1.0f) and 0x000080bf (-1.0f)
                                          repeats near the end of the bbox.
...     u32         vertex_count         e.g. 0x0000000f = 15
...     u32         index_count          e.g. 0x00000570 = 1392 (or byte-size?)
...     [vertex buffer]                  vertex_count × stride bytes
...     [index buffer]                   16-bit or 32-bit indices
...     [optional bone/puppet data]      present when vertex_format_hi & 0x8000
```

## Vertex format flag word (0x08)

Read as two little-endian u16s. The low u16 (`vertex_format_lo`) almost
certainly encodes which attribute channels are present (position, UV, normal,
colour, tangent, bone weights/indices). Observed:

- `0x0900` on `1x1_puppet.mdl` and most `图层 N_puppet.mdl`
- `0x0f00` on `OBJOBJBone.mdl` and `Spooky Mask.mdl` (more attributes)
- the high u16 `0x8000` is set on puppet meshes, `0x0000` on plain ones

**Needs dynamic confirmation:** the per-bit attribute mapping. Based on float
repetition, a stride of ~36–48 bytes/vertex is typical (pos3 + uv2 + maybe
normal3 + color4 + 2 bone weights).

## Geometry data

Vertex data is uncompressed float32 little-endian. Diagnostic evidence:
`1x1_puppet.mdl` at body offset 0x58 contains the runs
`00 00 80 3F` (= 1.0f) and `00 00 80 BF` (= −1.0f) alternating — the four
corners of a unit quad. `OBJOBJBone.mdl` carries coordinates like
`29 9E 08 42` (= 34.0977f) consistent with model-space positions.

Index data follows the vertex buffer; indices reference the vertex array. Index
width is most likely u16 for these small meshes (no sample is large enough to
require u32), but **needs dynamic confirmation.**

## Bone / puppet data

When `vertex_format_hi & 0x8000` is set (puppet meshes), a trailing block
describes bones and per-vertex bone weights. This block was not fully
reverse-engineered from static analysis — its layout varies between the
`图层 N_puppet` family. **Needs dynamic confirmation** by dumping the
`CPuppet`/`CBone` structures from the engine.

## What this is NOT

- Not FBX (no `Kaydara FBX Binary` magic anywhere in the corpus).
- Not glTF (no `glTF` JSON header).
- Not OBJ (no `# ... obj` text header).
- Not assimp's native blob (no assimp magic).
- The geometry is a bespoke, pre-imported vertex/index buffer so the engine
  can avoid runtime mesh import. The companion `.json` (same base name under
  `materials/`) holds the material/texture references.

## Canonical byte-layout example

`models/1x1_puppet.mdl`, MDLV0023, first 0x60 bytes:

```
00: 4D 44 4C 56 30 30 32 33   "MDLV0023"
08: 00 09 00 80               vertex_format = {lo:0x0900, hi:0x8000}  (puppet)
0C: 01 01 00 00               count_A = 0x101
10: 00 01 00 00               count_B = 0x100
14: 00                        null
15: 6D 61 74 65 72 69 61 6C 73 2F 31 78 31 2E 6A 73 6F 6E 00
                             "materials/1x1.json\0"
28: ...zeros / padding...
44: 0F 00 80 01               sub-record header (vertex format repeat + flags)
48: B0 04 00 00               u32 = 0x4B0 = 1200 (vertex buffer byte size?)
4C: 00 00 D0 C1               float −26.0   (bbox min x)
50: 00 00 90 41               float +18.0   (bbox ...)
...vertex float stream follows, with 0x0000803F (1.0) at quad corners...
```

## Open questions for dynamic confirmation

1. **Vertex attribute mask bit decoding** (`vertex_format_lo` 0x0900 vs 0x0f00).
2. **Index buffer width** (u16 vs u32) and whether `0x4B0` is a byte size or a
   vertex count.
3. **Puppet/bone block layout** (the `vertex_format_hi & 0x8000` case).
4. **Meaning of count_A/count_B** at 0x0C/0x10 (bone count + weight-count?).
5. **Version differences** (MDLV0016/0017/0019/0021 vs 0023 headers).
