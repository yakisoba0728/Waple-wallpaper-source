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
            // pFeatureLevels is arg[4], FeatureLevels arg[5], Flags arg[3], pFeatureLevel arg[8]
            // [정정 2026-08-30] 종전 "pFeatureLevels is arg[5], FeatureLevels arg[6],
            // pFeatureLevel arg[9]" 이었고 코드도 args[6]/args[5]/args[7] 를 읽었다.
            // 이는 아래 onEnter 의 args[9] 오류와 같은 원인 — 실재하지 않는 12인자 서명
            // (D3D11_LAYER_DESC* 를 끼워넣은 것)을 전제로 한 인덱스 밀림이다.
            // 실제 서명은 인자 10개(Wine d3d11.idl:4033-4034):
            //   [0] pAdapter [1] DriverType [2] Software [3] Flags [4] pFeatureLevels
            //   [5] FeatureLevels [6] SDKVersion [7] ppDevice [8] pFeatureLevel
            //   [9] ppImmediateContext
            // hook_d3d11_v17.js:24-27 이 같은 표를 처음부터 올바르게 적고 있다.
            const numLevels = args[5].toInt32();
            console.log('\n[D3D11CreateDevice] FeatureLevels count=' + numLevels);
            if (numLevels > 0 && numLevels < 20) {
                const levels = args[4].readByteArray(numLevels * 4);
                const view = new Int32Array(levels);
                const levelNames = {0x9100:'9_1',0x9200:'9_2',0x9300:'9_3',0xa000:'10_0',0xa100:'10_1',0xb000:'11_0',0xb100:'11_1'};
                const arr = [];
                for (let i=0;i<view.length;i++) arr.push(levelNames[view[i]] || '0x'+view[i].toString(16));
                console.log('  Requested feature levels: ' + arr.join(', '));
            }
            console.log('  Flags=0x' + args[3].toString(16) + ' (0x20=debug, 0x2=bgra, 0x8000=11_1)');
        },
        onLeave(retval) {
            console.log('  -> HRESULT=0x' + retval.toString(16));
        }
    });
    console.log('[+] Hooked D3D11CreateDevice');
}

// 2. CreateTexture2D — the TEX→DXGI format mapping
//    We hook by scanning the device vtable. CreateTexture2D is vtable index 5.
//    [정정 2026-08-30] 종전 이 줄은 "vtable index 8" 이었다. 슬롯 8 은
//    CreateUnorderedAccessView 이고 CreateTexture2D 는 슬롯 5 다. 근거는 아래
//    deviceOffsets 표의 정정 주석에 적었다.
//    Easier: hook the export, since it's also an export of d3d11.dll for some paths.
const createTex = Module.findExportByName('d3d11.dll', 'D3D11CreateTexture2D');
// Actually CreateTexture2D is a vtable method, not an export. We capture it via
// the device's vtable after D3D11CreateDevice returns. That requires hooking the
// device pointer. For now, use ID3D11Device's vtable once we see CreateDevice.

// Capture device vtable on D3D11CreateDevice return
let deviceVtable = null;
// [정정 2026-08-30] 이 표는 네 자리가 틀려 있었다. 종전 값과 무엇이 왜 틀렸는지:
//   5: 'CreateBuffer'      → 슬롯 5 는 CreateTexture2D. CreateBuffer 는 슬롯 3.
//   8: 'CreateTexture2D'   → 슬롯 8 은 CreateUnorderedAccessView. Texture2D 는 슬롯 5.
//   9: 'CreateTexture3D'   → 슬롯 9 는 CreateRenderTargetView. Texture3D 는 슬롯 6.
//   47: 'VSSetShader' / 48: 'PSSetShader'
//        → 둘 다 ID3D11Device 의 메서드가 아니다(ID3D11DeviceContext 의 메서드다).
//          게다가 ID3D11Device vtable 은 43항목(0..42)뿐이므로 47/48 은 표 끝을
//          넘어 인접 힙을 읽는 좌표다. 그래서 삭제했다.
// 실측 근거(1차 자료 2건, 서로 독립):
//   mingw-w64 d3d11.h `struct ID3D11DeviceVtbl` — 함수 포인터 항목 43개(0..42),
//     [0] QueryInterface [1] AddRef [2] Release [3] CreateBuffer [4] CreateTexture1D
//     [5] CreateTexture2D [6] CreateTexture3D [7] CreateShaderResourceView
//     [8] CreateUnorderedAccessView [9] CreateRenderTargetView [10] CreateDepthStencilView
//     [11] CreateInputLayout [12] CreateVertexShader [15] CreatePixelShader
//     [42] GetExceptionMode (마지막)
//   Wine d3d11.idl `interface ID3D11Device : IUnknown` — 메서드 40개, 같은 순서
//     (IUnknown 3개 + 40 = 43슬롯)
// 리포 내부 교차확인: hook_d3d11_scan.js:125-131 · hook_d3d11_validate.js:28-50 이
// 처음부터 올바른 표를 갖고 있었고, analysis/d3d_scan.log:297-298 의 실제 실행이
// `hooked CreateBuffer (vt[3])` / `hooked CreateTexture2D (vt[5])` 를 기록한다.
//
// 주의: 이 상수는 선언만 되어 있고 어디서도 읽히지 않는다(dead code — 아래에서
// 실제로 쓰이는 것은 deviceVtable 뿐이다). 그래서 이 정정은 문서상의 정정이고
// 실행 경로를 바꾸지 않는다. 실행 경로의 슬롯은 아래 vtable.add(...) 자리에서 고쳤다.
const deviceOffsets = {
    3: 'CreateBuffer',
    5: 'CreateTexture2D',
    6: 'CreateTexture3D',
    12: 'CreateVertexShader',
    13: 'CreateGeometryShader',
    15: 'CreatePixelShader',
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
        ppDevice = args[2]; // (dead assignment — this.ppDevice below is what onLeave reads)
        // HRESULT WINAPI D3D11CreateDevice(IDXGIAdapter*, D3D_DRIVER_TYPE, HMODULE, UINT,
        //   const D3D_FEATURE_LEVEL*, UINT, UINT, ID3D11Device**, D3D_FEATURE_LEVEL*,
        //   ID3D11DeviceContext**)   — 10 args, so ppDevice is 0-based args[7].
        // [정정 2026-08-30] 종전 이 자리는 12개 인자 서명을 적고
        //   "const D3D11_LAYER_DESC*, UINT" 를 7·8번째 인자로 끼워넣은 뒤 args[9] 를 읽었다.
        //   그 서명은 실재하지 않는다 — D3D11CreateDevice 의 어떤 오버로드에도
        //   D3D11_LAYER_DESC* 인자는 없다(그 타입은 D3D10 계열의 것이다). 그래서
        //   args[9] 는 실제로는 ppImmediateContext 이고, 그것을 ID3D11Device** 로
        //   역참조하면 device 가 아닌 context 의 vtable 을 잡는다.
        // 실측 근거: Wine d3d11.idl:4033-4034 cpp_quote 선언
        //   `D3D11CreateDevice(IDXGIAdapter*,D3D_DRIVER_TYPE,HMODULE,UINT,
        //    const D3D_FEATURE_LEVEL*,UINT,UINT,ID3D11Device**,D3D_FEATURE_LEVEL*,
        //    ID3D11DeviceContext**)` — 인자 10개, ppDevice 는 0-based 7번.
        //   mingw-w64 d3d11.h 의 PFN_D3D11_CREATE_DEVICE 도 같다.
        // 리포 내부 교차확인: 나머지 훅 5종은 처음부터 args[7] 로 옳게 읽는다
        //   (hook_d3d11_v17.js:27 · scan.js:13 · minimal.js:12 · validate.js:88 ·
        //    late_attach.js:28). 즉 이것은 ABI 와 무관한 이 스크립트 한 곳의 전사 오류다.
        this.ppDevice = args[7];
    },
    onLeave(retval) {
        if (retval.toInt32() !== 0) return;
        try {
            const devPtr = this.ppDevice.readPointer();
            const vtable = devPtr.readPointer();
            console.log('[+] Device @ ' + devPtr + ', vtable @ ' + vtable);
            deviceVtable = vtable;

            // Hook CreateTexture2D (vtable index 5)
            // [정정 2026-08-30] 종전 `index 8` / add(8 * ...). 슬롯 8 은
            // CreateUnorderedAccessView 이므로 아래 args[1] 은 D3D11_TEXTURE2D_DESC*
            // 가 아니라 ID3D11Resource* 이고, width/height/fmt 출력이 전부 쓰레기가 된다.
            // 근거는 위 deviceOffsets 표의 정정 주석 참조.
            const createTexture2D = vtable.add(5 * Process.pointerSize).readPointer();
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

            // Hook CreateBuffer (idx 3) — reveals constant/vertex/index buffer sizes
            // [정정 2026-08-30] 종전 `idx 5` / add(5 * ...). 슬롯 5 는 CreateTexture2D 다.
            const createBuffer = vtable.add(3 * Process.pointerSize).readPointer();
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
