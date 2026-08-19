// Fast late-attach: scan ONLY the wallpaper process module's .data/.bss for device
// pointers (device is a global). Use Memory.scanSync for speed.
// Then validate candidate vtables and hook the real one.
'use strict';
const d3d11 = Process.findModuleByName('d3d11.dll');
console.log('[+] d3d11 @ ' + d3d11.base + ' (' + (Process.pointerSize===8?'x64':'x86') + ')');
const d3dEnd = d3d11.base.add(d3d11.size);

const DXGI_FORMATS = {0x1c:'B8G8R8A8_UNORM',0x1f:'R8G8B8A8_UNORM',0x3c:'BC1_TYPELESS',0x4d:'BC7_TYPELESS',0x3d:'BC1_UNORM_SRGB',0x3e:'BC2_UNORM',0x3f:'BC3_UNORM',0x4e:'BC7_UNORM_SRGB',0x36:'R8_UNORM',0x55:'R16G16B16A16_FLOAT',0x2a:'R8G8_UNORM'};

// Also hook D3D11CreateDevice in case of future calls
Interceptor.attach(d3d11.getExportByName('D3D11CreateDevice'), {
    onEnter(args) { this.ppDevice = args[7]; this.ppCtx = args[9]; this.pFL = args[8]; },
    onLeave(retval) {
        if (retval.toInt32() !== 0) return;
        try {
            const dev = this.ppDevice.readPointer();
            console.log('*** NEW DEVICE @ ' + dev);
            hookDevice(dev.readPointer());
        } catch(e){}
    }
});

// Find device by scanning writable modules for pointers into d3d11.dll
// Device is typically stored in the renderer module's global. Scan:
//   - wallpaper32.exe's writable ranges (.data, .bss)
//   - d3d11.dll's own writable ranges (sometimes device cached there)
// Use Memory.scanSync to find the 4/8-byte pattern of d3d11.base high bits.
console.log('[*] Fast scan for d3d11 COM objects...');

function scanRange(base, size) {
    const found = [];
    try {
        // Read once, scan in JS for any pointer into [d3d11.base, d3d11.base+size)
        const buf = base.readByteArray(size);
        const view = new DataView(buf);
        const ps = Process.pointerSize;
        for (let off = 0; off + ps <= size; off += ps) {
            let vptr;
            if (ps === 8) {
                const lo = view.getUint32(off, true);
                const hi = view.getUint32(off+4, true);
                const baseHi = d3d11.base.and(ptr(0xFFFFFFFF00000000)).shr(32).toInt32();
                if (hi !== baseHi) continue;
                vptr = ptr(lo).add(ptr(hi).shl(32));
            } else {
                vptr = ptr(view.getUint32(off, true));
            }
            if (vptr.compare(d3d11.base) < 0 || vptr.compare(d3dEnd) >= 0) continue;
            // it's a pointer into d3d11.dll. Is it a vtable (i.e. points at start of fn pointers)?
            // Validate: vtable[0],[1],[2] are also pointers into d3d11.dll
            try {
                const q = vptr.readPointer();
                if (q.compare(d3d11.base) < 0 || q.compare(d3dEnd) >= 0) continue;
                found.push({obj: base.add(off), vt: vptr});
            } catch(e){}
        }
    } catch(e) {}
    return found;
}

// Scan wallpaper32.exe writable ranges
let allFound = [];
const mainMod = Process.findModuleByName('wallpaper32.exe');
if (mainMod) {
    console.log('[*] wallpaper32.exe @ ' + mainMod.base + ' size=0x'+mainMod.size.toString(16));
    // enumerate its memory ranges (sections) and scan RW ones
    const ranges = mainMod.enumerateRanges('rw-');
    console.log('[*] ' + ranges.length + ' RW ranges in wallpaper32.exe');
    for (const r of ranges) {
        if (r.size > 16*1024*1024) continue;
        const f = scanRange(r.base, r.size);
        for (const x of f) allFound.push(x);
    }
}
// also scan heap ranges owned by the process (small ones)
const heapRanges = Process.enumerateRanges({protection:'rw-', coalesce:true});
let heapScanned = 0;
for (const r of heapRanges) {
    // skip ranges inside modules
    if (r.base.compare(mainMod.base) >= 0 && r.base.compare(mainMod.base.add(mainMod.size)) < 0) continue;
    if (r.size > 4*1024*1024) continue; // skip big ranges
    heapScanned++;
    if (heapScanned > 200) break;
    const f = scanRange(r.base, r.size);
    for (const x of f) allFound.push(x);
}
console.log('[*] Total candidate COM objects: ' + allFound.length);

// Dedup by vtable, dump each candidate's first 16 vtable slots
const seenVT = new Set();
let realDevice = null;
for (const c of allFound) {
    if (seenVT.has(c.vt.toString())) continue;
    seenVT.add(c.vt.toString());
    console.log('\n[candidate] obj@' + c.obj + ' vt@' + c.vt);
    // dump first 12 slots
    let slotInfo = [];
    let validFns = 0;
    for (let i = 0; i < 12; i++) {
        try {
            const s = c.vt.add(i*Process.pointerSize).readPointer();
            const inD3D = s.compare(d3d11.base) >= 0 && s.compare(d3dEnd) < 0;
            if (inD3D) validFns++;
            slotInfo.push(i + ':0x' + (inD3D ? s.sub(d3d11.base).toString(16) : 'EXT'));
        } catch(e) { break; }
    }
    console.log('  slots: ' + slotInfo.join(' '));
    // Heuristic: real ID3D11Device has all 12+ slots as d3d11.dll functions
    if (validFns >= 11 && !realDevice) {
        realDevice = c.vt;
        console.log('  -> LIKELY ID3D11Device (all slots in d3d11.dll)');
    }
}

if (realDevice) {
    console.log('\n*** HOOKING REAL DEVICE vtable @ ' + realDevice + ' ***');
    hookDevice(realDevice);
} else {
    console.log('\n[!] No clear device vtable found. Try triggering device creation.');
}

function hookDevice(vt) {
    // ID3D11Device vtable (IUnknown 0-2):
    // 3 CreateBuffer, 4 CreateTexture1D, 5 CreateTexture2D, 6 CreateTexture3D,
    // 7 CreateSRV, 8 CreateUAV, 9 CreateRTV, 10 CreateDSV, 11 CreateInputLayout,
    // 12 CreateVertexShader, 13 CreateGeometryShader, 15 CreatePixelShader
    const hooks = [
        {idx: 3, name: 'CreateBuffer', handler: bufHook},
        {idx: 5, name: 'CreateTexture2D', handler: texHook},
        {idx: 12, name: 'CreateVertexShader', handler: shaderHook},
        {idx: 15, name: 'CreatePixelShader', handler: shaderHook},
    ];
    for (const h of hooks) {
        try {
            const fn = vt.add(h.idx * Process.pointerSize).readPointer();
            Interceptor.attach(fn, h.handler(h.name));
            console.log('[+] hooked ' + h.name + ' (vt[' + h.idx + '] @ ' + fn + ')');
        } catch(e) { console.log('[err ' + h.name + '] ' + e); }
    }
}

function texHook(name) {
    let n = 0;
    return { onEnter(args) {
        n++; if (n > 30) return;
        try {
            const d = args[1];
            const w = d.readU32(), h = d.add(4).readU32();
            const mip = d.add(8).readU32(), fmt = d.add(16).readU32();
            const bind = d.add(32).readU32();
            console.log('\n[' + name + ' #' + n + '] ' + w + 'x' + h + ' mip=' + mip + ' fmt=' + (DXGI_FORMATS[fmt]||'0x'+fmt.toString(16)) + ' bind=0x'+(bind>>>0).toString(16));
            if (w >= 256 && !args[2].isNull()) {
                const pInit = args[2];
                const pData = pInit.readPointer();
                const pitch = pInit.add(Process.pointerSize).readU32();
                if (!pData.isNull() && pitch > 0) {
                    const head = pData.readByteArray(Math.min(32, pitch));
                    const u8 = new Uint8Array(head);
                    console.log('  initialData pitch=' + pitch + ' head: ' + Array.from(u8).map(b=>b.toString(16).padStart(2,'0')).join(' '));
                }
            }
        } catch(e){ console.log('  [tex err] ' + e); }
    }};
}
function bufHook(name) {
    let n = 0;
    return { onEnter(args) {
        n++; if (n > 40) return;
        try {
            const bw = args[1].readU32();
            const bind = args[1].add(8).readU32();
            const bn = ({0x1:'VB',0x2:'IB',0x4:'CB',0x8:'SRV',0x40:'RTV',0x80:'DSV',0x100:'UAV'})[bind]||'0x'+(bind>>>0).toString(16);
            console.log('[' + name + ' #' + n + '] byteWidth=' + bw + ' bind=' + bn);
        } catch(e){}
    }};
}
function shaderHook(name) {
    let n = 0;
    return { onEnter(args) {
        n++; if (n > 12) return;
        // CreateVertexShader(this, pBytecode, BytecodeLength, pClassLinkage, ppShader)
        const len = args[2].toInt32();
        console.log('[' + name + ' #' + n + '] bytecodeLen=' + len);
        if (len > 0 && len < 1000000) {
            try {
                const head = args[1].readByteArray(Math.min(8, len));
                const u8 = new Uint8Array(head);
                console.log('  magic="' + String.fromCharCode.apply(null, u8.slice(0,4)) + '"');
            } catch(e){}
        }
    }};
}

console.log('\n[*] Ready. Wallpaper is rendering — capture in progress.');
