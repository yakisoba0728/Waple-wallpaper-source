// Function: FUN_140251e60
// Addr: 140251e60
// Size: 116 bytes


void FUN_140251e60(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[1] - lVar1 >> 2;
  uVar3 = lVar2 * 0xf83e0f83e0f83e1;
  if (param_2 < uVar3) {
    param_1[1] = param_2 * 0x84 + lVar1;
    return;
  }
  if (uVar3 < param_2) {
    if ((ulonglong)((param_1[2] - lVar1 >> 2) * 0xf83e0f83e0f83e1) < param_2) {
      FUN_140255f60(param_1);
      return;
    }
    lVar1 = FUN_140256100(param_1[1],param_2 + lVar2 * -0xf83e0f83e0f83e1);
    param_1[1] = lVar1;
  }
  return;
}

