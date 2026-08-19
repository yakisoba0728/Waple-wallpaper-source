// Function: FUN_14000efe0
// Addr: 14000efe0
// Size: 86 bytes


longlong * FUN_14000efe0(longlong *param_1)

{
  *param_1 = (longlong)&DAT_140474180;
  param_1[0x14] = 0;
  param_1[2] = (longlong)&DAT_140474178;
  param_1[0x15] = 0;
  param_1[0x13] = (longlong)&DAT_14042af70;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_140012bb0(param_1,param_1 + 3);
  *(undefined **)((longlong)*(int *)(param_1[2] + 4) + 0x10 + (longlong)param_1) = &DAT_14042af80;
  *(int *)((longlong)*(int *)(param_1[2] + 4) + 0xc + (longlong)param_1) =
       *(int *)(param_1[2] + 4) + -0x10;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_140474170;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x20;
  *(undefined **)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &DAT_140474200;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x98;
  func_0x000140012c50(param_1 + 3);
  param_1[3] = (longlong)&PTR_UNWIND_INFO_1400144a2_UnwindCodes_61__OffsetInProlog_140474188;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}

