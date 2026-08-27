// Function: FUN_140217a40
// Addr: 140217a40
// Size: 117 bytes


void FUN_140217a40(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[1] - lVar1 >> 4;
  uVar3 = lVar2 * -0x3333333333333333;
  if (param_2 < uVar3) {
    param_1[1] = param_2 * 0x50 + lVar1;
    return;
  }
  if (uVar3 < param_2) {
    if ((ulonglong)((param_1[2] - lVar1 >> 4) * -0x3333333333333333) < param_2) {
      FUN_140219230(param_1);
      return;
    }
    lVar1 = FUN_1402193d0(param_1[1],param_2 + lVar2 * 0x3333333333333333);
    param_1[1] = lVar1;
  }
  return;
}

