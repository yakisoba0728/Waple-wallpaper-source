// Function: __acrt_locale_free_time
// Addr: 1402e5560
// Size: 264 bytes


/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1402e51ec(param_1,7);
    FUN_1402e51ec(param_1 + 0x38,7);
    FUN_1402e51ec(param_1 + 0x70,0xc);
    FUN_1402e51ec(param_1 + 0xd0,0xc);
    FUN_1402e51ec(param_1 + 0x130,2);
    FUN_1402d9040(*(undefined8 *)(param_1 + 0x140));
    FUN_1402d9040(*(undefined8 *)(param_1 + 0x148));
    FUN_1402d9040(*(undefined8 *)(param_1 + 0x150));
    FUN_1402e51ec(param_1 + 0x160,7);
    FUN_1402e51ec(param_1 + 0x198,7);
    FUN_1402e51ec(param_1 + 0x1d0,0xc);
    FUN_1402e51ec(param_1 + 0x230,0xc);
    FUN_1402e51ec(param_1 + 0x290,2);
    FUN_1402d9040(*(undefined8 *)(param_1 + 0x2a0));
    FUN_1402d9040(*(undefined8 *)(param_1 + 0x2a8));
    FUN_1402d9040(*(undefined8 *)(param_1 + 0x2b0));
    FUN_1402d9040(*(undefined8 *)(param_1 + 0x2b8));
  }
  return;
}

