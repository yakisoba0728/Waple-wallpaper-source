// Late-attach: device/context already exist. Find device context by scanning
// the process heap for ID3D11Device vtable pointers, then hook draw calls.
//
// Strategy: d3d11.dll exports D3D11CreateDevice; we hook it for FUTURE calls
// (wallpaper switch). For the EXISTING context, we scan for the device vtable
// pattern: a pointer into d3d11.dll's .rdata (the device's vtable), followed by
// the device object. We use Process.enumerateRanges to find writable heap pages
// and scan for pointers whose target (vtable) lives in d3d11.dll.

'use strict';

const d3d11 = Process.findModuleByName('d3d11.dll');
console.log('[+] d3d11.dll @ ' + d3d11.base + ' size=0x' + d3d11.size.toString(16));
const d3d11Start = d3d11.base;
const d3d11End = d3d11.base.add(d3d11.size);

const DXGI_FORMATS = {
    0x1c:'B8G8R8A8_UNORM',0x1f:'R8G8B8A8_UNORM',0x3c:'BC1_TYPELESS',0x4d:'BC7_TYPELESS',
    0x3d:'BC1_UNORM_SRGB',0x3e:'BC2_UNORM',0x3f:'BC3_UNORM',0x4e:'BC7_UNORM_SRGB',
    0x36:'R8_UNORM',0x55:'R16G16B16A16_FLOAT',0x4f:'BC7_TYPELESS'
};

// 1. Hook D3D11CreateDevice for any FUTURE device creation
const createDevice = d3d11.getExportByName('D3D11CreateDevice');
function hookNewDevice() {
    Interceptor.attach(createDevice, {
        onEnter(args) {
            this.ppDevice = args[7];
            this.ppContext = args[9];
            this.pFL = args[8];
        },
        onLeave(retval) {
            if (retval.toInt32() !== 0) return;
            try {
                const devPtr = this.ppDevice.readPointer();
                console.log('[NEW DEVICE] @ ' + devPtr);
                hookDeviceVtable(devPtr.readPointer(), this.ppContext.readPointer());
            } catch(e) { console.log('[new device err] ' + e); }
        }
    });
}
hookNewDevice();
console.log('[+] D3D11CreateDevice hooked for future calls');

// 2. Find existing device context by scanning. Device vtable is in d3d11.dll's
//    read-only section. We scan writable RW pages for an 8-byte pointer into
//    d3d11.dll; that's a candidate COM object (vtable ptr as first member).
//    Validate by checking the vtable[0..2] are also in d3d11.dll (QI/AddRef/Release).
console.log('[*] Scanning heap for ID3D11Device vtable references...');
let found = 0;
const ranges = Process.enumerateRanges('rw-');
console.log('[*] ' + ranges.length + ' RW ranges to scan');
let scanned = 0;
for (const r of ranges) {
    if (r.size > 64 * 1024 * 1024) continue; // skip huge ranges
    scanned++;
    try {
        // Read the range and scan for pointers into d3d11.dll
        const buf = r.base.readByteArray(r.size);
        const view = new DataView(buf);
        const ptrSize = Process.pointerSize; // 4 on x86, 8 on x64
        // Check pointer size from architecture
        for (let off = 0; off + ptrSize <= r.size; off += ptrSize) {
            let val;
            if (ptrSize === 8) val = view.getFloat64(off, true) || view.getBigUint64(off, true);
            else val = view.getUint32(off, true);
            // We need an unsigned integer compare; use BigInt for 64-bit
            let vptr;
            if (ptrSize === 8) {
                const lo = view.getUint32(off, true);
                const hi = view.getUint32(off+4, true);
                // Reconstruct as NativePointer-friendly: check hi 4 bytes match d3d11 base high
                // d3d11.base on x64: 0x7ffa... — high word ~0x7ffa
                const baseHi = d3d11.base.and(ptr(0xFFFFFFFF00000000)).shr(32).toInt32();
                if (hi !== baseHi) continue;
                vptr = ptr(lo).add(ptr(hi).shl(32));
            } else {
                vptr = ptr(val);
            }
            if (vptr.compare(d3d11Start) < 0 || vptr.compare(d3d11End) >= 0) continue;
            // Candidate: object @ r.base+off, vtable @ vptr
            // Verify vtable[0..2] also in d3d11.dll
            try {
                const q = vptr.readPointer();
                const a = vptr.add(ptrSize).readPointer();
                const rel = vptr.add(ptrSize*2).readPointer();
                if (q.compare(d3d11Start) >= 0 && q.compare(d3d11End) < 0 &&
                    a.compare(d3d11Start) >= 0 && a.compare(d3d11End) < 0 &&
                    rel.compare(d3d11Start) >= 0 && rel.compare(d3d11End) < 0) {
                    const obj = r.base.add(off);
                    console.log('[FOUND device?] obj @ ' + obj + ' vtable @ ' + vptr);
                    found++;
                    if (found <= 3) {
                        hookDeviceVtable(vptr, null);
                    }
                    if (found >= 5) break;
                }
            } catch(e) {}
        }
    } catch(e) {}
    if (found >= 5) break;
}
console.log('[*] Scan done. Found ' + found + ' candidate device vtables.');
if (found === 0) {
    console.log('[!] No device found in scan. Hooking only future CreateDevice.');
    console.log('[!] Switch the wallpaper to force new resource creation.');
}

function hookDeviceVtable(vtable, ctxPtr) {
    try {
        // ID3D11Device vtable indices (from IUnknown: QI=0,AddRef=1,Release=2):
        //   CreateBuffer=3, CreateTexture2D=5, CreateVertexShader=12, CreatePixelShader=15
        // [정정 2026-08-30] 종전 이 주석은 "GetDevice=3? no — CreateBuffer=5, CreateTexture2D=8"
        // 이라는 추측을 그대로 남겼고, 코드도 add(8*...)/add(5*...) 로 그 추측을 따랐다.
        // 실제 슬롯 8 은 CreateUnorderedAccessView, 슬롯 5 는 CreateTexture2D 다.
        // 실측 근거(1차 자료 2건, 서로 독립): mingw-w64 d3d11.h `struct ID3D11DeviceVtbl`
        // 은 항목 43개(0..42)로 [3] CreateBuffer [5] CreateTexture2D [8] CreateUAV
        // [12] CreateVertexShader [15] CreatePixelShader; Wine d3d11.idl 의
        // `interface ID3D11Device : IUnknown`(메서드 40개)도 같은 순서다.
        // 리포 내부 교차확인: hook_d3d11_scan.js:125-131 · hook_d3d11_validate.js:28-50 이
        // 올바른 표를 갖고 있고, analysis/d3d_scan.log:297-298 의 실제 실행이
        // `hooked CreateBuffer (vt[3])` / `hooked CreateTexture2D (vt[5])` 를 기록한다.
        // 12/15 (VS/PS) 는 원래부터 옳았으므로 손대지 않는다.
        const createTexture2D = vtable.add(5 * Process.pointerSize).readPointer();
        const createBuffer = vtable.add(3 * Process.pointerSize).readPointer();
        const createVS = vtable.add(12 * Process.pointerSize).readPointer();
        const createPS = vtable.add(15 * Process.pointerSize).readPointer();
        let texN=0, bufN=0, vsN=0, psN=0;
        Interceptor.attach(createTexture2D, {
            onEnter(args) {
                texN++;
                if (texN > 30) return;
                try {
                    const desc = args[1];
                    const w = desc.readU32(), h = desc.add(4).readU32();
                    const mip = desc.add(8).readU32(), fmt = desc.add(16).readU32();
                    const bind = desc.add(32).readU32();
                    console.log('[CreateTexture2D #' + texN + '] ' + w + 'x' + h + ' mip=' + mip + ' fmt=' + (DXGI_FORMATS[fmt]||'0x'+fmt.toString(16)) + ' bind=0x'+(bind>>>0).toString(16));
                } catch(e){}
            }
        });
        Interceptor.attach(createBuffer, {
            onEnter(args) {
                bufN++;
                if (bufN > 40) return;
                try {
                    const bw = args[1].readU32();
                    const bind = args[1].add(8).readU32();
                    const bn = ({0x1:'VB',0x2:'IB',0x4:'CB',0x8:'SRV',0x40:'RTV',0x80:'DSV',0x100:'UAV'})[bind]||'0x'+(bind>>>0).toString(16);
                    console.log('[CreateBuffer #' + bufN + '] byteWidth=' + bw + ' bind=' + bn);
                } catch(e){}
            }
        });
        Interceptor.attach(createVS, {
            onEnter(args) {
                vsN++;
                if (vsN > 15) return;
                console.log('[CreateVertexShader #' + vsN + '] bytecodeLen=' + args[2].toInt32());
            }
        });
        Interceptor.attach(createPS, {
            onEnter(args) {
                psN++;
                if (psN > 15) return;
                console.log('[CreatePixelShader #' + psN + '] bytecodeLen=' + args[2].toInt32());
            }
        });
        console.log('[+] Hooked device vtable @ ' + vtable + ' (Texture2D,Buffer,VS,PS)');
    } catch(e) {
        console.log('[vtable hook err] ' + e);
    }
}

console.log('[*] Late-attach setup complete.');
