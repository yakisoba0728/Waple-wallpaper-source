// Function: FUN_140289ec0
// Addr: 140289ec0
// Size: 1301 bytes


int FUN_140289ec0(double *param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double local_res20;
  double local_c8;
  
  if ((param_2 < 1) || (param_3 < 1)) {
    return 0;
  }
  dVar13 = param_1[2] - *param_1;
  dVar12 = 0.0;
  dVar15 = 0.0;
  dVar1 = 0.0;
  dVar2 = 0.0;
  dVar3 = 0.0;
  dVar4 = 0.0;
  dVar18 = param_1[-2];
  dVar17 = param_1[-1] - param_1[1];
  local_res20 = 0.0;
  local_c8 = 0.0;
  dVar14 = dVar18 - *param_1;
  dVar10 = param_1[3] - param_1[1];
  if (1 < param_2) {
    dVar3 = (param_1[-4] - dVar18) - dVar14;
    dVar4 = (param_1[-3] - param_1[-1]) - dVar17;
  }
  if (1 < param_3) {
    dVar15 = (param_1[4] - param_1[2]) - dVar13;
    dVar12 = (param_1[5] - param_1[3]) - dVar10;
  }
  if (2 < param_2) {
    local_res20 = ((param_1[-6] - param_1[-4]) - (param_1[-4] - dVar18)) - dVar3;
    dVar3 = dVar3 * DAT_140492898;
    local_c8 = ((param_1[-5] - param_1[-3]) - (param_1[-3] - param_1[-1])) - dVar4;
    dVar4 = dVar4 * DAT_140492898;
  }
  if (2 < param_3) {
    dVar2 = ((param_1[6] - param_1[4]) - (param_1[4] - param_1[2])) - dVar15;
    dVar15 = dVar15 * DAT_140492898;
    dVar1 = ((param_1[7] - param_1[5]) - (param_1[5] - param_1[3])) - dVar12;
    dVar12 = dVar12 * DAT_140492898;
  }
  dVar17 = (double)param_2 * dVar17;
  dVar14 = (double)param_2 * dVar14;
  dVar13 = (double)param_3 * dVar13;
  dVar10 = (double)param_3 * dVar10;
  if (((dVar14 == 0.0) && (dVar17 == 0.0)) || ((dVar13 == 0.0 && (dVar10 == 0.0)))) {
    if ((dVar14 == 0.0) && (dVar17 == 0.0)) {
      uVar7 = 1;
      dVar18 = dVar3;
      dVar11 = dVar4;
      dVar4 = dVar12;
      dVar3 = dVar15;
      dVar14 = dVar13;
      dVar12 = dVar1;
      dVar15 = dVar2;
      dVar17 = dVar10;
    }
    else {
      uVar7 = 0xffffffff;
      dVar18 = dVar15;
      dVar11 = dVar12;
      dVar12 = local_c8;
      dVar15 = local_res20;
      local_res20 = dVar2;
      local_c8 = dVar1;
    }
    dVar2 = dVar15;
    dVar1 = dVar12;
    if ((dVar14 != 0.0) || (dVar17 != 0.0)) {
      dVar12 = dVar17 * local_res20 - dVar14 * local_c8;
      if (dVar12 != 0.0) {
        uVar5 = 0;
        if (0.0 < dVar12) {
          uVar5 = uVar7;
        }
        uVar6 = 0;
        if (dVar12 < 0.0) {
          uVar6 = uVar7;
        }
        goto UNWIND_INFO_14028a1ed_UnwindCodes_59__OffsetInProlog;
      }
      dVar12 = dVar4 * dVar18 - dVar3 * dVar11;
      if (dVar12 == 0.0) {
        dVar12 = dVar4 * local_res20 - dVar3 * local_c8;
        if (dVar12 != 0.0) {
          uVar5 = 0;
          if (0.0 < dVar12) {
            uVar5 = uVar7;
          }
          uVar6 = 0;
          if (dVar12 < 0.0) {
            uVar6 = uVar7;
          }
          goto UNWIND_INFO_14028a1ed_UnwindCodes_59__OffsetInProlog;
        }
        dVar12 = dVar1 * dVar18 - dVar2 * dVar11;
        if (dVar12 == 0.0) {
          dVar18 = dVar1 * local_res20 - dVar2 * local_c8;
          uVar5 = 0;
          if (0.0 < dVar18) {
            uVar5 = uVar7;
          }
          uVar6 = 0;
          if (dVar18 < 0.0) {
            uVar6 = uVar7;
          }
          goto UNWIND_INFO_14028a1ed_UnwindCodes_59__OffsetInProlog;
        }
      }
      uVar5 = 0;
      if (0.0 < dVar12) {
        uVar5 = uVar7;
      }
      uVar6 = 0;
      if (dVar12 < 0.0) {
        uVar6 = uVar7;
      }
      goto UNWIND_INFO_14028a1ed_UnwindCodes_59__OffsetInProlog;
    }
    dVar12 = dVar11 * dVar11 + dVar18 * dVar18;
    if (dVar12 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041f850(dVar12);
    }
    if (SQRT(dVar12) < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041f850();
    }
    dVar15 = dVar4 * dVar4 + dVar3 * dVar3;
    if (dVar15 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041f850(dVar15);
    }
    if (SQRT(dVar15) < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041f850();
    }
    dVar18 = SQRT(SQRT(dVar12)) * (dVar1 * dVar18 - dVar2 * dVar11) +
             SQRT(SQRT(dVar15)) * (dVar4 * local_res20 - dVar3 * local_c8);
    if (dVar18 == 0.0) {
code_r0x00014028a520:
      dVar18 = dVar1 * local_res20 - dVar2 * local_c8;
      uVar5 = (uint)(0.0 < dVar18);
      bVar9 = dVar18 == 0.0;
      bVar8 = 0.0 < dVar18;
    }
    else {
      uVar5 = (uint)(0.0 < dVar18);
      bVar9 = dVar18 == 0.0;
      bVar8 = 0.0 < dVar18;
    }
  }
  else {
    dVar18 = dVar14 * dVar14 + dVar17 * dVar17;
    if (dVar18 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041f850(dVar18);
    }
    dVar18 = SQRT(dVar18);
    dVar11 = dVar10 * dVar10 + dVar13 * dVar13;
    if (dVar11 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041f850();
    }
    dVar11 = SQRT(dVar11);
    dVar16 = (dVar3 * dVar10 - dVar4 * dVar13) * dVar11 +
             (dVar12 * dVar14 - dVar15 * dVar17) * dVar18;
    if (dVar16 == 0.0) {
      dVar13 = (dVar12 * dVar3 - dVar15 * dVar4) * dVar11 * dVar18 +
               (dVar1 * dVar14 - dVar2 * dVar17) * dVar18 * dVar18 +
               (local_res20 * dVar10 - local_c8 * dVar13) * dVar11 * dVar11;
      if (dVar13 == 0.0) {
        dVar18 = (dVar1 * dVar3 - dVar2 * dVar4) * dVar18 +
                 (dVar12 * local_res20 - dVar15 * local_c8) * dVar11;
        if (dVar18 == 0.0) goto code_r0x00014028a520;
        uVar5 = (uint)(0.0 < dVar18);
        bVar9 = dVar18 == 0.0;
        bVar8 = 0.0 < dVar18;
      }
      else {
        uVar5 = (uint)(0.0 < dVar13);
        bVar9 = dVar13 == 0.0;
        bVar8 = 0.0 < dVar13;
      }
    }
    else {
      uVar5 = (uint)(0.0 < dVar16);
      bVar9 = dVar16 == 0.0;
      bVar8 = 0.0 < dVar16;
    }
  }
  uVar6 = (uint)(!bVar8 && !bVar9);
UNWIND_INFO_14028a1ed_UnwindCodes_59__OffsetInProlog:
  return uVar5 - uVar6;
}

