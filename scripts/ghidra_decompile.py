# Ghidra headless PostScript/Python: decompile target functions + all functions
#
# ⚠️ [2026-09-01] **이 스크립트는 정본 생성기가 아니다 — 커밋된 산출물을 만든 것은
# `scripts/DecompileAll.java` 다.** 세 생성기가 같은 `analysis/decompiled/manifest.json`
# 경로에 쓰는데 스키마가 서로 다르다:
#
#   · `DecompileAll.java`      → {"program", "total",           "functions":[{addr,name,full,size,decompiled}]}
#   · `DecompileTargets.java`  → {"program", "total_functions", ...}
#   · 이 파일                   → {"program", "total_functions", "total_targets", "functions"}
#
# **커밋된 `analysis/decompiled/manifest.json` 의 최상위 키는 `total` 이다** → 즉 현재
# 산출물의 출처는 `DecompileAll.java` 다. 이 스크립트를 그 위에 돌리면 키 이름이 바뀌어
# `total` 을 읽는 소비자(정본 `spec/engine/decompilation-provenance.json` 의
# `decompiledFunctionCount` 세는 법 포함)가 조용히 깨진다.
#
#   python3 -c "import json; print(list(json.load(open('analysis/decompiled/manifest.json'))))"
#   # → ['program', 'total', 'functions']   ← 'total' 이면 DecompileAll.java 산출물이다
#
# 재생성이 필요하면 `DecompileAll.java` 를 써라. 이 파일은 그 이전 세대이며 참고용으로 남긴다.
#
# Outputs:
#   /work/analysis/decompiled/targets/   — named target functions (priority)
#   /work/analysis/decompiled/all/       — every function (JSON manifest + individual .c)
#   /work/analysis/decompiled/manifest.json — function index with addr/name/size/signature
#
# Run AFTER ghidra_analyze.sh has created the project.
# Usage: analyzeHeadless <projdir> <proj> -process <prog> -noanalysis -postScript ghidra_decompile.py

import json, os, re
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

OUT_BASE = "/work/analysis/decompiled"
TARGETS_DIR = os.path.join(OUT_BASE, "targets")
ALL_DIR = os.path.join(OUT_BASE, "all")
for d in (TARGETS_DIR, ALL_DIR):
    if not os.path.exists(d):
        os.makedirs(d)

# Priority targets identified from RTTI analysis (subsystems-identified.md §"Highest-value next-step targets")
# Match by substring of demangled/symbol name. Ghidra will resolve RTTI-derived names automatically.
TARGET_PATTERNS = [
    "SceneWallpaper::LoadSceneAndProperties",
    "Main::LoadScene",
    "Texture::ReadTextureData",
    "MaterialSystem::ReloadDirtyMaterials",
    "AudioProcessor",            # WASAPICallbackType lambda family
    "AudioEventHandler",
    "VideoWallpaper::StartVideoWithNewPlayer",
    "WallpaperManager::Init",
    "DesktopMediaExtensions::QueueAsyncTextureLoad",
    "DesktopMediaExtensions::StartMediaControl",
    "Material::",                # texture callback
    "ImageLayer::",              # texture callback
    "Obj::",                     # SharedMdlData callback (mesh)
    "ParticleVbo::",
    "PropertySystem::",
    "DataCache::AddSharedRemoveListenerToLayer",
    "InterProcessMessageHandler::PeekNextRecvMessageCommand",
    "CEFWallpaper",
    "DWriteFontFileLoader",
    "DWriteFontFileStream",
    "TextAnalysis",
    "GeometrySink",
    "VirtualDesktop::StartVDesktop",
]

def safe_name(s):
    return re.sub(r'[^A-Za-z0-9_.:-]', '_', s)[:180]

def main():
    monitor = ConsoleTaskMonitor()
    prog = currentProgram
    print("=== ghidra_decompile.py: {} ===".format(prog.getName()))

    ifc = DecompInterface()
    ifc.openProgram(prog)

    fm = prog.getFunctionManager()
    funcs = list(fm.getFunctions(True))
    print("Total functions: {}".format(len(funcs)))

    manifest = []
    target_hits = []

    for i, fn in enumerate(funcs):
        name = fn.getName()
        try:
            # demangled if available
            full = fn.getName(True) if hasattr(fn, 'getName') else name
        except:
            full = name
        addr = fn.getEntryPoint()
        size = fn.getBody().getNumAddresses()
        sig = fn.getSignature().getPrototypeString(True) if fn.getSignature() else ""

        entry = {
            "name": name,
            "full": full,
            "addr": str(addr),
            "size": size,
            "signature": sig,
        }
        manifest.append(entry)

        is_target = any(p in full or p in name for p in TARGET_PATTERNS)
        if is_target:
            entry["target"] = True
            target_hits.append(entry)

        # Decompile priority targets immediately; others optionally
        if is_target or (i % 50 == 0):
            try:
                res = ifc.decompileFunction(fn, 60, monitor)
                if res and res.decompileCompleted():
                    code = res.getDecompiledFunction().getC()
                    fname = safe_name("{}_{:08x}".format(full, addr.getOffset()))
                    outdir = TARGETS_DIR if is_target else ALL_DIR
                    with open(os.path.join(outdir, fname + ".c"), "w") as f:
                        f.write("// Function: {}\n// Addr: {}\n// Size: {} bytes\n// Signature: {}\n\n".format(full, addr, size, sig))
                        f.write(code)
                    entry["decompiled"] = True
                else:
                    entry["decompiled"] = False
                    entry["decompile_error"] = (res.getErrorMessage() if res else "no result")
            except Exception as e:
                entry["decompiled"] = False
                entry["decompile_error"] = str(e)

        if i % 500 == 0:
            print("  [{}] {} ({})".format(i, full, addr))

    # Write manifest
    with open(os.path.join(OUT_BASE, "manifest.json"), "w") as f:
        json.dump({
            "program": prog.getName(),
            "total_functions": len(funcs),
            "total_targets": len(target_hits),
            "functions": manifest,
        }, f, indent=2)

    print("=== Done. {} functions, {} target hits. ===".format(len(funcs), len(target_hits)))
    print("Target functions decompiled:")
    for t in target_hits:
        print("  [{}] {} @ {}".format("OK " if t.get("decompiled") else "FAIL", t["full"], t["addr"]))

main()
