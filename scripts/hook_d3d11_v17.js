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

            // --- Hook CreateTexture2D (vtable idx 5) ---
            // [정정 2026-08-30] 종전 이 자리는 `idx 8` 로 적혀 있었고 vtable.add(8 * ...) 를 읽었다.
            // 슬롯 8 은 CreateUnorderedAccessView 다. 그 훅의 args[1] 은 D3D11_TEXTURE2D_DESC*
            // 가 아니라 ID3D11Resource* (pResource) 이므로, 아래 desc.readU32() 계열은 COM
            // 객체의 vtable 포인터 워드와 힙 필드를 width/height/format 으로 출력하게 된다.
            // 실측 근거(1차 자료 2건, 서로 독립):
            //   mingw-w64 d3d11.h `struct ID3D11DeviceVtbl` — 항목 43개(0..42),
            //     [3] CreateBuffer [4] CreateTexture1D [5] CreateTexture2D [6] CreateTexture3D
            //     [7] CreateShaderResourceView [8] CreateUnorderedAccessView [12] CreateVertexShader
            //     [15] CreatePixelShader [42] GetExceptionMode
            //   Wine d3d11.idl `interface ID3D11Device : IUnknown` (메서드 40개) — 같은 순서
            // 리포 내부 교차확인: hook_d3d11_scan.js:125-131 · hook_d3d11_validate.js:28-50 이
            // 처음부터 올바른 표를 갖고 있었고, analysis/d3d_scan.log:298 의 실제 실행이
            // `[+] hooked CreateTexture2D (vt[5] @ 0x63a71770)` 을 기록한다.
            //
            // 이 결함은 잠재 결함이었고 쓰레기 로그를 낸 적은 없다. v17.js 의 유일한 실행인
            // analysis/d3d_spawn.log 는 D3D11CreateDevice 마다 이 아래 :45/:47
            // (devPtr/pFeatureLevel 역참조)에서 "access violation accessing 0x0" 으로 중단됐고,
            // 제어가 이 훅 설치 줄까지 도달한 적이 없다. 그래서 지금 리포에 슬롯 8 이 만든
            // [CreateTexture2D] 줄은 한 줄도 없다(`grep -rn "\[CreateTexture2D" analysis/` → 0건).
            // 별건으로 남은 문제: pFeatureLevel 이 NULL 인 호출에 대한 가드가 없다 — 슬롯을
            // 고친 것만으로 v17.js 가 캡처를 시작하지는 않는다.
            const createTexture2D = vtable.add(5 * Process.pointerSize).readPointer();
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

            // --- Hook CreateBuffer (idx 3) — cbuffer/VB/IB sizes ---
            // [정정 2026-08-30] 종전 `idx 5` / vtable.add(5 * ...). 슬롯 5 는 CreateTexture2D 다.
            // CreateBuffer 는 슬롯 3 이다(위 CreateTexture2D 주석의 1차 자료 2건 참조).
            const createBuffer = vtable.add(3 * Process.pointerSize).readPointer();
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
