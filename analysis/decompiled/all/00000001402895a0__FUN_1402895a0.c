// Function: FUN_1402895a0
// Addr: 1402895a0
// Size: 286 bytes


void FUN_1402895a0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined1 local_78 [16];
  undefined1 local_68 [48];
  
  puVar12 = (undefined8 *)FUN_14028af20(0x30);
  lVar9 = param_1[1];
  puVar13 = (undefined4 *)(**(code **)(*param_1 + 0x20))(param_1,local_78,(int)DAT_140492750);
  lVar10 = param_1[2];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  lVar11 = param_1[3];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar3 = *puVar13;
  uVar4 = puVar13[1];
  uVar5 = puVar13[2];
  uVar6 = puVar13[3];
  *(int *)(puVar12 + 1) = (int)lVar9;
  *puVar12 = &PTR_FUN_1404924d0;
  *(undefined4 *)(puVar12 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = uVar4;
  *(undefined4 *)(puVar12 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = uVar6;
  *(int *)(puVar12 + 2) = (int)lVar10;
  *(undefined4 *)((longlong)puVar12 + 0x14) = uVar1;
  *(int *)(puVar12 + 3) = (int)lVar11;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar2;
  *param_2 = puVar12;
  puVar12 = (undefined8 *)FUN_14028af20(0x30);
  lVar9 = param_1[1];
  puVar14 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1,local_78,(int)DAT_140492768);
  uVar7 = *puVar14;
  uVar8 = puVar14[1];
  puVar13 = (undefined4 *)(**(code **)(*param_1 + 0x20))(param_1,local_68,(int)DAT_140492750);
  uVar1 = *puVar13;
  uVar2 = puVar13[1];
  uVar3 = puVar13[2];
  uVar4 = puVar13[3];
  *(int *)(puVar12 + 1) = (int)lVar9;
  *puVar12 = &PTR_FUN_1404924d0;
  *(undefined4 *)(puVar12 + 2) = uVar1;
  *(undefined4 *)((longlong)puVar12 + 0x14) = uVar2;
  *(undefined4 *)(puVar12 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar4;
  puVar12[4] = uVar7;
  puVar12[5] = uVar8;
  *param_3 = puVar12;
  puVar12 = (undefined8 *)FUN_14028af20(0x30);
  lVar11 = param_1[1];
  lVar9 = param_1[4];
  lVar10 = param_1[5];
  puVar14 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1,local_68,(int)DAT_140492768);
  uVar7 = *puVar14;
  uVar8 = puVar14[1];
  *(int *)(puVar12 + 1) = (int)lVar11;
  *puVar12 = &PTR_FUN_1404924d0;
  puVar12[4] = lVar9;
  puVar12[5] = lVar10;
  puVar12[2] = uVar7;
  puVar12[3] = uVar8;
  *param_4 = puVar12;
  return;
}

