// Function: FUN_1402896c0
// Addr: 1402896c0
// Size: 472 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402896c0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  double dVar19;
  double dVar20;
  undefined1 local_a8 [16];
  undefined1 local_98 [96];
  
  puVar17 = (undefined8 *)FUN_14028af20(0x40);
  lVar12 = param_1[1];
  puVar18 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1,local_a8,DAT_140492750);
  dVar2 = (double)param_1[2];
  dVar3 = (double)param_1[3];
  dVar19 = (double)param_1[4];
  dVar20 = (double)param_1[5];
  uVar8 = *puVar18;
  uVar9 = puVar18[1];
  *(int *)(puVar17 + 1) = (int)lVar12;
  dVar19 = dVar19 * _DAT_140492e80;
  dVar20 = dVar20 * _UNK_140492e88;
  *puVar17 = &PTR_FUN_1404923e0;
  puVar17[2] = dVar2;
  puVar17[3] = dVar3;
  dVar2 = dVar2 * _DAT_140492ee0;
  dVar3 = dVar3 * _UNK_140492ee8;
  puVar17[6] = uVar8;
  puVar17[7] = uVar9;
  dVar3 = dVar3 + dVar20;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2 + dVar19;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(puVar17 + 4) = auVar1;
  *param_2 = puVar17;
  puVar17 = (undefined8 *)FUN_14028af20(0x40);
  lVar12 = param_1[1];
  puVar18 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1,local_a8,DAT_140492768);
  dVar19 = (double)param_1[6];
  dVar20 = (double)param_1[7];
  uVar8 = *puVar18;
  uVar9 = puVar18[1];
  dVar2 = (double)param_1[4];
  dVar3 = (double)param_1[5];
  dVar6 = (double)param_1[2];
  dVar7 = (double)param_1[3];
  puVar18 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1,local_98,DAT_140492750);
  dVar14 = _UNK_140492ea8;
  dVar13 = _DAT_140492ea0;
  dVar2 = dVar2 * _DAT_140492ec0;
  dVar3 = dVar3 * _UNK_140492ec8;
  uVar10 = *puVar18;
  uVar11 = puVar18[1];
  *(int *)(puVar17 + 1) = (int)lVar12;
  dVar16 = _UNK_140492eb8;
  dVar15 = _DAT_140492eb0;
  *puVar17 = &PTR_FUN_1404923e0;
  puVar17[2] = uVar10;
  puVar17[3] = uVar11;
  puVar17[6] = uVar8;
  puVar17[7] = uVar9;
  dVar3 = (dVar7 * dVar14 + dVar3) * dVar16 + (dVar3 + dVar20 * dVar14) * dVar16;
  auVar5._8_4_ = SUB84(dVar3,0);
  auVar5._0_8_ = (dVar6 * dVar13 + dVar2) * dVar15 + (dVar2 + dVar19 * dVar13) * dVar15;
  auVar5._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(puVar17 + 4) = auVar5;
  *param_3 = puVar17;
  puVar17 = (undefined8 *)FUN_14028af20(0x40);
  dVar19 = (double)param_1[6];
  dVar20 = (double)param_1[7];
  lVar12 = param_1[1];
  dVar2 = (double)param_1[4];
  dVar3 = (double)param_1[5];
  puVar18 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1,local_98,DAT_140492768);
  uVar8 = *puVar18;
  uVar9 = puVar18[1];
  *(int *)(puVar17 + 1) = (int)lVar12;
  dVar2 = dVar2 * _DAT_140492e90;
  dVar3 = dVar3 * _UNK_140492e98;
  *puVar17 = &PTR_FUN_1404923e0;
  dVar3 = dVar3 + dVar20 * _UNK_140492ed8;
  auVar4._8_4_ = SUB84(dVar3,0);
  auVar4._0_8_ = dVar2 + dVar19 * _DAT_140492ed0;
  auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(puVar17 + 4) = auVar4;
  puVar17[6] = dVar19;
  puVar17[7] = dVar20;
  puVar17[2] = uVar8;
  puVar17[3] = uVar9;
  *param_4 = puVar17;
  return;
}

