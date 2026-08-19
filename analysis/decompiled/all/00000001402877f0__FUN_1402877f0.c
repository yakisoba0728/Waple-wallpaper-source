// Function: FUN_1402877f0
// Addr: 1402877f0
// Size: 1963 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1402877f0(longlong *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  double *pdVar8;
  int iVar9;
  double dVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double local_res8;
  undefined1 local_138 [16];
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined1 local_e0 [184];
  
  dVar20 = (double)param_1[7] - (double)param_1[5];
  dVar1 = (double)param_1[4] - (double)param_1[2];
  dVar21 = (double)param_1[6];
  dVar2 = (double)param_1[2] - *param_3;
  dVar5 = (double)param_1[3] - param_3[1];
  dVar10 = (double)param_1[5] - (double)param_1[3];
  dVar16 = dVar21 - (double)param_1[4];
  dVar3 = 0.0;
  dVar19 = dVar20 - dVar10;
  local_128 = dVar16 - dVar1;
  dVar20 = (((double)param_1[9] - (double)param_1[7]) - dVar20) - dVar19;
  dVar16 = (((double)param_1[8] - dVar21) - dVar16) - local_128;
  local_120 = dVar2;
  local_118 = dVar19;
  (**(code **)(*param_1 + 0x28))(dVar21,local_e0,0);
  local_f0 = dVar2 * dVar2 + dVar5 * dVar5;
  if (local_f0 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041f850(local_f0);
  }
  local_f0 = SQRT(local_f0);
  iVar9 = -1;
  if (0.0 < (double)local_e0._0_8_ * dVar5 - (double)local_e0._8_8_ * dVar2) {
    iVar9 = 1;
  }
  dVar23 = (double)iVar9 * local_f0;
  dVar21 = (double)local_e0._0_8_ * dVar2 + (double)local_e0._8_8_ * dVar5;
  dVar22 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) ^ DAT_1404930b0._4_4_,
                            SUB84(dVar21,0) ^ (uint)DAT_1404930b0) /
           ((double)local_e0._8_8_ * (double)local_e0._8_8_ +
           (double)local_e0._0_8_ * (double)local_e0._0_8_);
  *param_4 = dVar22;
  dVar4 = DAT_140492848;
  dVar21 = ((double)param_1[8] - *param_3) * ((double)param_1[8] - *param_3) +
           ((double)param_1[9] - param_3[1]) * ((double)param_1[9] - param_3[1]);
  if (dVar21 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041f850(dVar21);
  }
  dVar21 = SQRT(dVar21);
  uVar11 = SUB84(dVar23,0) & _DAT_1404930a0;
  uVar13 = (uint)((ulonglong)dVar23 >> 0x20) & _UNK_1404930a4;
  if ((double)CONCAT44(uVar13,uVar11) < dVar21 || (double)CONCAT44(uVar13,uVar11) == dVar21) {
    local_138._0_8_ = dVar22;
  }
  else {
    pauVar7 = (undefined1 (*) [16])(**(code **)(*param_1 + 0x28))(param_1,local_138,DAT_140492848);
    local_e0._0_16_ = *pauVar7;
    dVar15 = local_e0._8_8_;
    dVar22 = local_e0._0_8_;
    iVar9 = -1;
    if (0.0 < dVar22 * ((double)param_1[9] - param_3[1]) - dVar15 * ((double)param_1[8] - *param_3))
    {
      iVar9 = 1;
    }
    dVar23 = (double)iVar9 * dVar21;
    local_138._8_4_ = local_e0._8_4_;
    local_138._0_8_ =
         (dVar22 * (dVar22 - ((double)param_1[8] - *param_3)) +
         dVar15 * (dVar15 - ((double)param_1[9] - param_3[1]))) /
         (dVar15 * dVar15 + dVar22 * dVar22);
    local_138._12_4_ = local_e0._12_4_;
  }
  iVar9 = 0;
  local_110 = dVar1 * DAT_140492898;
  local_108 = dVar10 * DAT_140492898;
  local_f8 = local_128 * DAT_1404928c0;
  local_100 = dVar19 * DAT_1404928c0;
  local_res8 = dVar23;
  do {
    dVar22 = (double)iVar9 * _DAT_140492818;
    dVar15 = dVar22 * DAT_140492898;
    dVar21 = dVar15 * dVar22;
    dVar17 = dVar22 * dVar22 * dVar22;
    dVar19 = dVar1 * dVar15 + dVar2 + local_128 * dVar21 + dVar16 * dVar17;
    dVar18 = dVar22 * DAT_1404928c0;
    dVar2 = dVar10 * dVar15 + dVar5 + local_118 * dVar21 + dVar20 * dVar17;
    dVar15 = local_128 * dVar18 + local_110 + dVar16 * dVar21;
    dVar21 = local_118 * dVar18 + local_108 + dVar20 * dVar21;
    dVar22 = dVar22 - (dVar19 * dVar15 + dVar2 * dVar21) /
                      ((dVar16 * dVar18 + local_f8) * dVar19 + (dVar20 * dVar18 + local_100) * dVar2
                      + dVar15 * dVar15 + dVar21 * dVar21);
    if ((dVar22 <= 0.0) || (dVar4 <= dVar22)) {
LAB_140287e40:
      uVar12 = local_138._0_4_;
      uVar14 = local_138._4_4_;
    }
    else {
      iVar6 = 4;
      do {
        local_e8 = dVar22;
        dVar21 = local_e8 * DAT_140492898;
        dVar23 = local_e8 * DAT_1404928c0;
        dVar22 = dVar21 * local_e8;
        dVar19 = local_e8 * local_e8 * local_e8;
        dVar2 = dVar1 * dVar21 + local_120 + local_128 * dVar22 + dVar16 * dVar19;
        dVar21 = dVar10 * dVar21 + dVar5 + local_118 * dVar22 + dVar20 * dVar19;
        dVar19 = local_128 * dVar23 + local_110 + dVar16 * dVar22;
        dVar15 = local_118 * dVar23 + local_108 + dVar20 * dVar22;
        iVar6 = iVar6 + -1;
        if ((iVar6 == 0) ||
           (dVar22 = local_e8 -
                     (dVar15 * dVar21 + dVar19 * dVar2) /
                     ((dVar20 * dVar23 + local_100) * dVar21 + (dVar16 * dVar23 + local_f8) * dVar2
                     + dVar15 * dVar15 + dVar19 * dVar19), dVar22 <= 0.0)) break;
      } while (dVar22 < dVar4);
      dVar22 = dVar2 * dVar2 + dVar21 * dVar21;
      if (dVar22 < 0.0) {
                    /* WARNING: Subroutine does not return */
        FUN_14041f850(dVar22);
      }
      dVar22 = SQRT(dVar22);
      uVar11 = SUB84(local_res8,0) & _DAT_1404930a0;
      uVar13 = (uint)((ulonglong)local_res8 >> 0x20) & _UNK_1404930a4;
      dVar23 = local_res8;
      if ((double)CONCAT44(uVar13,uVar11) < dVar22 || (double)CONCAT44(uVar13,uVar11) == dVar22)
      goto LAB_140287e40;
      local_138._8_8_ = 0;
      local_138._0_8_ = local_e8;
      iVar6 = -1;
      if (0.0 < dVar21 * dVar19 - dVar2 * dVar15) {
        iVar6 = 1;
      }
      dVar23 = (double)iVar6 * dVar22;
      uVar12 = SUB84(local_e8,0);
      uVar14 = (int)((ulonglong)local_e8 >> 0x20);
      local_res8 = dVar23;
    }
    iVar9 = iVar9 + 1;
    dVar2 = local_120;
    if (4 < iVar9) {
      *param_4 = (double)CONCAT44(uVar14,uVar12);
      if (((double)CONCAT44(uVar14,uVar12) < 0.0) || (dVar4 < (double)CONCAT44(uVar14,uVar12))) {
        if (DAT_140492828 < (double)CONCAT44(uVar14,uVar12) ||
            DAT_140492828 == (double)CONCAT44(uVar14,uVar12)) {
          dVar2 = (double)param_1[8] - *param_3;
          dVar1 = (double)param_1[9] - param_3[1];
          dVar21 = dVar2 * dVar2 + dVar1 * dVar1;
          if (dVar21 < 0.0) {
                    /* WARNING: Subroutine does not return */
            FUN_14041f850(dVar21);
          }
          dVar21 = SQRT(dVar21);
          if (dVar21 == 0.0) {
            dVar2 = 0.0;
            dVar1 = dVar4;
          }
          else {
            dVar1 = dVar1 / dVar21;
            dVar2 = dVar2 / dVar21;
          }
          pdVar8 = (double *)(**(code **)(*param_1 + 0x28))(param_1,local_138,dVar4);
          dVar21 = *pdVar8;
          dVar19 = pdVar8[1];
          dVar10 = dVar19 * dVar19 + dVar21 * dVar21;
          if (dVar10 < 0.0) {
                    /* WARNING: Subroutine does not return */
            FUN_14041f850(dVar10);
          }
          dVar10 = SQRT(dVar10);
          if (dVar10 != 0.0) {
            dVar4 = dVar19 / dVar10;
            dVar3 = dVar21 / dVar10;
          }
          dVar21 = dVar1 * dVar4 + dVar2 * dVar3;
          param_2[1] = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_1404930a4,
                                        SUB84(dVar21,0) & _DAT_1404930a0);
        }
        else {
          if (local_f0 == 0.0) {
            dVar21 = 0.0;
            dVar5 = dVar4;
          }
          else {
            dVar21 = local_120 / local_f0;
            dVar5 = dVar5 / local_f0;
          }
          pdVar8 = (double *)(**(code **)(*param_1 + 0x28))(param_1,local_138,0);
          dVar1 = *pdVar8;
          dVar2 = pdVar8[1];
          dVar19 = dVar2 * dVar2 + dVar1 * dVar1;
          if (dVar19 < 0.0) {
                    /* WARNING: Subroutine does not return */
            FUN_14041f850(dVar19);
          }
          dVar19 = SQRT(dVar19);
          if (dVar19 != 0.0) {
            dVar4 = dVar2 / dVar19;
            dVar3 = dVar1 / dVar19;
          }
          dVar21 = dVar5 * dVar4 + dVar21 * dVar3;
          param_2[1] = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_1404930a4,
                                        SUB84(dVar21,0) & _DAT_1404930a0);
        }
      }
      else {
        param_2[1] = 0.0;
      }
      *param_2 = dVar23;
      return param_2;
    }
  } while( true );
}

