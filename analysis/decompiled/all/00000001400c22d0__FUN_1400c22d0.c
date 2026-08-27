// Function: FUN_1400c22d0
// Addr: 1400c22d0
// Size: 458 bytes


undefined4 * FUN_1400c22d0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  FUN_140016fc0(param_1 + 2,param_2 + 2);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  FUN_140016fc0(param_1 + 0xc,param_2 + 0xc);
  FUN_140016fc0(param_1 + 0x14,param_2 + 0x14);
  FUN_140016fc0(param_1 + 0x1c,param_2 + 0x1c);
  FUN_140016fc0(param_1 + 0x24,param_2 + 0x24);
  FUN_140016fc0(param_1 + 0x2c,param_2 + 0x2c);
  FUN_140016fc0(param_1 + 0x34,param_2 + 0x34);
  FUN_140016fc0(param_1 + 0x3c,param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x46) != *(longlong *)(param_2 + 0x44)) {
    if (0x7fffffffffffffff <
        (ulonglong)(*(longlong *)(param_2 + 0x46) - *(longlong *)(param_2 + 0x44))) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    FUN_1400cd7a0(param_1 + 0x44);
    lVar1 = *(longlong *)(param_1 + 0x44);
    lVar2 = *(longlong *)(param_2 + 0x46) - *(longlong *)(param_2 + 0x44);
    FUN_1404210f0(lVar1,*(longlong *)(param_2 + 0x44),lVar2);
    *(longlong *)(param_1 + 0x46) = lVar2 + lVar1;
  }
  FUN_140016fc0(param_1 + 0x4a,param_2 + 0x4a);
  param_1[0x52] = param_2[0x52];
  param_1[0x53] = param_2[0x53];
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  param_1[0x56] = param_2[0x56];
  param_1[0x57] = param_2[0x57];
  param_1[0x58] = param_2[0x58];
  param_1[0x5a] = param_2[0x5a];
  *(undefined8 *)(param_1 + 0x5b) = *(undefined8 *)(param_2 + 0x5b);
  *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(param_2 + 0x5d);
  return param_1;
}

