// Function: FUN_140335260
// Addr: 140335260
// Size: 591 bytes


ulonglong FUN_140335260(longlong param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                       int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  lVar6 = (longlong)((param_5[1] - param_4[1]) + 0x10 >> 5);
  lVar11 = (longlong)((*param_5 - *param_4) + 0x10 >> 5);
  lVar5 = (param_3[1] + (0x10 - param_2[1]) >> 5) * lVar11;
  lVar8 = (*param_3 + (0x10 - *param_2) >> 5) * lVar6;
  uVar3 = lVar8 >> 0x3f;
  iVar10 = (int)(lVar8 + 0x8000 + uVar3 >> 0x10) -
           (int)((ulonglong)((lVar5 >> 0x3f) + 0x8000 + lVar5) >> 0x10);
  if (iVar10 != 0) {
    lVar11 = (param_4[1] + (0x10 - param_2[1]) >> 5) * lVar11;
    lVar6 = (*param_4 + (0x10 - *param_2) >> 5) * lVar6;
    iVar10 = FUN_1402efa10((int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) -
                           (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10),iVar10);
    lVar5 = (longlong)(*param_3 - *param_2) * (longlong)iVar10;
    iVar9 = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) + *param_2;
    *param_6 = iVar9;
    lVar5 = (longlong)(param_3[1] - param_2[1]) * (longlong)iVar10;
    iVar7 = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) + param_2[1];
    param_6[1] = iVar7;
    iVar10 = *param_2;
    if (iVar10 == *param_3) {
      iVar2 = iVar10 - iVar9;
      if (-1 < iVar9 - iVar10) {
        iVar2 = iVar9 - iVar10;
      }
      if (iVar2 < *(int *)(param_1 + 0x490c)) {
        *param_6 = iVar10;
        iVar9 = iVar10;
      }
    }
    iVar10 = param_2[1];
    if (iVar10 == param_3[1]) {
      iVar2 = iVar10 - iVar7;
      if (-1 < iVar7 - iVar10) {
        iVar2 = iVar7 - iVar10;
      }
      if (iVar2 < *(int *)(param_1 + 0x490c)) {
        param_6[1] = iVar10;
        iVar7 = iVar10;
      }
    }
    iVar10 = *param_4;
    if (iVar10 == *param_5) {
      iVar2 = iVar10 - iVar9;
      if (-1 < iVar9 - iVar10) {
        iVar2 = iVar9 - iVar10;
      }
      if (iVar2 < *(int *)(param_1 + 0x490c)) {
        *param_6 = iVar10;
        iVar9 = iVar10;
      }
    }
    iVar10 = param_4[1];
    if (iVar10 == param_5[1]) {
      iVar2 = iVar10 - iVar7;
      if (-1 < iVar7 - iVar10) {
        iVar2 = iVar7 - iVar10;
      }
      if (iVar2 < *(int *)(param_1 + 0x490c)) {
        param_6[1] = iVar10;
        iVar7 = iVar10;
      }
    }
    iVar10 = (*param_3 + *param_4) / 2;
    uVar4 = iVar9 - iVar10;
    uVar1 = iVar10 - iVar9;
    if (-1 < (int)uVar4) {
      uVar1 = uVar4;
    }
    uVar3 = (ulonglong)uVar1;
    if ((int)uVar1 <= *(int *)(param_1 + 0x4908)) {
      iVar10 = (param_3[1] + param_4[1]) / 2;
      iVar9 = iVar7 - iVar10;
      iVar10 = iVar10 - iVar7;
      if (-1 < iVar9) {
        iVar10 = iVar9;
      }
      return (ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),iVar10 <= *(int *)(param_1 + 0x4908));
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

