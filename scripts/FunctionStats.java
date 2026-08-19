// Quick stats: count named vs unnamed functions in current program
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

public class FunctionStats extends GhidraScript {
    @Override
    public void run() throws Exception {
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        long total = 0, named = 0, funUnderscore = 0, withScopes = 0, demangled = 0;
        java.util.List<String> samples = new java.util.ArrayList<>();
        while (it.hasNext()) {
            Function fn = it.next();
            total++;
            String name = fn.getName();
            String full = name;
            try { full = fn.getName(true); } catch (Throwable t) {}
            if (name.startsWith("FUN_") || name.startsWith("thunk_FUN_")) {
                funUnderscore++;
            } else {
                named++;
                if ((name + full).contains("::")) withScopes++;
                if (!full.equals(name) && full.contains("::")) demangled++;
                if (samples.size() < 40) samples.add(name + "  |  " + full);
            }
        }
        println("=== Function Stats for " + currentProgram.getName() + " ===");
        println("Total functions: " + total);
        println("Named (non-FUN_): " + named);
        println("FUN_/thunk_FUN_: " + funUnderscore);
        println("With :: scope: " + withScopes);
        println("Demangled differ from name: " + demangled);
        println("--- Sample named functions (first 40) ---");
        for (String s : samples) println("  " + s);
    }
}
