#!/usr/bin/env py
"""Corpus-wide census over all Wallpaper Engine workshop .pkg files.

Walks every workshop folder under WORKSHOP_DIR, parses each scene.pkg with
pkgv_parse, and produces four artifacts in OUT_DIR:

  entry-name-frequency.tsv   every distinct internal path -> # scenes containing it
  chunk-type-census.md       per file-extension/type: magic, count, 3 example scenes
  scenes-index.tsv           one row per workshop folder: id, type, files, pkg size, has pkg
  parse-errors.tsv           scenes that failed to parse, with reason

Re-uses parse_pkg + detect_type from pkgv_parse.py (same directory).

Usage (2026-08-30 이후):
    WE_WORKSHOP=<워크샵 코퍼스 루트> python3 corpus_scan/pkgv_census.py

코퍼스가 없으면 **아무것도 쓰지 않고 종료코드 2** 로 끝난다. 종전에는 입력이 0건이어도
산출물 4개를 헤더만 남기고 덮으며 0 을 반환했다 — 상세는 WORKSHOP_DIR 정의 위 주석 참조.
"""
from __future__ import annotations
import io
import json
import os
import sys
from collections import Counter, defaultdict

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
from pkgv_parse import parse_pkg, detect_type  # noqa: E402

# 경로는 환경변수로 받는다. Z:\ 는 기본값으로만 남긴다.
#
# [정정 2026-08-30] 종전 이 자리는 `WORKSHOP_DIR = r"Z:\SteamLibrary\..."` 하드코딩이었고
# 오버라이드 수단이 없었다. 그래서 이 생성기는 저자의 Windows 머신 밖에서는 돌 수 없고,
# 그런데도 아래 main() 은 folders 가 0개여도 산출물 4개를 "w" 로 열어 헤더만 남긴 뒤
# 종료코드 0 을 냈다. 즉 **입력이 없는 머신에서 돌리면 커밋된 근거를 파괴하면서 성공을
# 보고**했다. analysis/parse_pe.py:14-18 이 남긴 교훈("돌릴 수 없는 생성기는 그 산출물이
# 정본이 되는 순간 검증 밖에 놓인다")이 2026-08-28 에 그 스크립트에는 적용됐는데
# (같은 커밋 0bb963ed 가 이 파일도 건드렸지만) 이 자리에는 적용되지 않았다.
#
# 이름은 형제 규약에 맞춘다: Waple/scripts/spec/measure_material_brightness.py:28 ·
# measure_mdl_deep.py:23-24 · measure_misc_assets.py:31-32 가 모두
# WE_WORKSHOP(코퍼스) / WE_ROOT(설치본) 을 쓴다. 이 스크립트만 어긋나 있었다.
#
# 주의: 워크샵 코퍼스는 이 리포에도 형제 리포에도 없다(실측 2026-08-30: `.pkg` 0건.
# `.pak` 446개는 CEF 리소스이고 무관하다). 따라서 지금 어느 맥에서도 이 산출물은
# 재생성 불가이고, 커밋된 447행 산출물이 유일한 근거다.
WORKSHOP_DIR = os.environ.get(
    "WE_WORKSHOP",
    r"Z:\SteamLibrary\steamapps\workshop\content\431960")
OUT_DIR = os.environ.get("PKGV_CENSUS_OUT", HERE)  # corpus_scan


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
    # 입력 확인을 산출물을 열기 **전에** 한다.
    #
    # [정정 2026-08-30] 종전에는 이 검사가 아예 없었고, os.makedirs 직후 곧바로
    # listdir 로 들어갔다. 실측 재현(검증자·나 각각 독립 재현): WORKSHOP_DIR 을 빈
    # 디렉터리로 돌리면 `folders scanned : 0` 을 찍고 **종료코드 0** 으로 끝나며
    # entry-name-frequency.tsv 446,369B -> 20B, scenes-index.tsv -> 96B,
    # chunk-type-census.md -> 461B 로 커밋된 산출물 4개가 전부 잘렸다.
    # verify_mdl_tex.py:280-289 가 이미 확립한 규약대로, 이것은 "실패 0" 이 아니라
    # "안 봤다" 이므로 0 아닌 코드로 종료해야 한다.
    #
    # 하한은 개수 하한(예: 446)으로 걸지 않는다. verify_mdl_tex.py:30-33 이 하한을
    # 정당화하는 근거는 그 입력이 **리포에 커밋된 자산**이라는 것("자산이 늘 수는
    # 있어도 줄면 이 검증기가 재는 대상이 사라진 것이다")인데, 이 스크립트의 입력은
    # 리포에 없는 머신 로컬 Steam 워크샵 라이브러리이고 저자가 구독을 해제하면
    # 정당하게 줄어들 수 있다. 446 하한은 유효한 축소 코퍼스에서 오경보가 된다.
    # 그래서 "입력이 존재하고 비어 있지 않은가" 만 본다.
    if not os.path.isdir(WORKSHOP_DIR):
        print("[환경 오류] 워크샵 코퍼스가 없다: %s" % WORKSHOP_DIR, file=sys.stderr)
        print("  WE_WORKSHOP 으로 코퍼스 루트를 지정하라(형제 규약과 같은 이름이다).",
              file=sys.stderr)
        print("  이건 '스캔 0건' 이 아니라 '안 봤다' 다. 산출물은 건드리지 않았다.",
              file=sys.stderr)
        return 2

    folders = sorted(d for d in os.listdir(WORKSHOP_DIR)
                     if os.path.isdir(os.path.join(WORKSHOP_DIR, d)))
    if not folders:
        print("[환경 오류] %s 아래에 워크샵 폴더가 0개다." % WORKSHOP_DIR, file=sys.stderr)
        print("  WE_WORKSHOP 이 코퍼스 루트를 가리키는지 확인하라.", file=sys.stderr)
        print("  이건 '스캔 0건' 이 아니라 '안 봤다' 다. 산출물은 건드리지 않았다.",
              file=sys.stderr)
        return 2

    os.makedirs(OUT_DIR, exist_ok=True)
    name_freq = Counter()            # internal path -> # scenes
    type_examples = defaultdict(list)  # type -> list of (scene_id, entry_name, magic_hex)
    type_counts = Counter()            # type -> total entries across corpus
    ext_counts = Counter()             # extension -> # entries
    scenes_rows = []                   # (folder_id, type, file_count, pkg_size, has_pkg, n_entries)
    errors = []                        # (folder_id, path, reason)

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

        # [2026-08-28] gifscene.pkg 를 후보에 넣는다 — 종전엔 "scene.pkg" 만 열었다.
        #
        # 그래서 워크샵 162 씬 중 정확히 1건(`1612750231`)이 `has_scene_pkg=0` ·
        # `wallpaper_type=unknown` 으로 떨어졌다. 그 폴더는 손상된 게 아니라 GIF 씬이라
        # 컨테이너 이름이 `gifscene.pkg` 이고 안의 문서도 `gifscene.json` 이다.
        # (Waple 리포 `spec/corpus/scene-schema.json` 의 byPackage 가
        #  `{"scene.pkg/scene.json": 161, "gifscene.pkg/gifscene.json": 1}` 로 같은 분할을 싣는다.)
        #
        # 이름 글롭 하나로 모집단을 정의하면 이렇게 조용히 1건이 샌다.
        pkg_path = next(
            (p for p in (os.path.join(fdir, n) for n in ("scene.pkg", "gifscene.pkg"))
             if os.path.isfile(p)),
            os.path.join(fdir, "scene.pkg"),
        )
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

    # 산출물 4개를 **메모리에 먼저 만들고** 전부 만들어진 뒤에 한 번에 쓴다.
    #
    # [정정 2026-08-30] 종전에는 네 블록이 각각 곧바로 open(..., "w") 을 했다.
    # "w" 는 여는 즉시 파일을 0바이트로 자르므로, 세 번째 블록에서 예외가 나면
    # 앞의 두 산출물은 이미 잘린 상태로 남는다. 아래 io.StringIO 로 본문을 완성한 뒤
    # 마지막에 실제 파일로 내보내면, 실패가 커밋된 근거를 부분 파괴하지 못한다.
    artifacts = {}

    # ---- build entry-name-frequency.tsv ----
    with io.StringIO() as f:
        f.write("count\tinternal_path\n")
        for name, c in name_freq.most_common():
            f.write(f"{c}\t{name}\n")
        artifacts["entry-name-frequency.tsv"] = f.getvalue()

    # ---- build chunk-type-census.md ----
    with io.StringIO() as f:
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
        artifacts["chunk-type-census.md"] = f.getvalue()

    # ---- build scenes-index.tsv ----
    with io.StringIO() as f:
        f.write("folder_id\twallpaper_type\tfile_count\tpkg_size_bytes\tpkg_size_human\thas_scene_pkg\tpkg_entry_count\n")
        for (folder, wtype, fc, psz, hp, ne) in scenes_rows:
            f.write(f"{folder}\t{wtype}\t{fc}\t{psz}\t{human(psz)}\t{hp}\t{ne}\n")
        artifacts["scenes-index.tsv"] = f.getvalue()

    # ---- build parse-errors.tsv ----
    with io.StringIO() as f:
        f.write("folder_id\tpath\treason\n")
        for (folder, path, reason) in errors:
            f.write(f"{folder}\t{path}\t{reason}\n")
        artifacts["parse-errors.tsv"] = f.getvalue()

    # ---- all four bodies are complete: now write them out ----
    for fname, body in artifacts.items():
        with open(os.path.join(OUT_DIR, fname), "w", encoding="utf-8") as f:
            f.write(body)

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
    # [정정 2026-08-30] 종전에는 `main()` 을 맨몸으로 불러 반환값을 버렸다(암묵 종료코드 0).
    # verify_mdl_tex.py:299-300 과 같은 형태로 종료코드를 전파한다.
    sys.exit(main())
