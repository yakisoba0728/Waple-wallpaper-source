// Function: FUN_140286990
// Addr: 140286990
// Size: 3460 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140286990(longlong *param_1,undefined8 *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  double *pdVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  double local_res8;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  double local_108 [25];
  
  uVar9 = _UNK_140492fd4;
  uVar8 = _DAT_140492fd0;
  dVar3 = DAT_140492778;
  dVar1 = 0.0;
  dVar18 = (double)param_1[3] - param_3[1];
  dVar2 = (double)param_1[2] - *param_3;
  dVar6 = (double)param_1[4] - (double)param_1[2];
  uStack_120 = 0;
  dVar7 = (double)param_1[5] - (double)param_1[3];
  dVar4 = ((double)param_1[6] - (double)param_1[4]) - dVar6;
  dVar5 = ((double)param_1[7] - (double)param_1[5]) - dVar7;
  dVar21 = dVar4 * dVar4 + dVar5 * dVar5;
  dVar16 = dVar6 * dVar6 + dVar7 * dVar7;
  dVar16 = dVar4 * dVar2 + dVar5 * dVar18 + dVar16 + dVar16;
  local_128 = dVar18;
  if ((dVar21 == 0.0) ||
     (dVar17 = ((dVar4 * dVar6 + dVar5 * dVar7) * DAT_1404927c8) / dVar21,
     DAT_140492870 <=
     (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_140492fd4,
                      SUB84(dVar17,0) & _DAT_140492fd0))) {
    iVar10 = FUN_140285390(local_108,param_2,dVar16);
  }
  else {
    dVar16 = dVar16 / dVar21;
    dVar15 = dVar17 * dVar17;
    dVar22 = (dVar15 - dVar16 * DAT_1404927c8) * _DAT_140492738;
    local_138 = dVar17 * DAT_140492750;
    dVar16 = (((dVar15 + dVar15) - dVar16 * _DAT_140492808) * dVar17 +
             ((dVar6 * dVar2 + dVar7 * dVar18) / dVar21) * _DAT_140492828) * _DAT_140492718;
    dVar21 = dVar22 * dVar22 * dVar22;
    if (dVar21 <= dVar16 * dVar16) {
      dVar21 = dVar16 * dVar16 - dVar21;
      if (dVar21 < 0.0) {
        dVar21 = (double)FUN_14041f780(dVar21);
      }
      else {
        dVar21 = SQRT(dVar21);
      }
      dVar21 = (double)FUN_14041db10(dVar21 + (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                                               uVar9,SUB84(dVar16,0) & uVar8),
                                     DAT_140492750);
      iVar10 = 1;
      iVar14 = -1;
      if (dVar16 < 0.0) {
        iVar14 = 1;
      }
      dVar21 = dVar21 * (double)iVar14;
      if (dVar21 == 0.0) {
        dVar22 = 0.0;
      }
      else {
        dVar22 = dVar22 / dVar21;
      }
      dVar16 = dVar22 + dVar21;
      local_108[0] = dVar16 - local_138;
      if ((dVar21 == dVar22) ||
         ((double)CONCAT44((uint)((ulonglong)(dVar21 - dVar22) >> 0x20) & uVar9,
                           SUB84(dVar21 - dVar22,0) & uVar8) <
          (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar9,SUB84(dVar16,0) & uVar8) *
          _DAT_140492648)) {
        iVar10 = 2;
        local_108[1] = dVar16 * DAT_1404929c0 - local_138;
      }
    }
    else {
      if (dVar21 < 0.0) {
        dVar21 = (double)FUN_14041f780(dVar21);
      }
      else {
        dVar21 = SQRT(dVar21);
      }
      dVar17 = DAT_1404929d0;
      if (DAT_1404929d0 <= dVar16 / dVar21) {
        dVar17 = dVar16 / dVar21;
      }
      dVar16 = dVar3;
      if (dVar17 <= dVar3) {
        dVar16 = dVar17;
      }
      dVar16 = (double)FUN_14041bf60(dVar16);
      if (dVar22 < 0.0) {
        dVar22 = (double)FUN_14041f780(dVar22);
      }
      else {
        dVar22 = SQRT(dVar22);
      }
      dVar22 = dVar22 * _DAT_1404929e8;
      dVar15 = (double)FUN_14041c880(dVar16 * DAT_140492750);
      dVar17 = local_138;
      dVar21 = DAT_1404927f8;
      local_108[0] = dVar15 * dVar22 - local_138;
      dVar15 = (double)FUN_14041c880((dVar16 + DAT_1404927f8) * DAT_140492750);
      local_108[1] = dVar15 * dVar22 - dVar17;
      dVar16 = (double)FUN_14041c880((dVar16 - dVar21) * DAT_140492750);
      iVar10 = 3;
      local_108[2] = dVar16 * dVar22 - dVar17;
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1,&local_138,0);
  uVar19 = SUB84(dStack_130,0);
  uVar20 = (undefined4)((ulonglong)dStack_130 >> 0x20);
  dVar16 = dVar2 * dVar2 + dVar18 * dVar18;
  if (dVar16 < 0.0) {
    dVar16 = (double)FUN_14041f780(dVar16);
    uVar19 = SUB84(dStack_130,0);
    uVar20 = (undefined4)((ulonglong)dStack_130 >> 0x20);
  }
  else {
    dVar16 = SQRT(dVar16);
  }
  dVar21 = *param_3;
  iVar13 = 1;
  iVar14 = -1;
  if (0.0 < dVar18 * local_138 - dVar2 * (double)CONCAT44(uVar20,uVar19)) {
    iVar14 = 1;
  }
  dVar17 = (double)iVar14 * dVar16;
  dVar18 = dVar2 * local_138 + dVar18 * (double)CONCAT44(uVar20,uVar19);
  local_res8 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ DAT_140492fe0._4_4_,
                                SUB84(dVar18,0) ^ (uint)DAT_140492fe0) /
               ((double)CONCAT44(uVar20,uVar19) * (double)CONCAT44(uVar20,uVar19) +
               local_138 * local_138);
  *param_4 = local_res8;
  dVar18 = ((double)param_1[6] - dVar21) * ((double)param_1[6] - dVar21) +
           ((double)param_1[7] - param_3[1]) * ((double)param_1[7] - param_3[1]);
  if (dVar18 < 0.0) {
    dVar18 = (double)FUN_14041f780(dVar18);
  }
  else {
    dVar18 = SQRT(dVar18);
  }
  if (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar9,SUB84(dVar17,0) & uVar8))
  {
    pdVar12 = (double *)(**(code **)(*param_1 + 0x28))(param_1,local_118,dVar3);
    local_138 = *pdVar12;
    dStack_130 = pdVar12[1];
    iVar14 = -1;
    if (0.0 < ((double)param_1[7] - param_3[1]) * local_138 -
              ((double)param_1[6] - dVar21) * dStack_130) {
      iVar14 = iVar13;
    }
    dVar17 = (double)iVar14 * dVar18;
    local_res8 = ((dVar21 - (double)param_1[4]) * local_138 +
                 (param_3[1] - (double)param_1[5]) * dStack_130) /
                 (dStack_130 * dStack_130 + local_138 * local_138);
  }
  auVar24._8_8_ = 0;
  auVar24._0_8_ = dVar17;
  iVar14 = 0;
  dVar18 = local_res8;
  if (3 < iVar10) {
    do {
      dVar21 = local_108[iVar14];
      if ((0.0 < dVar21) && (dVar21 < dVar3)) {
        dVar17 = dVar6 * (dVar21 + dVar21) + dVar2 + dVar4 * dVar21 * dVar21;
        dVar22 = dVar7 * (dVar21 + dVar21) + local_128 + dVar5 * dVar21 * dVar21;
        dVar15 = dVar17 * dVar17 + dVar22 * dVar22;
        if (dVar15 < 0.0) {
          dVar15 = (double)FUN_14041f780(dVar15);
          dVar18 = local_res8;
        }
        else {
          dVar15 = SQRT(dVar15);
        }
        if (dVar15 <= (double)CONCAT44(auVar24._4_4_ & _UNK_140492fd4,auVar24._0_4_ & _DAT_140492fd0
                                      )) {
          iVar11 = -1;
          if (0.0 < (dVar4 * dVar21 + dVar6) * dVar22 - (dVar5 * dVar21 + dVar7) * dVar17) {
            iVar11 = iVar13;
          }
          auVar24._0_8_ = (double)iVar11 * dVar15;
          auVar24._8_8_ = 0;
          dVar18 = dVar21;
          local_res8 = dVar21;
        }
      }
      dVar21 = local_108[(longlong)iVar14 + 1];
      if ((0.0 < dVar21) && (dVar21 < dVar3)) {
        dVar17 = dVar6 * (dVar21 + dVar21) + dVar2 + dVar4 * dVar21 * dVar21;
        dVar22 = dVar7 * (dVar21 + dVar21) + local_128 + dVar5 * dVar21 * dVar21;
        dVar15 = dVar17 * dVar17 + dVar22 * dVar22;
        if (dVar15 < 0.0) {
          dVar15 = (double)FUN_14041f780(dVar15);
          dVar18 = local_res8;
        }
        else {
          dVar15 = SQRT(dVar15);
        }
        if (dVar15 <= (double)CONCAT44(auVar24._4_4_ & _UNK_140492fd4,auVar24._0_4_ & _DAT_140492fd0
                                      )) {
          iVar11 = -1;
          if (0.0 < (dVar4 * dVar21 + dVar6) * dVar22 - (dVar5 * dVar21 + dVar7) * dVar17) {
            iVar11 = iVar13;
          }
          auVar24._0_8_ = (double)iVar11 * dVar15;
          auVar24._8_8_ = 0;
          dVar18 = dVar21;
          local_res8 = dVar21;
        }
      }
      dVar21 = local_108[(longlong)iVar14 + 2];
      if ((0.0 < dVar21) && (dVar21 < dVar3)) {
        dVar17 = dVar6 * (dVar21 + dVar21) + dVar2 + dVar4 * dVar21 * dVar21;
        dVar22 = dVar7 * (dVar21 + dVar21) + local_128 + dVar5 * dVar21 * dVar21;
        dVar15 = dVar17 * dVar17 + dVar22 * dVar22;
        if (dVar15 < 0.0) {
          dVar15 = (double)FUN_14041f780(dVar15);
          dVar18 = local_res8;
        }
        else {
          dVar15 = SQRT(dVar15);
        }
        if (dVar15 <= (double)CONCAT44(auVar24._4_4_ & _UNK_140492fd4,auVar24._0_4_ & _DAT_140492fd0
                                      )) {
          iVar11 = -1;
          if (0.0 < (dVar4 * dVar21 + dVar6) * dVar22 - (dVar5 * dVar21 + dVar7) * dVar17) {
            iVar11 = iVar13;
          }
          auVar24._0_8_ = (double)iVar11 * dVar15;
          auVar24._8_8_ = 0;
          dVar18 = dVar21;
          local_res8 = dVar21;
        }
      }
      dVar21 = local_108[(longlong)iVar14 + 3];
      if ((0.0 < dVar21) && (dVar21 < dVar3)) {
        dVar17 = dVar6 * (dVar21 + dVar21) + dVar2 + dVar4 * dVar21 * dVar21;
        dVar22 = dVar7 * (dVar21 + dVar21) + local_128 + dVar5 * dVar21 * dVar21;
        dVar15 = dVar17 * dVar17 + dVar22 * dVar22;
        if (dVar15 < 0.0) {
          dVar15 = (double)FUN_14041f780(dVar15);
          dVar18 = local_res8;
        }
        else {
          dVar15 = SQRT(dVar15);
        }
        if (dVar15 <= (double)CONCAT44(auVar24._4_4_ & _UNK_140492fd4,auVar24._0_4_ & _DAT_140492fd0
                                      )) {
          iVar11 = -1;
          if (0.0 < (dVar4 * dVar21 + dVar6) * dVar22 - (dVar5 * dVar21 + dVar7) * dVar17) {
            iVar11 = iVar13;
          }
          auVar24._0_8_ = (double)iVar11 * dVar15;
          auVar24._8_8_ = 0;
          dVar18 = dVar21;
          local_res8 = dVar21;
        }
      }
      iVar14 = iVar14 + 4;
    } while (iVar14 < iVar10 + -3);
  }
  uVar23 = auVar24._0_8_;
  for (; iVar14 < iVar10; iVar14 = iVar14 + 1) {
    dVar21 = local_108[iVar14];
    if ((0.0 < dVar21) && (dVar21 < dVar3)) {
      dVar17 = dVar6 * (dVar21 + dVar21) + dVar2 + dVar4 * dVar21 * dVar21;
      dVar22 = dVar7 * (dVar21 + dVar21) + local_128 + dVar5 * dVar21 * dVar21;
      dVar15 = dVar17 * dVar17 + dVar22 * dVar22;
      if (dVar15 < 0.0) {
        dVar15 = (double)FUN_14041f780(dVar15);
      }
      else {
        dVar15 = SQRT(dVar15);
      }
      dVar18 = local_res8;
      if (dVar15 <= (double)CONCAT44(auVar24._4_4_ & _UNK_140492fd4,auVar24._0_4_ & _DAT_140492fd0))
      {
        iVar13 = -1;
        if (0.0 < (dVar4 * dVar21 + dVar6) * dVar22 - (dVar5 * dVar21 + dVar7) * dVar17) {
          iVar13 = 1;
        }
        auVar24._0_8_ = (double)iVar13 * dVar15;
        auVar24._8_8_ = 0;
        dVar18 = dVar21;
        local_res8 = dVar21;
      }
    }
    uVar23 = auVar24._0_8_;
  }
  *param_4 = dVar18;
  if ((0.0 <= dVar18) && (dVar18 <= dVar3)) {
    param_2[1] = 0;
    goto LAB_1402876d2;
  }
  dVar4 = dVar3;
  if (DAT_140492758 <= dVar18) {
    dVar2 = (double)param_1[6] - *param_3;
    dVar16 = (double)param_1[7] - param_3[1];
    dVar18 = dVar2 * dVar2 + dVar16 * dVar16;
    if (dVar18 < 0.0) {
      dVar18 = (double)FUN_14041f780(dVar18);
    }
    else {
      dVar18 = SQRT(dVar18);
    }
    if (dVar18 == 0.0) {
      dVar2 = 0.0;
    }
    else {
      dVar4 = dVar16 / dVar18;
      dVar2 = dVar2 / dVar18;
    }
    pdVar12 = (double *)(**(code **)(*param_1 + 0x28))(param_1,local_118,dVar3);
    dVar16 = *pdVar12;
    dVar18 = pdVar12[1];
    uVar19 = SUB84(dVar18,0);
    uVar20 = (undefined4)((ulonglong)dVar18 >> 0x20);
    dVar18 = dVar16 * dVar16 + dVar18 * dVar18;
    if (dVar18 < 0.0) goto LAB_140287694;
    dVar18 = SQRT(dVar18);
  }
  else {
    if (dVar16 == 0.0) {
      dVar2 = 0.0;
    }
    else {
      dVar4 = local_128 / dVar16;
      dVar2 = dVar2 / dVar16;
    }
    pdVar12 = (double *)(**(code **)(*param_1 + 0x28))(param_1,local_118,0);
    dVar16 = *pdVar12;
    dVar18 = pdVar12[1];
    uVar19 = SUB84(dVar18,0);
    uVar20 = (undefined4)((ulonglong)dVar18 >> 0x20);
    dVar18 = dVar18 * dVar18 + dVar16 * dVar16;
    if (dVar18 < 0.0) {
LAB_140287694:
      dVar18 = (double)FUN_14041f780(dVar18);
    }
    else {
      dVar18 = SQRT(dVar18);
    }
  }
  if (dVar18 != 0.0) {
    dVar3 = (double)CONCAT44(uVar20,uVar19) / dVar18;
    dVar1 = dVar16 / dVar18;
  }
  dVar16 = dVar4 * dVar3 + dVar2 * dVar1;
  param_2[1] = CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_140492fd4,
                        SUB84(dVar16,0) & _DAT_140492fd0);
LAB_1402876d2:
  *param_2 = uVar23;
  return param_2;
}

