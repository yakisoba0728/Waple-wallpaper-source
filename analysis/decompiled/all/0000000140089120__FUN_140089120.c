// Function: FUN_140089120
// Addr: 140089120
// Size: 58 bytes


longlong * FUN_140089120(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  *param_1 = (longlong)&DAT_140474178;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x11] = (longlong)&DAT_14042af80;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x10;
  lVar3 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  func_0x000140013940(lVar3);
  plVar1 = param_1 + 1;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(longlong **)(lVar3 + 0x48) = plVar1;
  uVar2 = FUN_140013560(lVar3,0x20);
  *(undefined1 *)(lVar3 + 0x58) = uVar2;
  if (*(longlong *)(lVar3 + 0x48) == 0) {
    func_0x000140013c20(lVar3,*(uint *)(lVar3 + 0x10) | 4,0);
  }
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_DAT_140478960;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x88;
  func_0x000140012c50(plVar1);
  param_1[0xe] = 0;
  *plVar1 = (longlong)&PTR_UNWIND_INFO_1400144a2_UnwindCodes_61__OffsetInProlog_140474188;
  *(undefined4 *)(param_1 + 0xf) = 4;
  return param_1;
}

