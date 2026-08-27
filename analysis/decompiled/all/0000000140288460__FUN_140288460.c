// Function: FUN_140288460
// Addr: 140288460
// Size: 2337 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140288460(longlong param_1,undefined8 *param_2,undefined4 *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double local_f0 [23];
  
  iVar11 = 0;
  iVar8 = -1;
  iVar9 = 1;
  if (*(double *)(param_1 + 0x18) <= param_4 && param_4 != *(double *)(param_1 + 0x18)) {
    iVar8 = 1;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  dVar17 = *(double *)(param_1 + 0x18);
  iVar10 = iVar8;
  if ((dVar17 == param_4) &&
     ((dVar17 < *(double *)(param_1 + 0x28) ||
      ((iVar10 = iVar9, dVar17 == *(double *)(param_1 + 0x28) &&
       ((dVar17 < *(double *)(param_1 + 0x38) ||
        ((dVar17 == *(double *)(param_1 + 0x38) && (dVar17 < *(double *)(param_1 + 0x48))))))))))) {
    *param_3 = 1;
    iVar11 = 1;
    iVar10 = iVar8;
  }
  uVar7 = _UNK_140492fd4;
  uVar6 = _DAT_140492fd0;
  dVar4 = DAT_140492778;
  dVar16 = DAT_140492750;
  dVar20 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x20);
  dVar17 = *(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x10);
  uVar22 = SUB84(DAT_1404927c8,0);
  uVar23 = (undefined4)((ulonglong)DAT_1404927c8 >> 0x20);
  dVar21 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x28);
  dVar13 = dVar20 - dVar17;
  dVar2 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x18);
  dVar3 = dVar21 - dVar2;
  dVar21 = ((*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x38)) - dVar21) - dVar3;
  dVar20 = ((*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x30)) - dVar20) - dVar13;
  if ((dVar21 == 0.0) ||
     (dVar15 = (dVar3 * DAT_1404927c8) / dVar21,
     DAT_140492870 <=
     (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & _UNK_140492fd4,
                      SUB84(dVar15,0) & _DAT_140492fd0))) {
    iVar8 = FUN_140285390();
    dVar15 = local_f0[1];
    dVar19 = local_f0[0];
  }
  else {
    dVar19 = dVar15 * dVar15;
    dVar18 = (dVar2 * DAT_1404927c8) / dVar21;
    dVar1 = dVar15 * DAT_140492750;
    dVar14 = (dVar19 - dVar18 * DAT_1404927c8) * _DAT_140492738;
    dVar15 = (((dVar19 + dVar19) - dVar18 * _DAT_140492808) * dVar15 +
             ((*(double *)(param_1 + 0x18) - param_4) / dVar21) * _DAT_140492828) * _DAT_140492718;
    dVar19 = dVar14 * dVar14 * dVar14;
    if (dVar19 <= dVar15 * dVar15) {
      dVar19 = dVar15 * dVar15 - dVar19;
      if (dVar19 < 0.0) {
        dVar19 = (double)FUN_14041f780(dVar19);
      }
      else {
        dVar19 = SQRT(dVar19);
      }
      dVar16 = (double)FUN_14041db10(dVar19 + (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                                               uVar7,SUB84(dVar15,0) & uVar6));
      iVar8 = -1;
      if (dVar15 < 0.0) {
        iVar8 = 1;
      }
      dVar16 = dVar16 * (double)iVar8;
      if (dVar16 == 0.0) {
        dVar14 = 0.0;
      }
      else {
        dVar14 = dVar14 / dVar16;
      }
      dVar15 = dVar14 + dVar16;
      local_f0[0] = dVar15 - dVar1;
      dVar19 = local_f0[0];
      if ((dVar16 == dVar14) ||
         ((double)CONCAT44((uint)((ulonglong)(dVar16 - dVar14) >> 0x20) & _UNK_140492fd4,
                           SUB84(dVar16 - dVar14,0) & _DAT_140492fd0) <
          (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & _UNK_140492fd4,
                           SUB84(dVar15,0) & _DAT_140492fd0) * _DAT_140492648)) {
        iVar8 = 2;
        local_f0[1] = dVar15 * DAT_1404929c0 - dVar1;
        dVar15 = local_f0[1];
      }
      else {
        iVar8 = 1;
        dVar15 = local_f0[1];
      }
    }
    else {
      if (dVar19 < 0.0) {
        dVar19 = (double)FUN_14041f780(dVar19);
      }
      else {
        dVar19 = SQRT(dVar19);
      }
      dVar18 = DAT_1404929d0;
      if (DAT_1404929d0 <= dVar15 / dVar19) {
        dVar18 = dVar15 / dVar19;
      }
      dVar15 = dVar4;
      if (dVar18 <= dVar4) {
        dVar15 = dVar18;
      }
      dVar18 = (double)FUN_14041bf60(dVar15);
      if (dVar14 < 0.0) {
        dVar14 = (double)FUN_14041f780(dVar14);
      }
      else {
        dVar14 = SQRT(dVar14);
      }
      dVar14 = dVar14 * _DAT_1404929e8;
      dVar15 = (double)FUN_14041c880(dVar18 * dVar16);
      dVar5 = DAT_1404927f8;
      dVar19 = dVar15 * dVar14 - dVar1;
      local_f0[0] = dVar19;
      dVar15 = (double)FUN_14041c880((dVar18 + DAT_1404927f8) * dVar16);
      dVar15 = dVar15 * dVar14 - dVar1;
      local_f0[1] = dVar15;
      dVar16 = (double)FUN_14041c880((dVar18 - dVar5) * dVar16);
      iVar8 = 3;
      uVar22 = SUB84(DAT_1404927c8,0);
      uVar23 = (undefined4)((ulonglong)DAT_1404927c8 >> 0x20);
      local_f0[2] = dVar16 * dVar14 - dVar1;
    }
  }
  dVar16 = local_f0[2];
  if (1 < iVar8) {
    dVar14 = dVar19;
    if (dVar15 < dVar19) {
      local_f0[0] = dVar15;
      local_f0[1] = dVar19;
      dVar14 = dVar15;
      dVar15 = dVar19;
    }
    if ((2 < iVar8) && (local_f0[2] < dVar15)) {
      local_f0[1] = local_f0[2];
      local_f0[2] = dVar15;
      if (dVar16 < dVar14) {
        local_f0[0] = dVar16;
        local_f0[1] = dVar14;
      }
    }
  }
  iVar9 = 0;
  if (3 < iVar8) {
    do {
      if (2 < iVar11) goto LAB_140288c47;
      dVar16 = local_f0[iVar9];
      if ((0.0 <= dVar16) && (dVar16 <= dVar4)) {
        dVar15 = dVar16 * (double)CONCAT44(uVar23,uVar22);
        param_2[iVar11] =
             dVar15 * dVar17 + *(double *)(param_1 + 0x10) + dVar16 * dVar15 * dVar13 +
             dVar16 * dVar16 * dVar16 * dVar20;
        if (0.0 <= ((dVar16 + dVar16) * dVar3 + dVar2 + dVar16 * dVar16 * dVar21) * (double)iVar10)
        {
          param_3[iVar11] = iVar10;
          iVar11 = iVar11 + 1;
          iVar10 = -iVar10;
          if (2 < iVar11) goto LAB_140288c47;
        }
      }
      dVar16 = local_f0[(longlong)iVar9 + 1];
      if ((0.0 <= dVar16) && (dVar16 <= dVar4)) {
        dVar15 = dVar16 * (double)CONCAT44(uVar23,uVar22);
        param_2[iVar11] =
             dVar15 * dVar17 + *(double *)(param_1 + 0x10) + dVar16 * dVar15 * dVar13 +
             dVar16 * dVar16 * dVar16 * dVar20;
        if (0.0 <= ((dVar16 + dVar16) * dVar3 + dVar2 + dVar16 * dVar16 * dVar21) * (double)iVar10)
        {
          param_3[iVar11] = iVar10;
          iVar11 = iVar11 + 1;
          iVar10 = -iVar10;
          if (2 < iVar11) goto LAB_140288c47;
        }
      }
      dVar16 = local_f0[(longlong)iVar9 + 2];
      if ((0.0 <= dVar16) && (dVar16 <= dVar4)) {
        dVar15 = dVar16 * (double)CONCAT44(uVar23,uVar22);
        param_2[iVar11] =
             dVar15 * dVar17 + *(double *)(param_1 + 0x10) + dVar16 * dVar15 * dVar13 +
             dVar16 * dVar16 * dVar16 * dVar20;
        if (0.0 <= ((dVar16 + dVar16) * dVar3 + dVar2 + dVar16 * dVar16 * dVar21) * (double)iVar10)
        {
          param_3[iVar11] = iVar10;
          iVar11 = iVar11 + 1;
          iVar10 = -iVar10;
          if (2 < iVar11) goto LAB_140288c47;
        }
      }
      dVar16 = local_f0[(longlong)iVar9 + 3];
      if ((0.0 <= dVar16) && (dVar16 <= dVar4)) {
        dVar15 = dVar16 * (double)CONCAT44(uVar23,uVar22);
        param_2[iVar11] =
             dVar15 * dVar17 + *(double *)(param_1 + 0x10) + dVar16 * dVar15 * dVar13 +
             dVar16 * dVar16 * dVar16 * dVar20;
        if (0.0 <= ((dVar16 + dVar16) * dVar3 + dVar2 + dVar16 * dVar16 * dVar21) * (double)iVar10)
        {
          param_3[iVar11] = iVar10;
          iVar10 = -iVar10;
          iVar11 = iVar11 + 1;
        }
      }
      iVar9 = iVar9 + 4;
    } while (iVar9 < iVar8 + -3);
  }
  while ((iVar9 < iVar8 && (iVar11 < 3))) {
    dVar16 = local_f0[iVar9];
    iVar12 = iVar11;
    if ((0.0 <= dVar16) && (dVar16 <= dVar4)) {
      dVar15 = dVar16 * (double)CONCAT44(uVar23,uVar22);
      param_2[iVar11] =
           dVar15 * dVar17 + *(double *)(param_1 + 0x10) + dVar16 * dVar15 * dVar13 +
           dVar16 * dVar16 * dVar16 * dVar20;
      if (0.0 <= ((dVar16 + dVar16) * dVar3 + dVar2 + dVar16 * dVar16 * dVar21) * (double)iVar10) {
        iVar12 = iVar11 + 1;
        param_3[iVar11] = iVar10;
        iVar10 = -iVar10;
      }
    }
    iVar9 = iVar9 + 1;
    iVar11 = iVar12;
  }
LAB_140288c47:
  dVar17 = *(double *)(param_1 + 0x48);
  if (dVar17 == param_4) {
    if ((0 < iVar10) && (0 < iVar11)) {
      iVar11 = iVar11 + -1;
      iVar10 = -1;
    }
    if (((dVar17 < *(double *)(param_1 + 0x38)) ||
        ((dVar17 == *(double *)(param_1 + 0x38) &&
         ((dVar17 < *(double *)(param_1 + 0x28) ||
          ((dVar17 == *(double *)(param_1 + 0x28) && (dVar17 < *(double *)(param_1 + 0x18)))))))))
       && (iVar11 < 3)) {
      param_2[iVar11] = *(undefined8 *)(param_1 + 0x40);
      if (iVar10 < 0) {
        param_3[iVar11] = 0xffffffff;
        iVar11 = iVar11 + 1;
        iVar10 = 1;
      }
    }
  }
  iVar8 = -1;
  if (*(double *)(param_1 + 0x48) <= param_4) {
    iVar8 = 1;
  }
  if (iVar10 != iVar8) {
    if (0 < iVar11) {
      return iVar11 + -1;
    }
    dVar17 = *(double *)(param_1 + 0x48) - param_4;
    param_4 = *(double *)(param_1 + 0x18) - param_4;
    if ((double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_140492fd4,
                         SUB84(dVar17,0) & _DAT_140492fd0) <
        (double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) & _UNK_140492fd4,
                         SUB84(param_4,0) & _DAT_140492fd0)) {
      param_2[iVar11] = *(undefined8 *)(param_1 + 0x40);
    }
    param_3[iVar11] = iVar10;
    return iVar11 + 1;
  }
  return iVar11;
}

