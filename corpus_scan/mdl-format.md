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

> ## ⚠️ CORRECTION (2026-08-27) — this file was off by one byte, and that broke the flag word
>
> Everything below the version table was written by eyeballing hex dumps, and it assumed the
> `MDLV00NN` magic is exactly 8 raw bytes. **It is not: the engine reads it with a
> NUL-terminated-string reader (`0x14009c500`) that consumes the terminating NUL, so the
> magic occupies 9 bytes and every header field after it sits one byte later than this file
> says.** The byte at `0x08` that this file folded into a "vertex format" u16 pair is the
> string's NUL.
>
> The sections below have been corrected against the decoder itself (`0x140261880` in
> `wallpaper64.exe`) and re-validated on the 28 `.mdl` assets shipped in this repository —
> **28/28 parse to exactly EOF**. Run `python3 scripts/verify_mdl_tex.py` to reproduce, and
> see `analysis/reports/mdl-tex-decoders-2026-08-27.md` for the disassembly.
>
> The **version census above is unaffected** — it came from magic counting, not framing.

The layout below is documented against `MDLV0023`; older versions differ only by
version gates (see "Version gates" below), not by a different header shape.

## Top-level layout (MDLV0023)

Annotated against `models/1x1_puppet.mdl` (1,663 bytes) and
`models/OBJOBJBone/OBJOBJBone.mdl` (1,715 bytes):

```
offset  type/bytes  field                evidence / notes
------  ----------  -------------------  ----------------------------------------
0x00    9 bytes     b"MDLV00NN\0"        magic + version, NUL-TERMINATED (9 bytes)
                                          version = atoi(magic + 4)
0x09    u32         format_flag           vertex-attribute bitmask (one u32, see below)
0x0D    u32         skin_count            how many material cstrings each mesh carries
0x11    u32         mesh_count            number of mesh records that follow
0x15    ...         mesh_count × mesh record
```

**Mesh record** (exact order the decoder reads; gated fields marked):

```
cstr × skin_count   material_ref     null-terminated UTF-8 path to a material .json
u32                 gate_word        only if version >= 4  (else treated as 0)
u32                 -                only if (gate_word & 2)
float32 × 6         aabb             only if version >= 17  (min xyz, max xyz)
u32                 format_flag      only if version >= 15  (else reuse the header one)
u32 + bytes         vertex_buffer    LENGTH IS IN BYTES, not vertices
u32 + bytes         index_buffer     LENGTH IS IN BYTES; elements are u16
u8 gate -> u32 + (u32+bytes)          only if version >= 21
u8 gate -> (u32+bytes)                only if version >= 21
u32 n -> n × morph/mask record         only if version >= 23
```

After all meshes, **if version >= 13**, a sub-chunk section loop runs: read a
NUL-terminated tag; an empty tag ends the loop. That trailing empty tag is why
`MDLV0014`/`0017`/`0023` files end in a single `0x00` while `MDLV0004` files end
on the last index byte.

### Version gates (all read off the decoder)

| gate | condition | site |
|---|---|---|
| `gate_word` u32 | `version >= 4` | `0x140261979 cmp edi,4` |
| one extra u32 after it | `gate_word & 2` | `0x140261992 test al,2` |
| AABB `float[6]` | `version >= 17` | `0x1402619a6 cmp edi,0x11` |
| per-mesh `format_flag` | `version >= 15` | `0x140261a19 cmp edi,0xf` |
| mesh trailer (2 gated blobs) | `version >= 21` | decompiled `:327` |
| v23 morph/mask records | `version >= 23` | decompiled `:345` |
| sub-chunk section loop | `version >= 13` | decompiled `:694` |

For `version < 15` the engine reloads the **header** `format_flag` at every mesh
(`0x140261a33 mov [rbp+0xa8], r10d`) — there is no per-mesh read at all.

### v23 morph/mask record — ✅ RESOLVED FROM THE WIDER WORKSHOP CORPUS

The record body is:

```
u64 id | cstr name | u32 flags | u32 count_A | count_A × u32 |
u32 count_B | count_B × u32
```

The 28 installed `.mdl` files in this repository still have record count 0, so they validate only
the gate and framing. Waple's wider workshop corpus exercises the body in 12 files; every observed
name is `masks/clipping_mask_*`. Waple therefore models this as a preserved morph/mask record
(`Model3D.MorphTarget`), with synthetic byte tests locking the exact field order. Rendering the
morph data remains out of scope, but the format and semantic family are no longer unresolved.

## Vertex format flag word (offset 0x09, one u32) — ✅ DECODED

**This is a single u32, not two u16s at 0x08.** The engine computes the vertex
stride with a 26-iteration loop over two parallel `u32[26]` tables in `.rdata`:

```
stride = 0;
for (i = 0; i < 26; i++)
    if (format_flag & mask[i]) stride += size[i];
```

`mask[26] @ VA 0x140484a20`, `size[26] @ VA 0x1404849b0`, loop at `0x140261b10`.
Two more arrays sit alongside: attribute names `char*[26] @ 0x140484a90`, and a
literal `D3D11_INPUT_ELEMENT_DESC[26] @ 0x140482af0` giving each channel's
`DXGI_FORMAT` and `SemanticIndex`.

| idx | mask | size | attribute | semantic · DXGI_FORMAT |
|---:|---|---:|---|---|
| 0 | `0x00000001` | 12 | `a_Position` | POSITION0 · R32G32B32_FLOAT |
| 1 | `0x00010000` | 16 | `a_PositionVec4` | POSITION0 · R32G32B32A32_FLOAT |
| 2 | `0x02000000` | 12 | `a_PositionC1` | POSITION1 · R32G32B32_FLOAT |
| 3 | `0x00000002` | 12 | `a_Normal` | NORMAL0 · R32G32B32_FLOAT |
| 4 | `0x00000004` | 16 | `a_Tangent4` | TANGENT0 · R32G32B32A32_FLOAT |
| 5 | `0x00800000` | 16 | `a_BlendIndices` | BLENDINDICES0 · **R32G32B32A32_UINT** |
| 6 | `0x01000000` | 16 | `a_BlendWeights` | BLENDWEIGHT0 · R32G32B32A32_FLOAT |
| 7 | `0x00000008` | 8 | `a_TexCoord` | TEXCOORD0 · R32G32_FLOAT |
| 8 | `0x00000010` | 12 | `a_TexCoordVec3` | TEXCOORD0 · R32G32B32_FLOAT |
| 9 | `0x00000020` | 16 | `a_TexCoordVec4` | TEXCOORD0 · R32G32B32A32_FLOAT |
| 10–12 | `0x40`/`0x80`/`0x100` | 8/12/16 | `a_TexCoord*C1` | TEXCOORD1 · float2/3/4 |
| 13–15 | `0x200`/`0x400`/`0x800` | 8/12/16 | `a_TexCoord*C2` | TEXCOORD2 · float2/3/4 |
| 16–18 | `0x1000`/`0x2000`/`0x4000` | 8/12/16 | `a_TexCoord*C3` | TEXCOORD3 · float2/3/4 |
| 19–21 | `0x20000`/`0x40000`/`0x80000` | 8/12/16 | `a_TexCoord*C4` | TEXCOORD4 · float2/3/4 |
| 22–24 | `0x100000`/`0x200000`/`0x400000` | 8/12/16 | `a_TexCoord*C5` | TEXCOORD5 · float2/3/4 |
| 25 | `0x00008000` | 16 | `a_Color` | COLOR0 · R32G32B32A32_FLOAT |

Three things this table settles that the old text got wrong:

- **Channel offsets accumulate in table-index order, not bit order.** `a_BlendIndices`
  (idx 5) precedes `a_TexCoord` (idx 7); `a_Color` (idx 25) is always last.
- **`0x8000` is `a_Color`, not a puppet gate.** Skinning is `0x00800000 | 0x01000000`,
  and those are channels *inside the stride* — there is no separate bone block
  (see below).
- **Nothing is packed or normalised.** Every channel is 32-bit; `a_Color` is a float4,
  not `u8[4]`. Only `a_BlendIndices` is integer (uint4).
- **The top 6 bits (`~0x03FFFFFF`) contribute 0** — the loop runs 26 iterations and
  never sees them.

Observed in the 28 `.mdl` assets in this repository (45 meshes):

| format_flag | channels | stride | meshes |
|---|---|---:|---:|
| `0x09` | pos3 + uv2 | 20 | 19 |
| `0x0b` | pos3 + normal3 + uv2 | 32 | 10 |
| `0x0f` | pos3 + normal3 + tangent4 + uv2 | 48 | 10 |
| `0x27` | pos3 + normal3 + tangent4 + **uv4** | 56 | 6 |

The puppet example this file used to cite (`1x1_puppet.mdl`) reads
`format_flag = 0x01800009` under the corrected framing = pos3(12) + uv2(8) +
blendIndices4(16) + blendWeights4(16) = **stride 52**.

## Geometry data

Both buffers are **length-prefixed blobs whose u32 length is a BYTE COUNT**, read by
the same primitive (`0x14009c5c0`: read u32, hand back a pointer, skip that many
bytes). Vertex count is therefore `vertex_blob_len / stride`, not a stored field.

Vertex data is uncompressed little-endian float32 (plus uint32 for
`a_BlendIndices`).

~~**Index width is u16** — ✅ settled, no dynamic analysis needed.~~
**[CORRECTED 2026-08-28 — this conflated a corpus correlation with the engine's rule.]**

The measurement below is all true and reproduces exactly, but it only says *these 28
files happen to use u16*. The engine's actual rule is a **per-mesh flag**:

```
index_width = 2 + 2 * (gateWord & 1)
```

read from `[mesh + 0x18]` — `0x1401d784c movzx ecx,[rdi+0x18]` / `0x1401d7853 and cl,1`
/ `0x1401d7870 lea r9d,[r10*2+2]` / `0x1401d7878 idiv r9d`, with the parallel site at
`0x14009a997/99c/9a1`. The struct base is set at `0x14026192c lea rcx,[rbp+0x70]` and
the flag stored at `0x14026198c mov [rbp+0x88],eax` (delta 0x18). The wild does carry
u32 meshes — the canon counts **17 of them, the smallest with 69,396 vertices**, which
is exactly the regime where 16-bit indices stop fitting.

Full write-up, including that caveat verbatim, is in the Waple repo at
`spec/formats/mdl-deep.json` → `format.mdl.indexWidth` (status 확정, committed
2026-08-22). `Sources/WapleCore/Model3D.swift:745` implements the flag. **Do not
reimplement from the correlation below.**

The original measurement, kept because it is a good corpus fact: across the 28 `.mdl`
assets / 45 meshes every `index_blob_len % 6 == 0` (u16 triangles), and **5 meshes have
`index_blob_len % 12 != 0`**, which makes 32-bit indices impossible *for those five*
(`camera.mdl` 3342, `pistols.mdl` 8082, `body.mdl` 12630, `ricepod.mdl` 3450 and 49998).
The smallest case is explicit: `audiophile/models/audiophile/glow.mdl` has 4 vertices and
a 12-byte index blob reading `00 00 01 00 02 00 | 00 00 02 00 03 00` = `0,1,2, 0,2,3`.

## Bone / puppet data

~~When `vertex_format_hi & 0x8000` is set (puppet meshes), a trailing block
describes bones and per-vertex bone weights.~~ **CORRECTED (2026-08-27).** There is
no such trailing block. Per-vertex bone data lives **inside the vertex stride** as
two ordinary channels, `a_BlendIndices` (`0x00800000`, uint4) and `a_BlendWeights`
(`0x01000000`, float4).

The *skeleton* is a separate sub-chunk, `MDLS000N`, in the section loop that runs
after all meshes (version >= 13). The decoder matches it on the **4-character
prefix only** (`strncmp(tag, "MDLS0004", 4)`) and takes the version from
`atoi(tag+4)`, so `MDLS0002`/`0003`/`0004` are all accepted. Bone count is read as
a u32 and has a **hard cap of 128** — exceeding it does not fail the load, it calls
`__fastfail` and kills the process (`0x140262501 cmp eax, 0x80` → `0x140262506 jbe` →
`0x14026250a xor ecx,ecx; int 0x29`).
<!-- [CORRECTED 2026-08-28] This cited 0x1402624f9, which is 8 bytes early and decodes as
     `mov r15d, eax` — following it lands mid-instruction. The comparison is at
     0x140262501. Cross-check: Waple `Sources/WapleCore/PuppetModel.swift:34-36` cites the
     same 0x140262501. Note also that `int 0x29` is not rare in this parser — the covering
     function 0x140261880 contains 30 `xor ecx,ecx; int 0x29` sites, so "the fastfail" is
     not a single distinguishing landmark. -->


Sub-chunk tag matching is not uniform, and a reimplementation has to copy it:

| tag | comparison | version |
|---|---|---|
| `MDLS0004` | 4-char prefix | `atoi(tag+4)` |
| `MDLA0006` | 4-char prefix | `atoi(tag+4)` |
| `MDAT0001` | full 8 bytes | — |
| `MDMP0001` | full 8 bytes | — |
| `MDLE0002` | full string equality | — |
| anything else | — | skipped by its length word |

**[UNRESOLVED]** The length word of a sub-chunk is written by `0x140261770` as
`section_end = blob_base + value` — i.e. an **absolute end offset from the start of
the blob**, not a relative length. No `.mdl` in this repository has a non-empty
sub-chunk, so that reading has not been confirmed against real bytes. The interior
layout of `MDLS`/`MDLA`/`MDAT`/`MDMP`/`MDLE` records is likewise unconfirmed.

## What this is NOT

- Not FBX (no `Kaydara FBX Binary` magic anywhere in the corpus).
- Not glTF (no `glTF` JSON header).
- Not OBJ (no `# ... obj` text header).
- Not assimp's native blob (no assimp magic).
- The geometry is a bespoke, pre-imported vertex/index buffer so the engine
  can avoid runtime mesh import. The companion `.json` (same base name under
  `materials/`) holds the material/texture references.

## Canonical byte-layout example

`audiophile/models/audiophile/glow.mdl` (MDLV0004, 156 bytes) — small enough to
account for every byte in the file.

```
00: 4D 44 4C 56 30 30 30 34 00   "MDLV0004\0"    version = 4
09: 09 00 00 00                  format_flag = 0x09 -> pos3 + uv2, stride 20
0D: 01 00 00 00                  skin_count = 1
11: 01 00 00 00                  mesh_count = 1
15: "materials/audiophile/glow.json\0"           material_ref (one, = skin_count)
34: 00 00 00 00                  gate_word = 0    (version >= 4)
                                 (no AABB: version < 17; no per-mesh flag: version < 15)
38: 50 00 00 00                  vertex_buffer length = 0x50 = 80 bytes = 4 x 20
3C: .. 80 bytes ..               4 vertices: pos(x,y,z) + uv(u,v)
                                   (-3.2851,-3.2851,-0.5549) (0,1)
                                   ( 3.2851,-3.2851,-0.5549) (1,1)
                                   ( 3.2851, 3.2851,-0.5549) (1,0)
                                   (-3.2851, 3.2851,-0.5549) (0,0)
8C: 0C 00 00 00                  index_buffer length = 12 bytes
90: 00 00 01 00 02 00            u16 indices 0,1,2
    00 00 02 00 03 00            u16 indices 0,2,3
9C: <EOF>                        version < 13 -> no section loop, no trailing NUL
```

## Open questions

1. ~~Vertex attribute mask bit decoding.~~ ✅ **RESOLVED 2026-08-27** — see the table above.
2. ~~Index buffer width (u16 vs u32), and whether the length word is a byte size.~~
   ✅ **RESOLVED** — u16, and both length words are byte counts.
3. ~~Puppet/bone block layout.~~ ✅ **RESOLVED for the per-vertex part** (two vertex
   channels, not a block). **[UNRESOLVED]** the `MDLS` skeleton record interior.
4. ~~Meaning of count_A/count_B at 0x0C/0x10.~~ ✅ **RESOLVED** — the off-by-one made
   these look like two odd counters; they are `skin_count` (materials per mesh) at
   `0x0D` and `mesh_count` at `0x11`.
5. **Version differences** — the gate table above covers 4/14/17/23 against real bytes.
   `MDLV0016`/`0019`/`0021` are covered by the same gates but **no sample of those
   versions exists in this repository**, so they are inferred from the gates, not
   measured. (Waple's `Model3DFormat.swift` reports having byte-checked them against
   a wider workshop corpus.)
6. **[UNRESOLVED]** Sub-chunk length semantics and record interiors (see above).
7. ~~The v23 record body.~~ ✅ **RESOLVED from Waple's wider workshop corpus** — it is the
   morph/mask record documented above, not a skinning/bone-binding block. This repository's 28
   installed files still all use count 0; they confirm framing only, while the 12 wider-corpus files
   exercise the record body.
