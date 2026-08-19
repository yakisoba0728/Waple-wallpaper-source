// Minimal: just hook D3D11CreateDevice for ground truth, then hook device methods.
// Fast attach — no heap scan. Relies on wallpaper switch creating a new device.
'use strict';
const d3d11 = Process.findModuleByName('d3d11.dll');
console.log('[+] d3d11 @ ' + d3d11.base + ' (' + (Process.pointerSize===8?'x64':'x86') + ')');

const DXGI_FORMATS = {0x1c:'B8G8R8A8_UNORM',0x1f:'R8G8B8A8_UNORM',0x3c:'BC1_TYPELESS',0x4d:'BC7_TYPELESS',0x3d:'BC1_UNORM_SRGB',0x3e:'BC2_UNORM',0x3f:'BC3_UNORM',0x4e:'BC7_UNORM_SRGB',0x36:'R8_UNORM',0x55:'R16G16B16A16_FLOAT',0x2a:'R8G8_UNORM'};

let devHooked = false;
const createDevice = d3d11.getExportByName('D3D11CreateDevice');
Interceptor.attach(createDevice, {
    onEnter(args) { this.ppDevice = args[7]; this.ppCtx = args[9]; this.pFL = args[8]; },
    onLeave(retval) {
        if (retval.toInt32() !== 0) { console.log('[CreateDevice] FAILED hr=0x'+(retval.toInt32()>>>0).toString(16)); return; }
        try {
            const dev = this.ppDevice.readPointer();
            const vt = dev.readPointer();
            const fl = this.pFL.readU32();
            const flName = ({0xa000:'10_0',0xa100:'10_1',0xb000:'11_0',0xb100:'11_1'})[fl]||'0x'+fl.toString(16);
            console.log('\n*** DEVICE CREATED @ ' + dev + ' vtable @ ' + vt + ' featureLevel=' + flName);
            if (!devHooked) { devHooked = true; hookDevice(vt, dev); }
        } catch(e) { console.log('[truth err] ' + e); }
    }
});
console.log('[+] D3D11CreateDevice hooked. Switch wallpaper to trigger new device.');

function hookDevice(vt, dev) {
    // Dump first 16 slots to confirm interface
    console.log('[vtable dump]');
    for (let i = 0; i < 16; i++) {
        try {
            const slot = vt.add(i * Process.pointerSize).readPointer();
            const inD3D = slot.compare(d3d11.base) >= 0 && slot.compare(d3d11.base.add(d3d11.size)) < 0;
            console.log('  [' + i + '] ' + slot + (inD3D ? ' (d3d11+0x'+slot.sub(d3d11.base).toString(16)+')' : ''));
        } catch(e) { break; }
    }
    // Per ID3D11Device: CreateBuffer=3? Actually verify by signature.
    // We hook idx 3,5,12,15 and ALSO print on each so we see which is real.
    const trySlots = [3, 5, 12, 15];
    const names = {3:'idx3', 5:'idx5', 12:'idx12', 15:'idx15'};
    for (const idx of trySlots) {
        try {
            const fn = vt.add(idx * Process.pointerSize).readPointer();
            let n = 0;
            Interceptor.attach(fn, {
                onEnter(args) {
                    n++;
                    if (n > 8) return;
                    // args[0]=this, args[1..] are method params
                    // For Create*: args[1] is usually a desc pointer
                    console.log('[vt[' + idx + '] call #' + n + '] this=' + args[0]);
                    try {
                        // Try interpreting args[1] as a struct with u32 fields
                        const f0 = args[1].readU32();
                        const f1 = args[1].add(4).readU32();
                        const f2 = args[1].add(8).readU32();
                        console.log('    args[1] fields: 0x'+f0.toString(16)+', 0x'+f1.toString(16)+', 0x'+f2.toString(16)+' ('+f0+', '+f1+', '+f2+')');
                    } catch(e){}
                }
            });
            console.log('[+] hooked vtable[' + idx + '] @ ' + fn);
        } catch(e) { console.log('[hook err idx '+idx+'] ' + e); }
    }
    // Also hook CreateTexture2D specifically if it's at a different slot — try 5 and 8
    // We'll see from the dump which slot's offset matches d3d11's CreateTexture2D.
}
