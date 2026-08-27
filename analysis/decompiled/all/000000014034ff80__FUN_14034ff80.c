// Function: FUN_14034ff80
// Addr: 14034ff80
// Size: 414 bytes


void FUN_14034ff80(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar9 = *(int *)(param_1 + 0x1c);
  iVar15 = param_3[1] * 4;
  iVar6 = param_2[1] * 4;
  iVar2 = iVar6 >> 8;
  if ((((iVar9 <= iVar1 >> 8) && (iVar9 <= iVar2)) && (iVar9 <= iVar15 >> 8)) ||
     (((iVar9 = *(int *)(param_1 + 0x18), iVar1 >> 8 < iVar9 && (iVar2 < iVar9)) &&
      (iVar15 >> 8 < iVar9)))) {
    *(int *)(param_1 + 0x48) = *param_3 * 4;
    *(int *)(param_1 + 0x4c) = iVar15;
    return;
  }
  iVar6 = iVar6 - iVar1;
  iVar9 = *param_2 * 4 - *(int *)(param_1 + 0x48);
  uVar16 = (iVar15 - iVar6) + param_2[1] * -4;
  uVar17 = (*param_3 * 4 - iVar9) + *param_2 * -4;
  uVar18 = -uVar17;
  if ((int)-uVar17 < 0) {
    uVar18 = uVar17;
  }
  uVar7 = -uVar16;
  if ((int)-uVar16 < 0) {
    uVar7 = uVar16;
  }
  if ((int)uVar18 < (int)uVar7) {
    uVar18 = uVar7;
  }
  uVar3 = (ulonglong)uVar18;
  if ((int)uVar18 < 0x41) {
    FUN_1403503b0(param_1);
    return;
  }
  bVar14 = 0x10;
  do {
    bVar5 = bVar14;
    uVar3 = uVar3 >> 2;
    bVar14 = bVar5 - 1;
  } while (0x40 < (uint)uVar3);
  uVar18 = 0x10000 >> (bVar14 & 0x1f);
  lVar8 = (longlong)(int)uVar17 << (bVar14 * '\x02' & 0x3f);
  lVar4 = (longlong)(int)uVar16 << (bVar14 * '\x02' & 0x3f);
  bVar5 = bVar5 + 0x10;
  lVar10 = ((longlong)iVar9 << (bVar5 & 0x3f)) + lVar8;
  lVar13 = ((longlong)iVar6 << (bVar5 & 0x3f)) + lVar4;
  lVar12 = (longlong)*(int *)(param_1 + 0x48) << 0x20;
  lVar11 = (longlong)iVar1 << 0x20;
  do {
    lVar12 = lVar12 + lVar10;
    lVar11 = lVar11 + lVar13;
    lVar10 = lVar10 + lVar8 * 2;
    lVar13 = lVar13 + lVar4 * 2;
    FUN_1403503b0(param_1,lVar12 >> 0x20,lVar11 >> 0x20);
    uVar18 = uVar18 - 1;
  } while (uVar18 != 0);
  return;
}

