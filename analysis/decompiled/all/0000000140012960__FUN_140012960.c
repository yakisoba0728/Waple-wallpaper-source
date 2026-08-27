// Function: FUN_140012960
// Addr: 140012960
// Size: 145 bytes


longlong * FUN_140012960(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((((byte)*(uint *)(param_1 + 0x70) & 0x22) != 2) &&
     (uVar1 = **(ulonglong **)(param_1 + 0x40), uVar1 != 0)) {
    lVar5 = **(longlong **)(param_1 + 0x20);
    uVar2 = *(ulonglong *)(param_1 + 0x68);
    *param_2 = lVar5;
    uVar6 = uVar1;
    if (uVar1 < uVar2) {
      uVar6 = uVar2;
    }
    piVar3 = *(int **)(param_1 + 0x58);
    param_2[1] = uVar6 - lVar5;
    param_2[2] = (*piVar3 - lVar5) + uVar1;
    return param_2;
  }
  if (((*(uint *)(param_1 + 0x70) & 4) == 0) &&
     (lVar5 = **(longlong **)(param_1 + 0x38), lVar5 != 0)) {
    lVar4 = **(longlong **)(param_1 + 0x18);
    piVar3 = *(int **)(param_1 + 0x50);
    *param_2 = lVar4;
    lVar5 = (*piVar3 - lVar4) + lVar5;
    param_2[1] = lVar5;
    param_2[2] = lVar5;
  }
  return param_2;
}

