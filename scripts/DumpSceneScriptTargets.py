# Ghidra headless post-script: decompile named address targets of scenescript64.dll
# Usage: analyzeHeadless <proj> we_analysis -process scenescript64.dll -noanalysis
#        -postScript DumpSceneScriptTargets.py
# Outputs decompiled C + function manifest under /work/analysis/scenescript/
#
# 지원되는 진입점은 이 파일이 아니라 **DumpSceneScriptTargets.java** 다.
# 커밋된 analysis/scenescript/ 산출물을 실제로 만든 것은 Java 쪽이다:
# analysis/ghidra_logs/decompile_scenescript64.log:45-47 이
# `Execute script: DumpSceneScriptTargets.java` (EXIT=0) 를 기록하고, 커밋된
# manifest.txt 의 형식(`... entry=... size=... ok=true`)은 .java:64-65 의 것이며
# 이 파일의 형식(`... size=... body=..`)이 아니다. 두 변형이 존재하는 이유는
# DumpSceneScriptTargets.java:1-2 가 적어둔 대로 blacktop 이미지에 PyGhidra 가
# 활성화돼 있지 않기 때문이다. 이 .py 는 그 대안이고, 검증된 적이 없다.

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
    # [정정 2026-08-30] 종전 이 두 자리는 `int(str(fn.getBody().getMinAddress()))` /
    # `...getMaxAddress()))` 였다. Ghidra 주소의 str() 은 0x 접두 없는 16진수이므로
    # int() 는 base 10 으로 해석해 ValueError 를 던진다.
    #   실측(CPython): int('1816311d0') -> ValueError: invalid literal for int()
    #                  with base 10: '1816311d0'   (181647e2f · 18164bca0 · 1801647aa0 동일)
    # ADDRS 의 앞 5개는 :38-40 에서 NO_FUNCTION 으로 continue 되지만 6번째
    # 1816311d0 은 함수가 잡히므로(커밋된 manifest.txt 가 NO_FUNCTION 6 / 해소 3 을
    # 기록한다) 이 줄에 반드시 도달해 죽는다. manifest.txt 는 루프 **뒤**에 열리므로
    # 결과는 .c 파일 일부만 남고 매니페스트는 아예 없는 상태 — Ghidra/환경 실패처럼
    # 보이지만 실제로는 이 스크립트의 두 호출 버그였다.
    # 수정: .getOffset() 로 정수를 직접 받는다(%d 슬롯을 그대로 쓸 수 있다.
    # 렌더링한 문자열을 넣으려면 %d -> %s 도 함께 바꿔야 한다 —
    # "%d" % str 은 TypeError: %d format: a real number is required, not str).
    manifest.append("%s %s size=%d body=%x..%x ok=%s" % (
        a, fn.getName(), fn.getBody().getNumAddresses(),
        fn.getBody().getMinAddress().getOffset(),
        fn.getBody().getMaxAddress().getOffset(),
        str(res.decompileCompleted())))

mf = open(os.path.join(OUT, "manifest.txt"), "w")
mf.write("\n".join(manifest))
mf.close()
print("DumpSceneScriptTargets done -> %s (%d targets)" % (OUT, len(ADDRS)))
