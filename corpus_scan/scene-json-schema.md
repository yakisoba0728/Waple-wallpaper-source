# scene.json Schema Reference

Aggregated from **161 scene-type wallpapers** in the corpus (every `.pkg` that
contains a `scene.json` entry). The schema is JSON with CRLF line endings and
tab indentation in the source files; values shown below are the **observed
ranges/types** across the corpus. String-encoded vectors (e.g. `"1.000 1.000 1.000"`)
are space-separated float triples, NOT JSON arrays — this is a load-bearing
quirk any reimplementation must preserve.

There are exactly four top-level keys, the first three present in 100% of
scenes; `version` in 159/161.

## Top-level

| key | type | presence | description |
|-----|------|---------:|-------------|
| `camera` | object | 161/161 | Camera framing (see below). |
| `general` | object | 161/161 | Scene/render globals (see below). |
| `objects` | array<object> | 161/161 | Ordered list of layers (see below). |
| `version` | int | 159/161 | Schema version. Observed: `1` (33), `3` (31), `4` (32), `5` (63). Missing in 2 scenes. Higher = more features (HDR, wind, zoom). |

## `camera` (object)

Always exactly three keys, each a space-separated `"x y z"` string:

| key | type | example |
|-----|------|---------|
| `center` | string(vec3) | `"293.217 -286.201 -1.000"` |
| `eye` | string(vec3) | `"293.217 -286.201 0.000"` |
| `up` | string(vec3) | `"0.000 1.000 0.000"` |

## `general` (object) — render globals

Core keys present in all 161 scenes:

| key | type | range / notes |
|-----|------|----------------|
| `ambientcolor` | string(vec3) | `"0.300 0.300 0.300"` etc. (linear 0–1) |
| `bloom` | bool | enable legacy bloom |
| `bloomstrength` | float | e.g. `2.0` |
| `bloomthreshold` | float | e.g. `0.65` |
| `camerafade` | bool | |
| `cameraparallax` | bool | mouse parallax on/off |
| `cameraparallaxamount` | float | e.g. `0.5` |
| `cameraparallaxdelay` | float | e.g. `0.1` |
| `cameraparallaxmouseinfluence` | float | e.g. `0.0` |
| `camerapreview` | bool | |
| `camerashake` | bool | |
| `camerashakeamplitude` | float | |
| `camerashakeroughness` | float | |
| `camerashakespeed` | float | |
| `clearcolor` | string(vec3) | background clear |
| `clearenabled` | bool | |
| `farz` | float | far clip plane, e.g. `10000.0` |
| `fov` | float | field of view in degrees, e.g. `50.0` |
| `nearz` | float | near clip, e.g. `0.01` |
| `orthogonalprojection` | object `{width:int, height:int}` | e.g. `{"width":1920,"height":1080}`. Present on all; orthogonal rendering is the WE default for scene wallpapers. |
| `skylightcolor` | string(vec3) | |

HDR / bloom-HDR / zoom keys (version ≥ 3, present in 159/161):

| key | type | notes |
|-----|------|-------|
| `hdr` | bool | HDR pipeline |
| `zoom` | float | |
| `bloomhdrstrength` | float | |
| `bloomhdrthreshold` | float | |
| `bloomhdrfeather` | float | (157/161) |
| `bloomhdrscatter` | float | |
| `bloomhdriterations` | int | |
| `bloomtint` | string(vec3) | (142/161) |
| `perspectiveoverridefov` | float | (130/161) |

Wind/gravity (version ≥ 4–5, present in 109/161):

| key | type | notes |
|-----|------|-------|
| `windenabled` | bool | |
| `windstrength` | float | |
| `winddirection` | float | radians |
| `gravitystrength` | float | |
| `gravitydirection` | float | radians |

Rare: `lightconfig` (11), fog block (`fogdistance*`, `fogheight*`) on 1–2 scenes,
`transparentsorting` (3).

## `objects` (array of layer objects)

9,080 objects total across 161 scenes (mean ≈ 56/scene). An object is one
compositing layer; its "type" is implicit from which optional key is set
(`image` / `particle` / `model` / `text`). Distribution: image 4,731; text/font
1,597; particle 997; model 273.

### Universal object keys

| key | type | presence | notes |
|-----|------|---------:|-------|
| `id` | int | 9080/9080 | unique per scene |
| `name` | string | 9080/9080 | UI label |
| `origin` | string(vec3) | 7819 | position |
| `angles` | string(vec3) | 6488 | euler rotation |
| `size` | string(vec2) | 6195 | `"1920.000 1080.000"` |
| `scale` | string(vec3) | 5684 | |
| `castshadow` | bool | 5626 | |
| `parent` | int/null | 5603 | parent object id |
| `visible` | bool | 4832 | |

### Image layer keys (`"image" : "models/X.json"`)

A scene layer's pixels come from a **model json** that references a `.tex`
texture and a `.mdl` mesh. So `image` points into the PKGV's `models/` entries.
Common keys beyond universal: `image`, `color`, `colorBlendMode`, `effects`,
`parallaxDepth`, `clampuvs`, `solid`, `alpha`, `locktransforms`, `perspective`,
`copybackground`, `ledsource`.

### Text layer keys

`text` (string OR object — see below), `font` (path to `.ttf`/`.otf` entry),
`pointsize`, `horizontalalign`, `verticalalign`, `padding`, `backgroundcolor`,
`opaquebackground`, `backgroundbrightness`, `blockalign`, `anchor`,
`limitwidth`, `limitrows`, `maxwidth`, `maxrows`, `limituseellipsis`,
`depthtest`.

The `text` field is polymorphic:
- **string** for static text (e.g. `"Rem Is Waifu"`), or
- **object** `{"value":"<Clock>","script":"'use strict';\nexport function update(value){...}"}` for a JS-driven dynamic text layer (the `script` is ES-module source executed by the engine's JS runtime).

### Particle layer keys

`particle` (path to a `particles/*.json` preset), plus `instance`,
`instanceoverride`. Particle presets seen: `particles/presets/fireflies.json`,
`snowperspective.json`, `bubbles2.json`, `ember.json`, `leaves5.json`,
`trail_1.json`, plus per-workshop `particles/workshop/<id>/*.json`.

### Model layer keys

`model` (path to a `.mdl` entry), e.g. `"models/图层 6_puppet"`.

### Sound layer keys

`sound` (path to audio entry), `volume`, `playbackmode`, `mintime`, `maxtime`,
`muteineditor`, `startsilent`. `playbackmode` ∈ `{"loop","single","random"}`.

### Effect chains (`effects`)

Present on 3,526 objects; 6,418 effect instances total. Each effect ref:

```json
{
  "file":   "effects/waterwaves/effect.json",   // path to effect def in pkg
  "id":     18,
  "name":   "",
  "visible": true,
  "passes": [
    {
      "id": 19,
      "constantshadervalues": { "scale": 34.66, "speed": 3.97, ... },
      "textures": [ null, "masks/waterwaves_mask_..." ]   // per-pass texture bindings
    }
  ]
}
```

The `effects/<name>/effect.json` file (a separate PKGV entry) defines the GLSL
passes (`shaders/effects/<name>.frag` + `.vert`), blend mode, and target. Top
effect files in the corpus: `effects/opacity/effect.json` (1,332),
`effects/waterwaves/effect.json` (768), `effects/shake/effect.json` (316),
`effects/tint/effect.json` (309), `effects/blend/effect.json` (163),
`effects/foliagesway/effect.json` (156).

## Enum value ranges observed

| field | values |
|-------|--------|
| `version` | 1, 3, 4, 5 |
| `colorBlendMode` | 0–32 integer (0 = normal/replace dominates; 11, 31 common; corresponds to a blend-mode LUT) |
| `playbackmode` | `"loop"`, `"single"`, `"random"` |
| `alignment` | `"center"`, `"left"`, `"right"`, `"top"`, `"bottom"`, `"bottomleft"`, `"bottomright"`, `"topright"` |
| `anchor` | `"none"`, `"center"`, `"left"`, `"right"`, `"top"`, `"topright"`, `"bottomright"` |

## Quirks a reimplementation MUST handle

1. **Vectors are space-separated strings**, not arrays: `"origin" : "960.000 540.000 0.000"`.
2. **Files are UTF-8 with BOM tolerance** (use `utf-8-sig`) and CRLF + tab indent.
3. **`text` is polymorphic** (string vs `{value, script}` object).
4. **Object type is implicit** — infer from presence of `image`/`particle`/`model`/`text`/`sound`.
5. **Layer order** = array order (painter's algorithm, back to front).
6. `image` paths point at `models/*.json` (the model json), not directly at textures.
7. ~~`version` gating: pre-v3 scenes lack HDR/zoom; pre-v4 lack wind/gravity.~~
   **[CORRECTED 2026-08-28 — the corpus refutes this, and a consumer was built on it.]**
   `version` does **not** gate those keys. Counted over the 162-scene workshop summary
   (`spec/corpus/scene-schema.json` in the Waple repo), `version` is
   `{5: 63, 1: 33, 4: 32, 3: 31, absent: 3}` while `hdr`/`zoom` appear in **159** scenes
   and `wind`/`gravity` in **109**. By pigeonhole that forces at least **30** pre-v3
   scenes carrying HDR/zoom and at least **13** pre-v4 scenes carrying wind/gravity —
   the gate cannot hold in either direction.

   This matters beyond the document: `Sources/WapleCore/SceneDocument.swift:3988-4005`
   built a real version gate and **cited this line as its evidence**. Reading a key should
   depend on whether the key is there, not on a version number the corpus does not
   corroborate.
