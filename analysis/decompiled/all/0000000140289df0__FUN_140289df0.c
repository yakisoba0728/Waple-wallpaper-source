// Function: FUN_140289df0
// Addr: 140289df0
// Size: 1739 bytes


int FUN_140289df0(double *param_1,int param_2,int param_3)

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
  double local_res20;
  double local_c8;
  double local_c0;
  
  if ((param_2 < 1) || (param_3 < 1)) {
    return 0;
  }
  dVar12 = param_1[2] - *param_1;
  dVar11 = 0.0;
  dVar14 = 0.0;
  dVar1 = 0.0;
  dVar2 = 0.0;
  dVar3 = 0.0;
  dVar4 = 0.0;
  dVar17 = param_1[-2];
  dVar16 = param_1[-1] - param_1[1];
  local_res20 = 0.0;
  local_c8 = 0.0;
  dVar13 = dVar17 - *param_1;
  dVar10 = param_1[3] - param_1[1];
  if (1 < param_2) {
    dVar3 = (param_1[-4] - dVar17) - dVar13;
    dVar4 = (param_1[-3] - param_1[-1]) - dVar16;
  }
  if (1 < param_3) {
    dVar14 = (param_1[4] - param_1[2]) - dVar12;
    dVar11 = (param_1[5] - param_1[3]) - dVar10;
  }
  if (2 < param_2) {
    local_res20 = ((param_1[-6] - param_1[-4]) - (param_1[-4] - dVar17)) - dVar3;
    dVar3 = dVar3 * DAT_1404927c8;
    local_c8 = ((param_1[-5] - param_1[-3]) - (param_1[-3] - param_1[-1])) - dVar4;
    dVar4 = dVar4 * DAT_1404927c8;
  }
  if (2 < param_3) {
    dVar2 = ((param_1[6] - param_1[4]) - (param_1[4] - param_1[2])) - dVar14;
    dVar14 = dVar14 * DAT_1404927c8;
    dVar1 = ((param_1[7] - param_1[5]) - (param_1[5] - param_1[3])) - dVar11;
    dVar11 = dVar11 * DAT_1404927c8;
  }
  dVar16 = (double)param_2 * dVar16;
  dVar13 = (double)param_2 * dVar13;
  dVar12 = (double)param_3 * dVar12;
  dVar10 = (double)param_3 * dVar10;
  if (((dVar13 == 0.0) && (dVar16 == 0.0)) || ((dVar12 == 0.0 && (dVar10 == 0.0)))) {
    if ((dVar13 == 0.0) && (dVar16 == 0.0)) {
      uVar7 = 1;
      dVar17 = dVar3;
      dVar15 = dVar4;
      dVar4 = dVar11;
      dVar3 = dVar14;
      dVar13 = dVar12;
      dVar11 = dVar1;
      dVar14 = dVar2;
      dVar16 = dVar10;
    }
    else {
      uVar7 = 0xffffffff;
      dVar17 = dVar14;
      dVar15 = dVar11;
      dVar11 = local_c8;
      dVar14 = local_res20;
      local_res20 = dVar2;
      local_c8 = dVar1;
    }
    dVar2 = dVar14;
    dVar1 = dVar11;
    if ((dVar13 != 0.0) || (dVar16 != 0.0)) {
      dVar11 = dVar16 * local_res20 - dVar13 * local_c8;
      if (dVar11 != 0.0) {
        uVar5 = 0;
        if (0.0 < dVar11) {
          uVar5 = uVar7;
        }
        uVar6 = 0;
        if (dVar11 < 0.0) {
          uVar6 = uVar7;
        }
        goto LAB_14028a197;
      }
      dVar11 = dVar4 * dVar17 - dVar3 * dVar15;
      if (dVar11 == 0.0) {
        dVar11 = dVar4 * local_res20 - dVar3 * local_c8;
        if (dVar11 != 0.0) {
          uVar5 = 0;
          if (0.0 < dVar11) {
            uVar5 = uVar7;
          }
          uVar6 = 0;
          if (dVar11 < 0.0) {
            uVar6 = uVar7;
          }
          goto LAB_14028a197;
        }
        dVar11 = dVar1 * dVar17 - dVar2 * dVar15;
        if (dVar11 == 0.0) {
          dVar17 = dVar1 * local_res20 - dVar2 * local_c8;
          uVar5 = 0;
          if (0.0 < dVar17) {
            uVar5 = uVar7;
          }
          uVar6 = 0;
          if (dVar17 < 0.0) {
            uVar6 = uVar7;
          }
          goto LAB_14028a197;
        }
      }
      uVar5 = 0;
      if (0.0 < dVar11) {
        uVar5 = uVar7;
      }
      uVar6 = 0;
      if (dVar11 < 0.0) {
        uVar6 = uVar7;
      }
      goto LAB_14028a197;
    }
    dVar11 = dVar15 * dVar15 + dVar17 * dVar17;
    if (dVar11 < 0.0) {
      dVar11 = (double)FUN_14041f780(dVar11);
    }
    else {
      dVar11 = SQRT(dVar11);
    }
    if (dVar11 < 0.0) {
      dVar11 = (double)FUN_14041f780();
    }
    else {
      dVar11 = SQRT(dVar11);
    }
    dVar14 = dVar4 * dVar4 + dVar3 * dVar3;
    if (dVar14 < 0.0) {
      dVar14 = (double)FUN_14041f780(dVar14);
    }
    else {
      dVar14 = SQRT(dVar14);
    }
    if (dVar14 < 0.0) {
      dVar14 = (double)FUN_14041f780();
    }
    else {
      dVar14 = SQRT(dVar14);
    }
    dVar17 = dVar11 * (dVar1 * dVar17 - dVar2 * dVar15) +
             dVar14 * (dVar4 * local_res20 - dVar3 * local_c8);
    if (dVar17 == 0.0) {
LAB_14028a450:
      dVar17 = dVar1 * local_res20 - dVar2 * local_c8;
      uVar5 = (uint)(0.0 < dVar17);
      bVar9 = dVar17 == 0.0;
      bVar8 = 0.0 < dVar17;
    }
    else {
      uVar5 = (uint)(0.0 < dVar17);
      bVar9 = dVar17 == 0.0;
      bVar8 = 0.0 < dVar17;
    }
  }
  else {
    local_c0 = dVar13 * dVar13 + dVar16 * dVar16;
    if (local_c0 < 0.0) {
      local_c0 = (double)FUN_14041f780(local_c0);
    }
    else {
      local_c0 = SQRT(local_c0);
    }
    dVar17 = dVar10 * dVar10 + dVar12 * dVar12;
    if (dVar17 < 0.0) {
      dVar17 = (double)FUN_14041f780();
    }
    else {
      dVar17 = SQRT(dVar17);
    }
    dVar15 = (dVar3 * dVar10 - dVar4 * dVar12) * dVar17 +
             (dVar11 * dVar13 - dVar14 * dVar16) * local_c0;
    if (dVar15 == 0.0) {
      dVar12 = (dVar11 * dVar3 - dVar14 * dVar4) * dVar17 * local_c0 +
               (dVar1 * dVar13 - dVar2 * dVar16) * local_c0 * local_c0 +
               (local_res20 * dVar10 - local_c8 * dVar12) * dVar17 * dVar17;
      if (dVar12 == 0.0) {
        dVar17 = (dVar1 * dVar3 - dVar2 * dVar4) * local_c0 +
                 (dVar11 * local_res20 - dVar14 * local_c8) * dVar17;
        if (dVar17 == 0.0) goto LAB_14028a450;
        uVar5 = (uint)(0.0 < dVar17);
        bVar9 = dVar17 == 0.0;
        bVar8 = 0.0 < dVar17;
      }
      else {
        uVar5 = (uint)(0.0 < dVar12);
        bVar9 = dVar12 == 0.0;
        bVar8 = 0.0 < dVar12;
      }
    }
    else {
      uVar5 = (uint)(0.0 < dVar15);
      bVar9 = dVar15 == 0.0;
      bVar8 = 0.0 < dVar15;
    }
  }
  uVar6 = (uint)(!bVar8 && !bVar9);
LAB_14028a197:
  return uVar5 - uVar6;
}

