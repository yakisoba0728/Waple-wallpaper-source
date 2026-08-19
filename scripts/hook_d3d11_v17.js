// frida 17.x — D3D11 render pipeline + texture/shader capture
// Attach to running wallpaper64.exe to reveal the actual render pipeline.
//
// frida 17 API: Module.getGlobalExportByName() replaces Module.findExportByName().
// Device vtable is read off ID3D11Device** after D3D11CreateDevice returns.

'use strict';

const DXGI_FORMATS = {
    0x1c:'B8G8R8A8_UNORM',0x1f:'R8G8B8A8_UNORM',0x3c:'BC1_TYPELESS',0x4d:'BC7_TYPELESS',
    0x3d:'BC1_UNORM_SRGB',0x3e:'BC2_UNORM',0x3f:'BC3_UNORM',0x4e:'BC7_UNORM_SRGB',
    0x36:'R8_UNORM',0x1b:'B5G6R5',0x55:'R16G16B16A16_FLOAT',0x4:'R32G32B32A32_FLOAT',
    0x2a:'R8G8_UNORM',0x61:'BC4_UNORM',0x83:'BC5_UNORM',0x4a:'BC6H_UF16',0x4b:'BC6H_SF16',
    0x35:'R8_SNORM',0x4f:'BC7_TYPELESS',0x0:'UNKNOWN'
};

const d3d11 = Process.findModuleByName('d3d11.dll');
console.log('[+] d3d11.dll @ ' + d3d11.base);
const createDevice = d3d11.getExportByName('D3D11CreateDevice');
console.log('[+] D3D11CreateDevice @ ' + createDevice);

Interceptor.attach(createDevice, {
    onEnter(args) {
        // D3D11CreateDevice(pAdapter[0], DriverType[1], Software[2], Flags[3],
        //   pFeatureLevels[4], FeatureLevels[5], SDKVersion[6],
        //   ppDevice[7], pFeatureLevel[8], ppImmediateContext[9])
        this.ppDevice = args[7];
        this.ppContext = args[9];
        this.pFeatureLevel = args[8];
        const flags = args[3].toInt32();
        const nlevels = args[5].toInt32();
        console.log('\n[D3D11CreateDevice] flags=0x' + (flags>>>0).toString(16) + ' nlevels=' + nlevels);
        if (nlevels > 0 && nlevels < 20) {
            const buf = args[4].readByteArray(nlevels * 4);
            const view = new Int32Array(buf);
            const names = {0x9100:'9_1',0x9200:'9_2',0x9300:'9_3',0xa000:'10_0',0xa100:'10_1',0xb000:'11_0',0xb100:'11_1'};
            const arr = [];
            for (let i=0;i<view.length;i++) arr.push(names[view[i]]||'0x'+view[i].toString(16));
            console.log('  requested feature levels: ' + arr.join(', '));
        }
    },
    onLeave(retval) {
        const hr = retval.toInt32();
        console.log('  -> HRESULT=0x' + (hr>>>0).toString(16));
        if (hr !== 0) return;
        try {
            const devPtr = this.ppDevice.readPointer();
            const vtable = devPtr.readPointer();
            const actualLevel = this.pFeatureLevel.readU32();
            const levelNames = {0xa000:'10_0',0xa100:'10_1',0xb000:'11_0',0xb100:'11_1'};
            console.log('[+] Device @ ' + devPtr + ' vtable @ ' + vtable + ' featureLevel=' + (levelNames[actualLevel]||'0x'+actualLevel.toString(16)));

            // --- Hook CreateTexture2D (vtable idx 8) ---
            const createTexture2D = vtable.add(8 * Process.pointerSize).readPointer();
            let texCount = 0;
            Interceptor.attach(createTexture2D, {
                onEnter(args) {
                    texCount++;
                    try {
                        const desc = args[1];
                        const width = desc.readU32();
                        const height = desc.add(4).readU32();
                        const mipLevels = desc.add(8).readU32();
                        const format = desc.add(16).readU32();
                        const bindFlags = desc.add(32).readU32();
                        const fmtName = DXGI_FORMATS[format] || ('0x'+format.toString(16));
                        // Only log "interesting" textures (scene-sized)
                        const tag = (width >= 256 || height >= 256) ? ' [SCENE-TEXTURE]' : '';
                        if (texCount <= 80 || width >= 512) {
                            console.log('\n[CreateTexture2D #' + texCount + '] ' + width + 'x' + height + ' mip=' + mipLevels + ' fmt=' + fmtName + ' bind=0x'+(bindFlags>>>0).toString(16) + tag);
                        }
                        // Capture initial data header for large textures (reveals TEX→DXGI mapping)
                        const pInit = args[2];
                        if (!pInit.isNull() && width >= 256) {
                            const pData = pInit.readPointer();
                            const pitch = pInit.add(Process.pointerSize).readU32();
                            if (!pData.isNull() && pitch > 0) {
                                try {
                                    const head = pData.readByteArray(Math.min(32, pitch));
                                    const u8 = new Uint8Array(head);
                                    console.log('  initialData pitch=' + pitch + ' head: ' + Array.from(u8).map(b=>b.toString(16).padStart(2,'0')).join(' '));
                                } catch(e){}
                            }
                        }
                    } catch(e) { console.log('  [tex err] ' + e); }
                }
            });

            // --- Hook CreateVertexShader (idx 12) / CreatePixelShader (idx 15) ---
            const createVS = vtable.add(12 * Process.pointerSize).readPointer();
            const createPS = vtable.add(15 * Process.pointerSize).readPointer();
            let vsCount = 0, psCount = 0;
            Interceptor.attach(createVS, {
                onEnter(args) {
                    vsCount++;
                    if (vsCount > 30) return;
                    const len = args[2].toInt32();
                    try {
                        const head = args[1].readByteArray(Math.min(8, len));
                        const u8 = new Uint8Array(head);
                        const magic = String.fromCharCode.apply(null, u8.slice(0,4));
                        console.log('\n[CreateVertexShader #' + vsCount + '] len=' + len + ' magic="' + magic + '"');
                    } catch(e){}
                }
            });
            Interceptor.attach(createPS, {
                onEnter(args) {
                    psCount++;
                    if (psCount > 30) return;
                    const len = args[2].toInt32();
                    try {
                        const head = args[1].readByteArray(Math.min(8, len));
                        const u8 = new Uint8Array(head);
                        const magic = String.fromCharCode.apply(null, u8.slice(0,4));
                        console.log('\n[CreatePixelShader #' + psCount + '] len=' + len + ' magic="' + magic + '"');
                    } catch(e){}
                }
            });

            // --- Hook CreateBuffer (idx 5) — cbuffer/VB/IB sizes ---
            const createBuffer = vtable.add(5 * Process.pointerSize).readPointer();
            let bufCount = 0;
            Interceptor.attach(createBuffer, {
                onEnter(args) {
                    bufCount++;
                    try {
                        const desc = args[1];
                        const bw = desc.readU32();
                        const bind = desc.add(8).readU32();
                        const bn = ({0x1:'VB',0x2:'IB',0x4:'CB',0x8:'SRV',0x40:'RTV',0x80:'DSV',0x100:'UAV'})[bind] || ('0x'+(bind>>>0).toString(16));
                        if (bufCount <= 60 && (bind === 0x4 || bind === 0x1 || bind === 0x2 || bind === 0x100)) {
                            console.log('[CreateBuffer #' + bufCount + '] byteWidth=' + bw + ' bind=' + bn);
                        }
                    } catch(e){}
                }
            });

            // --- Hook DrawIndexed/Draw on context vtable ---
            const ctxPtr = this.ppContext.readPointer();
            const ctxVtable = ctxPtr.readPointer();
            // ID3D11DeviceContext vtable: DrawIndexed=12 (0-indexed from IUnknown: Q=0,A=1,R=2,GetDevice=3,GetPrivateData=9... actually)
            // Accurate: DrawIndexed is vtable index 12 in ID3D11DeviceContext.
            const drawIndexed = ctxVtable.add(12 * Process.pointerSize).readPointer();
            const draw = ctxVtable.add(13 * Process.pointerSize).readPointer();
            let frameDraws = 0;
            Interceptor.attach(drawIndexed, {
                onEnter(args) {
                    frameDraws++;
                    if (frameDraws <= 5 || frameDraws % 100 === 0) {
                        console.log('[DrawIndexed #' + frameDraws + '] indexCount=' + args[1] + ' startIndex=' + args[2]);
                    }
                }
            });

            console.log('[+] All hooks installed (Texture2D, VS/PS, Buffer, DrawIndexed). Capturing...');
        } catch(e) {
            console.log('[vtable setup err] ' + e + ' stack: ' + e.stack);
        }
    }
});

console.log('[*] Hook armed. Wallpaper Engine already has a device; for fresh capture, restart it.');
console.log('[*] To capture mid-run D3D activity, the wallpaper must create new resources (e.g. switch wallpaper).');
