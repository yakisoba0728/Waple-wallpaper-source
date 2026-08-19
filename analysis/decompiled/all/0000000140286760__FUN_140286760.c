// Function: FUN_140286760
// Addr: 140286760
// Size: 542 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140286760(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar10 = DAT_140492828;
  dVar1 = *param_3;
  dVar12 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x18);
  dVar2 = param_3[1];
  dVar13 = dVar2 - *(double *)(param_1 + 0x18);
  dVar3 = dVar1 - *(double *)(param_1 + 0x10);
  dVar4 = *(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x10);
  dVar9 = dVar4 * dVar4 + dVar12 * dVar12;
  dVar11 = (dVar4 * dVar3 + dVar12 * dVar13) / dVar9;
  *param_4 = dVar11;
  lVar6 = 0x10;
  if (dVar10 < dVar11) {
    lVar6 = 0x20;
  }
  lVar7 = 0x18;
  if (dVar10 < dVar11) {
    lVar7 = 0x28;
  }
  dVar1 = *(double *)(lVar6 + param_1) - dVar1;
  dVar2 = *(double *)(lVar7 + param_1) - dVar2;
  dVar10 = dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar10 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041f850(dVar10);
  }
  dVar10 = SQRT(dVar10);
  if ((0.0 < dVar11) && (dVar11 < DAT_140492848)) {
    if (dVar9 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041f850(dVar9);
    }
    dVar11 = SQRT(dVar9);
    if (dVar11 == 0.0) {
      dVar11 = 0.0;
      dVar8 = DAT_140492aa0;
    }
    else {
      dVar8 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ DAT_1404930b0._4_4_,
                               SUB84(dVar4,0) ^ (uint)DAT_1404930b0) / dVar11;
      dVar11 = dVar12 / dVar11;
    }
    dVar11 = dVar11 * dVar3 + dVar8 * dVar13;
    if ((double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_1404930a4,
                         SUB84(dVar11,0) & _DAT_1404930a0) < dVar10) {
      *param_2 = dVar11;
      param_2[1] = 0.0;
      return param_2;
    }
  }
  if (dVar10 == 0.0) {
    dVar1 = 0.0;
    dVar2 = DAT_140492848;
  }
  else {
    dVar2 = dVar2 / dVar10;
    dVar1 = dVar1 / dVar10;
  }
  if (0.0 <= dVar9) {
    dVar9 = SQRT(dVar9);
    if (dVar9 == 0.0) {
      dVar9 = 0.0;
      dVar11 = DAT_140492848;
    }
    else {
      dVar11 = dVar12 / dVar9;
      dVar9 = dVar4 / dVar9;
    }
    dVar1 = dVar2 * dVar11 + dVar1 * dVar9;
    param_2[1] = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & _UNK_1404930a4,
                                  SUB84(dVar1,0) & _DAT_1404930a0);
    iVar5 = -1;
    if (0.0 < dVar3 * dVar12 - dVar4 * dVar13) {
      iVar5 = 1;
    }
    *param_2 = (double)iVar5 * dVar10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14041f850(dVar9);
}

