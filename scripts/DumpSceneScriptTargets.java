// Ghidra headless script: decompile named address targets of scenescript64.dll (Java variant;
// PyGhidra is not enabled in the blacktop image).
// Usage: analyzeHeadless <proj> we_analysis -process scenescript64.dll -noanalysis
//        -scriptPath /work/scripts -postScript DumpSceneScriptTargets.java

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.address.Address;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

public class DumpSceneScriptTargets extends GhidraScript {

    static final String OUT = "/work/analysis/scenescript";
    static final String[] ADDRS = {
        "180167bf10", // GetSceneScriptVersion export
        "180167bf20", // Init export
        "180167bfc0", // Shutdown export
        "180167c010", // CreateSceneScriptEngine export
        "1801647aa0", // engine ctor called by CreateSceneScriptEngine tail-jump
        "1816311d0",  // registers thisScene methods (getLayer..createModelData)
        "181647e2f",  // registers thisObject/thisLayer globals
        "18164bca0",  // caller wiring global registrations
        "1800046c10", // callee of Init
    };

    @Override
    public void run() throws Exception {
        File dir = new File(OUT);
        if (!dir.exists()) dir.mkdirs();

        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        PrintWriter mf = new PrintWriter(new BufferedWriter(new FileWriter(new File(dir, "manifest.txt"))));
        for (String a : ADDRS) {
            Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(Long.parseLong(a, 16));
            Function fn = fm.getFunctionContaining(addr);
            if (fn == null) {
                mf.println(a + " NO_FUNCTION");
                continue;
            }
            DecompileResults res = decomp.decompileFunction(fn, 120, monitor);
            String code;
            if (res.decompileCompleted() && res.getDecompiledFunction() != null) {
                code = res.getDecompiledFunction().getC();
            } else {
                code = "// decompile failed at " + a + ": "
                        + (res.getErrorMessage() == null ? "unknown" : res.getErrorMessage());
            }
            String fname = a + "_" + fn.getName().replaceAll("[^A-Za-z0-9_]", "_") + ".c";
            PrintWriter w = new PrintWriter(new BufferedWriter(new FileWriter(new File(dir, fname))));
            w.println("// function " + fn.getName() + " @ " + fn.getEntryPoint()
                    + " size=" + fn.getBody().getNumAddresses());
            w.println(code);
            w.close();
            mf.println(a + " " + fn.getName() + " entry=" + fn.getEntryPoint()
                    + " size=" + fn.getBody().getNumAddresses() + " ok=" + res.decompileCompleted());
        }
        mf.close();
        println("DumpSceneScriptTargets done -> " + OUT);
    }
}
