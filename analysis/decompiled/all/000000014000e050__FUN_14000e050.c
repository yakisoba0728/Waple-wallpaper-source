// Function: FUN_14000e050
// Addr: 14000e050
// Size: 399 bytes


longlong * FUN_14000e050(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined2 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 local_58 [8];
  longlong *local_50;
  
  *param_1 = (longlong)&DAT_140474180;
  param_1[0x14] = 0;
  param_1[2] = (longlong)&DAT_140474178;
  param_1[0x13] = (longlong)&DAT_140474208;
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
  *(undefined **)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &DAT_140474168;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  lVar10 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  func_0x000140013940(lVar10);
  *(longlong **)(lVar10 + 0x48) = param_1 + 3;
  *(undefined8 *)(lVar10 + 0x50) = 0;
  plVar8 = *(longlong **)(*(longlong *)(lVar10 + 0x40) + 8);
  local_50 = plVar8;
  (**(code **)(*plVar8 + 8))(plVar8);
  plVar6 = (longlong *)FUN_14000f520(local_58);
  uVar5 = (**(code **)(*plVar6 + 0x60))(plVar6,0x20);
  puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8);
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  *(undefined2 *)(lVar10 + 0x58) = uVar5;
  if (*(longlong *)(lVar10 + 0x48) == 0) {
    plVar8 = (longlong *)func_0x000140013c20(lVar10,*(uint *)(lVar10 + 0x10) | 4,0);
    return plVar8;
  }
  plVar8 = param_1 + 4;
  plVar6 = param_1 + 5;
  plVar1 = param_1 + 9;
  puVar2 = (undefined4 *)((longlong)param_1 + 100);
  *(undefined **)((longlong)*(int *)(param_1[2] + 4) + 0x10 + (longlong)param_1) = &DAT_140474288;
  *(int *)((longlong)*(int *)(param_1[2] + 4) + 0xc + (longlong)param_1) =
       *(int *)(param_1[2] + 4) + -0x10;
  *(undefined **)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &DAT_140474290;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x20;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       &PTR_UNWIND_INFO_1400137c0_UnwindCodes_44__OffsetInProlog_140474310;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x98;
  param_1[3] = (longlong)&PTR_UNWIND_INFO_14000f243_UnwindCodes_4__UnwindOpCode_140474210;
  *plVar8 = 0;
  plVar3 = param_1 + 0xc;
  *plVar6 = 0;
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
  lVar10 = func_0x00014028aff0(0x10);
  uVar9 = FUN_1402917d0();
  *(undefined8 *)(lVar10 + 8) = uVar9;
  param_1[0xf] = lVar10;
  param_1[6] = (longlong)plVar8;
  param_1[7] = (longlong)plVar6;
  param_1[10] = (longlong)plVar4;
  param_1[0xb] = (longlong)plVar1;
  param_1[0xd] = (longlong)plVar3;
  param_1[0xe] = (longlong)puVar2;
  *plVar6 = 0;
  *plVar1 = 0;
  *puVar2 = 0;
  *plVar8 = 0;
  *plVar4 = 0;
  *(undefined4 *)plVar3 = 0;
  param_1[3] = (longlong)&PTR_UNWIND_INFO_14000f07b_UnwindCodes_0__UnwindOpCode_140474298;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}

