// Function: FUN_1402fea70
// Addr: 1402fea70
// Size: 234 bytes


void FUN_1402fea70(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  int iVar11;
  
  lVar6 = 0x10;
  if (param_3 != 0) {
    lVar6 = 0x14;
  }
  iVar1 = *(int *)(lVar6 + param_2);
  lVar6 = 8;
  if (param_3 != 0) {
    lVar6 = 0xc;
  }
  iVar2 = *(int *)(lVar6 + param_2);
  lVar6 = (longlong)iVar2;
  piVar9 = (int *)((longlong)param_3 * 0x1c4 + 0x44 + param_1);
  if ((piVar9[0x6f] != iVar2) || (piVar9[0x70] != iVar1)) {
    uVar10 = 0;
    piVar9[0x6f] = iVar2;
    piVar9[0x70] = iVar1;
    *piVar9 = iVar2;
    piVar9[1] = iVar1;
    if (piVar9[0x36] != 0) {
      do {
        iVar5 = piVar9[uVar10 * 7 + 0x37];
        iVar3 = piVar9[uVar10 * 7 + 0x3a];
        piVar9[uVar10 * 7 + 0x3d] = piVar9[uVar10 * 7 + 0x3d] & 0xfffffffe;
        lVar8 = iVar5 * lVar6;
        iVar11 = (int)((ulonglong)((lVar8 >> 0x3f) + 0x8000 + lVar8) >> 0x10) + iVar1;
        piVar9[uVar10 * 7 + 0x39] = iVar11;
        piVar9[(uVar10 + 8) * 7] = iVar11;
        lVar8 = (iVar5 - iVar3) * lVar6;
        iVar5 = (int)((ulonglong)((iVar3 * lVar6 >> 0x3f) + 0x8000 + iVar3 * lVar6) >> 0x10) + iVar1
        ;
        piVar9[uVar10 * 7 + 0x3b] = iVar5;
        piVar9[uVar10 * 7 + 0x3c] = iVar5;
        if ((int)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10) + 0x30U < 0x61) {
          uVar7 = iVar11 + 0x20U & 0xffffffc0;
          piVar9[uVar10 * 7 + 0x39] = uVar7;
          iVar11 = func_0x0001402efae0(uVar7,iVar2);
          iVar11 = iVar11 - iVar3;
          iVar5 = -iVar11;
          if (-iVar11 < 0) {
            iVar5 = iVar11;
          }
          iVar5 = (int)((ulonglong)(iVar5 * lVar6 + 0x8000 + (iVar5 * lVar6 >> 0x3f)) >> 0x10);
          if (iVar5 < 0x20) {
            uVar7 = 0;
          }
          else {
            uVar7 = iVar5 + 0x20U & 0xffffffc0;
          }
          uVar4 = -uVar7;
          if (-1 < iVar11) {
            uVar4 = uVar7;
          }
          piVar9[uVar10 * 7 + 0x3d] = piVar9[uVar10 * 7 + 0x3d] | 1;
          piVar9[uVar10 * 7 + 0x3c] = piVar9[uVar10 * 7 + 0x39] - uVar4;
        }
        uVar7 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar7;
      } while (uVar7 < (uint)piVar9[0x36]);
    }
  }
  return;
}

