// Function: FUN_140286690
// Addr: 140286690
// Size: 757 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140286690(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  
  dVar11 = DAT_140492758;
  dVar1 = *param_3;
  dVar13 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x18);
  dVar2 = param_3[1];
  dVar14 = dVar2 - *(double *)(param_1 + 0x18);
  dVar4 = dVar1 - *(double *)(param_1 + 0x10);
  dVar5 = *(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x10);
  dVar10 = dVar5 * dVar5 + dVar13 * dVar13;
  dVar12 = (dVar5 * dVar4 + dVar13 * dVar14) / dVar10;
  *param_4 = dVar12;
  lVar7 = 0x10;
  if (dVar11 < dVar12) {
    lVar7 = 0x20;
  }
  lVar8 = 0x18;
  if (dVar11 < dVar12) {
    lVar8 = 0x28;
  }
  dVar1 = *(double *)(lVar7 + param_1) - dVar1;
  dVar2 = *(double *)(lVar8 + param_1) - dVar2;
  dVar11 = dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar11 < 0.0) {
    dVar11 = (double)FUN_14041f780(dVar11);
  }
  else {
    dVar11 = SQRT(dVar11);
  }
  uVar16 = _UNK_140492fd4;
  uVar15 = _DAT_140492fd0;
  dVar3 = DAT_140492778;
  if ((0.0 < dVar12) && (dVar12 < DAT_140492778)) {
    if (dVar10 < 0.0) {
      dVar12 = (double)FUN_14041f780(dVar10);
    }
    else {
      dVar12 = SQRT(dVar10);
    }
    if (dVar12 == 0.0) {
      dVar12 = 0.0;
      dVar9 = DAT_1404929d0;
    }
    else {
      dVar9 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^ DAT_140492fe0._4_4_,
                               SUB84(dVar5,0) ^ (uint)DAT_140492fe0) / dVar12;
      dVar12 = dVar13 / dVar12;
    }
    dVar12 = dVar12 * dVar4 + dVar9 * dVar14;
    if ((double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar16,SUB84(dVar12,0) & uVar15) <
        dVar11) {
      *param_2 = dVar12;
      param_2[1] = 0.0;
      return param_2;
    }
  }
  if (dVar11 == 0.0) {
    dVar1 = 0.0;
    dVar2 = dVar3;
  }
  else {
    dVar2 = dVar2 / dVar11;
    dVar1 = dVar1 / dVar11;
  }
  if (dVar10 < 0.0) {
    dVar10 = (double)FUN_14041f780(dVar10);
    uVar15 = _DAT_140492fd0;
    uVar16 = _UNK_140492fd4;
  }
  else {
    dVar10 = SQRT(dVar10);
  }
  if (dVar10 == 0.0) {
    dVar10 = 0.0;
  }
  else {
    dVar3 = dVar13 / dVar10;
    dVar10 = dVar5 / dVar10;
  }
  dVar1 = dVar2 * dVar3 + dVar1 * dVar10;
  param_2[1] = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar16,SUB84(dVar1,0) & uVar15);
  iVar6 = -1;
  if (0.0 < dVar4 * dVar13 - dVar5 * dVar14) {
    iVar6 = 1;
  }
  *param_2 = (double)iVar6 * dVar11;
  return param_2;
}

