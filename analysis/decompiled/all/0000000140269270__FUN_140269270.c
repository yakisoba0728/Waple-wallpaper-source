// Function: FUN_140269270
// Addr: 140269270
// Size: 177 bytes


void FUN_140269270(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  uVar3 = lVar1 - lVar2 >> 7;
  if (param_2 < uVar3) {
    lVar2 = param_2 * 0x80 + lVar2;
    for (lVar4 = lVar2; lVar4 != lVar1; lVar4 = lVar4 + 0x80) {
      FUN_1401dd3b0(lVar4 + 0x68);
      FUN_140017240(lVar4);
    }
    param_1[1] = lVar2;
    return;
  }
  if (uVar3 < param_2) {
    if ((ulonglong)(param_1[2] - lVar2 >> 7) < param_2) {
      FUN_14026b270(param_1);
      return;
    }
    lVar2 = FUN_14026b4d0(lVar1,param_2 - uVar3);
    param_1[1] = lVar2;
  }
  return;
}

