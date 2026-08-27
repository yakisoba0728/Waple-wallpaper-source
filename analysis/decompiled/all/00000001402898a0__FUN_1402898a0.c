// Function: FUN_1402898a0
// Addr: 1402898a0
// Size: 968 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402898a0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined4 uVar32;
  undefined1 local_f8 [16];
  undefined1 local_e8 [176];
  
  puVar30 = (undefined8 *)FUN_14028af20(0x50);
  lVar22 = param_1[1];
  uVar32 = (undefined4)DAT_140492750;
  puVar31 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1,local_e8,uVar32);
  dVar29 = _UNK_140492ee8;
  dVar28 = _DAT_140492ee0;
  dVar23 = _UNK_140492e88;
  dVar19 = _DAT_140492e80;
  dVar1 = (double)param_1[2];
  uVar2 = *puVar31;
  uVar3 = puVar31[1];
  dVar4 = (double)param_1[3];
  dVar7 = (double)param_1[2] * _DAT_140492ee0 + (double)param_1[4] * _DAT_140492e80;
  dVar8 = (double)param_1[3] * _UNK_140492ee8 + (double)param_1[5] * _UNK_140492e88;
  dVar10 = dVar7 * _DAT_140492ee0;
  dVar6 = ((double)param_1[4] * _DAT_140492ee0 + (double)param_1[6] * _DAT_140492e80) *
          _DAT_140492e80;
  dVar11 = dVar8 * _UNK_140492ee8 +
           ((double)param_1[5] * _UNK_140492ee8 + (double)param_1[7] * _UNK_140492e88) *
           _UNK_140492e88;
  if ((dVar1 == (double)param_1[4]) && (dVar4 == (double)param_1[5])) {
    local_f8 = *(undefined1 (*) [16])(param_1 + 2);
  }
  else {
    local_f8._8_4_ = SUB84(dVar8,0);
    local_f8._0_8_ = dVar7;
    local_f8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  }
  *(int *)(puVar30 + 1) = (int)lVar22;
  *puVar30 = &PTR_FUN_140492548;
  puVar30[4] = local_f8._0_8_;
  puVar30[5] = local_f8._8_8_;
  puVar30[2] = dVar1;
  puVar30[3] = dVar4;
  puVar30[8] = uVar2;
  puVar30[9] = uVar3;
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar10 + dVar6;
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(puVar30 + 6) = auVar9;
  *param_2 = puVar30;
  puVar30 = (undefined8 *)FUN_14028af20(0x50);
  lVar22 = param_1[1];
  puVar31 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1,local_e8,(int)DAT_140492768);
  dVar8 = (double)param_1[8];
  dVar10 = (double)param_1[9];
  dVar11 = (double)param_1[6];
  dVar14 = (double)param_1[7];
  uVar2 = *puVar31;
  uVar3 = puVar31[1];
  dVar15 = (double)param_1[4];
  dVar16 = (double)param_1[5];
  dVar17 = (double)param_1[2];
  dVar18 = (double)param_1[3];
  puVar31 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1,local_f8,uVar32);
  dVar27 = _UNK_140492ed8;
  dVar26 = _DAT_140492ed0;
  dVar25 = _UNK_140492e98;
  dVar24 = _DAT_140492e90;
  uVar20 = *puVar31;
  uVar21 = puVar31[1];
  *(int *)(puVar30 + 1) = (int)lVar22;
  *puVar30 = &PTR_FUN_140492548;
  puVar30[2] = uVar20;
  puVar30[3] = uVar21;
  dVar7 = dVar15 * dVar28 + dVar11 * dVar19;
  dVar1 = dVar16 * dVar29 + dVar14 * dVar23;
  dVar1 = ((dVar18 * dVar29 + dVar16 * dVar23) * dVar29 + dVar1 * dVar23) * dVar25 +
          (dVar1 * dVar29 + (dVar14 * dVar29 + dVar10 * dVar23) * dVar23) * dVar27;
  dVar4 = dVar15 * dVar24 + dVar11 * dVar26;
  dVar6 = dVar16 * dVar25 + dVar14 * dVar27;
  auVar5._8_4_ = SUB84(dVar1,0);
  auVar5._0_8_ = ((dVar17 * dVar28 + dVar15 * dVar19) * dVar28 + dVar7 * dVar19) * dVar24 +
                 (dVar7 * dVar28 + (dVar11 * dVar28 + dVar8 * dVar19) * dVar19) * dVar26;
  auVar5._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])(puVar30 + 4) = auVar5;
  puVar30[8] = uVar2;
  puVar30[9] = uVar3;
  dVar1 = ((dVar18 * dVar25 + dVar16 * dVar27) * dVar25 + dVar6 * dVar27) * dVar29 +
          (dVar6 * dVar25 + (dVar14 * dVar25 + dVar10 * dVar27) * dVar27) * dVar23;
  auVar13._8_4_ = SUB84(dVar1,0);
  auVar13._0_8_ =
       ((dVar17 * dVar24 + dVar15 * dVar26) * dVar24 + dVar4 * dVar26) * dVar28 +
       (dVar4 * dVar24 + (dVar11 * dVar24 + dVar8 * dVar26) * dVar26) * dVar19;
  auVar13._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])(puVar30 + 6) = auVar13;
  *param_3 = puVar30;
  puVar30 = (undefined8 *)FUN_14028af20(0x50);
  dVar1 = (double)param_1[8];
  lVar22 = param_1[1];
  dVar4 = (double)param_1[9];
  if (((double)param_1[6] == dVar1) && ((double)param_1[7] == dVar4)) {
    local_f8 = *(undefined1 (*) [16])(param_1 + 8);
  }
  else {
    dVar6 = (double)param_1[7] * dVar25 + (double)param_1[9] * dVar27;
    local_f8._8_4_ = SUB84(dVar6,0);
    local_f8._0_8_ = (double)param_1[6] * dVar24 + (double)param_1[8] * dVar26;
    local_f8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  }
  dVar6 = (double)param_1[8];
  dVar7 = (double)param_1[9];
  dVar8 = (double)param_1[6];
  dVar10 = (double)param_1[7];
  dVar11 = (double)param_1[4];
  dVar19 = (double)param_1[5];
  puVar31 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1,local_e8,(int)DAT_140492768);
  uVar2 = *puVar31;
  uVar3 = puVar31[1];
  *(int *)(puVar30 + 1) = (int)lVar22;
  *puVar30 = &PTR_FUN_140492548;
  puVar30[6] = local_f8._0_8_;
  puVar30[7] = local_f8._8_8_;
  puVar30[2] = uVar2;
  puVar30[3] = uVar3;
  puVar30[8] = dVar1;
  dVar1 = (dVar19 * dVar25 + dVar10 * dVar27) * dVar25 + (dVar10 * dVar25 + dVar7 * dVar27) * dVar27
  ;
  auVar12._8_4_ = SUB84(dVar1,0);
  auVar12._0_8_ =
       (dVar11 * dVar24 + dVar8 * dVar26) * dVar24 + (dVar8 * dVar24 + dVar6 * dVar26) * dVar26;
  auVar12._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])(puVar30 + 4) = auVar12;
  puVar30[9] = dVar4;
  *param_4 = puVar30;
  return;
}

