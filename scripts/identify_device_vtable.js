// Identify which vtable slot is which D3D11 method by disassembling each slot's
// function and matching it against known CreateTexture2D/CreateBuffer signatures.
//
// D3D11 device methods internally call into the kernel-mode driver via
// NtGdiDdDDi* / D3DKMT* syscalls. But more usefully: each Create* method loads a
// specific error string or calls a specific helper. We can also just COUNT args:
// CreateTexture2D takes (this, pDesc, pInitialData, ppTex2D) = 4 params.
//
// Most reliable: read the candidate vtable's slots, and for each, check if it
// references known D3D11 format-validation or texture-creation strings. But d3d11.dll
// may not have those. Instead: hook EACH slot briefly with a generic logger that
// records how many times it's called per frame, then match call frequency to known
// behavior (CreateTexture2D rare, PSSetShader frequent, Draw very frequent).
//
// Simplest robust approach: dump every slot's first 64 bytes as hex + disasm,
// then we (the human/analysis) match offsets. Save to file.

'use strict';
const d3d11 = Process.findModuleByName('d3d11.dll');
console.log('[+] d3d11 @ ' + d3d11.base);
const is64 = Process.pointerSize === 8;

// First, locate the device vtable by re-running the fast scan
function scanRangeForVtables(base, size) {
    const out = [];
    try {
        const buf = base.readByteArray(size);
        const view = new DataView(buf);
        const ps = Process.pointerSize;
        for (let off = 0; off + ps <= size; off += ps) {
            let vptr;
            if (is64) {
                const lo = view.getUint32(off, true);
                const hi = view.getUint32(off+4, true);
                const baseHi = d3d11.base.and(ptr('0xFFFFFFFF00000000')).shr(32).toInt32();
                if (hi !== baseHi) continue;
                vptr = ptr(lo).add(ptr(hi).shl(32));
            } else {
                vptr = ptr(view.getUint32(off, true));
            }
            if (vptr.compare(d3d11.base) < 0) continue;
            if (vptr.compare(d3d11.base.add(d3d11.size)) >= 0) continue;
            try {
                const q = vptr.readPointer();
                if (q.compare(d3d11.base) < 0 || q.compare(d3d11.base.add(d3d11.size)) >= 0) continue;
                out.push({obj: base.add(off), vt: vptr});
            } catch(e){}
        }
    } catch(e) {}
    return out;
}

const mainMod = Process.findModuleByName('wallpaper32.exe');
let candidates = [];
// Scan BOTH module RW ranges AND heap ranges (device lives on the heap)
const allRW = Process.enumerateRanges('rw-');
let scanned = 0;
for (const r of allRW) {
    if (r.size > 8*1024*1024) continue;
    scanned++;
    const f = scanRangeForVtables(r.base, r.size);
    for (const x of f) candidates.push(x);
}
console.log('[*] Scanned ' + scanned + ' RW ranges, found ' + candidates.length + ' candidate pointers');
// dedup by vt
const seen = new Set();
const uniq = [];
for (const c of candidates) { if (!seen.has(c.vt.toString())) { seen.add(c.vt.toString()); uniq.push(c); } }
console.log('[*] ' + uniq.length + ' unique vtables');

// For each, count how many consecutive slots are valid d3d11 functions (real ID3D11Device has 40+)
let bestDevice = null, bestCount = 0;
for (const c of uniq) {
    let valid = 0;
    try {
        for (let i = 0; i < 50; i++) {
            const s = c.vt.add(i*Process.pointerSize).readPointer();
            if (s.compare(d3d11.base) >= 0 && s.compare(d3d11.base.add(d3d11.size)) < 0) valid++;
            else break;
        }
    } catch(e){}
    if (valid > bestCount) { bestCount = valid; bestDevice = c; }
}
console.log('[*] Best device candidate: vt@' + bestDevice.vt + ' with ' + bestCount + ' consecutive d3d11 slots');

// Dump all slots of the best device with disasm of first 3 instructions
console.log('\n=== DEVICE vtable @ ' + bestDevice.vt + ' (disasm each slot) ===');
const slots = [];
for (let i = 0; i < Math.min(bestCount, 40); i++) {
    try {
        const fn = bestDevice.vt.add(i*Process.pointerSize).readPointer();
        let disasm = [];
        let addr = fn;
        for (let j = 0; j < 3; j++) {
            try {
                const ins = Instruction.parse(addr);
                disasm.push(ins.mnemonic + ' ' + ins.opStr);
                addr = ins.next;
            } catch(e) { disasm.push('??'); break; }
        }
        const off = '+0x' + fn.sub(d3d11.base).toString(16);
        console.log('  [' + i + '] ' + off + '  ' + disasm.join(' | '));
        slots.push({idx: i, off: off, disasm: disasm.join(' | ')});
    } catch(e) { break; }
}

// Now: empirically identify CreateTexture2D/CreateBuffer/CreateVertexShader/CreatePixelShader
// by HOOKING each slot for 5 seconds and counting calls + capturing arg[1] first u32.
// The ones that fire and have sane args are our targets.
console.log('\n=== Probing slots 3-18 (count calls over ~10s) ===');
const counts = {};
for (let i = 3; i <= 18; i++) {
    try {
        const fn = bestDevice.vt.add(i*Process.pointerSize).readPointer();
        counts[i] = 0;
        let arg1Samples = [];
        Interceptor.attach(fn, {
            onEnter(args) {
                counts[i] = (counts[i] || 0) + 1;
                if (arg1Samples.length < 3) {
                    try { arg1Samples.push('0x' + args[1].readU32().toString(16)); } catch(e){ arg1Samples.push('ERR'); }
                }
            }
        });
    } catch(e) { console.log('  [probe err '+i+'] ' + e); }
}
console.log('[*] Probes armed. Waiting 12s for render activity...');

setTimeout(() => {
    console.log('\n=== Call counts per slot (3-18) ===');
    for (let i = 3; i <= 18; i++) {
        if (counts[i] !== undefined) {
            console.log('  [' + i + '] calls=' + counts[i]);
        }
    }
    console.log('\n[*] Done. High-count slots are likely Set*/Draw; zero-count are Create*.');
}, 12000);
