// Diagnostic: dump wallpaper32.exe module ranges
'use strict';
const m = Process.findModuleByName('wallpaper32.exe');
console.log('module:', m ? m.name + ' @ ' + m.base + ' size=0x' + m.size.toString(16) : 'NONE');
if (m) {
    console.log('enumerateRanges type:', typeof m.enumerateRanges);
    try {
        const r = m.enumerateRanges('rw-');
        console.log('module rw ranges:', r.length);
        for (let i = 0; i < Math.min(r.length, 5); i++) {
            console.log('  range[' + i + ']: ' + r[i].base + ' size=0x' + r[i].size.toString(16));
        }
    } catch(e) { console.log('module.enumerateRanges err:', e); }
}
const allR = Process.enumerateRanges('rw-');
console.log('process-wide rw ranges:', allR.length);
// also dump all modules containing 'wallpaper' or 'd3d11'
const mods = Process.enumerateModules();
const relevant = mods.filter(m => m.name.match(/wallpaper|d3d11|dxgi/i));
console.log('relevant modules:');
for (const rm of relevant) console.log('  ' + rm.name + ' @ ' + rm.base + ' size=0x' + rm.size.toString(16));
