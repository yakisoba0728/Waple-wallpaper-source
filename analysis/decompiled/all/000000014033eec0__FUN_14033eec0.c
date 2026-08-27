// Function: FUN_14033eec0
// Addr: 14033eec0
// Size: 184 bytes


void FUN_14033eec0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  param_1 = (param_2 & 0xffffffff) * 0xcc + param_1;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xcc);
    lVar6 = (longlong)*(int *)(param_1 + 0xc) * (longlong)iVar2;
    iVar4 = (int)((ulonglong)((lVar6 >> 0x3f) + 0x8000 + lVar6) >> 0x10);
    *(int *)(param_1 + 0x10) = iVar4;
    *(uint *)(param_1 + 0x14) = iVar4 + 0x20U & 0xffffffc0;
    piVar3 = (int *)(param_1 + 0x18);
    while (iVar1 = iVar1 + -1, iVar1 != 0) {
      iVar4 = *(int *)(param_1 + 0x10);
      lVar6 = (longlong)*piVar3 * (longlong)iVar2;
      iVar7 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
      iVar5 = iVar4 - iVar7;
      if (-1 < iVar7 - iVar4) {
        iVar5 = iVar7 - iVar4;
      }
      if (0x7f < iVar5) {
        iVar4 = iVar7;
      }
      piVar3[1] = iVar4;
      piVar3[2] = iVar4 + 0x20U & 0xffffffc0;
      piVar3 = piVar3 + 3;
    }
  }
  return;
}

