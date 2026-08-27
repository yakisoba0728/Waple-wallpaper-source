// Function: FUN_140287720
// Addr: 140287720
// Size: 2177 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140287720(longlong *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  double *pdVar10;
  int iVar11;
  double dVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
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
  
  dVar22 = (double)param_1[7] - (double)param_1[5];
  dVar1 = (double)param_1[4] - (double)param_1[2];
  dVar23 = (double)param_1[6];
  dVar2 = (double)param_1[2] - *param_3;
  dVar5 = (double)param_1[3] - param_3[1];
  dVar12 = (double)param_1[5] - (double)param_1[3];
  dVar18 = dVar23 - (double)param_1[4];
  dVar3 = 0.0;
  dVar21 = dVar22 - dVar12;
  local_128 = dVar18 - dVar1;
  dVar22 = (((double)param_1[9] - (double)param_1[7]) - dVar22) - dVar21;
  dVar18 = (((double)param_1[8] - dVar23) - dVar18) - local_128;
  local_120 = dVar2;
  local_118 = dVar21;
  (**(code **)(*param_1 + 0x28))(dVar23,local_e0,0);
  uVar6 = local_e0._0_8_;
  uVar7 = local_e0._8_8_;
  local_f0 = dVar2 * dVar2 + dVar5 * dVar5;
  if (local_f0 < 0.0) {
    local_f0 = (double)FUN_14041f780(local_f0);
  }
  else {
    local_f0 = SQRT(local_f0);
  }
  iVar11 = -1;
  if (0.0 < (double)uVar6 * dVar5 - (double)uVar7 * dVar2) {
    iVar11 = 1;
  }
  dVar25 = (double)iVar11 * local_f0;
  dVar23 = (double)uVar6 * dVar2 + (double)uVar7 * dVar5;
  dVar24 = (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) ^ DAT_140492fe0._4_4_,
                            SUB84(dVar23,0) ^ (uint)DAT_140492fe0) /
           ((double)uVar7 * (double)uVar7 + (double)uVar6 * (double)uVar6);
  *param_4 = dVar24;
  dVar23 = ((double)param_1[8] - *param_3) * ((double)param_1[8] - *param_3) +
           ((double)param_1[9] - param_3[1]) * ((double)param_1[9] - param_3[1]);
  if (dVar23 < 0.0) {
    dVar23 = (double)FUN_14041f780(dVar23);
  }
  else {
    dVar23 = SQRT(dVar23);
  }
  dVar4 = DAT_140492778;
  uVar13 = SUB84(dVar25,0) & _DAT_140492fd0;
  uVar15 = (uint)((ulonglong)dVar25 >> 0x20) & _UNK_140492fd4;
  if ((double)CONCAT44(uVar15,uVar13) < dVar23 || (double)CONCAT44(uVar15,uVar13) == dVar23) {
    local_138._0_8_ = dVar24;
  }
  else {
    pauVar9 = (undefined1 (*) [16])(**(code **)(*param_1 + 0x28))(param_1,local_138,DAT_140492778);
    local_e0._0_16_ = *pauVar9;
    dVar17 = local_e0._8_8_;
    dVar24 = local_e0._0_8_;
    iVar11 = -1;
    if (0.0 < dVar24 * ((double)param_1[9] - param_3[1]) - dVar17 * ((double)param_1[8] - *param_3))
    {
      iVar11 = 1;
    }
    dVar25 = (double)iVar11 * dVar23;
    local_138._8_4_ = local_e0._8_4_;
    local_138._0_8_ =
         (dVar24 * (dVar24 - ((double)param_1[8] - *param_3)) +
         dVar17 * (dVar17 - ((double)param_1[9] - param_3[1]))) /
         (dVar17 * dVar17 + dVar24 * dVar24);
    local_138._12_4_ = local_e0._12_4_;
  }
  iVar11 = 0;
  local_110 = dVar1 * DAT_1404927c8;
  local_108 = dVar12 * DAT_1404927c8;
  local_f8 = local_128 * DAT_1404927f0;
  local_100 = dVar21 * DAT_1404927f0;
  local_res8 = dVar25;
  do {
    dVar24 = (double)iVar11 * _DAT_140492748;
    dVar17 = dVar24 * DAT_1404927c8;
    dVar23 = dVar17 * dVar24;
    dVar19 = dVar24 * dVar24 * dVar24;
    dVar21 = dVar1 * dVar17 + dVar2 + local_128 * dVar23 + dVar18 * dVar19;
    dVar20 = dVar24 * DAT_1404927f0;
    dVar2 = dVar12 * dVar17 + dVar5 + local_118 * dVar23 + dVar22 * dVar19;
    dVar17 = local_128 * dVar20 + local_110 + dVar18 * dVar23;
    dVar23 = local_118 * dVar20 + local_108 + dVar22 * dVar23;
    dVar24 = dVar24 - (dVar21 * dVar17 + dVar2 * dVar23) /
                      ((dVar18 * dVar20 + local_f8) * dVar21 + (dVar22 * dVar20 + local_100) * dVar2
                      + dVar17 * dVar17 + dVar23 * dVar23);
    if ((dVar24 <= 0.0) || (dVar4 <= dVar24)) {
LAB_140287d70:
      uVar14 = local_138._0_4_;
      uVar16 = local_138._4_4_;
    }
    else {
      iVar8 = 4;
      do {
        local_e8 = dVar24;
        dVar23 = local_e8 * DAT_1404927c8;
        dVar25 = local_e8 * DAT_1404927f0;
        dVar24 = dVar23 * local_e8;
        dVar21 = local_e8 * local_e8 * local_e8;
        dVar2 = dVar1 * dVar23 + local_120 + local_128 * dVar24 + dVar18 * dVar21;
        dVar23 = dVar12 * dVar23 + dVar5 + local_118 * dVar24 + dVar22 * dVar21;
        dVar21 = local_128 * dVar25 + local_110 + dVar18 * dVar24;
        dVar17 = local_118 * dVar25 + local_108 + dVar22 * dVar24;
        iVar8 = iVar8 + -1;
        if ((iVar8 == 0) ||
           (dVar24 = local_e8 -
                     (dVar17 * dVar23 + dVar21 * dVar2) /
                     ((dVar22 * dVar25 + local_100) * dVar23 + (dVar18 * dVar25 + local_f8) * dVar2
                     + dVar17 * dVar17 + dVar21 * dVar21), dVar24 <= 0.0)) break;
      } while (dVar24 < dVar4);
      dVar24 = dVar2 * dVar2 + dVar23 * dVar23;
      if (dVar24 < 0.0) {
        dVar24 = (double)FUN_14041f780(dVar24);
      }
      else {
        dVar24 = SQRT(dVar24);
      }
      uVar13 = SUB84(local_res8,0) & _DAT_140492fd0;
      uVar15 = (uint)((ulonglong)local_res8 >> 0x20) & _UNK_140492fd4;
      dVar25 = local_res8;
      if ((double)CONCAT44(uVar15,uVar13) < dVar24 || (double)CONCAT44(uVar15,uVar13) == dVar24)
      goto LAB_140287d70;
      local_138._8_8_ = 0;
      local_138._0_8_ = local_e8;
      iVar8 = -1;
      if (0.0 < dVar23 * dVar21 - dVar2 * dVar17) {
        iVar8 = 1;
      }
      dVar25 = (double)iVar8 * dVar24;
      uVar14 = SUB84(local_e8,0);
      uVar16 = (int)((ulonglong)local_e8 >> 0x20);
      local_res8 = dVar25;
    }
    iVar11 = iVar11 + 1;
    dVar2 = local_120;
    if (4 < iVar11) {
      *param_4 = (double)CONCAT44(uVar16,uVar14);
      if (((double)CONCAT44(uVar16,uVar14) < 0.0) || (dVar4 < (double)CONCAT44(uVar16,uVar14))) {
        if (DAT_140492758 < (double)CONCAT44(uVar16,uVar14) ||
            DAT_140492758 == (double)CONCAT44(uVar16,uVar14)) {
          dVar2 = (double)param_1[8] - *param_3;
          dVar1 = (double)param_1[9] - param_3[1];
          dVar23 = dVar2 * dVar2 + dVar1 * dVar1;
          if (dVar23 < 0.0) {
            dVar23 = (double)FUN_14041f780(dVar23);
          }
          else {
            dVar23 = SQRT(dVar23);
          }
          if (dVar23 == 0.0) {
            dVar2 = 0.0;
            dVar1 = dVar4;
          }
          else {
            dVar1 = dVar1 / dVar23;
            dVar2 = dVar2 / dVar23;
          }
          pdVar10 = (double *)(**(code **)(*param_1 + 0x28))(param_1,local_138,dVar4);
          dVar23 = *pdVar10;
          dVar21 = pdVar10[1];
          dVar12 = dVar21 * dVar21 + dVar23 * dVar23;
          if (dVar12 < 0.0) {
            dVar12 = (double)FUN_14041f780(dVar12);
          }
          else {
            dVar12 = SQRT(dVar12);
          }
          if (dVar12 != 0.0) {
            dVar4 = dVar21 / dVar12;
            dVar3 = dVar23 / dVar12;
          }
          dVar23 = dVar1 * dVar4 + dVar2 * dVar3;
          param_2[1] = (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_140492fd4,
                                        SUB84(dVar23,0) & _DAT_140492fd0);
        }
        else {
          if (local_f0 == 0.0) {
            dVar23 = 0.0;
            dVar5 = dVar4;
          }
          else {
            dVar23 = local_120 / local_f0;
            dVar5 = dVar5 / local_f0;
          }
          pdVar10 = (double *)(**(code **)(*param_1 + 0x28))(param_1,local_138,0);
          dVar1 = *pdVar10;
          dVar2 = pdVar10[1];
          dVar21 = dVar2 * dVar2 + dVar1 * dVar1;
          if (dVar21 < 0.0) {
            dVar21 = (double)FUN_14041f780(dVar21);
          }
          else {
            dVar21 = SQRT(dVar21);
          }
          if (dVar21 != 0.0) {
            dVar4 = dVar2 / dVar21;
            dVar3 = dVar1 / dVar21;
          }
          dVar23 = dVar5 * dVar4 + dVar23 * dVar3;
          param_2[1] = (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_140492fd4,
                                        SUB84(dVar23,0) & _DAT_140492fd0);
        }
      }
      else {
        param_2[1] = 0.0;
      }
      *param_2 = dVar25;
      return param_2;
    }
  } while( true );
}

