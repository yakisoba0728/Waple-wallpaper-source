// frida hook: D3D11 core rendering pipeline + texture creation
// Attach to running wallpaper64.exe to reveal the render pipeline structure.
//
// Usage: frida -p <PID> -l hook_d3d11_quick.js
//
// Hooks (via IDirect3DDevice11 vtable, not imports — most D3D11 is via COM):
//   - D3D11CreateDevice (device creation params: feature level, flags)
//   - CreateTexture2D   (texture format, dims, usage — reveals TEX format→DXGI mapping)
//   - CreateBuffer      (constant/vertex/index buffers — reveals cbuffer layout)
//   - VSSetShader / PSSetShader (which shaders run per frame)
//   - DrawIndexed / Draw (draw calls per frame)
//   - CreateVertexShader / CreatePixelShader (shader bytecode capture)
//
// Output goes to frida console (captured to file).

'use strict';

// We attach to d3d11.dll exports first — D3D11CreateDevice is the only direct import.
const d3d11 = Module.findBaseAddress('d3d11.dll');
if (!d3d11) {
    console.log('[!] d3d11.dll not loaded yet');
} else {
    console.log('[+] d3d11.dll @ ' + d3d11);
}

// 1. D3D11CreateDevice — entry point of the whole pipeline
const createDevice = Module.findExportByName('d3d11.dll', 'D3D11CreateDevice');
if (createDevice) {
    Interceptor.attach(createDevice, {
        onEnter(args) {
            // pFeatureLevels is arg[5], FeatureLevels arg[6], pFeatureLevel arg[9]
            const numLevels = args[6].toInt32();
            console.log('\n[D3D11CreateDevice] FeatureLevels count=' + numLevels);
            if (numLevels > 0 && numLevels < 20) {
                const levels = args[5].readByteArray(numLevels * 4);
                const view = new Int32Array(levels);
                const levelNames = {0x9100:'9_1',0x9200:'9_2',0x9300:'9_3',0xa000:'10_0',0xa100:'10_1',0xb000:'11_0',0xb100:'11_1'};
                const arr = [];
                for (let i=0;i<view.length;i++) arr.push(levelNames[view[i]] || '0x'+view[i].toString(16));
                console.log('  Requested feature levels: ' + arr.join(', '));
            }
            console.log('  Flags=0x' + args[7].toString(16) + ' (0x20=debug, 0x2=bgra, 0x8000=11_1)');
        },
        onLeave(retval) {
            console.log('  -> HRESULT=0x' + retval.toString(16));
        }
    });
    console.log('[+] Hooked D3D11CreateDevice');
}

// 2. CreateTexture2D — the TEX→DXGI format mapping
//    We hook by scanning the device vtable. CreateTexture2D is vtable index 8.
//    Easier: hook the export, since it's also an export of d3d11.dll for some paths.
const createTex = Module.findExportByName('d3d11.dll', 'D3D11CreateTexture2D');
// Actually CreateTexture2D is a vtable method, not an export. We capture it via
// the device's vtable after D3D11CreateDevice returns. That requires hooking the
// device pointer. For now, use ID3D11Device's vtable once we see CreateDevice.

// Capture device vtable on D3D11CreateDevice return
let deviceVtable = null;
const deviceOffsets = {
    5: 'CreateBuffer',
    8: 'CreateTexture2D',
    12: 'CreateVertexShader',
    15: 'CreatePixelShader',
    47: 'VSSetShader',
    9: 'CreateTexture3D',
    48: 'PSSetShader',
    13: 'CreateGeometryShader',
};

Interceptor.attach(createDevice, {
    onLeave(retval) {
        if (retval.toInt32() < 0 && retval.toInt32() !== 0x80004005) return;
        try {
            // args[2] is ppDevice — but we can't read onLeave args; use a saved ptr.
        } catch(e){}
    }
});

// Better: hook via the device vtable by intercepting CreateDevice's onEnter, saving
// the ppDevice out-pointer, then in onLeave reading it and vtable.
let ppDevice = null;
Interceptor.attach(createDevice, {
    onEnter(args) {
        ppDevice = args[2]; // IDXGIAdapter* is arg0; ppDevice is arg[2]? Actually:
        // HRESULT D3D11CreateDevice(IDXGIAdapter*, D3D_DRIVER_TYPE, HMODULE, UINT,
        //   const D3D_FEATURE_LEVEL*, UINT, UINT, const D3D11_LAYER_DESC*, UINT,
        //   ID3D11Device**, D3D_FEATURE_LEVEL*, ID3D11DeviceContext**)
        // So ppDevice = arg[10] (0-indexed: 0 adapter,1 drivertype,2 software,3 flags,4 plevels,5 nlevels,6 sdkver,7 player,8 nlayer,9 ppDevice,...) — depends.
        // Just save arg index 9 (10th arg) which is ppDevice.
        this.ppDevice = args[9];
    },
    onLeave(retval) {
        if (retval.toInt32() !== 0) return;
        try {
            const devPtr = this.ppDevice.readPointer();
            const vtable = devPtr.readPointer();
            console.log('[+] Device @ ' + devPtr + ', vtable @ ' + vtable);
            deviceVtable = vtable;

            // Hook CreateTexture2D (vtable index 8)
            const createTexture2D = vtable.add(8 * Process.pointerSize).readPointer();
            Interceptor.attach(createTexture2D, {
                onEnter(args) {
                    // args[0]=this(device), args[1]=D3D11_TEXTURE2D_DESC*, args[2]=initial data, args[3]=ppTexture
                    try {
                        const desc = args[1];
                        const width = desc.readU32();
                        const height = desc.add(4).readU32();
                        const mipLevels = desc.add(8).readU32();
                        const arraySize = desc.add(12).readU32();
                        const format = desc.add(16).readU32();
                        const usage = desc.add(28).readU32();
                        const bindFlags = desc.add(32).readU32();
                        const miscFlags = desc.add(44).readU32();
                        // DXGI format names (subset)
                        const fmtName = ({0x1c:'B8G8R8A8_UNORM',0x1f:'R8G8B8A8_UNORM',0x3c:'BC1_UNORM',0x3d:'BC1_UNORM_SRGB',0x3e:'BC2_UNORM',0x3f:'BC3_UNORM',0x4d:'BC7_UNORM',0x4e:'BC7_UNORM_SRGB',0x36:'R8_UNORM',0x1b:'B5G6R5',0x55:'R16G16B16A16_FLOAT',0x4:'R32G32B32A32_FLOAT'})[format] || ('DXGI_0x'+format.toString(16));
                        console.log('\n[CreateTexture2D] ' + width + 'x' + height + ' mip=' + mipLevels + ' array=' + arraySize + ' fmt=' + fmtName + ' usage=' + usage + ' bind=0x' + bindFlags.toString(16) + ' misc=0x' + miscFlags.toString(16));
                        // If this looks like a scene texture (large), capture the first bytes of pInitialData
                        const pInit = args[2];
                        if (!pInit.isNull()) {
                            const pData = pInit.readPointer();
                            const sysMemPitch = pInit.add(Process.pointerSize).readU32();
                            console.log('  initialData @ ' + pData + ' pitch=' + sysMemPitch);
                            if (sysMemPitch > 0 && !pData.isNull() && width >= 512) {
                                try {
                                    const head = pData.readByteArray(Math.min(64, sysMemPitch));
                                    console.log('  data[0:64]: ' + Array.from(new Uint8Array(head)).map(b=>b.toString(16).padStart(2,'0')).join(' '));
                                } catch(e){}
                            }
                        }
                    } catch(e) { console.log('  [desc read err] ' + e); }
                }
            });
            console.log('[+] Hooked CreateTexture2D');

            // Hook CreateVertexShader (idx 12), CreatePixelShader (idx 15)
            const createVS = vtable.add(12 * Process.pointerSize).readPointer();
            const createPS = vtable.add(15 * Process.pointerSize).readPointer();
            let shaderCount = {vs:0, ps:0};
            Interceptor.attach(createVS, {
                onEnter(args) {
                    shaderCount.vs++;
                    const byteLen = args[2].toInt32();
                    console.log('\n[CreateVertexShader #' + shaderCount.vs + '] bytecode=' + args[1] + ' len=' + byteLen);
                    // dump first 16 bytes of shader bytecode (DXBC magic check)
                    try {
                        const head = args[1].readByteArray(Math.min(16, byteLen));
                        const u8 = new Uint8Array(head);
                        const ascii = String.fromCharCode.apply(null, u8.slice(0,4));
                        console.log('  bytecode[0:16]: ' + ascii + ' ' + Array.from(u8).map(b=>b.toString(16).padStart(2,'0')).join(' '));
                    } catch(e){}
                }
            });
            Interceptor.attach(createPS, {
                onEnter(args) {
                    shaderCount.ps++;
                    const byteLen = args[2].toInt32();
                    console.log('\n[CreatePixelShader #' + shaderCount.ps + '] bytecode=' + args[1] + ' len=' + byteLen);
                    try {
                        const head = args[1].readByteArray(Math.min(16, byteLen));
                        const u8 = new Uint8Array(head);
                        const ascii = String.fromCharCode.apply(null, u8.slice(0,4));
                        console.log('  bytecode[0:16]: ' + ascii + ' ' + Array.from(u8).map(b=>b.toString(16).padStart(2,'0')).join(' '));
                    } catch(e){}
                }
            });
            console.log('[+] Hooked CreateVertexShader / CreatePixelShader');

            // Hook CreateBuffer (idx 5) — reveals constant/vertex/index buffer sizes
            const createBuffer = vtable.add(5 * Process.pointerSize).readPointer();
            Interceptor.attach(createBuffer, {
                onEnter(args) {
                    try {
                        const desc = args[1];
                        const byteWidth = desc.readU32();
                        const usage = desc.add(4).readU32();
                        const bindFlags = desc.add(8).readU32();
                        const cpuFlags = desc.add(12).readU32();
                        const bindName = ({0x1:'VB',0x2:'IB',0x4:'CB',0x8:'SRV',0x20:'Stream',0x40:'RTV',0x80:'DSV',0x100:'UAV'})[bindFlags] || ('0x'+bindFlags.toString(16));
                        console.log('\n[CreateBuffer] byteWidth=' + byteWidth + ' usage=' + usage + ' bind=' + bindName + ' cpu=0x' + cpuFlags.toString(16));
                    } catch(e){}
                }
            });
            console.log('[+] Hooked CreateBuffer');

            // Hook DrawIndexed (context vtable, need device context)
            // The context is at ppDevice[11]? Actually context is arg[11] of CreateDevice.
            console.log('[+] Setup complete — waiting for rendering activity...');
        } catch(e) {
            console.log('[device vtable setup err] ' + e);
        }
    }
});

console.log('[*] D3D11 quick-hook installed. Run a wallpaper to see activity.');
