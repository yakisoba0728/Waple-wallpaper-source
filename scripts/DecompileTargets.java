// Ghidra headless script: decompile priority target functions + write manifest
// Usage: analyzeHeadless <projdir> <proj> -process wallpaper64.exe -noanalysis
//        -postScript DecompileTargets.java
//
// Outputs (under /work/analysis/decompiled/):
//   targets/<safe>.c        — decompiled C for each priority target hit
//   all/<safe>.c            — sampled decompile (every 50th fn) to bound runtime
//   manifest.json           — index of every function: addr, name, demangled, size, sig, target?
//   targets-index.txt       — plain-text list of matched priority targets
//
// Matches functions by substring of demangled name against RTTI-derived patterns.

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.address.Address;
import ghidra.util.task.ConsoleTaskMonitor;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class DecompileTargets extends GhidraScript {

    static final String OUT = "/work/analysis/decompiled";
    static final String TARGETS_DIR = OUT + "/targets";
    static final String ALL_DIR = OUT + "/all";

    static final String[] PATTERNS = {
        "SceneWallpaper::LoadSceneAndProperties",
        "Main::LoadScene",
        "Texture::ReadTextureData",
        "MaterialSystem::ReloadDirtyMaterials",
        "AudioProcessor",
        "AudioEventHandler",
        "VideoWallpaper::StartVideoWithNewPlayer",
        "WallpaperManager::Init",
        "WallpaperManager",
        "DesktopMediaExtensions::QueueAsyncTextureLoad",
        "DesktopMediaExtensions::StartMediaControl",
        "DesktopMediaExtensions",
        "Material::",
        "ImageLayer::",
        "Obj::",
        "ParticleVbo::",
        "PropertySystem::",
        "DataCache::AddSharedRemoveListenerToLayer",
        "DataCache::",
        "InterProcessMessageHandler::PeekNextRecvMessageCommand",
        "InterProcessMessageHandler",
        "CEFWallpaper",
        "DWriteFontFileLoader",
        "DWriteFontFileStream",
        "TextAnalysis",
        "GeometrySink",
        "VirtualDesktop::StartVDesktop",
        "VirtualDesktop",
        "WindowProcedureTray",
    };

    private static String safe(String s) {
        StringBuilder sb = new StringBuilder();
        for (char c : s.toCharArray()) {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')
                    || c == '_' || c == '.' || c == ':' || c == '-') {
                sb.append(c);
            } else {
                sb.append('_');
            }
        }
        String r = sb.toString();
        return r.length() > 180 ? r.substring(0, 180) : r;
    }

    private BufferedWriter writer(String path) throws IOException {
        File f = new File(path);
        f.getParentFile().mkdirs();
        return new BufferedWriter(new FileWriter(f));
    }

    private void writeC(String dir, String name, String addr, long size, String sig, String code)
            throws IOException {
        String fname = safe(name + "_" + addr);
        BufferedWriter w = writer(dir + "/" + fname + ".c");
        w.write("// Function: " + name + "\n");
        w.write("// Addr: " + addr + "\n");
        w.write("// Size: " + size + " bytes\n");
        w.write("// Signature: " + sig + "\n\n");
        w.write(code);
        w.close();
    }

    @Override
    public void run() throws Exception {
        new File(TARGETS_DIR).mkdirs();
        new File(ALL_DIR).mkdirs();

        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);

        FunctionManager fm = currentProgram.getFunctionManager();
        FunctionIterator it = fm.getFunctions(true);
        List<Function> all = new ArrayList<>();
        while (it.hasNext()) {
            all.add(it.next());
        }
        println("Total functions: " + all.size());

        BufferedWriter manifest = writer(OUT + "/manifest.json");
        manifest.write("{\"program\":\"" + currentProgram.getName() + "\",");
        manifest.write("\"total_functions\":" + all.size() + ",");
        manifest.write("\"functions\":[\n");

        BufferedWriter targetsIdx = writer(OUT + "/targets-index.txt");
        targetsIdx.write("# Priority targets decompiled for " + currentProgram.getName() + "\n");

        int targetCount = 0;
        int decompTargetOk = 0;
        int decompSampleOk = 0;

        for (int i = 0; i < all.size(); i++) {
            Function fn = all.get(i);
            String name = fn.getName();
            String full = name;
            try { full = fn.getName(true); } catch (Throwable t) {}
            Address addr = fn.getEntryPoint();
            long size = fn.getBody().getNumAddresses();
            String sig = fn.getSignature() != null ? fn.getSignature().getPrototypeString(true) : "";

            boolean isTarget = false;
            for (String p : PATTERNS) {
                if (full.contains(p) || name.contains(p)) { isTarget = true; break; }
            }

            if (i > 0) manifest.write(",\n");
            manifest.write("  {\"name\":");
            jsonStr(manifest, name);
            manifest.write(",\"full\":");
            jsonStr(manifest, full);
            manifest.write(",\"addr\":\"" + addr + "\",\"size\":" + size + ",\"sig\":");
            jsonStr(manifest, sig);
            manifest.write(",\"target\":" + isTarget);

            boolean did = false;
            // Decompile priority targets always; sample others every 50th to bound runtime.
            if (isTarget || (i % 50 == 0)) {
                try {
                    DecompileResults res = ifc.decompileFunction(fn, 60, new ConsoleTaskMonitor());
                    if (res != null && res.decompileCompleted()) {
                        String code = res.getDecompiledFunction().getC();
                        if (isTarget) {
                            writeC(TARGETS_DIR, full, addr.toString(), size, sig, code);
                            targetsIdx.write("OK  " + full + " @ " + addr + " (" + size + "B)\n");
                            decompTargetOk++;
                        } else {
                            writeC(ALL_DIR, full, addr.toString(), size, sig, code);
                            decompSampleOk++;
                        }
                        did = true;
                    } else {
                        String err = res != null ? res.getErrorMessage() : "no result";
                        manifest.write(",\"decomp_error\":");
                        jsonStr(manifest, err == null ? "null" : err);
                        if (isTarget) targetsIdx.write("FAIL " + full + " @ " + addr + " : " + err + "\n");
                    }
                } catch (Throwable t) {
                    manifest.write(",\"decomp_error\":");
                    jsonStr(manifest, t.getMessage() == null ? t.toString() : t.getMessage());
                    if (isTarget) targetsIdx.write("EXC " + full + " @ " + addr + " : " + t + "\n");
                }
            }
            manifest.write(",\"decompiled\":" + did + "}");

            if (isTarget) targetCount++;
            if (i % 500 == 0) {
                println("  [" + i + "] " + full + " (" + addr + ")");
            }
        }

        manifest.write("\n]}");
        manifest.close();
        targetsIdx.write("\n# Total target hits: " + targetCount + " (decompiled OK: " + decompTargetOk + ")\n");
        targetsIdx.close();

        println("=== Done. " + all.size() + " functions, " + targetCount + " target hits, "
                + decompTargetOk + " targets decompiled, " + decompSampleOk + " samples decompiled ===");
    }

    private void jsonStr(BufferedWriter w, String s) throws IOException {
        if (s == null) { w.write("null"); return; }
        StringBuilder sb = new StringBuilder("\"");
        for (char c : s.toCharArray()) {
            switch (c) {
                case '"': sb.append("\\\""); break;
                case '\\': sb.append("\\\\"); break;
                case '\n': sb.append("\\n"); break;
                case '\r': sb.append("\\r"); break;
                case '\t': sb.append("\\t"); break;
                default:
                    if (c < 0x20) sb.append(String.format("\\u%04x", (int) c));
                    else sb.append(c);
            }
        }
        sb.append("\"");
        w.write(sb.toString());
    }
}
