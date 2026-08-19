#!/usr/bin/env bash
# Ghidra headless analysis pipeline for wallpaper64.exe
# Usage: docker run ... -v ...:/work we-re:latest /work/scripts/ghidra_analyze.sh
set -euo pipefail

BIN="${1:-/work/binaries/wallpaper64.exe}"
PROJ_DIR="/work/ghidra_proj"
PROJ_NAME="we_analysis"
LOG_DIR="/work/analysis/ghidra_logs"

mkdir -p "$PROJ_DIR" "$LOG_DIR"

BIN_BASENAME=$(basename "$BIN" .exe)
echo "=== Ghidra headless analysis: $BIN ==="
echo "Project: $PROJ_DIR/$PROJ_NAME"

# Step 1: Import + auto-analyze (creates project with full analysis)
# -overwrite: re-import if exists
# -analysisTimeoutPerFile: cap analysis time (seconds)
"$GHIDRA_HOME/support/analyzeHeadless" \
    "$PROJ_DIR" "$PROJ_NAME" \
    -import "$BIN" \
    -overwrite \
    -analysisTimeoutPerFile 1800 \
    -processor "x86:LE:64:default" \
    2>&1 | tee "$LOG_DIR/analyze_${BIN_BASENAME}.log"

echo "=== Analysis complete: $BIN ==="
echo "Project at: $PROJ_DIR/$PROJ_NAME.rep"
