// Function: FUN_140269330
// Addr: 140269330
// Size: 203 bytes


void FUN_140269330(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar1 = param_1[1];
  lVar4 = *param_1;
  lVar2 = lVar1 - lVar4 >> 4;
  uVar3 = lVar2 * -0x1111111111111111;
  if (param_2 < uVar3) {
    lVar4 = param_2 * 0xf0 + lVar4;
    for (lVar2 = lVar4; lVar2 != lVar1; lVar2 = lVar2 + 0xf0) {
      FUN_1401dd3b0(lVar2 + 0xd8);
      FUN_140017240(lVar2);
    }
    param_1[1] = lVar4;
    return;
  }
  if (uVar3 < param_2) {
    if ((ulonglong)((param_1[2] - lVar4 >> 4) * -0x1111111111111111) < param_2) {
      FUN_14026b550(param_1);
      return;
    }
    lVar1 = FUN_14026b860(lVar1,param_2 + lVar2 * 0x1111111111111111);
    param_1[1] = lVar1;
  }
  return;
}

