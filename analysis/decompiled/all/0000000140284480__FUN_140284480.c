// Function: FUN_140284480
// Addr: 140284480
// Size: 1429 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140284480(double *param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  double *pdVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  double local_100;
  double local_f8;
  double local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [176];
  
  cVar13 = FUN_140284180(param_1,param_2,param_3,param_1 + 6);
  if (cVar13 != '\0') {
    local_e8 = param_1[6];
    uStack_e0 = *(undefined4 *)(param_1 + 7);
    uStack_dc = *(undefined4 *)((longlong)param_1 + 0x3c);
    (**(code **)(*param_4 + 0x38))(param_4,&local_d8,&local_e8,&local_100);
    uVar12 = _UNK_140492fd4;
    uVar11 = _DAT_140492fd0;
    uVar15 = SUB84(*param_1,0) & _DAT_140492fd0;
    uVar17 = (uint)((ulonglong)*param_1 >> 0x20) & _UNK_140492fd4;
    dVar24 = (double)CONCAT44((uint)((ulonglong)local_d8 >> 0x20) & _UNK_140492fd4,
                              SUB84(local_d8,0) & _DAT_140492fd0);
    if ((dVar24 <= (double)CONCAT44(uVar17,uVar15) && (double)CONCAT44(uVar17,uVar15) != dVar24) ||
       ((dVar24 == (double)CONCAT44(uVar17,uVar15) && (dStack_d0 < param_1[1])))) {
      param_1[4] = (double)param_4;
      *param_1 = local_d8;
      param_1[1] = dStack_d0;
      param_1[5] = local_100;
    }
    uVar6 = *(undefined4 *)(param_1 + 6);
    uVar7 = *(undefined4 *)((longlong)param_1 + 0x34);
    uVar8 = *(undefined4 *)(param_1 + 7);
    uVar9 = *(undefined4 *)((longlong)param_1 + 0x3c);
    *(double *)(param_2 + 4) = dVar24;
    *param_2 = uVar6;
    param_2[1] = uVar7;
    param_2[2] = uVar8;
    param_2[3] = uVar9;
    pdVar14 = (double *)(**(code **)(*param_4 + 0x20))(param_4,&local_e8,0);
    uVar10 = DAT_140492778;
    dVar4 = param_1[6] - *pdVar14;
    dVar5 = param_1[7] - pdVar14[1];
    pdVar14 = (double *)(**(code **)(*param_4 + 0x20))(param_4,&local_e8,DAT_140492778);
    local_f8 = param_1[6] - *pdVar14;
    local_e8 = param_1[7] - pdVar14[1];
    pdVar14 = (double *)(**(code **)(*param_4 + 0x28))(param_4,local_c8,0);
    dVar24 = *pdVar14;
    dVar23 = pdVar14[1];
    dVar19 = dVar23 * dVar23 + dVar24 * dVar24;
    if (dVar19 < 0.0) {
      dVar19 = (double)FUN_14041f780(SUB84(dVar19,0));
    }
    else {
      dVar19 = SQRT(dVar19);
    }
    if (dVar19 == 0.0) {
      dVar24 = 0.0;
      dVar23 = 0.0;
    }
    else {
      dVar24 = dVar24 / dVar19;
      dVar23 = dVar23 / dVar19;
    }
    pdVar14 = (double *)(**(code **)(*param_4 + 0x28))(param_4,local_c8,uVar10);
    dVar19 = *pdVar14;
    dVar1 = pdVar14[1];
    dVar20 = dVar1 * dVar1 + dVar19 * dVar19;
    if (dVar20 < 0.0) {
      dVar20 = (double)FUN_14041f780(SUB84(dVar20,0));
    }
    else {
      dVar20 = SQRT(dVar20);
    }
    if (dVar20 == 0.0) {
      dVar19 = 0.0;
      dVar1 = 0.0;
    }
    else {
      dVar19 = dVar19 / dVar20;
      dVar1 = dVar1 / dVar20;
    }
    pdVar14 = (double *)(**(code **)(*param_3 + 0x28))(param_3,local_c8,uVar10);
    dVar20 = *pdVar14;
    dVar2 = pdVar14[1];
    dVar21 = dVar2 * dVar2 + dVar20 * dVar20;
    if (dVar21 < 0.0) {
      dVar21 = (double)FUN_14041f780(SUB84(dVar21,0));
    }
    else {
      dVar21 = SQRT(dVar21);
    }
    if (dVar21 == 0.0) {
      dVar20 = 0.0;
      dVar2 = 0.0;
    }
    else {
      dVar20 = dVar20 / dVar21;
      dVar2 = dVar2 / dVar21;
    }
    pdVar14 = (double *)(**(code **)(*param_5 + 0x28))(param_5,local_c8,0);
    dVar21 = *pdVar14;
    dVar3 = pdVar14[1];
    dVar22 = dVar3 * dVar3 + dVar21 * dVar21;
    if (dVar22 < 0.0) {
      dVar22 = (double)FUN_14041f780(SUB84(dVar22,0));
    }
    else {
      dVar22 = SQRT(dVar22);
    }
    if (dVar22 == 0.0) {
      dVar21 = 0.0;
      dVar3 = 0.0;
    }
    else {
      dVar21 = dVar21 / dVar22;
      dVar3 = dVar3 / dVar22;
    }
    dVar20 = dVar20 + dVar24;
    dVar2 = dVar2 + dVar23;
    dVar22 = dVar20 * dVar20 + dVar2 * dVar2;
    if (dVar22 < 0.0) {
      dVar22 = (double)FUN_14041f780(SUB84(dVar22,0));
    }
    else {
      dVar22 = SQRT(dVar22);
    }
    if (dVar22 == 0.0) {
      dVar2 = 0.0;
      dVar20 = 0.0;
    }
    else {
      dVar2 = dVar2 / dVar22;
      dVar20 = dVar20 / dVar22;
    }
    dVar2 = dVar20 * dVar4 + dVar2 * dVar5;
    dVar21 = dVar19 + dVar21;
    dVar3 = dVar1 + dVar3;
    dVar20 = dVar21 * dVar21 + dVar3 * dVar3;
    if (dVar20 < 0.0) {
      dVar20 = (double)FUN_14041f780(SUB84(dVar20,0));
    }
    else {
      dVar20 = SQRT(dVar20);
    }
    if (dVar20 == 0.0) {
      dVar3 = 0.0;
      dVar21 = 0.0;
    }
    else {
      dVar3 = dVar3 / dVar20;
      dVar21 = dVar21 / dVar20;
    }
    dVar20 = dVar21 * local_f8 + local_e8 * dVar3;
    uVar17 = (uint)DAT_140492fe0;
    uVar26 = SUB84(dVar20,0) ^ uVar17;
    uVar25 = (uint)((ulonglong)DAT_140492fe0 >> 0x20);
    uVar27 = (uint)((ulonglong)dVar20 >> 0x20) ^ uVar25;
    uVar15 = (uint)((ulonglong)local_d8 >> 0x20);
    if (0.0 < dVar2) {
      uVar30 = SUB84(dVar24,0) ^ uVar17;
      uVar31 = (uint)((ulonglong)dVar24 >> 0x20) ^ uVar25;
      uVar28 = SUB84(dVar23,0) ^ uVar17;
      uVar29 = (uint)((ulonglong)dVar23 >> 0x20) ^ uVar25;
      dVar24 = local_d8;
      if (0.0 < (double)CONCAT44(uVar29,uVar28) * dVar5 + (double)CONCAT44(uVar31,uVar30) * dVar4) {
        uVar16 = SUB84(local_d8,0) & uVar11;
        uVar18 = uVar15 & uVar12;
        dVar23 = (double)CONCAT44(uVar29,uVar28) * dVar4 - (double)CONCAT44(uVar31,uVar30) * dVar5;
        uVar29 = (uint)((ulonglong)dVar23 >> 0x20);
        uVar28 = SUB84(dVar23,0);
        dVar23 = (double)CONCAT44(uVar29 & uVar12,uVar28 & uVar11);
        if (dVar23 <= (double)CONCAT44(uVar18,uVar16) && (double)CONCAT44(uVar18,uVar16) != dVar23)
        {
          dVar24 = (double)CONCAT44(uVar29 ^ uVar25,uVar28 ^ uVar17);
          if ((dVar24 <= 0.0) && (param_1[2] <= dVar24 && dVar24 != param_1[2])) {
            param_1[2] = dVar24;
          }
          if ((0.0 <= dVar24) && (dVar24 < param_1[3])) {
            param_1[3] = dVar24;
          }
        }
      }
      *(double *)(param_2 + 10) = dVar24;
    }
    if (0.0 <= (double)CONCAT44(uVar27,uVar26) && (double)CONCAT44(uVar27,uVar26) != 0.0) {
      if ((0.0 < dVar1 * local_e8 + dVar19 * local_f8) &&
         (uVar17 = SUB84(local_d8,0) & uVar11, uVar15 = uVar15 & uVar12,
         dVar24 = dVar1 * local_f8 - dVar19 * local_e8,
         dVar23 = (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar12,
                                   SUB84(dVar24,0) & uVar11),
         dVar23 <= (double)CONCAT44(uVar15,uVar17) && (double)CONCAT44(uVar15,uVar17) != dVar23)) {
        if ((dVar24 <= 0.0) && (param_1[2] <= dVar24 && dVar24 != param_1[2])) {
          param_1[2] = dVar24;
        }
        local_d8 = dVar24;
        if ((0.0 <= dVar24) && (dVar24 < param_1[3])) {
          param_1[3] = dVar24;
        }
      }
      *(double *)(param_2 + 0xc) = local_d8;
    }
    *(double *)(param_2 + 6) = dVar2;
    *(ulonglong *)(param_2 + 8) = CONCAT44(uVar27,uVar26);
  }
  return;
}

