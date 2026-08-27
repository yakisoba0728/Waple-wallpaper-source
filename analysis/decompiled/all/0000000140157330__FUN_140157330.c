// Function: FUN_140157330
// Addr: 140157330
// Size: 250 bytes


undefined4 * FUN_140157330(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  FUN_140016fc0(param_1 + 4,param_2 + 4);
  FUN_140016fc0(param_1 + 0xc,param_2 + 0xc);
  FUN_140016fc0(param_1 + 0x14,param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  param_1[0x1d] = param_2[0x1d];
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  if (*(longlong *)(param_2 + 0x20) - *(longlong *)(param_2 + 0x1e) != 0) {
    if (0x3ffffffffffffff <
        (ulonglong)(*(longlong *)(param_2 + 0x20) - *(longlong *)(param_2 + 0x1e) >> 6)) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    FUN_14015bb00(param_1 + 0x1e);
    lVar1 = *(longlong *)(param_2 + 0x20);
    lVar3 = *(longlong *)(param_1 + 0x1e);
    for (lVar2 = *(longlong *)(param_2 + 0x1e); lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
      FUN_140016fc0(lVar3,lVar2);
      FUN_140016fc0(lVar3 + 0x20,lVar2 + 0x20);
      lVar3 = lVar3 + 0x40;
    }
    *(longlong *)(param_1 + 0x20) = lVar3;
  }
  return param_1;
}

