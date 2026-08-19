// Function: FUN_140284cf0
// Addr: 140284cf0
// Size: 1085 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140284cf0(double *param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  double *pdVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  double local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  uint local_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0 [184];
  
  if (((((*(byte *)(param_4 + 1) & 1) != 0) &&
       (cVar15 = FUN_140284250(param_1 + 2,param_2,param_3,param_1), cVar15 != '\0')) ||
      (((*(byte *)(param_4 + 1) & 2) != 0 &&
       (cVar15 = FUN_140284250(param_1 + 8,param_2), cVar15 != '\0')))) ||
     (((*(byte *)(param_4 + 1) & 4) != 0 &&
      (cVar15 = FUN_140284250(param_1 + 0xe,param_2), cVar15 != '\0')))) {
    local_f8 = *param_1;
    uStack_f0 = *(undefined4 *)(param_1 + 1);
    uStack_ec = *(undefined4 *)((longlong)param_1 + 0xc);
    (**(code **)(*param_4 + 0x38))(param_4,&local_e0,&local_f8,&local_e8);
    uVar14 = _UNK_1404930a4;
    uVar13 = _DAT_1404930a0;
    dVar20 = (double)CONCAT44(uStack_d4,uStack_d8);
    if ((*(byte *)(param_4 + 1) & 1) != 0) {
      dVar19 = param_1[2];
      uVar17 = SUB84(dVar19,0) & _DAT_1404930a0;
      uVar18 = (uint)((ulonglong)dVar19 >> 0x20) & _UNK_1404930a4;
      dVar19 = (double)CONCAT44(uStack_dc & _UNK_1404930a4,local_e0 & _DAT_1404930a0);
      if ((dVar19 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != dVar19)
         || ((dVar19 == (double)CONCAT44(uVar18,uVar17) && (dVar20 < param_1[3])))) {
        param_1[7] = local_e8;
        *(uint *)(param_1 + 2) = local_e0;
        *(uint *)((longlong)param_1 + 0x14) = uStack_dc;
        *(undefined4 *)(param_1 + 3) = uStack_d8;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_d4;
        param_1[6] = (double)param_4;
      }
    }
    if ((*(byte *)(param_4 + 1) & 2) != 0) {
      uVar17 = SUB84(param_1[8],0) & uVar13;
      uVar18 = (uint)((ulonglong)param_1[8] >> 0x20) & uVar14;
      dVar19 = (double)CONCAT44(uStack_dc & uVar14,local_e0 & uVar13);
      if ((dVar19 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != dVar19)
         || ((dVar19 == (double)CONCAT44(uVar18,uVar17) && (dVar20 < param_1[9])))) {
        param_1[0xd] = local_e8;
        *(uint *)(param_1 + 8) = local_e0;
        *(uint *)((longlong)param_1 + 0x44) = uStack_dc;
        *(undefined4 *)(param_1 + 9) = uStack_d8;
        *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_d4;
        param_1[0xc] = (double)param_4;
      }
    }
    if ((*(byte *)(param_4 + 1) & 4) != 0) {
      uVar17 = SUB84(param_1[0xe],0) & uVar13;
      uVar18 = (uint)((ulonglong)param_1[0xe] >> 0x20) & uVar14;
      dVar19 = (double)CONCAT44(uStack_dc & uVar14,local_e0 & uVar13);
      if ((dVar19 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != dVar19)
         || ((dVar19 == (double)CONCAT44(uVar18,uVar17) && (dVar20 < param_1[0xf])))) {
        param_1[0x13] = local_e8;
        *(uint *)(param_1 + 0xe) = local_e0;
        *(uint *)((longlong)param_1 + 0x74) = uStack_dc;
        *(undefined4 *)(param_1 + 0xf) = uStack_d8;
        *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_d4;
        param_1[0x12] = (double)param_4;
      }
    }
    uVar9 = *(undefined4 *)((longlong)param_1 + 4);
    uVar10 = *(undefined4 *)(param_1 + 1);
    uVar11 = *(undefined4 *)((longlong)param_1 + 0xc);
    *param_2 = *(undefined4 *)param_1;
    param_2[1] = uVar9;
    param_2[2] = uVar10;
    param_2[3] = uVar11;
    *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_dc & uVar14,local_e0 & uVar13);
    pdVar16 = (double *)(**(code **)(*param_4 + 0x20))(param_4,&local_f8,0);
    uVar12 = DAT_140492848;
    dVar4 = *param_1 - *pdVar16;
    dVar5 = param_1[1] - pdVar16[1];
    pdVar16 = (double *)(**(code **)(*param_4 + 0x20))(param_4,&local_f8,DAT_140492848);
    dVar6 = *param_1 - *pdVar16;
    local_f8 = param_1[1] - pdVar16[1];
    pdVar16 = (double *)(**(code **)(*param_4 + 0x28))(param_4,local_d0,0);
    dVar20 = *pdVar16;
    dVar19 = pdVar16[1];
    dVar7 = dVar19 * dVar19 + dVar20 * dVar20;
    if (dVar7 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041f850(SUB84(dVar7,0));
    }
    dVar7 = SQRT(dVar7);
    if (dVar7 == 0.0) {
      dVar20 = 0.0;
      dVar19 = 0.0;
    }
    else {
      dVar20 = dVar20 / dVar7;
      dVar19 = dVar19 / dVar7;
    }
    pdVar16 = (double *)(**(code **)(*param_4 + 0x28))(param_4,local_d0,uVar12);
    dVar7 = *pdVar16;
    dVar1 = pdVar16[1];
    dVar22 = dVar1 * dVar1 + dVar7 * dVar7;
    if (dVar22 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041f850(SUB84(dVar22,0));
    }
    dVar22 = SQRT(dVar22);
    if (dVar22 == 0.0) {
      dVar7 = 0.0;
      dVar1 = 0.0;
    }
    else {
      dVar7 = dVar7 / dVar22;
      dVar1 = dVar1 / dVar22;
    }
    pdVar16 = (double *)(**(code **)(*param_3 + 0x28))(param_3,local_d0,uVar12);
    dVar22 = *pdVar16;
    dVar2 = pdVar16[1];
    dVar21 = dVar2 * dVar2 + dVar22 * dVar22;
    if (dVar21 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041f850(SUB84(dVar21,0));
    }
    dVar21 = SQRT(dVar21);
    if (dVar21 == 0.0) {
      dVar22 = 0.0;
      dVar2 = 0.0;
    }
    else {
      dVar22 = dVar22 / dVar21;
      dVar2 = dVar2 / dVar21;
    }
    pdVar16 = (double *)(**(code **)(*param_5 + 0x28))(param_5,local_d0,0);
    dVar21 = *pdVar16;
    dVar3 = pdVar16[1];
    dVar8 = dVar3 * dVar3 + dVar21 * dVar21;
    if (dVar8 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041f850(SUB84(dVar8,0));
    }
    dVar8 = SQRT(dVar8);
    if (dVar8 == 0.0) {
      dVar21 = 0.0;
      dVar3 = 0.0;
    }
    else {
      dVar21 = dVar21 / dVar8;
      dVar3 = dVar3 / dVar8;
    }
    dVar22 = dVar22 + dVar20;
    dVar2 = dVar2 + dVar19;
    dVar8 = dVar22 * dVar22 + dVar2 * dVar2;
    if (dVar8 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041f850(SUB84(dVar8,0));
    }
    dVar8 = SQRT(dVar8);
    if (dVar8 == 0.0) {
      dVar2 = 0.0;
      dVar22 = 0.0;
    }
    else {
      dVar2 = dVar2 / dVar8;
      dVar22 = dVar22 / dVar8;
    }
    dVar21 = dVar21 + dVar7;
    dVar3 = dVar3 + dVar1;
    dVar2 = dVar2 * dVar5 + dVar22 * dVar4;
    dVar22 = dVar3 * dVar3 + dVar21 * dVar21;
    if (dVar22 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041f850(SUB84(dVar22,0));
    }
    dVar22 = SQRT(dVar22);
    if (dVar22 == 0.0) {
      dVar3 = 0.0;
      dVar21 = 0.0;
    }
    else {
      dVar3 = dVar3 / dVar22;
      dVar21 = dVar21 / dVar22;
    }
    dVar22 = (double)CONCAT44(uStack_dc,local_e0);
    dVar21 = local_f8 * dVar3 + dVar6 * dVar21;
    uVar17 = (uint)DAT_1404930b0;
    uVar18 = (uint)((ulonglong)DAT_1404930b0 >> 0x20);
    dVar21 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) ^ uVar18,SUB84(dVar21,0) ^ uVar17);
    if (0.0 < dVar2) {
      uVar25 = SUB84(dVar20,0) ^ uVar17;
      uVar26 = (uint)((ulonglong)dVar20 >> 0x20) ^ uVar18;
      uVar23 = SUB84(dVar19,0) ^ uVar17;
      uVar24 = (uint)((ulonglong)dVar19 >> 0x20) ^ uVar18;
      dVar20 = dVar22;
      if (0.0 < (double)CONCAT44(uVar26,uVar25) * dVar4 + (double)CONCAT44(uVar24,uVar23) * dVar5) {
        dVar19 = (double)CONCAT44(uVar24,uVar23) * dVar4 - (double)CONCAT44(uVar26,uVar25) * dVar5;
        uVar25 = SUB84(dVar19,0);
        uVar26 = (uint)((ulonglong)dVar19 >> 0x20);
        uVar23 = uVar25 & uVar13;
        uVar24 = uVar26 & uVar14;
        if ((double)CONCAT44(uVar24,uVar23) <=
            (double)CONCAT44(uStack_dc & uVar14,local_e0 & uVar13) &&
            (double)CONCAT44(uStack_dc & uVar14,local_e0 & uVar13) !=
            (double)CONCAT44(uVar24,uVar23)) {
          dVar20 = (double)CONCAT44(uVar26 ^ uVar18,uVar25 ^ uVar17);
          if ((*(byte *)(param_4 + 1) & 1) != 0) {
            if ((dVar20 <= 0.0) && (param_1[4] <= dVar20 && dVar20 != param_1[4])) {
              param_1[4] = dVar20;
            }
            if ((0.0 <= dVar20) && (dVar20 < param_1[5])) {
              param_1[5] = dVar20;
            }
          }
          if ((*(byte *)(param_4 + 1) & 2) != 0) {
            if ((dVar20 <= 0.0) && (param_1[10] <= dVar20 && dVar20 != param_1[10])) {
              param_1[10] = dVar20;
            }
            if ((0.0 <= dVar20) && (dVar20 < param_1[0xb])) {
              param_1[0xb] = dVar20;
            }
          }
          if ((*(byte *)(param_4 + 1) & 4) != 0) {
            if ((dVar20 <= 0.0) && (param_1[0x10] <= dVar20 && dVar20 != param_1[0x10])) {
              param_1[0x10] = dVar20;
            }
            if ((0.0 <= dVar20) && (dVar20 < param_1[0x11])) {
              param_1[0x11] = dVar20;
            }
          }
        }
      }
      *(double *)(param_2 + 10) = dVar20;
    }
    if (0.0 < dVar21) {
      if ((0.0 < dVar1 * local_f8 + dVar7 * dVar6) &&
         (dVar20 = dVar1 * dVar6 - dVar7 * local_f8, uVar17 = SUB84(dVar20,0) & uVar13,
         uVar18 = (uint)((ulonglong)dVar20 >> 0x20) & uVar14,
         (double)CONCAT44(uVar18,uVar17) <= (double)CONCAT44(uStack_dc & uVar14,local_e0 & uVar13)
         && (double)CONCAT44(uStack_dc & uVar14,local_e0 & uVar13) !=
            (double)CONCAT44(uVar18,uVar17))) {
        if ((*(byte *)(param_4 + 1) & 1) != 0) {
          if ((dVar20 <= 0.0) && (param_1[4] <= dVar20 && dVar20 != param_1[4])) {
            param_1[4] = dVar20;
          }
          if ((0.0 <= dVar20) && (dVar20 < param_1[5])) {
            param_1[5] = dVar20;
          }
        }
        if ((*(byte *)(param_4 + 1) & 2) != 0) {
          if ((dVar20 <= 0.0) && (param_1[10] <= dVar20 && dVar20 != param_1[10])) {
            param_1[10] = dVar20;
          }
          if ((0.0 <= dVar20) && (dVar20 < param_1[0xb])) {
            param_1[0xb] = dVar20;
          }
        }
        dVar22 = dVar20;
        if ((*(byte *)(param_4 + 1) & 4) != 0) {
          if ((dVar20 <= 0.0) && (param_1[0x10] <= dVar20 && dVar20 != param_1[0x10])) {
            param_1[0x10] = dVar20;
          }
          if ((0.0 <= dVar20) && (dVar20 < param_1[0x11])) {
            param_1[0x11] = dVar20;
          }
        }
      }
      *(double *)(param_2 + 0xc) = dVar22;
    }
    *(double *)(param_2 + 6) = dVar2;
    *(double *)(param_2 + 8) = dVar21;
  }
  return;
}

