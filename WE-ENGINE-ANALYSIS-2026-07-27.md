# Wallpaper Engine 2.8.42 — Engine Analysis (Windows Host Audit)

| Field | Value |
|---|---|
| **Audit date** | 2026-07-27 |
| **WE version** | 2.8.42 (built 2026-06-29) |
| **Target binary** | `wallpaper64.exe` (5,360,112 bytes, PE32+ x64 GUI) |
| **Source path** | `Z:\SteamLibrary\steamapps\common\wallpaper_engine\` |
| **Audit host** | Windows 11 (Docker + Ghidra 12.1.2 + frida 17) |
| **Status** | Static: complete · Dynamic: partial (resume point documented in §10) |
| **Confidence** | Every structural claim verified by direct byte-search or Ghidra decompilation |

**Purpose**: Provide verified, implementation-grade reference for the Waple macOS reimplementation. Replace speculation-only reverse-engineering with corpus-verified formats, decompiled code, and runtime confirmation.

---

## Contents

- **TL;DR** — what Waple gets, what's open
- §0 — how this audit was produced (methodology)
- §1 — binary facts (PE structure, ASLR/DEP, imports)
- §2 — `.pkg` (PKGV) container format ✅ decoded
- §3 — TEX texture format ✅ decoded
- §4 — MDL mesh format ✅ decoded + decoder entry point (vertex-format flags resolved 2026-08-27)
- §5 — 9/9 subsystems identified + GLSL→HLSL shim table (row 3, the TEX decoder, re-adjudicated 2026-08-27)
- §6 — Rich Header strip & the Ghidra MSVC-recognition fix
- §7 — RTTI limitation (why function→class auto-mapping failed)
- §8 — deliverables index (every file this audit produced)
- §9 — consolidated next steps for Waple
- §10 — dynamic analysis status + resume point
- **Appendix A** — quickstart reproduction commands

---

## TL;DR — what Waple gets from this audit

| Done & verified | Status |
|---|---|
| PKGV/TEX/MDL/JSON formats fully decoded (446 scenes, 0 errors) | ✅ §2-4 |
| 9/9 subsystems identified with byte-level evidence | ✅ §5 |
| **7,748 functions decompiled to C pseudocode (45 MB)** | ✅ **REGENERATED 2026-08-27 — see §6.** 1차 함수 6,824/6,824 (100%) 일치. 종전 11,252개 판본은 변위 바이너리에서 나온 것이라 폐기했다 |
| GLSL→HLSL shim table extracted (port directly to GLSL→MSL) | ✅ §5 |
| TEX decoder pinned at **`0x14015e580`** (row 3 of §5 re-adjudicated 2026-08-27 — the old `FUN_140261950` was a copy-paste of the MDL row *and* a dead coordinate) | ✅ §5 |
| MDL decoder entry point pinned at ~~`FUN_140261950`~~ **`0x140261880`** (corrected 2026-08-26; **재생성 코퍼스로 확증 2026-08-27** — `0x140261880` 은 새 코퍼스와 `.pdata` 1차 집합에 둘 다 있고, `0x140261950` 은 함수 시작으로 존재하지 않는다) | ✅ §4 |
| Rich-Header-injection recipe to make Ghidra recognize WE binaries | ✅ §6 |

| Partial / open | Status |
|---|---|
| Function→class auto-mapping | ⚠️ blocked — WE strips standard RTTI (§7) |
| TEX per-mip LZ4 compression scheme | ⚠️ still inferred (§3) — but the body parser is now pinned at `0x14015c8d0`, which is one of only two functions referencing `LZ4 error.` |
| ~~MDL vertex-format bit mapping~~ | ✅ **RESOLVED 2026-08-27 (§4)** — read out of the two `u32[26]` tables at `0x140484a20`/`0x1404849b0` plus a literal `D3D11_INPUT_ELEMENT_DESC[26]` at `0x140482af0`; verified on 28 `.mdl` / 45 meshes |
| Live D3D11 call capture (TEX→DXGI mapping) | ⚠️ device context found, method naming incomplete (§10) |

**Highest-value next actions for Waple** (full list §9, §10):
1. Adopt `corpus_scan/*.md` as the canonical format specs.
2. Port the §5 GLSL→HLSL shim to GLSL→MSL (likely fixes compile-rate deficit cases).
3. Resume dynamic analysis from `scripts/identify_device_vtable.js` to capture TEX→DXGI.

---

## 0. How this audit was produced

- Docker RE environment: Ubuntu 24.04 + Ghidra 12.1.2 + JDK 21 + radare2 + Python RE libs (`docker/Dockerfile.re`).
- Binary import into Ghidra required **Rich Header injection** (see §6): WE binaries ship with `e_lfanew=0x40` (DOS stub + Rich Header stripped), which prevented MSVC recognition. **⚠️ The injection script used at the time was defective — see the §6 correction.**
- ~~Full 11,252-function decompilation in `analysis/decompiled/all/` (45 MB C pseudocode).~~ **INVALID (2026-08-26, §6 correction)** — produced from a corrupted input. ~~Must be regenerated from a pristine original.~~ **Regenerated 2026-08-27 (§6 `✅ RESOLVED`): 7,748 functions, 6,824/6,824 primary starts matched.**
- Evidence index in `analysis/decompiled/evidence-index.tsv` maps each function to referenced RTTI classes, format magics, imported APIs, filename strings.
- Corpus format reverse-engineered across 446 workshop scenes (`corpus_scan/`).

**Two pitfalls documented for anyone resuming this work:**
1. **Encoding mismatch trap**: WE embeds many telltale strings (library names, source paths) as **UTF-16LE** (Windows `wchar_t`), not ASCII. An ASCII-only byte-search will falsely conclude strings are absent. Always search both encodings. (This bit a sub-agent mid-audit; verified by direct dual-encoding search.)
2. **RTTI is stripped** (§7): standard MSVC RTTI TypeDescriptors exist only for std/CRT types; the engine's own classes are not recoverable via vtable tracing. Do not waste cycles on Ghidra's `RecoverClassesFromRTTIScript` — it returns "No new classes recovered." Use the evidence index + decompilation bodies instead.

---

## 1. Binary facts (verified)

| Field | Value |
|---|---|
| Image base | `0x140000000` |
| Entry RVA | `0x28b710` |
| Sections | 8: `.text` (RVA 0x1000, 0x42490c), `.rdata`, `.data`, `.pdata`, `.fptable`, `_RDATA`, `.rsrc`, `.reloc` |
| Characteristics | `0x22` = EXECUTABLE_IMAGE \| LARGE_ADDRESS_AWARE |
| ASLR/DEP/HE-VA | ON (DYNAMICBASE \| NX_COMPAT \| HIGH_ENTROPY_VA via OptionalHeader DllCharacteristics) |
| CFG | OFF (easier to instrument) |
| Compiler | MSVC (PGO-optimized, Authenticode-signed) |
| Imports | 13 DLLs, 334 functions. Key: `d3d11.dll!D3D11CreateDevice` (only direct D3D import), `MFReadWrite`, `DWrite`, `dwmapi`, `USER32` (multi-monitor), `WINMM` |
| Functions | ~~11,252 (Ghidra — **INVALID, see §6 correction**)~~ → **7,748** in the regenerated corpus. `.pdata` holds ~~approx. 14,752~~ **exactly 14,792** RUNTIME_FUNCTION entries (VirtualSize 0x2b560 ÷ 12, all inside `.text`), but **only 6,824 are function starts** — 7,968 carry `UNW_FLAG_CHAININFO` and are fragments of a function already listed (§6). Re-measured independently 2026-08-27 |
| Custom section | `.fptable` (256-byte RW, non-standard — likely function-pointer table) |

---

## 2. Package/container format — `.pkg` (PKGV) ✅ FULLY DECODED

**Verified across 446 scenes, 19,777 chunk entries, 0 parse errors.**

```
HEADER
  0x00  u32  magic_len = 8
  0x04  8B   "PKGV" + 4 ASCII digits (per-file serial, NOT a binary version)
  0x0c  u32  entry_count

INDEX (entry_count × 16-byte records):
  u32  name_len
  name_len bytes (UTF-8 internal path)
  u32  data_offset   (relative to data-section start)
  u32  data_size

DATA SECTION: contiguous blobs, offsets strictly increasing.
```

**⚠️ Waple impact**: The 4-digit suffix after `PKGV` is a per-file serial (observed: `PKGV0017`), not a version. The `entry_count` field at offset 0x0c is the former ambiguous `0x14` byte. Waple's parser must read entry_count and not treat the suffix as a version gate.

**Distinct internal file types** (by magic, across corpus):

| Type | Count | Magic (hex) |
|---|---:|---|
| json | 10,467 | `7b0d0a` (`{\r\n`) |
| tex | 4,679 | `5445585630303035` (`TEXV0005`) |
| glsl-frag | 1,689 | text GLSL, `\r\n// [COMBO]`, **no `#version` prefix** |
| glsl-vert | 1,689 | text GLSL, `\r\n#include "common.h"` |
| mdl | 423 | `4d444c56...` (`MDLV00XX`) — bespoke, NOT FBX/OBJ |
| ttf/otf | 372 | `00010000` / `OTTO` / `ttcf` |
| mp3 | 336 | `494433` (ID3) |
| wav | 68 | `52494646...WAVE` |
| ogg | 48 | `4f676753` |
| flac | 6 | `664c6143` (`fLaC`) |

---

## 3. TEX texture format ✅ FULLY DECODED

`tex-format.md`. Self-describing chunked container embedded as one PKGV entry.

```
0x00  8B   "TEXV0005"          container magic + version
0x08  1B   0x00                separator
0x09  8B   "TEXI0001"          image-info section
0x11  ...  TEXI payload
...   1B   0x00
...   8B   "TEXB0003"/"TEXB0004"  body section (pixels + mip table)
```

~~**TEXI payload** (u32 fields starting at 0x12): `format`, `flags`, `alloc_width`, `alloc_height`, `orig_width`, `orig_height`, `field6` (likely mip count), `field7` (border color).~~

> **CORRECTION (2026-08-27) — the last two fields are not both unconditional.**
> Read out of the TEXI parser `0x14015c760` (reached from the TEX decoder, §5 row 3) and
> checked against **all 440 `.tex` files in this repository**:
>
> ```
> u32 format
> u32 flags
> u32 texWidth        u32 texHeight        <- GPU allocation (power-of-two padded)
> u32 imageWidth      u32 imageHeight      <- stored image
> u32 texDepth        ONLY IF (flags & 0x40)
> u32 borderColor     ONLY IF TEXI version > 0   (always, for TEXI0001)
> ```
>
> So the field the old table called `field6` (mip count) does not exist as such: normally
> there is exactly **one** more u32 after the four dimensions, and it is the ARGB colour.
> The extra u32 appears only under `flags & 0x40`.
>
> **`flags & 0x40` = 3D/volume texture, and `texDepth` is its depth.** All 28 files in this
> repository that set it are colour-grading LUTs (`lutx32_*.tex`, `flags=0x42`,
> tex 32x32, depth 32, image 1024x32) - a 32-cubed LUT flattened into a 1024x32 2D image.
>
> Consuming TEXI this way lands exactly on a valid `TEX?000N` tag in **440/440** files.
> Reproduce: `python3 scripts/verify_mdl_tex.py`. Detail:
> `analysis/reports/mdl-tex-decoders-2026-08-27.md` §3.3.
>
> Body-section census over the same 440 files: `TEXB0001` 42, `TEXB0002` 29,
> `TEXB0003` 242, `TEXB0004` 127 - **four** versions, not the two listed above. The engine
> compares only the 4-char tag (`_strnicmp(..., 4)`) and turns the 4 digits into a number
> with `atoi`, which is why only the `TEXB0004` literal exists in the binary. A fifth
> section tag, **`TEXS0003`**, exists and terminates the section loop.

**`format` enum** (size-math inferred):

| value | meaning |
|---:|---|
| 0 | PNG-embedded or DXT1 |
| 4 | BC7 / DXT5 |
| 7 | DXT1 |
| 8, 9 | R8 |

**⚠️ Waple impact**: `alloc_dim` (GPU-padded to power-of-two) differs from `orig_dim` (source). Hu Tao example: alloc=4096×4096, orig=3840×2160. Waple must allocate `alloc_dim` and place `orig_dim` content.

**Open question (needs dynamic confirmation)**: Non-PNG bodies are smaller than their DXT/R8 budget yet carry no LZ4 frame magic `04 22 4D 18` → likely per-mip LZ4 block compression (length-prefixed, no frame header). ~~The `flags` field (observed 0/2/4) and TEXI 0x22/0x26 need engine-side confirmation.~~

> **[2026-08-27] Partly discharged.** TEXI `0x22/0x26` is settled: they are the *stored image*
> dimensions, versus `0x1A/0x1E` for the GPU allocation (measured over 440 files - 72 differ,
> 44 of those have `tex >= image`, and the other 28 are the LUTs where the pair means
> something else entirely; see the correction above). `flags` observed values are wider than
> "0/2/4": `0,1,2,3,4,5,6,7,0x12,0x42,0x80000,0x80002,0x80004`, and bit 6 is now known
> (3D texture). **The compression question is still open** - but the entry point is no longer
> a guess: the body parser is `0x14015c8d0` and it is one of only two functions that
> reference `LZ4 error.` (VA `0x1404863f8`).

---

## 4. MDL mesh format ✅ DECODED

`mdl-format.md`. Bespoke binary (not FBX/OBJ). Chunk magics: `MDLV0016`/`0017`/`0019`/`0021`/`0023` (loader version), with sub-chunks `MDLA` (animation), `MDAT` (data), `MDMP` (map), `MDLE` (elements), `MDLS` (skeleton v4 with bone tags `gd`/`m `/`tf`/`ik`/`ikce`/`se`/`re`).

~~**Decompilation anchor**: `FUN_140261950` (RVA 0x260950, 8056 bytes)~~ — the MDL decoder main. References all five mesh chunk magics (MDAT/MDLA/MDLE/MDLS/MDMP). Heavy floating-point buffer processing ⇒ vertex decoding. **This is the canonical reference for Waple's MDL parser.**

> **CORRECTION (2026-08-26, measured against the pristine original).** Because of the
> defect in §6, this coordinate is stated **in displaced-corpus terms**. Three separate
> things are wrong with it:
>
> 1. **The real function start is `0x140261880`** (= corpus `0x140261950` − `0xD0`).
>    In the pristine original that address is a function start listed in `.pdata`, with a
>    normal prologue (`mov rax, rsp` / `mov [rax+8], rbx` / `mov [rax+0x18], r8`).
>    The corpus's `0x140261950` is **not** in the `.pdata` function-start list at all.
> 2. **"RVA 0x260950" is not an RVA.** It is a **section-relative offset** — the corpus VA
>    with both ImageBase and `.text`'s VA (`0x1000`) subtracted. The real RVA is
>    **`0x261880`**.
> 3. ~~**"8056 bytes" does not reproduce — left UNKNOWN.**~~ **RESOLVED (2026-08-27): one
>    function, 16,835 B.** That figure came from Ghidra sizing a function in the damaged
>    image. In the pristine original, `.pdata` records `0x261880`–`0x26238b` (**2,827 B**)
>    as one entry, **immediately followed by** `0x26238b`–`0x265a0c` (13,953 B). The
>    question "one function or two" is settled by the unwind chain, not by reloading:
>    that second entry and the four small ones after it (`0x265a0c`–`0x265a43`) all carry
>    `UNW_FLAG_CHAININFO`, and the `RUNTIME_FUNCTION` trailing each of their `UNWIND_INFO`
>    records points at **`(0x261880, 0x26238b, unwind 0x4be9b8)`** — the primary entry.
>    So `0x140261880` is **one function spanning `0x261880`–`0x265a43` = 16,835 B of
>    address range**; the regenerated corpus gives its Ghidra body as 16,832 B.
>    **"8056 bytes" is dead.** Detail: `analysis/reports/mdl-tex-decoders-2026-08-27.md` §1.1.
>
> ~~Do not cite this anchor as-is until the corpus is regenerated.~~ **[2026-08-27] 코퍼스는 재생성됐다(§6 RESOLVED).** 이 앵커를 새 코퍼스에서 다시 확인한 뒤 인용하라. If you must cite it, use
> `0x140261880` and give no size.

~~**Open question**: vertex-format flag word (`0x0900` vs `0x0f00`) gates vertex stride; `0x8000` hi-bit gates a puppet/bone-weight block. Per-bit attribute mapping and index width (u16 vs u32) need dump of engine `CModel`/`CPuppet` structs.~~

> ## ✅ RESOLVED (2026-08-27) — read out of `0x140261880`, no dynamic analysis needed
>
> Full write-up: **`analysis/reports/mdl-tex-decoders-2026-08-27.md`** §1.4–§1.8.
> Re-run everything with `python3 scripts/verify_mdl_tex.py` (exit 0 = all pass).
>
> **First, the question itself was built on a one-byte error.** `corpus_scan/mdl-format.md`
> treats the magic as exactly 8 bytes and starts fields at `0x08`. The engine reads the
> magic with `ReadCString` (`0x14009c500`), which **consumes the terminating NUL**, so the
> header is:
>
> ```
> 0x00  9B   "MDLV00NN\0"      magic + version (NUL-terminated, 9 bytes)
> 0x09  u32  formatFlag        vertex-attribute bitmask   <- one u32, not two u16
> 0x0D  u32  skinCount         material cstrings read per mesh
> 0x11  u32  meshCount
> ```
>
> (`0x1402618ba`–`0x140261913`.) `0x0900`/`0x0f00`/`0x8000` were never real values: the
> byte at `0x08` is the string's NUL. The real flags are `0x09`, `0x0b`, `0x0f`, `0x27`
> and — for puppets — `0x01800009`.
>
> **The per-bit mapping is a literal table in the binary.** The stride loop at
> `0x140261b10` reads two parallel `u32[26]` arrays by index:
>
> ```
> 140261b10  test dword ptr [r11 + rax*4 + 0x484a20], r10d   ; r11=ImageBase, r10d=formatFlag
> 140261b1a  add  ecx,  dword ptr [r11 + rax*4 + 0x4849b0]
> 140261b25  cmp  rax, 0x1a                                   ; 26 entries
> ```
>
> so `stride = Σ size[i] for all i where formatFlag & mask[i]`. Two more parallel arrays sit
> beside them: attribute names `char*[26] @ 0x140484a90` and a literal
> **`D3D11_INPUT_ELEMENT_DESC[26] @ 0x140482af0`**, which hands over the `DXGI_FORMAT` and
> `SemanticIndex` of every channel.
>
> | bit(s) | mask | size | attribute | semantic / DXGI |
> |---|---|---:|---|---|
> | 0 | `0x00000001` | 12 | `a_Position` | POSITION0 · R32G32B32_FLOAT |
> | 1 | `0x00000002` | 12 | `a_Normal` | NORMAL0 · R32G32B32_FLOAT |
> | 2 | `0x00000004` | 16 | `a_Tangent4` | TANGENT0 · R32G32B32A32_FLOAT |
> | 3/4/5 | `0x08`/`0x10`/`0x20` | 8/12/16 | `a_TexCoord[Vec3\|Vec4]` | TEXCOORD0 as float2/3/4 |
> | 6..14 | `0x40`…`0x4000` | 8/12/16 | `…C1`/`…C2`/`…C3` | TEXCOORD1/2/3 as float2/3/4 |
> | 15 | `0x00008000` | 16 | `a_Color` | COLOR0 · float4 (**always last**) |
> | 16 | `0x00010000` | 16 | `a_PositionVec4` | POSITION0 · float4 |
> | 17..22 | `0x20000`…`0x400000` | 8/12/16 | `…C4`/`…C5` | TEXCOORD4/5 as float2/3/4 |
> | 23 | `0x00800000` | 16 | `a_BlendIndices` | BLENDINDICES0 · **R32G32B32A32_UINT** |
> | 24 | `0x01000000` | 16 | `a_BlendWeights` | BLENDWEIGHT0 · float4 |
> | 25 | `0x02000000` | 12 | `a_PositionC1` | POSITION1 · float3 |
>
> Three self-checks pass: every `size[i]` equals the byte size of that entry's
> `DXGI_FORMAT` (26/26); every `SemanticIndex` matches the `C1`…`C5` suffix in the name;
> and OR-ing the 26 masks gives exactly `0x03FFFFFF`, so the top 6 bits contribute 0 (the
> loop never visits them).
>
> **Consequences for the old text.** `0x8000` is **`a_Color`**, not a puppet gate. Skinning
> is `0x00800000 | 0x01000000`, and those two are **channels inside the vertex stride**, not
> a trailing block: `mdl-format.md`'s puppet example `0x01800009` = pos3 + uv2 + blendIdx4 +
> blendW4 = **stride 52**. Channel offsets accumulate in **table-index order**, not bit
> order, so `a_BlendIndices` (idx 5) precedes `a_TexCoord` (idx 7) and `a_Color` is last.
>
> **Index width is u16.** The decoder hands the index blob on as pointer+length without
> deciding the element width, but the real assets do: across 28 `.mdl` / 45 meshes every
> `indexBlobLen % 6 == 0`, and **5 meshes have `indexBlobLen % 12 != 0`**, which rules out
> 32-bit indices. The smallest case is explicit — `audiophile/models/audiophile/glow.mdl`
> has 4 vertices and a 12-byte index blob reading `00 00 01 00 02 00 | 00 00 02 00 03 00`
> = u16 `0,1,2, 0,2,3`.
>
> **Whole-file check.** Implementing the framing above parses **28/28 `.mdl` files to
> exactly EOF** (0 bytes left over, 0 short) with `vertexBlobLen % stride == 0` in all 45
> meshes. Observed flags: `0x09`→20 (19 meshes), `0x0b`→32 (10), `0x0f`→48 (10),
> `0x27`→56 (6).
>
> **Waple already had this.** `/home/user/Waple/Sources/WapleCore/Model3D.swift`
> (`vertexLayoutTable`) and `Model3DFormat.swift` (version gates) carry the same 26 entries
> and the same gates; all 26 mask/size pairs match what this audit dumped, as do the version
> gates (AABB v≥17, per-mesh flag v≥15, trailer v≥21, sections v≥13, bone cap 128). **What
> is stale is this repository's `corpus_scan/mdl-format.md`, which §9 item 1 tells Waple to
> adopt as canonical — it has been corrected in the same pass.**

---

## 5. Subsystem identification — 9/9 CONFIRMED (verified by direct byte-search)

> **CORRECTION (2026-08-26) — the `@0x…` values in this section are file offsets, not VAs.**
>
> `@0x488040`, `@0x476eb8`, `@0x473e98`, `@0x485748`, `@0x48a06c` and the rest in the table
> below were copied straight out of `analysis/strings/*.txt`, whose own header states
> **`column 2: file offset`**. The `@0x` notation makes them read as VAs, but **they are
> not**. The strings themselves and the subsystem verdicts remain valid; only the
> coordinate notation is wrong.
>
> `analysis/extract_strings.py` reads the **pristine original** (`Z:\…\wallpaper64.exe`),
> so the dump offsets are relative to that file. To convert to a VA:
>
> ```
> VA = ImageBase + SectionVA + (file offset − section RawPtr)
> ```
>
> **The delta differs per section.** Measured for this binary:
>
> | Section | VA − RawPtr | Note |
> | --- | --- | --- |
> | `.text` | `+0xC00` | |
> | `.rdata` | `+0x1200` | most strings live here |
> | `.data` | `+0x2000` | RTTI coordinates (`0x4dfcb0` etc.) live here |
> | `.pdata` | `+0x8400` | |
> | `.rsrc` | `+0xAA00` | |
>
> Two checks: `DXGI device lost in render loop.` at file offset `0x488040` → VA
> **`0x140489240`**; `PLPV0005` at file offset `0x476eb8` → VA **`0x1404780b8`** (both
> confirmed against the original bytes). Do not apply `+0x1200` uniformly across sections —
> RTTI coordinates in `.data` need `+0x2000`.
>
> Note: this conversion does **not** involve the `0xD0` correction from §6. The dump being
> pristine-relative and the section `RawPtr` never having been updated are two errors that
> cancel exactly. Do not mix the two coordinate systems (dump file offset ↔ corpus VA).

| # | Subsystem | Verdict | Evidence (direct) |
|---|---|---|---|
| 1 | Package parser | ✅ | `PKGV` absent (0 hits, both encodings); real magics `PLPV0005`@0x476eb8, `SHDV0069`@0x485748, `MDLVS001`@0x483b80, `core_balloon_pkg_version_error`@0x473e98 |
| 2 | scene.json / project.json loader | ✅ | `project.json`@0x476e78; **RapidJSON UTF-16LE** `rapidjson\internal\p`@0x4756e6; jsoncpp `Json::Value`@0x477393 |
| 3 | TEX decoder | ✅ | `TEXV0005`/`TEXV0004`/`TEXI0001`/`TEXB0001..0004`/**`TEXS0003`**; `LZ4 error.`@0x4851f8 (VA `0x1404863f8`); ~~decoder `FUN_140261950`~~ → **`0x14015e580`** (re-adjudicated 2026-08-27, see the block below) |
| 4 | MDL decoder | ✅ | `MDLV0023`/`MDLA0006`/`MDAT0001`/`MDMP0001`/`MDLE0002`/`MDLS0004`; ~~`FUN_140261950`~~ **`0x140261880`** (corrected 2026-08-26, §4). **Confirmed 2026-08-27 by rip-relative xref scan of the pristine binary: all five MDL sub-chunk magics are referenced from this one function and nowhere else** (`0x140263970`/`0x1402655d7`/`0x1402656a6`/`0x1402658c2`/`0x1402624af`) |
| 5 | Particle system | ✅ | `ParticleVbo` RTTI; `emitParticles`; `showparticlecollision` |
| 6 | D3D11 render pipeline | ✅ | `d3d11.dll!D3D11CreateDevice` import; DXGI recovery strings `DXGI device lost in render loop.`@0x488040; `--disable-d3d11` fallback flag |
| 7 | Shader compiler/translator | ✅ | **GLSL→HLSL shim block statically embedded**: `#define vec2 float2`, `#define mix lerp`, `gl_FragColor`→`SV_Target`; `vs_5_0`/`ps_5_0`/`gs_5_0`; runtime `d3dcompiler_47.dll` load (NOT DXIL/SM6); `SHDV0069`/`SHTC0001` container |
| 8 | Audio reactivity | ✅ | WASAPI strings; `AudioProcessor`/`AudioEventHandler` classes; **FFTS UTF-16LE** `ffts\src\ffts_static`@0x48a06c |
| 9 | Per-wallpaper-type dispatch | ✅ | `WallpaperManager`/`VideoWallpaper`/`SceneWallpaper`/`CEFWallpaper`; `InterProcessMessageHandler` named-pipe IPC |


> ## ✅ Row 3 re-adjudicated (2026-08-27) — the TEX decoder is `0x14015e580`
>
> Full write-up: **`analysis/reports/mdl-tex-decoders-2026-08-27.md`** §3.
>
> **What was wrong.** Two things, not one. (a) The copy-paste suspicion was right — the row
> named the same coordinate as row 4, which was the *MDL* decoder. (b) That coordinate is
> also dead on its own terms: `0x140261950` is a function start neither in the regenerated
> corpus nor in the pristine `.pdata` primary set (§6).
>
> **The evidence for `0x14015e580`** (1,155 B, pristine-binary VA, same coordinate system as
> the regenerated corpus):
>
> 1. **Sole referent of every TEX magic.** Scanning all rip-relative operands in `.text` of
>    the pristine binary, `TEXV0005` (`0x14048b910`), `TEXV0004` (`0x14048b930`),
>    `TEXI0001` (`0x14048b900`), `TEXB0004` (`0x14048b8f0`) and `TEXS0003` (`0x14048b8e0`)
>    are referenced from this function and **no other**. (`0x1402787c0` touches `TEXV0005`
>    once more; it is the 536-byte twin of `0x1402785a0`, which does the same for
>    `MDLV0023` — those two write container magics, they do not parse.)
>    `evidence-index.tsv` agrees: `14015e580 … TEXB;TEXI;TEXV`.
> 2. **Its body is the container walker.** Validates `TEXV0005` with `memcmp(...,8)`, then
>    loops: read a NUL-terminated section tag, `atoi(tag+4)` for the version, and dispatch
>    on the **4-character prefix** via `_strnicmp(tag, "…", 4)` (`0x1402c9e60`) — TEXI to
>    `0x14015c760`, TEXB to `0x14015c8d0`, TEXS terminates the loop, anything else to
>    `0x14015e1d0`. A `TEXV0004` fallback calls the TEXI and TEXB parsers with version 0 and
>    no section tags.
> 3. **LZ4 sits exactly where it should.** `LZ4 error.` (VA `0x1404863f8`) is referenced by
>    only two functions, one of which is the TEXB body parser `0x14015c8d0` (at
>    `0x14015dd1f`). That is the "LZ4 reachable from the TEX decoder" claim, now with a path.
> 4. **Callers.** `0x1400ec220` and `0x14014d500`, both of which destroy the texture object
>    when it returns false.
> 5. **440/440 real files** parse through the TEXI layout this function's callee implements
>    (§3 correction).
>
> **On `Texture::ReadTextureData`** — `subsystems-identified.md` is right about the *name*
> and gives no *address*. The string at `.data` file offset `0x4e02c0` (VA `0x1404e22c0`) is
> a genuine MSVC TypeDescriptor, but for a **lambda declared inside** that method
> (`.?AV<lambda_1>@?BP@??ReadTextureData@Texture@@…`), and it is referenced **0 times** in
> the whole binary (0 as a 4-byte image-relative RVA, 0 as an 8-byte absolute) — exactly the
> §7 situation. **[미해결] Whether `0x14015e580` *is* `Texture::ReadTextureData` is unproven**,
> and there is one argument against: the mangled signature returns
> `RefBuffer<unsigned char>*` while `0x14015e580` returns a bool that both callers test with
> `!= 0`. It is more likely the container walker that `ReadTextureData` calls. **No name has
> been attached to the address.**


### GLSL→HLSL transpiler (high value for Waple)

A complete compatibility shim is **statically embedded** in the binary (UTF-16/ASCII region 0x485000–0x490000):
- Type aliases: `vec2`→`float2`, `vec3`→`float3`, `vec4`→`float4`, `mat4`→`float4x4`, `mat3`→`float3x3`
- Intrinsic remap: `mix`→`lerp`, `mod(x,y)`→`((x)-(y)*floor((x)/(y)))`
- GLSL builtins: `gl_FragColor`→`OUT.gl_FragColor`→`SV_Target`, `gl_Position`→`SV_Position`
- Cast macros: `CASTI/CASTU/CASTF/CAST2/CAST3/CAST4U/CAST4/CAST3X3`
- Samplers: `DECLARE_SAMPLER2D_PARAMETER`, `MAKE_SAMPLER2D_ARGUMENT`, `texSample2D`, `texSample2DLod`, `texSample2DCompare`, `texLoad2D`, `texSample3D`, `texSample2DBackBuffer`
- Defines: `#define HLSL 1`, `#define HLSL_SM40 1` (branches on SM4.0 vs SM5.0)
- Targets: `vs_4_0`, `ps_4_0`, `gs_4_0`, `vs_5_0`, `ps_5_0`, `gs_5_0`, `ps_4_1`
- **Waple reuses these for GLSL→MSL**: the same aliasing philosophy applies; replace the HLSL back-end targets with MSL (`float4`→`float4` already matches; `SV_Target`→`[[nodiscard]] ... [[color(N)]]`).

### Forward+ lighting uniforms (`g_L` prefix)
`g_LPoint_Origin[]`, `g_LPoint_Color[]`, `g_LSpot_Exponent/Direction/Origin/Color[]`, `g_LDirectional_Color/Direction[]`, `g_LTube_OriginA/B[]`, `g_LTube_Color[]`, shadow-projection uniforms. → point, spot, directional, tube lights + shadow maps.

---

## 6. Critical: DOS stub / Rich Header stripped — Ghidra MSVC recognition

**Verified**: All WE first-party binaries (`wallpaper*.exe`, `wallpaperui`, `webwallpaper`, `scenescript`, `wallpaperservice`, `resourcecompiler`) have `e_lfanew = 0x40` — **no DOS stub, no Rich Header**. This is a deliberate build-pipeline strip (likely PGO/LTCG post-processing). Third-party DLLs (`assimp-vc143-mt64.dll`, `d3dcompiler_47.dll`) keep normal Rich Headers.

**Consequence**: Ghidra's `PeLoader.CompilerOpinion` cannot detect MSVC without the Rich Header → RTTI analyzer refused with "only valid for Visual Studio windows PE".

~~**Fix applied** (`scripts/inject_rich_header.py`): copy the DOS-stub+Rich-Header block from `assimp-vc143-mt64.dll`, place it in front of the PE header, patch `e_lfanew` from 0x40 → 0x110. PE body is byte-identical. After injection, Ghidra ran `Windows x86 PE RTTI Analyzer` and `Windows x86 PE Exception Handling` successfully.~~

~~**Waple note**: If Waple's team re-runs Ghidra on any WE binary, this injection is mandatory and reproducible.~~

> ## ⚠️ CORRECTION (2026-08-26) — this "fix" contaminated the entire corpus
>
> **"PE body is byte-identical" was the trap.** The byte sequence was indeed identical, but
> its **position within the file** moved back by `0x110 − 0x40 = 0xD0`, and **not one
> section header's `PointerToRawData` was updated** to match. The output is therefore a PE
> whose section table points `0xD0` *before* the real body, and Ghidra disassembled bytes
> displaced by `0xD0` in every section.
>
> **Measured evidence** (parsing `binaries/wallpaper64.exe` directly):
>
> - `binaries/wallpaper64.exe` and `binaries/wallpaper64_rich.exe` are **MD5-identical**
>   (`263677f0891626089b3553dcf52018ac`) — the injected output overwrote the copy in
>   `binaries/`.
> - The section table says `.text RawPtr = 0x400`, but file offset `0x400` is **zero
>   padding**; the real code starts at **`0x4D0`** (`48 83 ec 28` = `sub rsp,0x28`).
> - Parsing `.pdata` at the offset the header states yields **0** entries inside `.text`;
>   parsing at `+0xD0` yields **14,792 (= 100%)**.
> - Further file-offset fields are stale by the same `0xD0`: `SizeOfHeaders`,
>   `IMAGE_DIRECTORY_ENTRY_SECURITY` (that field is a file offset, not an RVA), and the
>   `PointerToRawData` of all 3 `IMAGE_DEBUG_DIRECTORY` entries.
>
> **Consequence — the 11,252-function corpus in `analysis/decompiled/all/` is invalid.**
> An address the corpus calls `X` actually holds the content of `X − 0xD0`. Measured
> against the 14,792 real function starts in `.pdata` as ground truth:
>
> ```
> corpus address as-is    matched     86 / 11,252   ( 0.76%)
> corpus address + 0xD0   matched    145 / 11,252   ( 1.29%)
> corpus address − 0xD0   matched  3,290 / 11,252   (29.24%)   <- correct direction
> ```
>
> The residual 71% is not a different shift — it is **phantom function boundaries invented
> by disassembling displaced bytes**. So **the corpus cannot be salvaged by arithmetic; it
> must be regenerated.**
>
> **The input for regeneration is already here.** Only the `binaries/` copy was overwritten:
> `wallpaper_engine/wallpaper64.exe` and `wallpaper_engine/distribution/wallpaper64.exe`
> are both pristine originals at **5,360,112 B, MD5 `438cb215f20a8f6c38f57fbc3d9da588`**.
>
> **`scripts/inject_rich_header.py` was fixed on 2026-08-26** — it now shifts the section
> `PointerToRawData`, `SizeOfHeaders`, SECURITY and DEBUG offsets by the same amount the
> stub adds, and self-checks its output. The hardcoded personal absolute paths were also
> replaced with CLI arguments.
>
> ```
> python3 scripts/inject_rich_header.py \
>     --target wallpaper_engine/wallpaper64.exe \
>     --donor  wallpaper_engine/bin/assimp-vc143-mt64.dll \
>     --out    binaries/wallpaper64_rich.exe
> python3 scripts/inject_rich_header.py --verify-only <file>   # consistency check only
> ```
>
> **Waple note (updated)**: when re-running Ghidra, use a file rebuilt from a **pristine
> original** with the **fixed script**. Do not feed it `binaries/wallpaper64.exe`, which is
> the damaged copy. Every coordinate cited in this document in `FUN_…` form is stated in
> old-corpus terms; do not trust any of them until the corpus is regenerated.

> ## ✅ RESOLVED (2026-08-27) — the corpus was regenerated
>
> Ghidra **12.1.2 PUBLIC build 20260605** (the version `docker/Dockerfile.re` pins) on JDK 21,
> fed `binaries/wallpaper64_rich.exe` rebuilt from the pristine original with the fixed
> script (md5 `5c7114bd…`, self-check `.pdata` 14,792/14,792). Analysis 381 s, no timeout.
>
> **The oracle above was wrong, and this is the correction that matters most.** The 14,792
> `.pdata` entries are **not** 14,792 functions: **7,968 of them carry `UNW_FLAG_CHAININFO`**
> and are additional fragments of a function already listed. The real count of primary
> function starts is **6,824**. Measuring a corpus against 14,792 understates it by half —
> that mistake was made once during this regeneration and caught by the unwind census.
>
> Against the corrected oracle (6,824 primary starts):
>
> ```
>                        as-is      +0xD0     −0xD0
>   damaged  (11,252)     1.26%      2.01%    48.21%
>   regenerated (7,748) 100.00%      4.85%     4.65%
> ```
>
> **Every primary function is present: 6,824 / 6,824.** No shift is needed any more and
> `±0xD0` has fallen to noise. The 924 corpus entries outside the primary set overlap the
> chained fragments in **0** cases and are absent from `.pdata` altogether — leaf functions
> and thunks that need no unwind data. A 400-address capstone sample decodes 16 consecutive
> instructions without a break at **400/400**.
>
> **Concrete cross-check.** `0x140261880` — the corrected MDL decoder start from §4 — is
> present both in the regenerated corpus and in the primary `.pdata` set, while the old
> displaced coordinate `0x140261950` exists as no function start at all. The 2026-08-26
> correction is confirmed independently.
>
> So the sentence above — *"do not trust any of them until the corpus is regenerated"* —
> is now discharged **for coordinates re-derived from the new corpus**. It still stands for
> every `FUN_…` string left in this document that has not been re-checked against it:
> those were written in old-corpus terms and are individually stale until re-read.
>
> ### Two defects found while doing this — read before re-running
>
> 1. **`DecompileAll.java` never clears its output directory** (`:48` is `mkdirs()` only).
>    Run it over an existing `analysis/decompiled/all/` and the old files survive alongside
>    the new ones. With the damaged corpus that would have left ~11,000 phantom functions
>    in place (the address sets overlap by only 1.26%). **Clear `all/` before every run.**
> 2. ~~**`inject_rich_header.py` breaks `FileAlignment`.**~~ → **FIXED, same day.** It shifted
>    file offsets by the stub length (`0xD0`), but the PE format requires every
>    `PointerToRawData` to be a multiple of `FileAlignment` — `0x200` here — so the output
>    violated alignment in **8 of 8 sections** while the pristine original satisfies 8/8.
>    The stub is now padded to a `FileAlignment` multiple (`0xD0` → `0x200`, `e_lfanew`
>    `0x40` → `0x240`). Zero padding between the Rich Header and the PE signature is what
>    MSVC emits anyway, so widening the gap is faithful rather than a hack.
>
>    **The self-check passing its own broken output is the sharper lesson.** `verify()`
>    looked only at *content* — is `.text` zero padding, does `.pdata` land inside `.text` —
>    and never at *structure*, so an 8/8-violating file printed "passed". It now checks
>    alignment too: the pristine original scores 8/8 and the old injected file 0/8.
>
>    **Regenerating from the aligned build changed effectively nothing, and that is measured,
>    not assumed.** Same 7,748 functions, same 6,824/6,824 primary-start match, and
>    **7,747 of the 7,748 decompiled files are byte-identical** to the misaligned build.
>    The single file that differs, `FUN_1402ed040`, references PE header structures ~160
>    times — the region the padding moved. Its `Unable to read bytes at ram:143020103`
>    warning appears in **both** builds, so the difference is in symbol/type resolution over
>    the header area, not a repair of that warning.
>
>    The violation was first *suspected* as the cause of an apparent coverage shortfall.
>    That hypothesis was measured and rejected — analysing the pristine binary directly
>    yields **7,702** functions against the injected file's **7,748**. It was fixed on its
>    own merits, not because it explained anything.

---

## 7. RTTI limitations

**Verified**: Only 11 standard TypeDescriptors exist (`.?AVtype_info@@`, `.?AUIUnknown@@`, IDWrite interfaces) — these are from linked libraries. The class-name strings Agent A found (`SceneWallpaper`, `VideoWallpaper`, etc.) are **lambda-closure / `type_info::name()` debug strings**, NOT RTTI TypeDescriptors. The TDs that exist are referenced **0 times** in the binary.

**Conclusion**: Wallpaper Engine is built with **standard RTTI vtables stripped** (likely `/GR-` or a post-build strip). Virtual function → class mapping cannot be auto-recovered via RTTI. Function identification must use:
1. Reference-based evidence index (`evidence-index.tsv`): 2,538 functions reference class-name debug strings.
2. Decompilation body content (RTTI string xrefs, magic refs, API calls).
3. Dynamic analysis (instrument the live engine) for definitive mapping.

---

## 8. Deliverables index (this audit)

```
<REPO>\                                     <- repository root (was a personal absolute path; substituted 2026-08-26)
├── WE-ENGINE-ANALYSIS-2026-07-27.md        ← this file (start here)
├── binaries\                                ← working copies (not originals; 56 MB)
│   ├── wallpaper64.exe                       ✅ restored 2026-08-27: md5 438cb215f20a8f6c38f57fbc3d9da588 = pristine
│   ├── wallpaper64_rich.exe                  ✅ rebuilt with the fixed injector (md5 0705a76c632314519220136b36b56290)
│   │                                          -> the Ghidra input; pristine original is wallpaper_engine\wallpaper64.exe
│   ├── wallpaper32.exe / wallpaperui.exe / scenescript64.dll / webwallpaper64.exe
├── docker\Dockerfile.re                     ← reproducible RE env (Ubuntu+Ghidra 12.1.2+JDK21+radare2)
├── scripts\                                  ← all RE/instrumentation tools (160 KB)
│   ├── inject_rich_header.py                 ← MANDATORY pre-Ghidra: fixes MSVC recognition
│   │                                            (fixed 2026-08-26: corrects section file offsets; CLI arguments)
│   ├── ghidra_analyze.sh                     ← import+analyze pipeline
│   ├── DecompileAll.java                     ← full-function decompiler
│   ├── BuildEvidenceIndex.java               ← RTTI/magic/API xref per function
│   ├── DecompileTargets.java / FunctionStats.java
│   ├── TraceRttiVtables.py / TraceRttiVtables2.py / MapRttiReferences.py  ← RTTI trace (hit §7 limit)
│   ├── verify_mdl_tex.py                     ← NEW 2026-08-27: dumps the vertex-attribute
│   │                                            tables out of the pristine binary and
│   │                                            re-validates MDL/TEX framing on the 28 .mdl
│   │                                            + 440 .tex assets in this repo (exit 0 = pass)
│   └── hook_d3d11_*.js, identify_device_vtable.js, diag.js  ← frida dynamic (§10)
├── analysis\                                  ← 48 MB
│   ├── pe-structure.{json,md}                ← PE facts (§1)
│   ├── reports\
│   │   ├── entry-point.md
│   │   ├── subsystems-identified.md          ← 9/9 subsystem detail (§5)
│   │   └── mdl-tex-decoders-2026-08-27.md    ← NEW: MDL 0x140261880 + TEX 0x14015e580
│   │                                            close-read; vertex-format table; TEXI fix
│   ├── strings\*.txt                          ← categorized string dump (8 themed files)
│   ├── decompiled\
│   │   ├── all\ (7,748 .c files, 45 MB)       ← full C pseudocode, regenerated 2026-08-27 (§6)
│   │   ├── manifest.json                      ← function index
│   │   ├── evidence-index.tsv                 ← RTTI/magic/API per function (§7)
│   │   └── xref-index.tsv
│   ├── rtti-vtables.json / rtti-references.json
│   └── d3d_*.log, diag.log                    ← dynamic analysis captures (§10)
├── corpus_scan\                              ← PKGV/TEX/MDL/schema decoded (§§2-4)
│   ├── pkgv_parse.py / pkgv_census.py        ← reference parser + corpus walker
│   ├── tex-format.md / mdl-format.md         ← chunk format specs
│   ├── scene-json-schema.md / project-json-schema.md
│   ├── chunk-type-census.md
│   ├── entry-name-frequency.tsv (11,338 paths)
│   ├── scenes-index.tsv (446 scenes classified)
│   └── parse-errors.tsv (empty — 0 errors across 19,777 chunks)
└── ghidra_proj\                              ← reusable Ghidra project (38 MB)
    └── we_analysis.gpr / we_analysis.rep     ← re-open in Ghidra GUI for interactive work
```

---

## 9. Consolidated action plan for Waple

Ranked by Waple-defect impact × ease. Items 1-3 use only the static artifacts already in hand; 4-5 require resuming dynamic analysis (§10).

### Tier 1 — apply static artifacts now (no Windows host needed)

1. **Adopt `corpus_scan/*.md` as canonical format specs.** PKGV/TEX/MDL/JSON are corpus-verified to 446 scenes with 0 parse errors. Replace any spec-by-guessing in Waple's parsers.
   - **⚠️ Read this before item 1 (2026-08-27):** `mdl-format.md` and `tex-format.md` both
     carried decoder-contradicted layouts and were corrected in this pass —
     `mdl-format.md` had every header field off by one byte (the magic is a NUL-terminated
     cstring, not 8 raw bytes), and `tex-format.md` made a conditional TEXI field
     unconditional. **Waple's own parser was already right on both counts**; the specs were
     the stale artefact. See `analysis/reports/mdl-tex-decoders-2026-08-27.md`.
   - **PKGV gotcha** (§2): the 4 ASCII digits after `PKGV` are a per-file serial, not a version. The `entry_count` field at offset 0x0c is authoritative. Fix Waple's parser if it gates on the suffix.
   - **TEX gotcha** (§3): `alloc_width/height` (GPU-padded power-of-two) ≠ `orig_width/height` (source). Allocate `alloc_dim`, place `orig_dim` content.

2. **Port the §5 GLSL→HLSL shim to GLSL→MSL.** The aliasing philosophy (`vec2`→`float4`, `mix`→`lerp`, `gl_FragColor`→output) transfers directly; MSL shares HLSL's `float4`/`SamplerState` vocabulary. This is the highest-leverage fix for Waple's compile-rate deficit cases.

3. ~~**Pin MDL decoder against `FUN_140261950` (RVA 0x260950).** Read its decompilation in `analysis/decompiled/all/0000000140261950__FUN_140261950.c` and match Waple's MDL parser field-by-field.~~ **CORRECTION (2026-08-26): do not run this step as written.** That `.c` file is a displaced-corpus artifact, so its contents are not the real function (§6). ~~**UPDATE (2026-08-27): the corpus has been regenerated, so this step is now runnable as written below.**~~ **DONE (2026-08-27).** `analysis/decompiled/all/0000000140261880__FUN_140261880.c` was read end-to-end and matched field-by-field against Waple's parser (`Sources/WapleCore/Model3DFormat.swift`, `Model3D.swift`). **The vertex-format-flag question (§4) is fully resolved**, not "for most cases": the per-bit mapping is a 26-entry table in `.rdata` and all 26 mask/size pairs agree with Waple's `vertexLayoutTable`, as do all six version gates and the 128-bone cap. **Nothing to change on Waple's side was found.** What did need changing was `corpus_scan/mdl-format.md` (see item 1). Report: `analysis/reports/mdl-tex-decoders-2026-08-27.md`.

4. **Drive the 12 defect clusters from `evidence-index.tsv`.** For each cluster's class name (e.g. `SceneWallpaper`, `MaterialSystem`), grep the evidence index → get the functions that reference it → read those decompilations. This is how to convert `FUN_*` pseudocode into role-identified engine logic without RTTI.

### Tier 2 — resume dynamic analysis on the Windows host (§10)

5. **Capture TEX→DXGI format mapping** (resolves §3 open question): resume from `scripts/identify_device_vtable.js` to name the `CreateTexture2D` vtable slot, then hook it during a wallpaper switch. One capture run yields the full `format` enum → DXGI table.
   - **[2026-08-27] A static route may now be shorter.** The TEX body parser is pinned at
     `0x14015c8d0` (§5 row 3) and the MDL decoder's vertex table turned out to be a literal
     `D3D11_INPUT_ELEMENT_DESC[26]` in `.rdata` (§4). If the texture path keeps its
     `DXGI_FORMAT` table the same way, reading `0x14015c8d0` statically would settle both the
     `format` enum and the per-mip compression question without a Windows host. **Not
     attempted — `0x14015c8d0` (6,388 B) was not read in this pass.**

6. ~~**Optional: dump MDL vertex format live** — `Interceptor.attach(ptr(wallpaper32_base).add(0x260950), ...)` on the running process to log `vertex_format_lo` and bone-block presence per mesh. Definitively closes §4.~~

   > **CORRECTION (2026-08-26) — this one line contains at least two errors plus one
   > UNKNOWN.**
   > - **Wrong base.** `0x260950` came out of `wallpaper64.exe` analysis, yet it is being
   >   added to `wallpaper32_base` — a separate 32-bit binary. The two differ even in size
   >   (5,360,112 B vs 4,303,856 B).
   > - **Wrong offset.** Per the §4 correction, `0x260950` is a displaced-corpus coordinate
   >   with `.text`'s VA subtracted a second time. The true RVA in `wallpaper64.exe` is
   >   **`0x261880`**, so for a 64-bit process the candidate is
   >   `ptr(wallpaper64_base).add(0x261880)`.
   > - **UNKNOWN:** where the corresponding function lives inside `wallpaper32.exe` **could
   >   not be established in this repository**. The 32-bit image has a completely different
   >   layout, so a 64-bit RVA cannot be carried across; that needs separate analysis.
   >   Left unresolved rather than inventing a number.

### What this audit does NOT solve (and why)

- **Function→class auto-mapping**: WE strips standard RTTI (`/GR-`, §7). There is no automated path; only dynamic instrumentation or manual decompilation reading works.
- **The 16 individual effect-defect cases** in Waple's audit: those need per-effect decompilation of the relevant `shaders/effects/*` GLSL plus the effect-dispatch function — out of scope for a single audit pass, but the evidence index makes each one tractable.

---

## 10. Dynamic analysis — frida D3D11 instrumentation (partial)

A frida-based dynamic instrumentation pass was attempted to resolve the §7 RTTI limitation and the §3 TEX→DXGI compression question by observing the live engine. **Status: partial — device context located and render loop confirmed; full method identification incomplete.**

### What was confirmed at runtime

- **Process**: Steam launches `wallpaper32.exe` (32-bit) rather than `wallpaper64.exe` on this host (`autostartx64:true` set, but Steam picks 32-bit). Engine logic is identical; analysis applies to Waple.
- **Modules loaded** (PID 59240, post-init):
  - `wallpaper32.exe @ 0xb50000` (size 0x421000)
  - `d3d11.dll @ 0x63a40000` (size 0x1eb000)
  - `dxgi.dll @ 0x63930000` (size 0x10b000)
- **`D3D11CreateDevice` is called exactly once at process start** — confirmed by 50s late-attach producing zero new device creations. The device is reused across wallpaper switches. To capture device creation, a start-of-process spawn is required (which crashes outside Steam's runtime context — see §10 limitations).
- **Device recovery state machine active**: earlier static strings (`DXGI device lost in render loop.`@0x488040, `DXGI begin recovery.`@0x488160) confirmed at runtime — the recovery path is real, not dead code.

### Heap scan → ID3D11DeviceContext vtable recovered

Fast scan of 729 RW memory ranges found 2,677 d3d11-COM-object pointers across **140 unique vtables**. The strongest device/context candidate by "consecutive d3d11.dll-function slots" (50 slots) is at `vt@0x63a45104`. Slot disassembly:

```
DEVICE/CONTEXT vtable @ 0x63a45104 (d3d11.dll)
  [0]  +0x2c340   mov edi,edi | push ebp | mov ebp,esp      (IUnknown::QueryInterface, hotpatch prologue)
  [1]  +0x2c9c0   mov edi,edi | push ebp | mov ebp,esp      (AddRef)
  [2]  +0x32680   mov edi,edi | push ebp | mov ebp,esp      (Release)
  [3-11] standard prologues (real method bodies)
  [12] +0x9d890   mov al,1 | ret                            (stub returning TRUE — likely IsAnnotationEnabled or similar caps query)
  [13-20] sub [esp+4],X | jmp <addr>                        (forwarding thunks to other vtables — multi-interface forwarding)
  [21-22] standard prologues
  [23-28] forwarding thunks
  [29-39] mixed real bodies + thunks
```

**Empirical call-count probe over 12s of live rendering:**
- Slot 8: **2,300 calls** (high-frequency — this is the per-frame render entry, likely `PSSetShaderResources` or a Set* in the main draw loop)
- Slots 3-7, 9-11: 0 calls during the window (likely Create* methods, which fire only on resource allocation, not per-frame)

### Interpretation for Waple

- The recovered vtable is **`ID3D11DeviceContext`** (not `ID3D11Device`): the high-frequency slot-8 + presence of multi-interface forwarding thunks matches the Context shape. Device's own vtable (with CreateTexture2D/CreateBuffer) is a separate object that was not isolated in this pass.
- **Render loop confirmed**: thousands of context calls per few seconds means the engine runs a steady per-frame pipeline — Waple's Metal renderer should expect the same call density.
- The forwarding-thunk pattern (slots 13-20, 23-28) indicates d3d11.dll exposes multiple interface versions (ID3D11DeviceContext → ID3D11DeviceContext1/2/3/4) via `[esp+4]` adjustment thunks — relevant if Waple needs to mirror the vtable shape, but not for behavior.

### Limitations hit (and how to resume)

1. **vtable slot→method mapping incomplete**: slot 8 is high-frequency but not yet definitively named (DrawIndexed vs PSSetShader vs PSSetShaderResources). Resolution path: probe args[1] dtype at each slot (Draw takes indexCount u32; PSSetShader takes a pointer; SRV takes an array). The `identify_device_vtable.js` script is armed for this; needs one more run with arg-type capture.
2. **`D3D11CreateDevice` not captured**: device creation happens at process start; late-attach misses it. Resolution path: spawn `wallpaper64.exe` with Steam runtime env (`SteamPath`, `SteamAppId=431960`, `SteamUser=...`) injected so the process doesn't crash on missing Steam API. `hook_d3d11_v17.js` is ready and correct once spawn is stable.
3. **No CreateTexture2D captured yet** → TEX→DXGI format mapping (the §3 open question) is not yet dynamically confirmed. This is the single highest-value remaining dynamic target.
4. **frida-attach/detach cycles destabilize the process** — repeated attaches crashed wallpaper32.exe; Steam auto-restarts it but interrupts long captures. For production dynamic work, a single long-running frida session (or WinDbg) is preferable.

### Dynamic analysis artifacts

```
scripts/
  hook_d3d11_v17.js            — D3D11CreateDevice + device vtable hook (frida 17 API; correct)
  hook_d3d11_late_attach.js    — heap-scan late attach (first attempt)
  hook_d3d11_scan.js           — fast scan + device vtable hook
  identify_device_vtable.js    — slot disasm + call-count probe ← resume here
  diag.js                      — module/range diagnostic
analysis/
  d3d_spawn.log                — spawn attempt (device feature levels captured: 11_1/11_0/10_1/10_0)
  d3d_scan.log                 — 1927 COM candidates, vtable dumps
  d3d_identify2.log            — slot disasm + call counts (the §10 evidence)
  diag.log                     — module map
```

The concrete resume steps live in **§9 Tier 2** (items 5-6) to keep the action plan in one place.

---

## Appendix A — Quickstart reproduction

All commands run from the repository root. Git Bash on Windows; Python via `py` (3.14); Docker via Docker Desktop's Windows-side CLI.

> **CORRECTION (2026-08-26).** The original text hardcoded the author's personal absolute
> path (`C:\Users\<account>\Desktop\wallpaper_source\`), exposing an account name in the
> repository. It has been replaced with `$REPO` below — set it to the absolute path of the
> repository root.
>
> ```bash
> REPO="$(pwd)"     # or a Windows path: REPO='C:\path\to\wallpaper_source'
> ```

### A.1 Rebuild the RE environment from scratch
```bash
cd docker
docker build -f Dockerfile.re -t we-re:latest .
```

### A.2 Re-run Ghidra analysis on wallpaper64.exe (with Rich Header injection)

> **⚠️ CORRECTION (2026-08-26) — the original procedure is what damaged this repository.**
> It read:
>
> ```bash
> py scripts/inject_rich_header.py                          # hardcoded personal paths; offsets not corrected
> cp binaries/wallpaper64_rich.exe binaries/wallpaper64.exe  # <- overwrote the pristine original
> ```
>
> That single `cp` replaced the clean copy in `binaries/` with the injected output (which
> is why the two files share an MD5), and because the script never updated the section
> offsets, every corpus Ghidra produced afterwards was displaced (§6).
> **Never reproduce this sequence.**

```bash
# 1. Inject the Rich Header - from a pristine original, into a separate file (never overwrite)
py scripts/inject_rich_header.py \
    --target wallpaper_engine/wallpaper64.exe \
    --donor  wallpaper_engine/bin/assimp-vc143-mt64.dll \
    --out    binaries/wallpaper64_rich.exe

# 2. Self-check the output (is .text zero padding? is .pdata 100%?)
py scripts/inject_rich_header.py --verify-only binaries/wallpaper64_rich.exe

# 3. Import + auto-analyze - always feed it _rich.exe
MSYS_NO_PATHCONV=1 MSYS2_ARG_CONV_EXCL='*' docker run --rm \
  -v "$REPO:/work" \
  we-re:latest bash /work/scripts/ghidra_analyze.sh /work/binaries/wallpaper64_rich.exe
```

### A.3 Regenerate the full decompilation + evidence index

> **⚠️ Clear `analysis/decompiled/all/` first — `DecompileAll.java` does not.** It only
> calls `mkdirs()` (`:48`), so anything already in that directory survives the run and is
> silently mixed into the "regenerated" corpus. Skipping this step during the 2026-08-27
> regeneration would have left ~11,000 phantom functions in place: the damaged and real
> address sets overlap by only 1.26%, so almost nothing would have been overwritten.

```bash
rm -rf analysis/decompiled/all && mkdir -p analysis/decompiled/all   # <- mandatory

MSYS_NO_PATHCONV=1 MSYS2_ARG_CONV_EXCL='*' docker run --rm \
  -v "$REPO:/work" \
  we-re:latest /opt/ghidra/support/analyzeHeadless \
    /work/ghidra_proj we_analysis -process wallpaper64_rich.exe -noanalysis \
    -scriptPath /work/scripts \
    -postScript DecompileAll.java \
    -postScript BuildEvidenceIndex.java
```

Verify the output against `.pdata` before trusting it. **The oracle is the 6,824 primary
function starts, not the 14,792 `.pdata` entries** — 7,968 entries carry
`UNW_FLAG_CHAININFO` and are fragments of functions already counted (§6). The 2026-08-27
run scored 6,824/6,824 (100%) with no shift.

### A.4 Re-scan the scene.pkg corpus
```bash
cd corpus_scan
py pkgv_census.py        # regenerates entry-name-frequency.tsv, scenes-index.tsv, chunk-type-census.md
```

### A.5 Resume dynamic analysis (§10)
```bash
# Get the live wallpaper32 PID (Steam-managed)
P32=$(powershell.exe -Command "(Get-Process wallpaper32 -ErrorAction SilentlyContinue).Id" | tr -d '\r\n ')

# Attach + identify vtable slots (resume point for TEX→DXGI capture)
MSYS_NO_PATHCONV=1 MSYS2_ARG_CONV_EXCL='*' \
  frida -p $P32 -l scripts/identify_device_vtable.js \
  -o analysis/d3d_resume.log
```

### A.6 Open the Ghidra project interactively (GUI)
The project at `ghidra_proj/we_analysis.gpr` opens directly in Ghidra 12.1.2 GUI for interactive exploration — useful for tracing specific functions found via the evidence index.

### A.7 Re-validate the MDL / TEX decoder findings (§3, §4, §5 row 3)

```bash
python3 scripts/verify_mdl_tex.py       # from the repo root; exit code 0 = everything passed
```

Reads the **pristine** original (`wallpaper_engine/wallpaper64.exe`) — no Ghidra, no
Rich-Header injection — and:

- dumps the four parallel 26-entry vertex-attribute tables (`0x140484a20` masks,
  `0x1404849b0` sizes, `0x140484a90` names, `0x140482af0`
  `D3D11_INPUT_ELEMENT_DESC`) and checks every `size[i]` against its `DXGI_FORMAT`;
- re-parses the 28 `.mdl` assets in `wallpaper_engine/projects/defaultprojects/`
  (45 meshes) and asserts each lands on exactly EOF with
  `vertexBlobLen % stride == 0` and u16-sized index blobs;
- re-parses all 440 `.tex` assets and asserts the corrected TEXI framing lands on a
  valid `TEX?000N` tag every time.

---

*End of audit. For questions on a specific subsystem, start at §5 and follow the cited offsets into `analysis/decompiled/all/` or `corpus_scan/`.*
