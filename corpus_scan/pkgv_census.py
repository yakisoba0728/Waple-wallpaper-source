#!/usr/bin/env py
"""Corpus-wide census over all Wallpaper Engine workshop .pkg files.

Walks every workshop folder under WORKSHOP_DIR, parses each scene.pkg with
pkgv_parse, and produces four artifacts in OUT_DIR:

  entry-name-frequency.tsv   every distinct internal path -> # scenes containing it
  chunk-type-census.md       per file-extension/type: magic, count, 3 example scenes
  scenes-index.tsv           one row per workshop folder: id, type, files, pkg size, has pkg
  parse-errors.tsv           scenes that failed to parse, with reason

Re-uses parse_pkg + detect_type from pkgv_parse.py (same directory).
"""
from __future__ import annotations
import json
import os
import sys
from collections import Counter, defaultdict

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
from pkgv_parse import parse_pkg, detect_type  # noqa: E402

WORKSHOP_DIR = r"Z:\SteamLibrary\steamapps\workshop\content\431960"
OUT_DIR = HERE  # corpus_scan


def human(n: int) -> str:
    for unit in ("B", "KB", "MB", "GB"):
        if n < 1024:
            return f"{n:.0f} {unit}" if unit == "B" else f"{n:.1f} {unit}"
        n /= 1024
    return f"{n:.1f} TB"


def classify_wallpaper(project: dict, has_pkg: bool, files: list) -> str:
    """Infer wallpaper type from project.json + folder contents."""
    if project is not None:
        t = str(project.get("type", "")).strip().lower()
        if t:
            return t
        f = str(project.get("file", "")).lower()
        if f.endswith((".mp4", ".webm")):
            return "video"
        if f.endswith((".html", ".htm")):
            return "web"
        if f == "scene.json" or has_pkg:
            return "scene"
    # fall back to file presence
    lower_files = [x.lower() for x in files]
    if any(x.endswith(".mp4") or x.endswith(".webm") for x in lower_files):
        return "video"
    if any(x.endswith(".html") or x.endswith(".htm") for x in lower_files):
        return "web"
    if has_pkg:
        return "scene"
    return "unknown"


def main():
    os.makedirs(OUT_DIR, exist_ok=True)
    name_freq = Counter()            # internal path -> # scenes
    type_examples = defaultdict(list)  # type -> list of (scene_id, entry_name, magic_hex)
    type_counts = Counter()            # type -> total entries across corpus
    ext_counts = Counter()             # extension -> # entries
    scenes_rows = []                   # (folder_id, type, file_count, pkg_size, has_pkg, n_entries)
    errors = []                        # (folder_id, path, reason)

    folders = sorted(d for d in os.listdir(WORKSHOP_DIR)
                     if os.path.isdir(os.path.join(WORKSHOP_DIR, d)))

    for folder in folders:
        fdir = os.path.join(WORKSHOP_DIR, folder)
        files = []
        for root, _, fnames in os.walk(fdir):
            for fn in fnames:
                rel = os.path.relpath(os.path.join(root, fn), fdir)
                files.append(rel)
        # project.json
        proj_path = os.path.join(fdir, "project.json")
        project = None
        if os.path.isfile(proj_path):
            try:
                with open(proj_path, "r", encoding="utf-8-sig") as pf:
                    project = json.load(pf)
            except Exception as e:
                errors.append((folder, proj_path, f"project.json parse: {type(e).__name__}: {e}"))

        pkg_path = os.path.join(fdir, "scene.pkg")
        has_pkg = os.path.isfile(pkg_path)
        pkg_size = os.path.getsize(pkg_path) if has_pkg else 0

        wtype = classify_wallpaper(project, has_pkg, files)

        n_entries = 0
        if has_pkg:
            magic, ver, ds, entries, err = parse_pkg(pkg_path)
            if err or not entries:
                errors.append((folder, pkg_path, err or "no entries"))
            if entries:
                n_entries = len(entries)
                with open(pkg_path, "rb") as fh:
                    blobdata = fh.read()
                for e in entries:
                    name_freq[e["name"]] += 1
                    # re-detect using name only (avoid re-reading every blob fully)
                    blob = blobdata[e["abs_off"]: e["abs_off"] + min(64, e["data_size"])]
                    t = e.get("type") or detect_type(e["name"], blob)
                    type_counts[t] += 1
                    ext = os.path.splitext(e["name"])[1].lower()
                    ext_counts[ext] += 1
                    if len(type_examples[t]) < 8:
                        magic_hex = blob[:32].hex()
                        type_examples[t].append((folder, e["name"], magic_hex, e["data_size"]))

        scenes_rows.append((folder, wtype, len(files), pkg_size, 1 if has_pkg else 0, n_entries))

    # ---- write entry-name-frequency.tsv ----
    with open(os.path.join(OUT_DIR, "entry-name-frequency.tsv"), "w", encoding="utf-8") as f:
        f.write("count\tinternal_path\n")
        for name, c in name_freq.most_common():
            f.write(f"{c}\t{name}\n")

    # ---- write chunk-type-census.md ----
    with open(os.path.join(OUT_DIR, "chunk-type-census.md"), "w", encoding="utf-8") as f:
        f.write("# PKGV Chunk-Type Census\n\n")
        f.write(f"Corpus: `{WORKSHOP_DIR}`\n\n")
        f.write(f"- Workshop folders scanned: **{len(folders)}**\n")
        f.write(f"- Distinct internal paths: **{len(name_freq)}**\n")
        f.write(f"- Distinct detected types: **{len(type_counts)}**\n")
        f.write(f"- Total chunk entries across all pkgs: **{sum(type_counts.values())}**\n\n")
        f.write("## Detected-type census\n\n")
        f.write("| type | total entries | example magic (first 32 bytes hex) | example scenes |\n")
        f.write("|------|--------------:|----|-----|\n")
        for t, c in type_counts.most_common():
            ex = type_examples[t][:3]
            magic = ex[0][2] if ex else ""
            scenes = ", ".join(f"`{e[0]}`" for e in ex)
            f.write(f"| `{t}` | {c} | `{magic}` | {scenes} |\n")
        f.write("\n## Extension census\n\n")
        f.write("| extension | total entries |\n|---|---:|\n")
        for ext, c in ext_counts.most_common():
            f.write(f"| `{ext or '(none)'}` | {c} |\n")
        f.write("\n## Per-type detail (example scenes + magics)\n\n")
        for t, c in type_counts.most_common():
            f.write(f"### `{t}` ({c} entries)\n\n")
            for (sid, name, magic, size) in type_examples[t][:3]:
                f.write(f"- scene `{sid}`: `{name}` (size {size}) magic `{magic}`\n")
            f.write("\n")

    # ---- write scenes-index.tsv ----
    with open(os.path.join(OUT_DIR, "scenes-index.tsv"), "w", encoding="utf-8") as f:
        f.write("folder_id\twallpaper_type\tfile_count\tpkg_size_bytes\tpkg_size_human\thas_scene_pkg\tpkg_entry_count\n")
        for (folder, wtype, fc, psz, hp, ne) in scenes_rows:
            f.write(f"{folder}\t{wtype}\t{fc}\t{psz}\t{human(psz)}\t{hp}\t{ne}\n")

    # ---- write parse-errors.tsv ----
    with open(os.path.join(OUT_DIR, "parse-errors.tsv"), "w", encoding="utf-8") as f:
        f.write("folder_id\tpath\treason\n")
        for (folder, path, reason) in errors:
            f.write(f"{folder}\t{path}\t{reason}\n")

    # stdout summary
    print(f"folders scanned       : {len(folders)}")
    print(f"parse errors          : {len(errors)}")
    print(f"distinct internal paths: {len(name_freq)}")
    print(f"distinct types        : {len(type_counts)}")
    print(f"total chunk entries   : {sum(type_counts.values())}")
    print("top 10 internal paths:")
    for n, c in name_freq.most_common(10):
        print(f"  {c:5d}  {n}")
    print("top 10 types:")
    for t, c in type_counts.most_common(10):
        print(f"  {c:6d}  {t}")


if __name__ == "__main__":
    main()
