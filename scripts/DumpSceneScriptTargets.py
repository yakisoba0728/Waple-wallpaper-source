# Ghidra headless post-script: decompile named address targets of scenescript64.dll
# Usage: analyzeHeadless <proj> we_analysis -process scenescript64.dll -noanalysis
#        -postScript DumpSceneScriptTargets.py
# Outputs decompiled C + function manifest under /work/analysis/scenescript/

import os

from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

OUT = "/work/analysis/scenescript"
ADDRS = [
    "180167bf10",  # GetSceneScriptVersion export
    "180167bf20",  # Init export
    "180167bfc0",  # Shutdown export
    "180167c010",  # CreateSceneScriptEngine export
    "1801647aa0",  # engine ctor called by CreateSceneScriptEngine
    "1816311d0",   # registers thisScene methods (getLayer..createModelData)
    "181647e2f",   # registers thisObject/thisLayer globals
    "18164bca0",   # caller wiring global registrations
    "1800046c10",  # callee of Init (v8 platform/init?)
]

fm = currentProgram.getFunctionManager()
af = currentProgram.getAddressFactory().getDefaultAddressSpace()

decomp = DecompInterface()
decomp.openProgram(currentProgram)
monitor = ConsoleTaskMonitor()

if not os.path.isdir(OUT):
    os.makedirs(OUT)

manifest = []
for a in ADDRS:
    addr = af.getAddress(a)
    fn = fm.getFunctionContaining(addr)
    if fn is None:
        manifest.append("%s NO_FUNCTION" % a)
        continue
    entry = fn.getEntryPoint()
    res = decomp.decompileFunction(fn, 120, monitor)
    name = "%s_%s" % (a, fn.getName().replace(" ", "_"))
    if res.decompileCompleted():
        code = res.getDecompiledFunction().getC()
    else:
        code = "// decompile failed: %s\n// %s" % (a, str(res.getErrorMessage()))
    f = open(os.path.join(OUT, name + ".c"), "w")
    f.write(code)
    f.close()
    manifest.append("%s %s size=%d body=%d..%d ok=%s" % (
        a, fn.getName(), fn.getBody().getNumAddresses(),
        int(str(fn.getBody().getMinAddress())), int(str(fn.getBody().getMaxAddress())),
        str(res.decompileCompleted())))

mf = open(os.path.join(OUT, "manifest.txt"), "w")
mf.write("\n".join(manifest))
mf.close()
print("DumpSceneScriptTargets done -> %s (%d targets)" % (OUT, len(ADDRS)))
