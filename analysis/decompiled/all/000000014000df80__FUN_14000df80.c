// Function: FUN_14000df80
// Addr: 14000df80
// Size: 610 bytes


longlong * FUN_14000df80(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined2 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 local_58 [8];
  longlong *local_50;
  
  *param_1 = (longlong)&DAT_1404740b0;
  param_1[0x14] = 0;
  param_1[2] = (longlong)&DAT_1404740a8;
  param_1[0x13] = (longlong)&PTR_FUN_140474138;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_140474098;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  lVar10 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  FUN_140013870(lVar10);
  *(longlong **)(lVar10 + 0x48) = param_1 + 3;
  *(undefined8 *)(lVar10 + 0x50) = 0;
  plVar5 = *(longlong **)(*(longlong *)(lVar10 + 0x40) + 8);
  local_50 = plVar5;
  (**(code **)(*plVar5 + 8))(plVar5);
  plVar7 = (longlong *)FUN_14000f450(local_58);
  uVar6 = (**(code **)(*plVar7 + 0x60))(plVar7,0x20);
  puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5);
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  *(undefined2 *)(lVar10 + 0x58) = uVar6;
  if (*(longlong *)(lVar10 + 0x48) == 0) {
    FUN_140013b50(lVar10,*(uint *)(lVar10 + 0x10) | 4,0);
  }
  plVar5 = param_1 + 4;
  plVar7 = param_1 + 5;
  plVar1 = param_1 + 9;
  puVar2 = (undefined4 *)((longlong)param_1 + 100);
  *(undefined ***)((longlong)*(int *)(param_1[2] + 4) + 0x10 + (longlong)param_1) =
       &PTR_LAB_1404741b8;
  *(int *)((longlong)*(int *)(param_1[2] + 4) + 0xc + (longlong)param_1) =
       *(int *)(param_1[2] + 4) + -0x10;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_1404741c0;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x20;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_140474240;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x98;
  param_1[3] = (longlong)&PTR_FUN_140474140;
  *plVar5 = 0;
  plVar3 = param_1 + 0xc;
  *plVar7 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  plVar4 = param_1 + 8;
  *plVar4 = 0;
  *plVar1 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)plVar3 = 0;
  *puVar2 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar10 = FUN_14028af20(0x10);
  uVar9 = FUN_140291700();
  *(undefined8 *)(lVar10 + 8) = uVar9;
  param_1[0xf] = lVar10;
  param_1[6] = (longlong)plVar5;
  param_1[7] = (longlong)plVar7;
  param_1[10] = (longlong)plVar4;
  param_1[0xb] = (longlong)plVar1;
  param_1[0xd] = (longlong)plVar3;
  param_1[0xe] = (longlong)puVar2;
  *plVar7 = 0;
  *plVar1 = 0;
  *puVar2 = 0;
  *plVar5 = 0;
  *plVar4 = 0;
  *(undefined4 *)plVar3 = 0;
  param_1[3] = (longlong)&PTR_FUN_1404741c8;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}

