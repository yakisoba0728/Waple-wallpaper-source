// Function: FUN_140149160
// Addr: 140149160
// Size: 509 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140149160(ulonglong param_1,ulonglong param_2,double *param_3)

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
  
  uVar14 = (undefined4)DAT_1404929d0;
  uVar16 = (undefined4)((ulonglong)DAT_1404929d0 >> 0x20);
  uVar15 = SUB84(DAT_140492778,0);
  uVar17 = (undefined4)((ulonglong)DAT_140492778 >> 0x20);
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
  dVar12 = ((double)uVar6 / (double)param_2) * _DAT_1404926f0;
  dVar10 = dVar12 * dVar12;
  dVar11 = ((dVar10 * _DAT_1404929d8 + _DAT_1404927e0) * dVar10 + _DAT_1404929f0) * dVar10 +
           DAT_140492778;
  dVar12 = (((dVar10 * _DAT_140492820 + _DAT_1404927b8) * dVar10 + _DAT_1404929f8) * dVar10 +
           DAT_1404927d0) * dVar12;
  dVar13 = dVar11 * *(double *)(&DAT_1404840a0 + (longlong)(iVar7 * 4) * 8) -
           *(double *)(&DAT_1404840b0 + (longlong)(iVar7 * 4) * 8) * (double)CONCAT44(uVar17,uVar15)
           * dVar12;
  dVar12 = *(double *)(&DAT_1404840a0 + (longlong)(iVar7 * 4) * 8) * (double)CONCAT44(uVar17,uVar15)
           * dVar12 + dVar11 * *(double *)(&DAT_1404840b0 + (longlong)(iVar7 * 4) * 8);
  dVar10 = dVar12;
  if (bVar4) {
    dVar10 = dVar13;
    dVar13 = dVar12;
  }
  *param_3 = dVar13 * (double)CONCAT44(uVar19,uVar18);
  param_3[1] = dVar10 * (double)CONCAT44(uVar2,uVar1);
  return 0;
}

