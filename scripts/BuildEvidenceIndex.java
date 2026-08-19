// Build evidence index: for each function, find what data strings/magics/RTTI it references.
// Uses Ghidra's reference API (not decompiled text), so it captures DAT_ -> string mappings.
//
// Output: /work/analysis/decompiled/evidence-index.tsv
//   addr  name  size  rtti_classes  format_magics  api_imports  key_strings
//
// Method:
//   For each function, iterate its body's references FROM. For each ref to a data address,
//   read bytes there; classify by leading bytes (magic) or as ascii/utf16 string.

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryAccessException;
import java.io.*;
import java.util.*;

public class BuildEvidenceIndex extends GhidraScript {
    static final String OUT = "/work/analysis/decompiled/evidence-index.tsv";

    // Magics (ASCII, first bytes)
    static final String[] MAGICS = {"PKGV","PLPV","TEXV","TEXI","TEXB","MDLV","MDLA","MDAT","MDMP","MDLE","MDLS","SHDV","SHTC","LSBK"};
    // RTTI patterns in string form (.?AV<Name> or Class::)
    // API imports we care about (function-name level)
    static final String[] APIS = {"D3D11CreateDevice","MFCreateSourceReader","DWriteCreateFactory","CreateNamedPipeW","LoadLibraryW","GetProcAddress"};

    @Override
    public void run() throws Exception {
        BufferedWriter w = new BufferedWriter(new FileWriter(OUT));
        w.write("addr\tname\tsize\trtti_classes\tformat_magics\tapi_calls\tkey_strings\n");

        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager rm = currentProgram.getReferenceManager();
        SymbolTable stbl = currentProgram.getSymbolTable();
        Memory mem = currentProgram.getMemory();
        Listing listing = currentProgram.getListing();

        FunctionIterator it = fm.getFunctions(true);
        List<Function> all = new ArrayList<>();
        while (it.hasNext()) all.add(it.next());
        println("Indexing " + all.size() + " functions...");

        long t0 = System.currentTimeMillis();
        for (int i = 0; i < all.size(); i++) {
            Function fn = all.get(i);
            Address entry = fn.getEntryPoint();
            long size = fn.getBody().getNumAddresses();

            Set<String> rtti = new TreeSet<>(), magics = new TreeSet<>(), apis = new TreeSet<>(), strs = new TreeSet<>();

            // Walk all addresses in function body, gather references FROM
            AddressSetView body = fn.getBody();
            AddressIterator ai = body.getAddresses(true);
            while (ai.hasNext()) {
                Address fromAddr = ai.next();
                Reference[] refs = rm.getReferencesFrom(fromAddr);
                for (Reference r : refs) {
                    Address to = r.getToAddress();
                    if (to == null) continue;
                    // Is it a function call? (imported or external)
                    SymbolType st = null;
                    Symbol sym = stbl.getSymbol(r);
                    if (sym != null) {
                        String sn = sym.getName(true);
                        if (sn != null) {
                            for (String api : APIS) {
                                if (sn.contains(api)) apis.add(api);
                            }
                            // RTTI: demangled symbol containing :: and class names
                            if (sn.startsWith("?") || sn.contains("::")) {
                                // crude extract of class name from demangled
                                // e.g. SceneWallpaper::LoadSceneAndProperties
                                int cidx = sn.indexOf("::");
                                if (cidx > 0) {
                                    // back up to class start
                                    int s = cidx;
                                    while (s > 0 && (Character.isLetterOrDigit(sn.charAt(s-1)) || sn.charAt(s-1)=='_' || sn.charAt(s-1)=='<' )) s--;
                                    String cls = sn.substring(s, cidx);
                                    if (cls.length() > 2 && !cls.equals("std") && !cls.startsWith("_")) rtti.add(cls);
                                }
                            }
                        }
                    }
                    // Read data at 'to' for magic/string classification
                    try {
                        byte[] buf = new byte[16];
                        int got = mem.getBytes(to, buf);
                        if (got >= 4) {
                            String head = new String(buf, 0, Math.min(8, got));
                            for (String mg : MAGICS) {
                                if (head.startsWith(mg)) magics.add(mg);
                            }
                            // Try ASCII string
                            if (got >= 4 && isPrintable(buf[0]) && isPrintable(buf[1]) && isPrintable(buf[2])) {
                                byte[] sb = new byte[64];
                                int sg = mem.getBytes(to, sb);
                                int len = 0;
                                while (len < sg && sb[len] >= 0x20 && sb[len] < 0x7f) len++;
                                if (len >= 6) {
                                    String s = new String(sb, 0, len);
                                    // RTTI .?AV
                                    if (s.startsWith(".?A")) {
                                        // extract class
                                        int p = 4;
                                        while (p < s.length() && (Character.isLetterOrDigit(s.charAt(p)) || s.charAt(p)=='_')) p++;
                                        String cls = s.substring(4, p);
                                        if (cls.length() > 2) rtti.add(cls);
                                    } else if (s.endsWith(".pkg") || s.endsWith(".json") || s.endsWith(".tex") || s.endsWith(".mdl") || s.endsWith(".frag") || s.endsWith(".vert") || s.equals("scene.json") || s.equals("project.json")) {
                                        strs.add(s);
                                    }
                                }
                            }
                        }
                    } catch (MemoryAccessException e) {}
                }
            }

            w.write(entry + "\t" + fn.getName() + "\t" + size + "\t" + String.join(";", rtti) + "\t" + String.join(";", magics) + "\t" + String.join(";", apis) + "\t" + String.join(";", strs) + "\n");

            if (i % 1000 == 0) {
                long dt = (System.currentTimeMillis() - t0) / 1000;
                println("  [" + i + "/" + all.size() + "] elapsed=" + dt + "s");
            }
        }
        w.close();
        println("=== Evidence index written: " + OUT + " ===");
    }

    private boolean isPrintable(byte b) { return b >= 0x20 && b < 0x7f; }
}
