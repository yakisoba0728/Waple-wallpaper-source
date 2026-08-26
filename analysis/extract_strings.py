#!/usr/bin/env py
"""Extract ASCII (>=5) and UTF-16LE (>=5) printable strings from the binary.
Writes raw dumps to analysis/strings/strings-ascii.txt and strings-utf16.txt
with file-offset prefixes, then categorizes into themed files.
"""
import struct
import os
import re

BIN = r"Z:\SteamLibrary\steamapps\common\wallpaper_engine\wallpaper64.exe"
OUTDIR = r"C:\Users\<user>\Desktop\wallpaper_source\analysis\strings"
os.makedirs(OUTDIR, exist_ok=True)

data = open(BIN, "rb").read()
N = len(data)

# ---------- ASCII ----------
ASCII_RE = re.compile(rb"[\x20-\x7e]{5,}")
ascii_hits = []  # (offset, str)
for m in ASCII_RE.finditer(data):
    ascii_hits.append((m.start(), m.group().decode("ascii")))

# ---------- UTF-16LE ----------
# Match runs of (printable-byte, 0x00) pairs at min length 5 chars.
UTF16_RE = re.compile(rb"(?:[\x20-\x7e]\x00){5,}")
utf16_hits = []
for m in UTF16_RE.finditer(data):
    s = m.group().decode("utf-16le", "replace")
    utf16_hits.append((m.start(), s))

# Write raw dumps with offsets
with open(os.path.join(OUTDIR, "strings-ascii.txt"), "w", encoding="utf-8", errors="replace") as f:
    f.write(f"# ASCII strings (>=5 chars) — {len(ascii_hits)} entries\n")
    f.write(f"# source: {BIN}\n\n")
    for off, s in ascii_hits:
        f.write(f"{off:#010x}  {s}\n")

with open(os.path.join(OUTDIR, "strings-utf16.txt"), "w", encoding="utf-8", errors="replace") as f:
    f.write(f"# UTF-16LE strings (>=5 chars) — {len(utf16_hits)} entries\n")
    f.write(f"# source: {BIN}\n\n")
    for off, s in utf16_hits:
        f.write(f"{off:#010x}  {s}\n")

print(f"ascii={len(ascii_hits)} utf16={len(utf16_hits)}", file=__import__("sys").stderr)

# Save for categorizer
import json
with open(os.path.join(OUTDIR, "_all.json"), "w", encoding="utf-8") as f:
    json.dump({"ascii": ascii_hits, "utf16": utf16_hits}, f)
