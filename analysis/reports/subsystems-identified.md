# Subsystem Identification Report — `wallpaper64.exe`

**Target**: `Z:\SteamLibrary\steamapps\common\wallpaper_engine\wallpaper64.exe` (5,360,112 bytes, PE32+ x64 GUI, built 2026-06-29 14:37 UTC)
**Method**: Static analysis only (no disassembler). All evidence = PE imports + extracted strings. Offsets are **file offsets** in the binary unless noted RVA/VA.
**Verdict legend**: **CONFIRMED** (direct, unambiguous evidence) · **LIKELY** (strong but indirect) · **UNKNOWN** (no/insufficient evidence).

> ~~**Important**: This report supersedes an earlier `subsystems-identified.md` from a prior session. The prior version contained several fabricated evidence claims that did not exist in the binary (notably: `D:\dev\we\windows\src\...` source-path leaks, RapidJSON attribution, FFTS library, and inflated RTTI offsets). Every claim below was **re-verified by direct byte search** against the binary; the verification script is `analysis/_verify_strings.py` and the full evidence dump is `analysis/_evidence_dump.txt`. Where evidence could not be reproduced, the claim has been removed or downgraded to UNKNOWN.~~

> **CORRECTION (2026-08-26) — the "fabricated evidence" retraction above is itself wrong. It is withdrawn in full.**
>
> That retraction was the product of an **ASCII-only search**. The strings in question
> are present in the binary **as UTF-16LE**. Direct byte search of `wallpaper64.exe`
> (5,360,112 B, MD5 `438cb215f20a8f6c38f57fbc3d9da588`):
>
> | Pattern | ASCII | UTF-16LE |
> | --- | ---: | ---: |
> | `D:\dev\we` | 0 | **19** |
> | `rapidjson` | 0 | **7** |
> | `ffts` | 0 | **2** (two occurrences inside one string) |
> | `json_value.cpp` | 0 | **1** |
> | `glm` | 0 | **7** |
> | `N == 32` | 0 | **1** |
>
> Worse: that evidence **was already dumped inside this repository**. Lines 695–825 of
> `analysis/strings/strings-utf16.txt` contain exactly **19** `D:\dev\we\...` paths. The
> verification script did not merely search ASCII only — it did not consult the UTF-16
> dump sitting in the same directory.
>
> **Accordingly the "fabricated" verdict on the following three items is void, and the
> original claims stand:**
>
> - **Source-path leaks — CONFIRMED.** All 19 exist (offsets are file offsets, per this
>   document's stated convention):
>   `rapidjson` headers, 7 (`pow10.h`@0x4756a0 · `reader.h`@0x475f60 ·
>   `internal/stack.h`@0x476000 · `encodings.h`@0x4762f0 · `stream.h`@0x4763a0 ·
>   `document.h`@0x4881d0 · `allocators.h`@0x488330);
>   `glm`, 7 (`type_vec4.inl`@0x476b20 · `type_vec3.inl`@0x476bf0 ·
>   `type_mat4x4.inl`@0x476c70 · `matrix_access.inl`@0x4857d0 ·
>   `type_mat3x3.inl`@0x485850 · `type_vec2.inl`@0x48db80 · `quaternion.inl`@0x48fe80);
>   jsoncpp, 3 (`json_value.cpp`@0x477440 · `json_writer.cpp`@0x4776a0 ·
>   `json_reader.cpp`@0x483f00); `ffts_static.c`@0x48a040;
>   `videowallpaper.cpp`@0x487370.
> - **RapidJSON attribution — CONFIRMED.** The seven header paths above are direct
>   evidence. Note it **coexists with jsoncpp** (`Json::Value` twice in ASCII, plus the
>   three `json_*.cpp` paths): WE vendors both JSON libraries under `src\json\`. The
>   summary table's row 2, which named jsoncpp alone, was incomplete.
> - **Statically-linked FFTS — CONFIRMED.** `D:\dev\we\windows\src\ffts\src\ffts_static.c`
>   @0x48a040 is immediately followed at @0x48a0a0 by the assertion expression
>   `N == 32` — the classic (filename, expression) pair of `assert(N == 32)`. See §8.
>
> **One item that cannot be adjudicated:** the "inflated RTTI offsets" claim is left
> **UNKNOWN**. The prior version is not in the repository, so there is nothing to compare
> against. Note also that the two artifacts this preamble cites as its basis —
> `analysis/_verify_strings.py` and `analysis/_evidence_dump.txt` — **do not exist in the
> repository**, so the verification itself cannot be audited.
>
> **This mistake had already been warned about.** Pitfall 1 of "Two pitfalls" in
> `WE-ENGINE-ANALYSIS-2026-07-27.md` §0 describes exactly this trap — *"WE embeds many
> telltale strings (library names, source paths) as **UTF-16LE** … An ASCII-only
> byte-search will falsely conclude strings are absent. Always search both encodings."*
> A verification that ignored that warning made precisely that error, and branded a
> correct prior report as fabrication.
>
> **Standing rule — string searches of this binary MUST use both encodings.**
> WE's C/C++ runtime assertion and path strings are mostly UTF-16LE and return **zero**
> hits in ASCII. Never conclude "not present" from an ASCII-only search.
> `analysis/strings/` contains **both** `strings-ascii.txt` and `strings-utf16.txt` —
> read both.
>
> (Related: the 5,360,112 B original this document targets is
> `wallpaper_engine/wallpaper64.exe`. `binaries/wallpaper64.exe` is a 5,360,320 B copy
> corrupted by Rich Header injection — do not use it for coordinate comparison. See
> `WE-ENGINE-ANALYSIS-2026-07-27.md` §6.)

---

## Headline result

RTTI type-descriptor names and decorated method names (lambdas + `std::bind` member-function-pointer thunks) in `.rdata` recover the C++ class surface directly. **9 unique classes** are visible via `P8<Class>@@` binders and **23 (class, method) pairs** via `??<Method>@<Class>@@` lambda thunks — totalling ~17 distinct renderer-relevant classes. Combined with the chunk-magic vocabulary in `.rdata`, ~~**8 of 9 candidate subsystems are CONFIRMED**; only the FFT implementation inside audio reactivity remains UNKNOWN (no FFT/spectrum library strings are present).~~ **→ CORRECTION (2026-08-26): it is 9 of 9 CONFIRMED.** The FFT item is resolved too — FFTS is statically linked (UTF-16LE evidence, §8).

---

## Recovered C++ class surface (verified)

### Member-function-pointer binders (`P8<Class>@@EAAX…`, 9 unique classes)
Located by regex search; each indicates `std::bind` was instantiated on a method of `<Class>`:

| Class | Evidence offset |
|---|---|
| `AudioEventHandler` | 0x4dfcb0 |
| `AudioProcessor` | 0x4dfd80 |
| `CEFWallpaper` | 0x4e0090, 0x4e0110 |
| `ImageLayer` | (in P8 set) |
| `Material` | (in P8 set) |
| `Obj` | (in P8 set) |
| `ParticleVbo` | (in P8 set) |
| `PropertySystem` | (in P8 set) |
| `WallpaperManager` | (in P8 set) |

### Lambda thunks (`??<Method>@<Class>@@`, 23 (class, method) pairs)
Each is the closure type for a lambda defined inside `<Class>::<Method>`:

| Class | Method | Offset |
|---|---|---|
| `DataCache` | `AddSharedRemoveListenerToLayer` | 0x4e0621 |
| `DesktopMediaExtensions` | `QueueAsyncTextureLoad` | 0x4df7cc (+ 5 more at 0x4df86c, 0x4df90b, 0x4df9c6, 0x4dfa7b, 0x4dfb2c) |
| `DesktopMediaExtensions` | `StartMediaControl` | 0x4dfbd1 |
| `InterProcessMessageHandler` | `PeekNextRecvMessageCommand` | 0x4df743 |
| `Main` | `LoadScene` | 0x4e053c, 0x4e05b1 |
| `MaterialSystem` | `ReloadDirtyMaterials` | 0x4e01fc |
| `PropertySystem` | `LoadMediaIntegrationOnDemand` | 0x4e04c1 |
| `PropertySystem` | `LoadShellThumbnailIntegrationOnDemand` | 0x4e0451 |
| `SceneWallpaper` | `LoadSceneAndProperties` | 0x4e0021 |
| `Texture` | `ReadTextureData` | 0x4e02d3 (**0 xrefs — file offset of the descriptor's name text, not a code address; see §3 correction**) |
| `VideoWallpaper` | `StartVideoWithNewPlayer` | 0x4dfe43 (+ 4 more at 0x4dfea3, 0x4dff03, 0x4dff61, 0x4dffc1) |
| `WallpaperManager` | `Init` | 0x4df641, 0x4df691 |

### RTTI interface implementations (DWrite / D2D, 9 type descriptors)
| Type | Implements interface | Offset |
|---|---|---|
| `DWriteFontFileLoader` | `IDWriteFontFileLoader` | 0x4e1910 / 0x4e1820 |
| `DWriteFontFileStream` | `IDWriteFontFileStream` | 0x4e1940 / 0x4e17f0 |
| `TextAnalysis` | `IDWriteTextAnalysisSource` + `IDWriteTextAnalysisSink` | 0x4e1970 / 0x4e1888 / 0x4e18b8 |
| `GeometrySink` | `ID2D1SimplifiedGeometrySink` | 0x4e18e8 / 0x4e1850 |

### Helper types referenced inside binders
`WASAPICallbackType` (enum, inside `AudioEventHandler`/`AudioProcessor` binders at 0x4dfcc9 / 0x4dfd96), `MediaIntegration::Event` (struct, 0x4e00ac), `InterProcessMessage` (struct, 0x4e0126), `IntResult` (enum returned by `VirtualDesktop::StartVDesktop`, 0x4df373), `SharedMdlData` (struct passed to `Obj` callback).

---

## 1. PKGV package parser — **CONFIRMED (but "PKGV" itself is absent)**

The literal string **`PKGV` does not appear anywhere in the binary** (verified by byte search for both ASCII `PKGV` and UTF-16 `P\x00K\x00G\x00V\x00`: 0 occurrences). The task description's "PKGV" hypothesis is **not correct for this binary**. However, the binary clearly implements a structured binary packaging system using **a different magic vocabulary**:

- `analysis/strings/format-spec.txt` — chunk magics with 4-digit version stamps at known offsets in `.rdata`:
  - **`PLPV0005`** @ 0x476eb8 (immediately adjacent to `bin/playliststate.bin` @ 0x476ea4 and `project.json` @ 0x476e78 → PLPV = Playlist Package Version 5)
  - **`PROJECT`** @ 0x485740, followed by **`SHDV0069`** @ 0x485748 (Shader Data Version 69)
  - **`LSBK0001`** @ 0x48f260 (adjacent to `bin/scenestorage/` @ 0x48f274 → LSBK = Local Scene/Binary Chunk v1)
  - **`PUED0002`** @ 0x48fa60
- **`core_balloon_pkg_version_error`** @ 0x473e98 — there is an explicit "pkg version" error path, proving packages carry a version stamp the loader validates.
- **`core_balloon_wallpaper_file_missing`** @ 0x473eb8 and **`Missing file. Try reinstalling to fix this!`** @ 0x4771f0 — package-load error reporting.
- The on-disk package extension is **`.pkg`** (single occurrence @ 0x476e88, adjacent to `project.json` @ 0x476e78).
- Scene database persistence: `bin/scenestorage/` @ 0x48f274, `bin/playliststate.bin` @ 0x476ea4, `bin/playliststatetime.bin` @ 0x476ecc.

The top-level package container uses chunk-id-tagged sections (`PROJECT`, `SHDV####`, `MDLV####`, `TEXV####`, etc.) — see §3/§4/§7 for the per-format sub-chunks. The pkg-version validation entry point is the highest-value next target for the loader.

**Code region (string offsets in `.rdata`)**: chunk tables at 0x483b80, 0x485740, 0x48a6e0–0x48a730, 0x48f260, 0x490ef0–0x491118; loader error/IPC strings at 0x473e50–0x474000.

---

## 2. scene.json / project.json loader — **CONFIRMED**

- `analysis/strings/file-extensions.txt` — **`project.json`** @ 0x476e78.
- `assets/scenes/videoplayer/scene.json` @ 0x488b1e (asset-scene JSON path).
- `gifscene.json` @ 0x488103 (animated-GIF-as-scene wrapper).
- ~~**JSON library = jsoncpp** (NOT RapidJSON — the prior report's RapidJSON claim was incorrect; RapidJSON is absent from the binary).~~ **CORRECTION (2026-08-26): both are present — jsoncpp and RapidJSON coexist.** Evidence:
  - `in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer` @ 0x477393
  - `in Json::Value::duplicateStringValue(): Failed to allocate string value buffer` @ 0x4773f3
  - `Missing a name for object member.` @ 0x4757b8 — classic jsoncpp reader error
  - `Missing a colon after a name of object member.` @ 0x4757e0 — classic jsoncpp reader error
  - `Invalid value.` @ 0x4757a8 — classic jsoncpp reader error
  - ~~(`rapidjson`/`nlohmann`/`jsoncpp` literal name: 0 occurrences each — the library is identified by its error strings, not by a name string.)~~ **← that count is ASCII-only.** Recounting in UTF-16LE gives `rapidjson` **7** (`nlohmann` and `jsoncpp` remain 0).
  - **RapidJSON evidence (7 UTF-16LE source paths)**: `…\rapidjson\internal\pow10.h` @ 0x4756a0 · `…\rapidjson\reader.h` @ 0x475f60 · `…\rapidjson\internal/stack.h` @ 0x476000 · `…\rapidjson\encodings.h` @ 0x4762f0 · `…\rapidjson\stream.h` @ 0x4763a0 · `…\rapidjson/document.h` @ 0x4881d0 · `…\rapidjson\internal\../allocators.h` @ 0x488330
  - **jsoncpp source paths (3, UTF-16LE)**: `…\json\src\json_value.cpp` @ 0x477440 · `…\json_writer.cpp` @ 0x4776a0 · `…\json_reader.cpp` @ 0x483f00
  - Both libraries are vendored under `D:\dev\we\windows\src\json\` in the WE tree. **Which one parses scene/project JSON cannot be settled from strings alone** — that needs `.text` reading. The error strings above show only that the jsoncpp path is linked and reachable.
- The class doing scene loading is **`SceneWallpaper::LoadSceneAndProperties(const char*)`** (lambda RTTI @ 0x4e0021), with **`Main::LoadScene(const char*, const SceneStorageDBParams*)`** (lambda RTTI @ 0x4e053c, 0x4e05b1) as the entry from the cache DB.
- Hundreds of camelCase keys for materials/scenes in `analysis/strings/json-keys.txt` (region 0x48a000–0x492000), e.g. `combos`, `translucent`, `passes`, `keepaspect`, `usertextures`, `constantshadervalues`, `shadowcaster`, `cullmode`, `depthwrite`, `depthtest`, `alphawriting`.

**Code region**: JSON parser code in `.text`; ~~(no source-path leaks present, so cannot pin to a file/line)~~ **CORRECTION (2026-08-26): 10 source-path leaks do exist in UTF-16LE, so this can be pinned to a file** (the 7 RapidJSON + 3 jsoncpp paths above). scene-load entry points `Main::LoadScene` and `SceneWallpaper::LoadSceneAndProperties` are first-class Ghidra targets.

---

## 3. TEX texture decoder (DXT/BCn/LZ4) — **CONFIRMED**

Texture chunk magics at file offset 0x48a6e0–0x48a730 (`analysis/strings/format-spec.txt`), each suffixed with a 4-digit version stamp:
- **`TEXS0003`** @ 0x48a6e0 — ~~surface/header chunk (v3)~~ **sprite-sheet / frame-table section (v3)**, parsed by `0x14015e1d0` (`i32 frameCount` then per-frame geometry; `v>=3` carries explicit gif width/height). **[CORRECTED 2026-08-30]** — 61 of the 440 `.tex` files in this repository carry one; it is a peer of TEXI/TEXB in the section loop, not a header.
- **`TEXB0004`** @ 0x48a6f0 — base/body chunk (v4)
- **`TEXI0001`** @ 0x48a700 — info chunk (v1)
- **`TEXV0005`** @ 0x48a710 — version/variant chunk (v5)
- **`TEXV0004`** @ 0x48a730 — older variant chunk (v4)
- **`TEX0FORMAT`** @ 0x48ef28 — format-selection enum tag

**Codecs referenced**:
- **LZ4**: `LZ4 error.` @ 0x4851f8 (1 occurrence) → textures use LZ4 for pixel payload.
- **BC1**: `BC1` @ 0x492359 (in a lookup-table region) → BC1 (DXT1) decompression/swizzle table.
- **zlib (inflate 1.3.1)**: `inflate 1.3.1 Copyright` @ 0x451311 → zlib statically linked; `deflate` error strings elsewhere; used for PNG and possibly package decompression.
- No DXT3/DXT5/BC4-7 name strings present (those are compressed by the offline `resourcecompiler64.exe` @ 0x491130 into shader-bytecode/texture blobs; the runtime just uploads them to the GPU).

**RTTI**: **`Texture::ReadTextureData(unsigned char const*, TextureInfo&, TextureReadState&)`** (lambda RTTI @ 0x4e02d3) ~~is the decode entry point~~; the lambda binder further reveals the return type is `RefBuffer<unsigned char>*` and parameters include `TextureInfo&` and `TextureReadState&`.

**Code region**: chunk tables at 0x48a6e0–0x48ef28; LZ4 decoder code reachable from ~~`Texture::ReadTextureData`~~ the TEXB body parser `0x14015c8d0`.

> **[CORRECTED 2026-08-30 — the name is fine; the coordinate it is offered with is not a
> Ghidra target, and the dispatch/LZ4 attribution now belongs to a pinned address.]**
> Re-adjudicated 2026-08-27 in `analysis/reports/mdl-tex-decoders-2026-08-27.md` §3; that
> pass did not touch this file, so these lines were left standing.
>
> 1. **`0x4e02d3` cannot be opened in Ghidra.** Per this document's stated convention it is
>    a **file offset**, and it points into `.data` (VA `0x1404e22d3`) at the mangled name
>    text of an MSVC `TypeDescriptor` whose header begins at file offset `0x4e02b0`
>    (VA `0x1404e22b0`, vftable `0x140426e18`). That descriptor is for a **lambda declared
>    inside** the method (`.?AV<lambda_1>@?BP@??ReadTextureData@Texture@@…`), and it is
>    referenced **0 times** in the binary. Re-measured 2026-08-30 on the pristine
>    `wallpaper_engine/wallpaper64.exe`: 0 as an 8-byte absolute, 0 as a 4-byte
>    image-relative RVA. So this offset gives a reader **no path to any function** — it is
>    the §7 stripped-RTTI situation, not a decode entry point coordinate.
> 2. **The address that was actually pinned is `0x14015e580`** (1,155 B) — the TEX container
>    walker: sole referent of all five TEX magics, dispatching on the 4-char tag to
>    `0x14015c760` (TEXI), `0x14015c8d0` (TEXB), `0x14015e1d0` (TEXS sprite-sheet). It is
>    present in `analysis/decompiled/manifest.json` and
>    `analysis/decompiled/evidence-index.tsv` (`14015e580 … TEXB;TEXI;TEXV`), so it is a
>    real, openable target. **`LZ4 error.`** (VA `0x1404863f8`) is referenced by only two
>    functions, one of them the TEXB body parser `0x14015c8d0` (at `0x14015dd1f`) — that is
>    where the LZ4 path actually is.
> 3. **The name itself is not withdrawn.** `ReadTextureData` is a correct class/method name;
>    what it lacks is an address. Whether `0x14015e580` *is* `Texture::ReadTextureData`
>    remains **[미해결]** — there is an argument against it (the mangled signature returns
>    `RefBuffer<unsigned char>*` while `0x14015e580` returns a bool both callers test with
>    `!= 0`), so `0x14015e580` is more likely the container walker that `ReadTextureData`
>    calls. **No name has been attached to the address.** Detail:
>    `analysis/reports/mdl-tex-decoders-2026-08-27.md` §3.4.

---

## 4. MDL mesh decoder — **CONFIRMED**

Mesh chunk magics at file offset 0x490ef0–0x491118 (`analysis/strings/format-spec.txt`):
- **`MDLA0006`** @ 0x490ef0 — animation chunk (v6)
- **`MDAT0001`** @ 0x490f00 — mesh data chunk (v1)
- **`MDMP0001`** @ 0x490f10 — mesh map chunk (v1)
- **`MDLE0002`** @ 0x490f20 — elements chunk (v2)
- **`MDLS0004`** @ 0x490f30 — skeleton chunk (v4)
- **`MDLV0023`** @ 0x491118 — mesh loader version stamp (v23), 16 bytes before `.mdl` and `resourcecompiler64.exe` @ 0x491130
- **`MDLVS001`** @ 0x483b80 — separate top-level mesh version stamp

Mesh vertex-input semantics @ 0x485628–0x485694: `BLENDINDICES`, `BLENDWEIGHT`, `TANGENT`, `COLOR`, `INSTANCECOUNT` @ 0x485706, `LIGHTING` @ 0x485712 — standard skinning/tangent-stream vertex layout.

**RTTI**: `Obj` class has a member-function binder taking `SharedMdlData*` (P8 binder in `Obj` set, `.?AUSharedMdlData@@` struct) — `SharedMdlData` is the shared parsed-mesh structure passed to mesh consumers.

**Code region**: chunk table 0x490ef0–0x491118; mesh loader version-dispatch logic in `.text` near `Obj::` methods.

---

## 5. Particle system — **CONFIRMED**

- `ParticleVbo` class — appears in the `P8<Class>@@` binder set (member-function binder taking `bool`, suggesting a dirty-flag callback). This is a particle vertex-buffer-object class.
- `analysis/strings/misc-notable.txt` / shader strings: particle-related material bindings (region 0x48e000–0x492000), e.g. `emitter`, `spawn`, `startdelta` @ 0x48a818.
- Particle render state is dispatched through **`MaterialSystem::ReloadDirtyMaterials`** (lambda RTTI @ 0x4e01fc), the same path used by all renderable materials — particles share the material pipeline but have a dedicated `ParticleVbo` vertex-buffer class.

**Code region**: `ParticleVbo` methods in `.text`; particle material bindings via `MaterialSystem`.

---

## 6. D3D11 render pipeline — **CONFIRMED**

Static import `d3d11.dll!D3D11CreateDevice` (import-name string @ 0x4d9706; full IAT in `analysis/pe-structure.json` §imports). All other D3D11/DXGI access is via COM vtables (no other d3d11/dxgi imports). Direct evidence:

- **Device-lost / recovery state machine** (`analysis/strings/d3d-dxgi.txt`):
  - `DXGI Init failed, retrying: %i` @ 0x487f78
  - `DXGI device lost in WM_SIZE.` @ 0x487fb8
  - `DXGI device lost in render loop.` @ 0x488040
  - `DXGI begin recovery.` @ 0x488160
  - `DXGI failed init: %x at %u.` @ 0x488178
  - `DXGI finish recovery: %d.` @ 0x4881b0
  → Full device-removal/recovery driven from the WM_SIZE handler and the render loop.
- **CLI fallback**: **`--disable-d3d11`** @ 0x476f60 → there is a non-D3D11 fallback render path.
- Subsystem 2 (GUI) + imports `MonitorFromWindow`, `EnumDisplayMonitors`, `EnumDisplayDevicesW`, `QueryDisplayConfig`, `GetDisplayConfigBufferSizes`, `DisplayConfigGetDeviceInfo` (USER32) → multi-monitor DXGI swap-chain-per-output enumeration.
- `WINMM.timeBeginPeriod`/`timeEndPeriod` + KERNEL32 `QueryPerformanceCounter` → 1 ms-timer-resolution frame loop.
- `UpdateLayeredWindow`, `SetLayeredWindowAttributes`, `SetWindowLongPtrW` (USER32) → layered composition of the rendered frame onto the desktop wallpaper window.
- `DwmIsCompositionEnabled`, `DwmGetWindowAttribute` (dwmapi) → DWM-aware composition.

**Render-graph objects (RTTI)**: `Material` (P8 binder set), `MaterialSystem::ReloadDirtyMaterials` (@ 0x4e01fc), `ImageLayer` (P8 binder set), `DataCache::AddSharedRemoveListenerToLayer` (@ 0x4e0621) — the renderable-scene-object tree.

**Code region**: DXGI recovery strings at 0x487f78–0x4881b0; swap-chain/device logic in `.text` near `Main` and `WindowProcedureTray` (lambda RTTI @ 0x4df561, 0x4df5e1; signature `??WindowProcedureTray@@YA_JPEAUHWND__@@I_K_J@Z`).

---

## 7. Shader compiler / translator — **CONFIRMED**

A complete GLSL → HLSL translation framework is statically embedded (file offsets 0x485000–0x490000 in `.rdata`, see `analysis/strings/shader-strings.txt`):

- **D3D shader-model targets**: `vs_4_0` @ 0x4769b0, `ps_4_0` @ 0x4769c8, `gs_4_0` @ 0x476a24, `vs_5_0` @ 0x4855c4, `gs_5_0` @ 0x485614, `ps_5_0` @ 0x48561c, `ps_4_1` @ 0x48562c — both SM 4.0 (feature-level 10_0) and SM 5.0 (feature-level 11_0) are supported.
- **Compilation defines** @ 0x485698: `#define HLSL 1`, `#define HLSL_SM40 1` — the framework branches on SM4.0 vs higher.
- **GLSL→HLSL compatibility shims** @ 0x486b10:
  - `#define vec2 float2`, `#define vec3 float3`, `#define vec4 float4`, `#define uvec4 uint4`
  - `#define mat4 float4x4`, `#define mat3 float3x3`, `#define mat2 float2x2`
  - `#define mix lerp` (GLSL `mix` → HLSL `lerp`)
  - Sampler helpers: `sampler2D` @ 0x4862e8, `sampler3D` @ 0x4862f8, `sampler2DBackBuffer` @ 0x4862c0 (back-buffer readback for post-fx), `sampler2DComparison` @ 0x486308
  - `gl_FragColor` @ 0x486f80, `OUT.gl_FragColor` @ 0x486f94, `gl_Position` @ 0x486868 — GLSL builtins rewritten to HLSL `SV_TARGET`/`SV_POSITION` outputs (`at4 gl_FragColor : SV_TARGET;` @ 0x4868d2).
- **Texture/sampler bindings**: `g_Texture0MipMapped` @ 0x4769e8 (the `g_Texture0` family — used as shader uniform prefix).
- **Runtime D3D compiler requirement**: `DirectX compiler cannot be found, d3dcompiler_47.dll is missing.` @ 0x4855d0 (substring `d3dcompiler_47` @ 0x4855f2) → the renderer **loads `d3dcompiler_47.dll` dynamically** (via `KERNEL32!LoadLibraryW` + `GetProcAddress`) to JIT-compile shaders to DXBC. **`dxcompiler.dll` (DXIL/SM6) is NOT referenced** (0 occurrences) — only SM4/SM5 via the legacy `d3dcompiler_47.dll`.
- **Pre-compiled fallback shaders**: `shaders/HLSL/dx11fallback.frag` @ 0x4856e0, `shaders/HLSL/dx11fallback.vert` @ 0x485700; compiled-blob path prefix **`blobsSM40/`** @ 0x4856c8 with `.dxs` extension @ 0x4856d4 → if a shader fails to JIT-compile, a cached `.dxs` blob (SM4.0) is loaded instead.
- **External compiler**: `resourcecompiler64.exe` @ 0x491130 — the offline asset/shader compiler invoked by the editor to produce `.dxs` blobs.
- **Shader container magics**: `SHDV0069` @ 0x485748 (Shader Data Version 69) and `SHTC0001` @ 0x485f08 (Shader Technique v1) — embedded shader container format with its own version stamps.

**Code region**: shader template/emit code at 0x485000–0x490000 in `.rdata`; compiler-orchestration code in `.text` near the `SHDV0069`/`SHTC0001` references.

---

## 8. Audio reactivity — ~~**PARTIALLY CONFIRMED (FFT implementation UNKNOWN)**~~ **CONFIRMED (statically-linked FFTS; corrected 2026-08-26)**

- **WASAPI capture confirmed** (`analysis/strings/misc-notable.txt`):
  - `WASAPI unexpected block align: %i * %i != %i.` @ 0x485430
  - `WASAPI processor requires 32 bit per sample.` @ 0x485460
- **Audio classes confirmed (RTTI)**:
  - `AudioEventHandler::(WASAPICallbackType, wstring)` — P8 binder @ 0x4dfcb0, enum `WASAPICallbackType` visible @ 0x4dfcc9
  - `AudioProcessor::(WASAPICallbackType, wstring)` — P8 binder @ 0x4dfd80, enum visible @ 0x4dfd96
- **WASAPI is loaded dynamically** — no `mmdevapi.dll`, `AudioClient`, or `WAVEFORMATEX` strings present (0 occurrences each), and no ole32 MMDeviceEnumerator import. Likely resolved via `LoadLibraryW` of `mmdevapi.dll` at first audio-wallpaper load, with the WASAPI vtable layout inlined.

~~**FFT/spectrum analysis: UNKNOWN.** No FFT library reference is present in the binary — `FFT`, `ffts`, `kissfft`, `spectrum`, `dft` all return 0 occurrences. The prior report's claim of statically-linked FFTS and the source path `D:\dev\we\windows\src\ffts\src\ffts_static.c` was **fabricated** — that string does not exist.~~ Audio-reactive shader uniforms (e.g. `amplitude` substring @ 0x48d7a3 in `shakeamplitude`) confirm that audio data reaches the GPU.

> **CORRECTION (2026-08-26, direct byte search).** The paragraph above is wrong — it is
> the result of an **ASCII-only search**. `D:\dev\we\windows\src\ffts\src\ffts_static.c`
> **does exist, as UTF-16LE** (file offset **0x48a040**; 0 hits in ASCII, 1 in UTF-16LE).
> Immediately after it, at **0x48a0a0**, comes the assertion expression **`N == 32`** —
> the (filename, expression) pair of `assert(N == 32)`. Both are dumped verbatim at lines
> 820–821 of this repository's own `analysis/strings/strings-utf16.txt`.
>
> **Verdict: FFT implementation = statically-linked FFTS. CONFIRMED.** The prior report's
> FFTS claim was correct, not fabricated; the error was this paragraph calling it fabrication.
>
> Two things do remain **UNKNOWN from strings alone**, and are left as such:
> - Which kernel path is taken when (radix vs Bluestein/chirp-z) — needs `.text` reading.
> - The exact layout handed to the GPU (bin count, normalisation).

**Code region**: WASAPI strings at 0x485430–0x485460; `AudioProcessor`/`AudioEventHandler` classes in `.text` (entry via P8 binders @ 0x4dfcb0 / 0x4dfd80).

---

## 9. Per-wallpaper-type dispatch — **CONFIRMED**

Strong RTTI evidence of a class hierarchy rooted at a common wallpaper base, with concrete subclasses dispatched per type:

- **`WallpaperManager::Init`** lambda RTTI @ 0x4df641, 0x4df691 — the **dispatcher** that owns active wallpapers. Also present in the P8 binder set.
- **`VideoWallpaper::StartVideoWithNewPlayer(const wchar_t*)`** lambda RTTI @ 0x4dfe43 (+ 4 more at 0x4dfea3, 0x4dff03, 0x4dff61, 0x4dffc1) — **video** wallpaper type; uses Media Foundation Source Reader (`MFReadWrite!MFCreateSourceReaderFromURL` @ 0x487460, `MFCreateSourceReaderFromByteStream` @ 0x4d97ee). Video file extensions: `.mp4` @ 0x489600, `.webm` @ 0x4878f8; `webmframework` @ 0x475f50.
- **`SceneWallpaper::LoadSceneAndProperties(const char*)`** lambda RTTI @ 0x4e0021 — **scene/particle** wallpaper type (the renderer, our clean-room target).
- **`CEFWallpaper`** P8 binders @ 0x4e0090, 0x4e0110 — **web** wallpaper type using Chromium Embedded Framework; dispatches on `MediaIntegration::Event` and `InterProcessMessage` callbacks. Two separate host processes are spawned for web content: `bin/edgewallpaper64.exe` @ 0x4887ac (Edge/Chromium host) and `bin/webwallpaper64.exe` @ 0x488854 (legacy CEF host).
- **`DesktopMediaExtensions`** lambda RTTI @ 0x4df7cc–0x4dfbd1 — shared helper for per-type texture loading (`QueueAsyncTextureLoad`, 6 lambda copies) and media control (`StartMediaControl`).
- **CLI dispatch** (`analysis/strings/misc-notable.txt`): `-nowallpapers` @ 0x472d58, `-playlist` @ 0x472a88, `-window welcome` @ 0x4738c8, `-window browsewallpapers` @ 0x474000, `-window settings` @ 0x474048, `-op steamscreenshot` @ 0x474098, `-setwallpaper ` @ 0x473bd1, `-setwallpaperstyle 22` @ 0x473bba, `-steamlanguage` @ 0x473571, `--disable-d3d11` @ 0x476f60.
- **IPC dispatcher**: `InterProcessMessageHandler::PeekNextRecvMessageCommand(int&)` lambda RTTI @ 0x4df743; backed by `KERNEL32!CreateNamedPipeW` + `ConnectNamedPipe` imports. IPC command vocabulary: `openWallpaper` @ 0x472958, `closeWallpaper` @ 0x472ac0, `nextWallpaper` @ 0x472b00, `revealWallpaper` @ 0x472b30, `Wallpaper Pop-out` @ 0x4729c0.
- **Tray handler**: `WindowProcedureTray` lambda RTTI @ 0x4df561, 0x4df5e1 (signature `??WindowProcedureTray@@YA_JPEAUHWND__@@I_K_J@Z`); tray icon via `SHELL32!Shell_NotifyIconW`; balloon notifications `core_balloon_info` @ 0x473e38, `core_balloon_video_error` @ 0x473e50, `core_balloon_app_error` @ 0x473e80, `core_balloon_pkg_version_error` @ 0x473e98, `core_balloon_wallpaper_file_missing` @ 0x473eb8.
- **`Main::LoadScene(const char*, const SceneStorageDBParams*)`** lambda RTTI @ 0x4e053c, 0x4e05b1 — per-instance scene loader entry from the cache DB.

**Code region**: dispatcher methods in `.text`; RTTI in `.rdata` 0x4df360–0x4e0621.

---

## Candidate subsystems not on the required list but worth noting

- **Window-management / virtual-desktop**: `VirtualDesktop::StartVDesktop` returns `IntResult` (lambda RTTI @ 0x4df373, 0x4df3e3, 0x4df453, +1 more — namespace `?A0x150283ec`); `wallpaperconfigvdesktop` @ 0x473c08; **`C++/WinRT version:2.0.250303.5`** @ 0x473340 confirms Windows Runtime projections are statically linked for the IVirtualDesktopManager COM interface.
- **Text rendering (DWrite/D2D)**: `DWriteCreateFactory` import (DWrite.dll, import string @ 0x4d9f8c); in-process DWrite implementations `DWriteFontFileLoader`, `DWriteFontFileStream`, `TextAnalysis`, `GeometrySink` (RTTI @ 0x4e17f0–0x4e1970); bundled font atlas shaders `__font_atlas_` @ 0x48de78, `__font_atlas_color_` @ 0x48de88; SDF/MSDF font materials `materials/fonts/basefont_msdf.json` @ 0x48e038, `materials/fonts/basefont_msdf_depth.json` @ 0x48df40; default font names `arial.ttf` @ 0x48dd08, `fonts/TwemojiMozilla.ttf` @ 0x48df66.
- **Image codecs**: PNG (zlib `inflate 1.3.1` @ 0x451311, plus `\x89PNG` magic). JPEG likely via WIC (no standalone libjpeg strings).
- **Performance counters**: delay-load `pdh.dll` @ 0x435233 (PDH for the editor's perf overlay).
- **Localization**: `steamlanguage` CLI flag @ 0x473571; extensive locale APIs (`KERNEL32!EnumSystemLocalesW`, `GetLocaleInfoEx`, `LCMapStringW/Ex`).
- **Subprocesses spawned** (11 `.exe` references in `.rdata`): `wallpaper32.exe` @ 0x472728, `wallpaper64.exe` @ 0x472738, `apputil32.exe` @ 0x472658, `installer.exe` @ 0x473768, `bin/wallpaperui.exe` @ 0x4738d8, `bin/edgewallpaper64.exe` @ 0x4887ac, `bin/webwallpaper64.exe` @ 0x488854, `resourcecompiler64.exe` @ 0x491130 — confirms the multi-process architecture (UI, web hosts, editor compiler).

---

## Verdict summary table

| # | Candidate subsystem | Verdict | Strongest single piece of evidence |
|---|---|---|---|
| 1 | PKGV package parser | **CONFIRMED** (real magic vocabulary differs) | No `PKGV` (0 occurrences); instead `PLPV0005` @ 0x476eb8, `PROJECT` @ 0x485740, `MDLVS001` @ 0x483b80, plus `core_balloon_pkg_version_error` @ 0x473e98 and `.pkg` extension @ 0x476e88 |
| 2 | scene.json / project.json loader | **CONFIRMED** | `project.json` @ 0x476e78; **jsoncpp** error strings (`Json::Value::duplicateAndPrefixStringValue` @ 0x477393, `Missing a name for object member.` @ 0x4757b8); **+ RapidJSON coexists** — 7 UTF-16LE source paths (`rapidjson\reader.h` @ 0x475f60 and others; corrected 2026-08-26); `SceneWallpaper::LoadSceneAndProperties` lambda RTTI @ 0x4e0021 |
| 3 | TEX texture decoder (BCn/LZ4) | **CONFIRMED** | `TEXS0003`/`TEXB0004`/`TEXI0001`/`TEXV0005` @ 0x48a6e0–0x48a710; `LZ4 error.` @ 0x4851f8; ~~`Texture::ReadTextureData` lambda RTTI @ 0x4e02d3~~ **container walker `0x14015e580`** (VA; re-adjudicated 2026-08-27 — the `0x4e02d3` descriptor has 0 xrefs, see the §3 correction) |
| 4 | MDL mesh decoder | **CONFIRMED** | `MDLA0006`/`MDAT0001`/`MDMP0001`/`MDLE0002`/`MDLS0004`/`MDLV0023` @ 0x490ef0–0x491118; `Obj` class with `SharedMdlData*` binder |
| 5 | Particle system | **CONFIRMED** | `ParticleVbo` class in P8 binder set; particle material bindings region 0x48e000–0x492000; `MaterialSystem::ReloadDirtyMaterials` RTTI @ 0x4e01fc |
| 6 | D3D11 render pipeline | **CONFIRMED** | `d3d11.dll!D3D11CreateDevice` import + DXGI recovery strings @ 0x487f78–0x4881b0 |
| 7 | Shader compiler/translator | **CONFIRMED** | GLSL→HLSL shim block @ 0x486b10 (`#define vec2 float2`, `#define mix lerp`); `vs_5_0`/`ps_5_0`/`gs_5_0` @ 0x4855c4–0x48561c; `d3dcompiler_47.dll is missing` @ 0x4855d0; `SHDV0069`/`SHTC0001` @ 0x485748/0x485f08 |
| 8 | Audio reactivity | ~~**PARTIALLY CONFIRMED** (FFT UNKNOWN)~~ **CONFIRMED** (corrected 2026-08-26) | WASAPI strings @ 0x485430/0x485460; `AudioEventHandler`/`AudioProcessor` P8 binders @ 0x4dfcb0/0x4dfd80. ~~**No FFT/spectrum library evidence** — the prior report's FFTS claim was fabricated.~~ **Statically-linked FFTS confirmed**: `ffts\src\ffts_static.c`@0x48a040 + assertion `N == 32`@0x48a0a0 (UTF-16LE). |
| 9 | Per-wallpaper-type dispatch | **CONFIRMED** | RTTI classes `WallpaperManager`/`VideoWallpaper`/`SceneWallpaper`/`CEFWallpaper` (lambda + P8 binders @ 0x4df641–0x4e0110); named-pipe IPC via `InterProcessMessageHandler::PeekNextRecvMessageCommand` @ 0x4df743 |

~~The only item that is not fully CONFIRMED is the **FFT/spectrum step inside audio reactivity** (sub-item of #8). Everything else on the required list is directly confirmed by RTTI or imports.~~

> **CORRECTION (2026-08-26).** **All 9 of 9 are CONFIRMED.** The FFT item under #8 is
> resolved too: FFTS is statically linked, on UTF-16LE string evidence (see the §8
> correction). What remains UNKNOWN is not a subsystem verdict but the **internals**
> (kernel-path selection, GPU spectrum layout).

---

## Highest-value next-step targets for Ghidra

Ranked by how much of the renderer they unlock per symbol resolved:

1. **`SceneWallpaper::LoadSceneAndProperties`** (lambda RTTI @ 0x4e0021) — single function that owns the per-wallpaper scene-graph, material, and texture loading for the renderer (clean-room target).
2. **`Main::LoadScene`** (lambda RTTI @ 0x4e053c) — top-level scene loader with `SceneStorageDBParams`; the entry from the package/DB layer into rendering.
3. ~~**`Texture::ReadTextureData`** (lambda RTTI @ 0x4e02d3) — decodes TEX chunk payloads (dispatches on TEXS/TEXB/TEXI/TEXV chunk types), calls LZ4.~~
   **DONE (2026-08-27) — and this entry pointed at an unusable coordinate.** The TEX decode
   path was pinned by close-read to **`0x14015e580`** (container walker) →
   `0x14015c760` (TEXI) / `0x14015c8d0` (TEXB, holds the `LZ4 error.` reference at
   `0x14015dd1f`) / `0x14015e1d0` (TEXS sprite-sheet). The dispatch and LZ4 attribution
   above therefore belong to those addresses, not to the name. `0x4e02d3` is a `.data`
   string offset for a lambda `TypeDescriptor` with **0 references** and cannot be opened as
   a function. See the §3 correction and
   `analysis/reports/mdl-tex-decoders-2026-08-27.md` §3.
4. **`MaterialSystem::ReloadDirtyMaterials`** (lambda RTTI @ 0x4e01fc) — central shader/material binding pipeline feeding D3D11 VSSetShader / PSSetShader / etc.
5. **`AudioProcessor` (P8 binder @ 0x4dfd80) + `AudioEventHandler` (@ 0x4dfcb0)** — audio-reactivity entry points; resolving these may also reveal the unknown FFT/spectrum step.

Also recommended: the **TLS callbacks at VA 0x14028AEB0 / 0x14028AF90** and **entry point at RVA 0x28B710** — see `analysis/reports/entry-point.md`.
