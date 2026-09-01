// Decompile ALL functions in the program, plus emit a cross-reference index.
// Outputs:
//   /work/analysis/decompiled/all/<addr>__<sanitized_name>.c   — every function
//   /work/analysis/decompiled/manifest.json                     — function index
//   /work/analysis/decompiled/xref-index.tsv                    — addr, name, calls-to strings/imports/rtti
//
// Strategy: function names are mostly FUN_, so we enrich each manifest entry with
//   - imported API calls (e.g. D3D11CreateDevice) -> identifies D3D11 code
//   - referenced RTTI strings (.?AV... or .?AU...) -> identifies class methods
//   - referenced format magics (TEXV/MDLV/SHDV/PKGV/PLPV) -> identifies decoders
//   - referenced .pkg/.json/.tex filenames -> identifies parsers
// This makes functions searchable by what they actually DO, not by name.

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.address.Address;
import ghidra.program.model.symbol.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.pcode.PcodeOp;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.PcodeOpAST;
import java.util.*;
import java.io.File;
import java.io.FileWriter;
import java.io.Writer;

public class DecompileAll extends GhidraScript {
    static final String OUT = "/work/analysis/decompiled";
    static final String ALL_DIR = OUT + "/all";

    private static String safe(String s) {
        StringBuilder sb = new StringBuilder();
        for (char c : s.toCharArray()) {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_') sb.append(c);
            else sb.append('_');
        }
        return sb.toString();
    }

    @Override
    public void run() throws Exception {
        new File(ALL_DIR).mkdirs();
        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);

        FunctionManager fm = currentProgram.getFunctionManager();
        FunctionIterator it = fm.getFunctions(true);
        java.util.List<Function> all = new java.util.ArrayList<>();
        while (it.hasNext()) all.add(it.next());
        println("Decompiling " + all.size() + " functions...");

        java.io.BufferedWriter manifest = new java.io.BufferedWriter(new java.io.FileWriter(OUT + "/manifest.json"));
        java.io.BufferedWriter xref = new java.io.BufferedWriter(new java.io.FileWriter(OUT + "/xref-index.tsv"));
        xref.write("addr\tname\tsize\trtti_classes\tformat_magics\timported_apis\tfilename_strings\n");
        manifest.write("{\"program\":\"" + currentProgram.getName() + "\",\"total\":" + all.size() + ",\"functions\":[\n");

        long t0 = System.currentTimeMillis();
        int writeFailures = 0;   // [정정 2026-08-30] 삼켜지던 per-file 쓰기 실패를 센다
        int writeOk = 0;
        for (int i = 0; i < all.size(); i++) {
            Function fn = all.get(i);
            String name = fn.getName();
            String full = name; try { full = fn.getName(true); } catch(Throwable e){}
            Address addr = fn.getEntryPoint();
            long size = fn.getBody().getNumAddresses();

            // Decompile
            String code = "";
            boolean ok = false;
            try {
                DecompileResults res = ifc.decompileFunction(fn, 60, monitor);
                if (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null) {
                    code = res.getDecompiledFunction().getC();
                    ok = true;
                }
            } catch (Throwable e) {
                code = "// DECOMPILE EXCEPTION: " + e;
            }

            // Enrichment: scan decompiled code for telltale tokens
            Set<String> rtti = new TreeSet<>(), magics = new TreeSet<>(), apis = new TreeSet<>(), files = new TreeSet<>();
            String lc = code;
            // RTTI class names: .?AV<Name> or in demangled strings "Class::"
            java.util.regex.Matcher m = java.util.regex.Pattern.compile("\\.?A[VUW]([A-Za-z_][A-Za-z0-9_]*)").matcher(code);
            while (m.find()) { String c = m.group(1); if (c.length() > 2 && !c.startsWith("std") && !c.startsWith("_")) rtti.add(c); }
            // Format magics
            for (String mg : new String[]{"PKGV","PLPV","TEXV","TEXI","TEXB","MDLV","MDLA","MDAT","MDMP","MDLE","MDLS","SHDV","SHTC","LSBK","PROJECT"}) {
                if (code.contains(mg) || hasRefTo(fn, mg)) magics.add(mg);
            }
            // Imported API names (look for common Windows APIs in code)
            //
            // [정정 2026-09-01] 종전은 `code.contains(api)` 였다 — 낱말 경계가 없는 순수
            // 부분문자열 매칭이라, 짧고 흔한 이름이 다른 식별자 **안**에 우연히 들어 있어도
            // 히트했다. 이 목록에서 `Map`·`Unmap` 이 정확히 그 경우다: `Map` 은 `Bitmap`·
            // `MapVirtualKey`·`std::map`·`Unmap` 자신에까지 걸리고, 그렇게 만들어진
            // `imported_apis` 열이 `xref-index.tsv` 로 나가 "이 함수가 D3D11 디바이스
            // 컨텍스트 Map/Unmap 을 부른다" 는 **거짓 판정**이 된다.
            //
            // 낱말 경계(`\b`)로 바꿨다. 이름이 전부 ASCII 식별자라 `\b` 로 충분하다.
            // 범위 주의: 이 정정이 닿는 것은 **짧은 이름 축**이다 — `D3D11CreateDevice`
            // 같은 긴 이름은 경계 없이도 오탐이 나기 어렵고, 실제로 그 4행은 전건 진양성이었다.
            // 여전히 남는 한계: 문자열 리터럴·주석 안의 언급과 실제 호출을 구분하지 못한다
            // (Ghidra 의사코드 텍스트를 훑는 방식의 구조적 한계다). `imported_apis` 는
            // **"이 이름이 의사코드에 나타난다"** 이지 "호출한다" 가 아니다.
            for (String api : new String[]{"D3D11CreateDevice","CreateSwapChain","MFCreateSourceReader","DWriteCreateFactory","LoadLibraryW","GetProcAddress","CreateNamedPipeW","CreateTexture2D","PSSetShader","VSSetShader","OMSetRenderTargets","DrawIndexed","Map","Unmap","UpdateSubresource","CreateComputeShader","CreateBuffer","CreateRasterizerState","CreateDepthStencilState"}) {
                if (java.util.regex.Pattern.compile("\\b" + java.util.regex.Pattern.quote(api) + "\\b").matcher(code).find()) apis.add(api);
            }
            // Filename strings
            for (String ext : new String[]{".pkg",".json",".tex",".mdl",".frag",".vert","scene.json","project.json"}) {
                if (code.contains(ext)) files.add(ext);
            }

            // Write decompiled C
            String fname = String.format("%016x__%s.c", addr.getOffset(), safe(name).substring(0, Math.min(safe(name).length(), 40)));
            try {
                java.io.BufferedWriter w = new java.io.BufferedWriter(new java.io.FileWriter(ALL_DIR + "/" + fname));
                w.write("// Function: " + full + "\n// Addr: " + addr + "\n// Size: " + size + " bytes\n");
                // [정정 2026-08-30] ok == false 인 함수의 스텁을 헤더만 남기지 말고 표시한다.
                // 종전에는 code 가 "" 로 남아(:72-79) 헤더 3줄뿐인 파일이 생겼고, 디스크에서
                // 성공한 함수와 파일 개수로 구별되지 않았다. 실측: 커밋된 7,748개 중
                // 5줄 이하인 파일은 정확히 이 3개(FUN_1401c5490 · FUN_14023fbc0 ·
                // FUN_140300680)다.
                // 파일 자체를 건너뛰지는 **않는다** — 건너뛰면 :81 의
                // "// DECOMPILE EXCEPTION: " 본문(그 함수가 왜 실패했는지에 대한 유일한
                // 디스크 기록)이 사라지고, Waple/scripts/spec/measure_decompilation_provenance.py
                // 가 os.listdir 로 세는 개수가 7748 -> 7745 로 줄어 커밋된 측정값
                // (spec/engine/decompilation-provenance.json:123)을 움직인다.
                if (!ok) {
                    w.write("// DECOMPILE INCOMPLETE: this stub has no body."
                            + " decompiled=false in manifest.json.\n");
                }
                w.write("\n");
                w.write(code);
                w.close();
                writeOk++;
            } catch (Throwable e) {
                // [정정 2026-08-30] 종전 이 catch 는 `catch (Throwable e) {}` — 본문이 비어
                // 있어 카운터도 println 도 없었다. 그래서 all/ 에 쓰지 못한 함수가 있어도
                // manifest 와 xref 는 N개를 주장하고 종료코드는 0이었다(디스크에는 N보다
                // 적은 파일). 도달 경로: OUT 은 쓰기 가능한데 all/ 만 쓰기 불가한 경우
                // (이전 docker 실행이 남긴 root 소유 all/ · 디렉터리 ACL · ENAMETOOLONG ·
                // EMFILE), 또는 실행 중 ENOSPC. OUT 자체가 읽기전용이면 :58 의 가드 없는
                // manifest FileWriter 가 먼저 던지므로 이 경로가 아니다.
                writeFailures++;
                if (writeFailures <= 20) {
                    println("  [write failed] " + fname + " : " + e);
                }
            }

            // Manifest
            if (i > 0) manifest.write(",\n");
            manifest.write("  {\"addr\":\"" + addr + "\",\"name\":");
            jsonStr(manifest, name);
            manifest.write(",\"full\":");
            jsonStr(manifest, full);
            manifest.write(",\"size\":" + size + ",\"decompiled\":" + ok);
            if (!rtti.isEmpty()) { manifest.write(",\"rtti\":"); jsonArr(manifest, rtti); }
            if (!magics.isEmpty()) { manifest.write(",\"magics\":"); jsonArr(manifest, magics); }
            if (!apis.isEmpty()) { manifest.write(",\"apis\":"); jsonArr(manifest, apis); }
            if (!files.isEmpty()) { manifest.write(",\"files\":"); jsonArr(manifest, files); }
            manifest.write("}");

            // Xref TSV
            xref.write(addr + "\t" + name + "\t" + size + "\t" + String.join(";", rtti) + "\t" + String.join(";", magics) + "\t" + String.join(";", apis) + "\t" + String.join(";", files) + "\n");

            if (i % 1000 == 0) {
                long dt = (System.currentTimeMillis() - t0) / 1000;
                println("  [" + i + "/" + all.size() + "] " + name + " (" + addr + ")  elapsed=" + dt + "s");
            }
        }
        manifest.write("\n]}");
        manifest.close();
        xref.close();
        // [정정 2026-08-30] manifest 항목 수와 디스크에 실제로 쓴 파일 수를 나란히 찍는다.
        // 종전에는 all.size() 만 찍어서 (manifest 가 주장하는 개수) 두 수가 어긋나도
        // 로그에 나타나지 않았다. 이제 어긋나면 0 아닌 종료로 실패시킨다 — 조용히
        // 과대주장하는 manifest 는 코퍼스 인구조사를 만족시키면서 본문이 없을 수 있다.
        println("=== Done. " + all.size() + " manifest entries, " + writeOk
                + " .c files written to " + ALL_DIR + " ===");
        println("Manifest: " + OUT + "/manifest.json");
        println("Xref index: " + OUT + "/xref-index.tsv");
        if (writeFailures > 0) {
            println("!!! " + writeFailures + " per-function .c writes FAILED. "
                    + "manifest.json/xref-index.tsv claim " + all.size()
                    + " functions but only " + writeOk + " bodies exist on disk. "
                    + "Any corpus census taken from the manifest alone will overstate "
                    + "coverage. Do not treat this run as complete.");
            throw new Exception("DecompileAll: " + writeFailures
                    + " of " + all.size() + " function files could not be written");
        }
    }

    private boolean hasRefTo(Function fn, String s) {
        // quick check: does the function body contain a pointer to a string near 's'? Cheap heuristic skip.
        return false;
    }

    private void jsonStr(java.io.Writer w, String s) throws Exception {
        if (s == null) { w.write("null"); return; }
        w.write("\"");
        for (char c : s.toCharArray()) {
            switch (c) {
                case '"': w.write("\\\""); break;
                case '\\': w.write("\\\\"); break;
                case '\n': w.write("\\n"); break;
                case '\r': w.write("\\r"); break;
                case '\t': w.write("\\t"); break;
                default: if (c < 0x20) w.write(String.format("\\u%04x",(int)c)); else w.write(c);
            }
        }
        w.write("\"");
    }
    private void jsonArr(java.io.Writer w, Set<String> set) throws Exception {
        w.write("[");
        int n = 0;
        for (String s : set) { if (n++ > 0) w.write(","); jsonStr(w, s); }
        w.write("]");
    }
}
