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
            for (String api : new String[]{"D3D11CreateDevice","CreateSwapChain","MFCreateSourceReader","DWriteCreateFactory","LoadLibraryW","GetProcAddress","CreateNamedPipeW","CreateTexture2D","PSSetShader","VSSetShader","OMSetRenderTargets","DrawIndexed","Map","Unmap","UpdateSubresource","CreateComputeShader","CreateBuffer","CreateRasterizerState","CreateDepthStencilState"}) {
                if (code.contains(api)) apis.add(api);
            }
            // Filename strings
            for (String ext : new String[]{".pkg",".json",".tex",".mdl",".frag",".vert","scene.json","project.json"}) {
                if (code.contains(ext)) files.add(ext);
            }

            // Write decompiled C
            String fname = String.format("%016x__%s.c", addr.getOffset(), safe(name).substring(0, Math.min(safe(name).length(), 40)));
            try {
                java.io.BufferedWriter w = new java.io.BufferedWriter(new java.io.FileWriter(ALL_DIR + "/" + fname));
                w.write("// Function: " + full + "\n// Addr: " + addr + "\n// Size: " + size + " bytes\n\n");
                w.write(code);
                w.close();
            } catch (Throwable e) {}

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
        println("=== Done. " + all.size() + " functions decompiled to " + ALL_DIR + " ===");
        println("Manifest: " + OUT + "/manifest.json");
        println("Xref index: " + OUT + "/xref-index.tsv");
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
