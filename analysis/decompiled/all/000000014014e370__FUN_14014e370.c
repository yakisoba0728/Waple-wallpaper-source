// Function: FUN_14014e370
// Addr: 14014e370
// Size: 156 bytes


undefined4 * FUN_14014e370(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(longlong *)(param_2 + 6) - *(longlong *)(param_2 + 4) != 0) {
    if (0x7ffffffffffffff <
        (ulonglong)(*(longlong *)(param_2 + 6) - *(longlong *)(param_2 + 4) >> 5)) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    FUN_14014fb40(param_1 + 4);
    lVar1 = *(longlong *)(param_1 + 4);
    uVar2 = *(longlong *)(param_2 + 6) - *(longlong *)(param_2 + 4);
    FUN_1404210f0(lVar1,*(longlong *)(param_2 + 4),uVar2);
    *(ulonglong *)(param_1 + 6) = (uVar2 & 0xffffffffffffffe0) + lVar1;
  }
  return param_1;
}

