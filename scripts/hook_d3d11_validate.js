// Validate device/context vtables, then hook the REAL ones.
//
// Approach:
//   1. Read D3D11CreateDevice's first instructions to confirm it's the real fn.
//   2. Instead of guessing vtable indices, DERIVE them: we know d3d11.dll exports
//      D3D11CreateDevice. The device vtable layout is fixed by the COM interface
//      definition (ID3D11Device). We trust the ID3D11Device vtable order from the
//      SDK header (d3d11.h), which is the same on x86 and x64.
//   3. To find the REAL device among candidates, we check that the candidate
//      vtable's CreateTexture2D slot points to a function whose prologue is a
//      real function (push ebp / mov ebp,esp on x86, or sub rsp on x64).
//   4. We also dump the first ~20 vtable slots' targets so we can SEE which
//      interface each candidate is (ID3D11Device, ID3D11DeviceContext, DXGI, etc.)
//      by matching slot patterns.

'use strict';

const d3d11 = Process.findModuleByName('d3d11.dll');
const d3d11Start = d3d11.base;
const d3d11End = d3d11.base.add(d3d11.size);
const is64 = Process.pointerSize === 8;
console.log('[+] d3d11 @ ' + d3d11.base + ' (' + (is64?'x64':'x86') + ')');

// ID3D11Device vtable (from d3d11.h, IUnknown first 3 slots):
// 0  QueryInterface
// 1  AddRef
// 2  Release
// 3  CreateBuffer            <- NOTE: per SDK, CreateBuffer is idx 3? Let me dump and verify.
// Actually the real ID3D11Device order:
//   0-2 IUnknown
//   3 CreateBuffer
//   4 CreateTexture1D
//   5 CreateTexture2D
//   6 CreateTexture3D
//   7 CreateShaderResourceView
//   8 CreateUnorderedAccessView
//   9 CreateRenderTargetView
//   10 CreateDepthStencilView
//   11 CreateInputLayout
//   12 CreateVertexShader
//   13 CreateGeometryShader
//   14 CreateGeometryShaderWithStreamOutput
//   15 CreatePixelShader
//   16 CreateHullShader
//   17 CreateDomainShader
//   18 CreateComputeShader
//   19 CreateClassLinkage
//   20 CreateBlendState
//   ...
// So CreateTexture2D = 5, CreateBuffer = 3, CreateVertexShader = 12, CreatePixelShader = 15.

const DXGI_FORMATS = {
    0x1c:'B8G8R8A8_UNORM',0x1f:'R8G8B8A8_UNORM',0x3c:'BC1_TYPELESS',0x4d:'BC7_TYPELESS',
    0x3d:'BC1_UNORM_SRGB',0x3e:'BC2_UNORM',0x3f:'BC3_UNORM',0x4e:'BC7_UNORM_SRGB',
    0x36:'R8_UNORM',0x55:'R16G16B16A16_FLOAT',0x2a:'R8G8_UNORM',0x61:'BC4_UNORM',
    0x83:'BC5_UNORM',0x4a:'BC6H_UF16',0x4b:'BC6H_SF16',0x35:'R8_SNORM'
};

function isFunction(addr) {
    try {
        const b = addr.readU8();
        // x86 prologues: 0x55 (push ebp), 0x8b (mov), 0x53/0x56/0x57, 0x83 (sub), 0xe9 (jmp)
        // x64: 0x48 (rex), 0x55, 0x53, 0x40, 0xe9
        return [0x55,0x8b,0x53,0x56,0x57,0x83,0xe9,0x48,0x40,0xff,0xe8].includes(b);
    } catch(e) { return false; }
}

function dumpVtable(vtable, label, maxSlots) {
    console.log('\n[vtable dump] ' + label + ' @ ' + vtable);
    for (let i = 0; i < maxSlots; i++) {
        try {
            const slot = vtable.add(i * Process.pointerSize).readPointer();
            const inD3D = slot.compare(d3d11Start) >= 0 && slot.compare(d3d11End) < 0;
            const off = inD3D ? '+0x' + slot.sub(d3d11Start).toString(16) : 'EXT';
            const fn = isFunction(slot) ? 'FN' : '??';
            console.log('  [' + i + '] ' + slot + ' (d3d11 ' + off + ', ' + fn + ')');
        } catch(e) {
            console.log('  [' + i + '] READ-ERR');
            break;
        }
    }
}

// Hook D3D11CreateDevice for future calls — get the GROUND TRUTH device vtable.
const createDevice = d3d11.getExportByName('D3D11CreateDevice');
let truthDeviceVT = null;
Interceptor.attach(createDevice, {
    onEnter(args) { this.ppDevice = args[7]; this.ppCtx = args[9]; },
    onLeave(retval) {
        if (retval.toInt32() !== 0) return;
        try {
            const dev = this.ppDevice.readPointer();
            truthDeviceVT = dev.readPointer();
            console.log('\n*** GROUND TRUTH DEVICE ***');
            console.log('    device @ ' + dev + ' vtable @ ' + truthDeviceVT);
            dumpVtable(truthDeviceVT, 'ID3D11Device (ground truth)', 20);
            hookDeviceMethods(truthDeviceVT);
        } catch(e) { console.log('[truth err] ' + e); }
    }
});

// Scan for candidate device vtables, dump each to identify which interface
console.log('\n[*] Scanning heap for d3d11 COM objects...');
const ranges = Process.enumerateRanges('rw-');
let candidates = [];
const seen = new Set();
for (const r of ranges) {
    if (r.size > 32 * 1024 * 1024) continue;
    try {
        const buf = r.base.readByteArray(r.size);
        const view = new DataView(buf);
        const ps = Process.pointerSize;
        for (let off = 0; off + ps <= r.size; off += ps) {
            let vptr;
            if (is64) {
                const lo = view.getUint32(off, true);
                const hi = view.getUint32(off+4, true);
                const baseHi = d3d11.base.and(ptr(0xFFFFFFFF00000000)).shr(32).toInt32();
                if (hi !== baseHi) continue;
                vptr = ptr(lo).add(ptr(hi).shl(32));
            } else {
                vptr = ptr(view.getUint32(off, true));
            }
            if (vptr.compare(d3d11Start) < 0 || vptr.compare(d3d11End) >= 0) continue;
            const key = vptr.toString();
            if (seen.has(key)) continue;
            // verify vtable[0..2] in d3d11.dll and are functions
            try {
                const q = vptr.readPointer();
                const a = vptr.add(ps).readPointer();
                const rel = vptr.add(ps*2).readPointer();
                if (q.compare(d3d11Start)<0 || q.compare(d3d11End)>=0) continue;
                if (a.compare(d3d11Start)<0 || a.compare(d3d11End)>=0) continue;
                if (rel.compare(d3d11Start)<0 || rel.compare(d3d11End)>=0) continue;
                if (!isFunction(q) || !isFunction(a) || !isFunction(rel)) continue;
                seen.add(key);
                candidates.push({obj: r.base.add(off), vt: vptr});
            } catch(e) {}
        }
    } catch(e) {}
}
console.log('[*] ' + candidates.length + ' distinct candidate vtables found');
for (let i = 0; i < Math.min(candidates.length, 8); i++) {
    dumpVtable(candidates[i].vt, 'candidate#' + i + ' obj@' + candidates[i].obj, 20);
}

function hookDeviceMethods(vtable) {
    // Per d3d11.h ID3D11Device order:
    //   3 CreateBuffer, 5 CreateTexture2D, 12 CreateVertexShader, 15 CreatePixelShader
    const slots = {3:'CreateBuffer', 5:'CreateTexture2D', 12:'CreateVertexShader', 15:'CreatePixelShader'};
    for (const idxStr in slots) {
        const idx = parseInt(idxStr);
        try {
            const fn = vtable.add(idx * Process.pointerSize).readPointer();
            const name = slots[idx];
            Interceptor.attach(fn, makeHook(name));
        } catch(e) { console.log('[hook err ' + name + '] ' + e); }
    }
    console.log('[+] Hooked ID3D11Device methods (Buffer@3, Texture2D@5, VS@12, PS@15)');
}

function makeHook(name) {
    if (name === 'CreateTexture2D') {
        let n = 0;
        return {
            onEnter(args) {
                n++;
                if (n > 25) return;
                try {
                    const d = args[1];
                    const w = d.readU32(), h = d.add(4).readU32();
                    const mip = d.add(8).readU32(), fmt = d.add(16).readU32();
                    const bind = d.add(32).readU32();
                    const fname = DXGI_FORMATS[fmt] || '0x'+fmt.toString(16);
                    console.log('[' + name + ' #' + n + '] ' + w + 'x' + h + ' mip=' + mip + ' fmt=' + fname + ' bind=0x'+(bind>>>0).toString(16));
                    // capture initial data head for scene textures
                    if (w >= 256 && !args[2].isNull()) {
                        const pInit = args[2];
                        const pData = pInit.readPointer();
                        const pitch = pInit.add(Process.pointerSize).readU32();
                        if (!pData.isNull() && pitch > 0) {
                            const head = pData.readByteArray(Math.min(24, pitch));
                            const u8 = new Uint8Array(head);
                            console.log('    initialData pitch=' + pitch + ' head: ' + Array.from(u8).map(b=>b.toString(16).padStart(2,'0')).join(' '));
                        }
                    }
                } catch(e) { console.log('  [err] ' + e); }
            }
        };
    }
    if (name === 'CreateBuffer') {
        let n = 0;
        return {
            onEnter(args) {
                n++;
                if (n > 30) return;
                try {
                    const bw = args[1].readU32();
                    const bind = args[1].add(8).readU32();
                    const bn = ({0x1:'VB',0x2:'IB',0x4:'CB',0x8:'SRV',0x40:'RTV',0x80:'DSV',0x100:'UAV'})[bind]||'0x'+(bind>>>0).toString(16);
                    console.log('[' + name + ' #' + n + '] byteWidth=' + bw + ' bind=' + bn);
                } catch(e){}
            }
        };
    }
    if (name === 'CreateVertexShader' || name === 'CreatePixelShader') {
        let n = 0;
        return {
            onEnter(args) {
                n++;
                if (n > 10) return;
                // ID3D11Device::CreateVertexShader(this, pShaderBytecode, BytecodeLength, pClassLinkage, ppVertexShader)
                const len = args[2].toInt32();
                console.log('[' + name + ' #' + n + '] bytecodeLen=' + len);
                if (len > 0 && len < 1000000) {
                    try {
                        const head = args[1].readByteArray(Math.min(8, len));
                        const u8 = new Uint8Array(head);
                        const magic = String.fromCharCode.apply(null, u8.slice(0,4));
                        console.log('    magic="' + magic + '" (DXBC if "DXBC")');
                    } catch(e){}
                }
            }
        };
    }
    return { onEnter(){} };
}

console.log('\n[*] Setup complete. Switch the wallpaper or wait for resource creation.');
