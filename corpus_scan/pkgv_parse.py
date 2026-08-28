#!/usr/bin/env py
"""PKGV container parser for Wallpaper Engine scene.pkg files.

Format (little-endian), reverse-engineered from corpus bytes:

  HEADER
    [u32 magic_len]            -> length prefix; the reader caps it at 8 and skips
                                   the version check entirely when len <= 4.
                                   Not the constant 8 the earlier note claimed.
    [8 bytes magic]            -> b"PKGV" + 4 ascii DIGITS = the format VERSION,
                                   e.g. "PKGV0017" (observed: 0007,0008,0011,0012,
                                   0016,0017,0023,...).

                                   [CORRECTION 2026-08-27] This said "a per-file
                                   version/serial ... NOT a binary version word",
                                   inferred from the spread of observed values
                                   alone. The loader reverses it: it runs
                                   atoi(magic + 4) at 0x14027695f and rejects
                                   anything > 24 at 0x140276964 ("Cannot open %s,
                                   version %i not supported."). A serial has no
                                   ceiling. The writer side agrees — wallpaperui.exe
                                   hardcodes "PKGV0024" next to the packer CLI and
                                   exports checkWallpaperPKGVersions. It is ascii
                                   digits AND a version; those were never exclusive.
    [u32 entry_count]          -> number of index entries (this resolves the
                                   "0x14 ambiguity": the byte at offset 0x0c is
                                   the entry COUNT, e.g. 0x14 = 20 entries in
                                   2844219893/scene.pkg).

  INDEX (entry_count records, each)
    [u32 name_len]
    [name_len bytes name]      -> UTF-8 internal path (e.g. "scene.json")
    [u32 data_offset]          -> byte offset of this blob, measured from the
                                   START OF THE DATA SECTION (i.e. relative to
                                   the byte immediately after the index).
    [u32 data_size]            -> blob length in bytes.

  DATA SECTION
    Concatenation of every blob, in index order, starting at file offset
    (16 + sum over entries of (4 + name_len + 8)). data_offset values are
    relative to this start. Contiguous: data_offset[i+1] == data_offset[i] +
    data_size[i] in all observed files (no padding).

    [CORRECTION 2026-08-28] This said "12 + ...", which contradicted this very
    docstring two blocks up (it states the entry COUNT sits at offset 0x0c = 12,
    so the index cannot start before 16) and contradicted the code, which uses
    `off = 4 + magic_len + 4` -> 16. The header is: u32 magic_len (4) + magic
    (8) + u32 entry_count (4) = 16 bytes.

  WHAT THIS SCRIPT DOES *NOT* ENFORCE
    The version note above describes the *engine's* loader, which rejects
    atoi(magic+4) > 24. **This parser never checks the version** -- `version_str`
    is decoded at line ~194 and only ever printed. It also hard-gates
    `magic_len == 8` (MAGIC_LEN_EXPECTED), so a container framed any other way is
    reported as "not a pkg" rather than parsed. Both are fine for surveying this
    corpus; neither is a model of the loader. Do not cite this script as evidence
    for what the engine accepts.

Exit codes:
  0  parsed ok
  1  bad magic / not a pkg
  2  structural error (truncated, bad lengths)
  3  file unreadable

Usage:
  py pkgv_parse.py <scene.pkg>            # human-readable manifest to stdout
  py pkgv_parse.py <scene.pkg> --json     # machine-readable manifest
  py pkgv_parse.py <scene.pkg> --extract <dir>  # dump every entry to dir
"""
from __future__ import annotations
import json
import os
import struct
import sys

MAGIC_LEN_EXPECTED = 8
MAGIC_PREFIX = b"PKGV"
MAX_NAME_LEN = 4096      # sane upper bound for an internal path
MAX_ENTRY_COUNT = 1_000_000


def detect_type(name: str, blob: bytes) -> str:
    """Classify an entry by name extension + leading magic bytes."""
    ext = os.path.splitext(name)[1].lower()
    head = blob[:32]

    # JSON by content (some WE json has leading whitespace / BOM)
    stripped = blob.lstrip()
    if stripped[:1] in (b"{", b"["):
        return "json"

    # TEX texture container (Wallpaper Engine's own format)
    if head[:3] == b"TEX" or head[:4] == b"TEXV":
        return "tex"

    # KTX
    if head[:4] == b"\xabKTX":
        return "ktx"

    # DDS
    if head[:4] == b"DDS ":
        return "dds"

    # PNG / JPEG / GIF / BMP / TGA(ish) / WEBP
    if head[:8] == b"\x89PNG\r\n\x1a\n":
        return "png"
    if head[:3] == b"\xff\xd8\xff":
        return "jpeg"
    if head[:6] in (b"GIF87a", b"GIF89a"):
        return "gif"
    if head[:2] == b"BM":
        return "bmp"
    if head[:4] == b"RIFF" and head[8:12] == b"WEBP":
        return "webp"

    # Ogg / MP3 / WAV / FLAC
    if head[:4] == b"OggS":
        return "ogg"
    if head[:4] == b"RIFF" and head[8:12] == b"WAVE":
        return "wav"
    if head[:4] == b"fLaC":
        return "flac"
    if head[:2] == b"\x49\x44" or (head[0] == 0xFF and (head[1] & 0xE0) == 0xE0):
        return "mp3"  # ID3 or MPEG sync

    # FBX binary
    if head[:21] == b"Kaydara FBX Binary  ":
        return "fbx"

    # assimp-adjacent: look for OBJ/MTL text markers
    if head[:1] in (b"#",) and b"obj" in head.lower():
        return "obj"
    if stripped[:1] == b"v" and head.split(b"\n",1)[0].startswith(b"v "):
        return "obj"

    # LZ4 frame
    if head[:4] == b"\x04\x22\x4d\x18":
        return "lz4"

    # zlib/gzip
    if head[:2] == b"\x1f\x8b":
        return "gzip"
    if head[:2] in (b"\x78\x01", b"\x78\x9c", b"\x78\xda"):
        return "zlib"

    # GLSL text by extension
    if ext in (".frag", ".vert", ".glsl", ".glslf", ".glslv", ".comp", ".tesc", ".tese", ".geom"):
        return "glsl-" + ext.lstrip(".")
    if ext in (".fx", ".fxh"):
        return "hlsl"
    if ext == ".ttf" or head[:4] in (b"\x00\x01\x00\x00", b"OTTO", b"ttcf"):
        return "font"
    if ext == ".otf":
        return "font"

    # MP4 family
    if head[4:8] in (b"ftyp", b"moov", b"mdat"):
        return "mp4"
    if head[:4] == b"\x1a\x45\xdf\xa3":
        return "webm-mkv"

    # Fallback by extension
    if ext in (".json",):
        return "json-probable"
    if ext in (".tex",):
        return "tex-unknown"
    if ext in (".mdl", ".mesh", ".model"):
        return "mesh-unknown"
    if ext in (".js", ".mjs"):
        return "javascript"
    if ext in (".css",):
        return "css"
    if ext in (".html", ".htm"):
        return "html"
    if ext in (".mp3",):
        return "mp3"
    if ext in (".wav",):
        return "wav"

    return "unknown"


def parse_pkg(path: str, log_errors: list | None = None):
    """Parse a .pkg file. Returns (magic_str, version_str, data_start, entries, error_msg).

    entries is a list of dicts: {name, name_off, data_off(rel), data_size, abs_off, type}
    On hard failure returns (magic, version, 0, [], error_msg).
    """
    try:
        with open(path, "rb") as f:
            data = f.read()
    except OSError as e:
        return None, None, 0, [], f"unreadable: {e}"

    if len(data) < 16:
        return None, None, 0, [], "truncated (<16 bytes)"

    magic_len = struct.unpack_from("<I", data, 0)[0]
    if magic_len != MAGIC_LEN_EXPECTED:
        # not a pkg (or unknown framing)
        return None, None, 0, [], f"magic_len={magic_len} != 8"

    magic_field = data[4:4 + magic_len]
    if magic_field[:4] != MAGIC_PREFIX:
        return (magic_field.decode("ascii", "replace"), None, 0, [],
                f"magic prefix {magic_field[:4]!r} != b'PKGV'")

    magic_str = magic_field.decode("ascii", "replace")
    version_str = magic_field[4:].decode("ascii", "replace")  # e.g. "0017"

    if len(data) < 4 + magic_len + 4:
        return magic_str, version_str, 0, [], "truncated header (no entry count)"

    entry_count = struct.unpack_from("<I", data, 4 + magic_len)[0]
    if entry_count > MAX_ENTRY_COUNT:
        return magic_str, version_str, 0, [], f"implausible entry_count={entry_count}"

    off = 4 + magic_len + 4
    entries = []
    for i in range(entry_count):
        if off + 4 > len(data):
            if log_errors is not None:
                log_errors.append(f"{path}: truncated index at entry {i}")
            break
        name_len = struct.unpack_from("<I", data, off)[0]
        if name_len == 0 or name_len > MAX_NAME_LEN:
            return magic_str, version_str, 0, [], (
                f"bad name_len={name_len} at entry {i} (off=0x{off:x})")
        name_off = off + 4
        if name_off + name_len + 8 > len(data):
            return magic_str, version_str, 0, [], (
                f"truncated name/meta at entry {i} (need {name_len}+8 bytes)")
        try:
            name = data[name_off:name_off + name_len].decode("utf-8")
        except UnicodeDecodeError:
            name = data[name_off:name_off + name_len].decode("utf-8", "replace")
        data_off_rel = struct.unpack_from("<I", data, name_off + name_len)[0]
        data_size = struct.unpack_from("<I", data, name_off + name_len + 4)[0]
        entries.append({
            "index": i,
            "name": name,
            "name_off": off,
            "data_off": data_off_rel,
            "data_size": data_size,
        })
        off = name_off + name_len + 8

    data_start = off
    # resolve absolute offsets + types
    for e in entries:
        e["abs_off"] = data_start + e["data_off"]
        blob = data[e["abs_off"]: e["abs_off"] + e["data_size"]]
        e["type"] = detect_type(e["name"], blob)
        e["magic_hex"] = blob[:16].hex()

    # sanity: last blob should not overrun file
    if entries:
        last_end = entries[-1]["abs_off"] + entries[-1]["data_size"]
        if last_end > len(data):
            return magic_str, version_str, data_start, entries, (
                f"last entry overruns file (end=0x{last_end:x} > size=0x{len(data):x})")

    return magic_str, version_str, data_start, entries, None


def format_manifest(path: str, magic_str, version_str, data_start, entries, error):
    lines = []
    lines.append(f"FILE: {path}")
    if error and not entries:
        lines.append(f"  ERROR: {error}")
        return "\n".join(lines)
    lines.append(f"  magic: {magic_str!r}  version_field: {version_str!r}")
    lines.append(f"  entry_count: {len(entries)}  data_section_offset: 0x{data_start:x}")
    if error:
        lines.append(f"  WARNING: {error}")
    lines.append(f"  {'#':>3}  {'type':<14} {'size':>10}  {'abs_off':>10}  name")
    for e in entries:
        lines.append(f"  {e['index']:>3}  {e['type']:<14} {e['data_size']:>10}  "
                     f"0x{e['abs_off']:08x}  {e['name']}")
    return "\n".join(lines)


def main(argv):
    if len(argv) < 2:
        print(__doc__)
        return 0
    path = argv[1]
    mode = argv[2] if len(argv) > 2 else "text"

    if mode == "--extract":
        outdir = argv[3]
        magic, ver, ds, entries, err = parse_pkg(path)
        if not entries:
            print(f"ERROR: {err}", file=sys.stderr)
            return 2
        os.makedirs(outdir, exist_ok=True)
        with open(path, "rb") as f:
            data = f.read()
        for e in entries:
            blob = data[e["abs_off"]: e["abs_off"] + e["data_size"]]
            # safe path: strip leading slashes, keep subdir structure
            rel = e["name"].lstrip("/\\")
            op = os.path.join(outdir, rel)
            os.makedirs(os.path.dirname(op) or ".", exist_ok=True)
            with open(op, "wb") as g:
                g.write(blob)
        print(f"extracted {len(entries)} entries to {outdir}")
        return 0

    magic, ver, ds, entries, err = parse_pkg(path)
    if mode == "--json":
        doc = {
            "file": path,
            "magic": magic,
            "version_field": ver,
            "data_section_offset": ds,
            "entry_count": len(entries),
            "error": err,
            "entries": entries,
        }
        print(json.dumps(doc, indent=2))
        return 0 if entries else 1

    print(format_manifest(path, magic, ver, ds, entries, err))
    return 0 if entries else (2 if err else 0)


if __name__ == "__main__":
    sys.exit(main(sys.argv))
