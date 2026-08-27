// Function: FUN_1402f9000
// Addr: 1402f9000
// Size: 255 bytes


void FUN_1402f9000(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar10 = *param_1;
  iVar2 = param_1[1];
  iVar9 = -iVar10;
  if (iVar10 < iVar2) {
    if (iVar9 < iVar2) {
      iVar8 = 0x5a0000;
      iVar4 = iVar2;
      iVar2 = iVar9;
    }
    else {
      iVar8 = -0xb40000;
      if (0 < iVar2) {
        iVar8 = 0xb40000;
      }
      iVar4 = iVar9;
      iVar2 = -iVar2;
    }
  }
  else if (iVar2 < iVar9) {
    iVar8 = -0x5a0000;
    iVar4 = -iVar2;
    iVar2 = iVar10;
  }
  else {
    iVar8 = 0;
    iVar4 = iVar10;
  }
  iVar10 = 1;
  piVar7 = &DAT_140436770;
  iVar9 = 1;
  do {
    bVar3 = (byte)iVar9;
    iVar11 = iVar10 + iVar2 >> (bVar3 & 0x1f);
    iVar5 = iVar10 + iVar4 >> (bVar3 & 0x1f);
    iVar1 = *piVar7;
    if (iVar2 < 1) {
      iVar11 = -iVar11;
      iVar1 = -iVar1;
    }
    else {
      iVar5 = -iVar5;
    }
    iVar2 = iVar2 + iVar5;
    iVar12 = iVar10 * 2 + iVar2 >> (bVar3 + 1 & 0x1f);
    iVar6 = iVar10 * 2 + iVar4 + iVar11 >> (bVar3 + 1 & 0x1f);
    iVar5 = piVar7[1];
    piVar7 = piVar7 + 2;
    if (iVar2 < 1) {
      iVar12 = -iVar12;
      iVar5 = -iVar5;
    }
    else {
      iVar6 = -iVar6;
    }
    iVar4 = iVar4 + iVar11 + iVar12;
    iVar2 = iVar2 + iVar6;
    iVar8 = iVar8 + iVar1 + iVar5;
    iVar10 = iVar10 << 2;
    iVar9 = iVar9 + 2;
  } while (iVar9 < 0x17);
  *param_1 = iVar4;
  if (-1 < iVar8) {
    param_1[1] = iVar8 + 8U & 0xfffffff0;
    return;
  }
  param_1[1] = -(8U - iVar8 & 0xfffffff0);
  return;
}

