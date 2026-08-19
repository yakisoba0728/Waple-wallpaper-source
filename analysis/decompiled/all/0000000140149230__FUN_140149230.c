// Function: FUN_140149230
// Addr: 140149230
// Size: 299 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140149230(ulonglong param_1,ulonglong param_2,double *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  uVar14 = (undefined4)DAT_140492aa0;
  uVar16 = (undefined4)((ulonglong)DAT_140492aa0 >> 0x20);
  uVar15 = SUB84(DAT_140492848,0);
  uVar17 = (undefined4)((ulonglong)DAT_140492848 >> 0x20);
  uVar1 = uVar15;
  uVar2 = uVar17;
  if (param_2 - param_1 < param_1) {
    param_1 = param_2 - param_1;
    uVar1 = uVar14;
    uVar2 = uVar16;
  }
  uVar6 = param_1 * 2;
  uVar9 = param_1 * 4;
  uVar5 = param_2 + param_1 * -2;
  uVar18 = uVar15;
  uVar19 = uVar17;
  if (uVar6 > uVar5) {
    uVar9 = uVar9 - param_2;
    uVar18 = uVar14;
    uVar19 = uVar16;
  }
  iVar7 = 0;
  iVar8 = 0x20;
  uVar3 = param_2 - uVar9;
  bVar4 = uVar6 <= uVar5;
  if (uVar9 <= param_2 - uVar9) {
    uVar3 = uVar9;
    bVar4 = uVar5 < uVar6;
  }
  uVar9 = uVar3 * 2;
  do {
    uVar6 = 0;
    if (uVar9 == 0) break;
    uVar6 = uVar9 * 2;
    if (param_2 - uVar9 < uVar9) {
      uVar6 = uVar6 - param_2;
      iVar7 = iVar7 + iVar8;
    }
    iVar8 = iVar8 >> 1;
    uVar9 = uVar6;
  } while (iVar8 != 0);
  if (param_2 - uVar6 < uVar6) {
    iVar7 = iVar7 + 1;
    uVar6 = param_2 - uVar6;
    uVar15 = uVar14;
    uVar17 = uVar16;
  }
  dVar12 = ((double)uVar6 / (double)param_2) * _UNK_1404927c0;
  dVar10 = dVar12 * dVar12;
  dVar11 = ((dVar10 * _UNK_140492aa8 + _UNK_1404928b0) * dVar10 + _UNK_140492ac0) * dVar10 +
           DAT_140492848;
  dVar12 = (((dVar10 * _UNK_1404928f0 + _UNK_140492888) * dVar10 + _UNK_140492ac8) * dVar10 +
           _UNK_1404928a0) * dVar12;
  dVar13 = dVar11 * *(double *)(&DAT_140484170 + (longlong)(iVar7 * 4) * 8) -
           *(double *)(&UNK_140484180 + (longlong)(iVar7 * 4) * 8) * (double)CONCAT44(uVar17,uVar15)
           * dVar12;
  dVar12 = *(double *)(&DAT_140484170 + (longlong)(iVar7 * 4) * 8) * (double)CONCAT44(uVar17,uVar15)
           * dVar12 + dVar11 * *(double *)(&UNK_140484180 + (longlong)(iVar7 * 4) * 8);
  dVar10 = dVar12;
  if (bVar4) {
    dVar10 = dVar13;
    dVar13 = dVar12;
  }
  *param_3 = dVar13 * (double)CONCAT44(uVar19,uVar18);
  param_3[1] = dVar10 * (double)CONCAT44(uVar2,uVar1);
  return 0;
}

