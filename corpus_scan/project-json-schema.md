# project.json Schema Reference

Aggregated from all **446 workshop folders** in the corpus. `project.json` is
the top-level manifest Steam Wallpaper Engine reads to identify a wallpaper; it
sits beside `scene.pkg` (or the video/html file) and `preview.jpg`. JSON with
CRLF + tab indentation, BOM-tolerant (`utf-8-sig`).

## Top-level keys

| key | type | presence | description |
|-----|------|---------:|-------------|
| `file` | string | 446/446 | Entry point. Extension determines loading path: `.json` → scene (load via `scene.pkg`), `.mp4` → video player, `.html` → web/CEF. |
| `preview` | string | 446/446 | Preview image path, almost always `"preview.jpg"`. |
| `tags` | array<string> | 446/446 | Workshop tags. |
| `title` | string | 446/446 | Display title. |
| `general` | object | 445/446 | Property declarations (see below). |
| `type` | string | 445/446 | Wallpaper type. |
| `contentrating` | string | 426/446 | `"Everyone"` (425) or `"Mature"` (1). |
| `description` | string | 414/446 | Free text. |
| `version` | int | 387/446 | Author-controlled save counter (0, 1, 2, … up to 113). NOT a schema version — just increments on each editor save. |
| `ratingsex` / `ratingviolence` | bool | 322 | Content-rating flags. |
| `visibility` | string | 310 | `"public"` (308), `"private"` (2), or absent (136, unlisted/local). |
| `workshopid` | string/int | 271 | Steam Workshop item id (matches folder name). |
| `workshopurl` | string | 240 | Full workshop URL. |
| `approved` | bool | 135 | Workshop approval state. |
| `monetization` | object | 15 | Paid/monetized wallpaper metadata. |

## `type` values

Case is **not normalized** in the corpus — treat case-insensitively:

| raw value | count | normalized |
|-----------|------:|-----------:|
| `scene` / `Scene` | 114 / 48 | 162 scene |
| `video` / `Video` | 134 / 11 | 145 video |
| `web` / `Web` | 94 / 44 | 138 web |
| *(missing)* | 1 | — (a dependency/preset folder) |

The `file` extension mirrors this: `.json` 162 (scene), `.mp4` 145 (video),
`.html` 138 (web).

## `general` object

| key | type | presence | description |
|-----|------|---------:|-------------|
| `properties` | object | 445 | Declares user-tunable properties (see below). |
| `supportsaudioprocessing` | bool | 141 | Web/video wallpaper reacts to system audio. |
| `supportsvideo` | bool | 72 | Web wallpaper can play video. |
| `supportsvideoflags` | int | 71 | Video capability flags. |
| `localization` | object | 9 | i18n strings. |

### `general.properties` — user property declarations

Each entry maps a property key (referenced from the wallpaper's JS/scene logic)
to a UI control definition. Across the corpus, ~9,000 property declarations
span these `type` values:

| type | count | shape |
|------|------:|-------|
| `slider` | 2,704 | `{order, text, type, value, min, max}` — float range control. |
| `bool` | 2,647 | `{order, text, type, value}` — checkbox. |
| `color` | 1,393 | `{order, text, type:"color", value:"r g b"}` — space-separated 0–1 RGB. |
| `text` | 887 | `{order, text, type, value}` — string. (10 use `"Text"`.) |
| `group` | 385 | container that nests other properties. |
| `combo` | 576 | `{order, text, type, value, options}` — dropdown. |
| `usershortcut` | 208 | user-bindable hotkey. |
| `scenetexture` | 186 | scene-only: texture picker bound to an image layer. |
| `textinput` | 341 | single-line text entry. |
| `file` | 61 | filesystem path picker. |
| `directory` | 15 | folder picker. |
| `label` | 6 | read-only label. |

The universally-present property is **`schemecolor`** (the Steam "scheme color"
the user picks in settings). Canonical shape:

```json
"schemecolor" : {
  "order" : 0,
  "text"  : "ui_browse_properties_scheme_color",
  "type"  : "color",
  "value" : "0.67 0.278 0.737"
}
```

The `text` field is a localization key (`ui_*`), not a literal label.
`value` for colors is a space-separated `"r g b"` triple in 0–1 linear.

## Tag distribution (top 12)

`Anime` 189, `Game` 39, `Relaxing` 24, `Technology` 23, `Abstract` 19,
`Cartoon` 18, `Sci-Fi` 17, `Landscape` 15, `Pixel art` 14, `Nature` 12,
`Cyberpunk` 12, `Fantasy` 12.

## Quirks a reimplementation MUST handle

1. **`type` is case-insensitive** in practice (`scene`/`Scene`, `web`/`Web`,
   `video`/`Video` all appear). Normalize on read.
2. **`version` is an author save-counter**, not a schema version — do not branch
   loader logic on it.
3. **Color values are space-separated `"r g b"` strings** (0–1 float), mirroring
   `scene.json` vector encoding.
4. **`file` extension drives the loader** (`.json`/`.mp4`/`.html`); for scene
   type, `file` is `"scene.json"` and the actual bundle is the sibling
   `scene.pkg`.
5. **`general.properties` values are user-editable defaults**; the engine
   overrides them at runtime with the user's saved configuration.
6. ~1% of folders lack `type`/`general` (dependency/preset folders) — skip these
   as non-wallpapers.
