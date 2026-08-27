// Function: FUN_14000ef10
// Addr: 14000ef10
// Size: 294 bytes


longlong * FUN_14000ef10(longlong *param_1)

{
  *param_1 = (longlong)&DAT_1404740b0;
  param_1[0x14] = 0;
  param_1[2] = (longlong)&DAT_1404740a8;
  param_1[0x15] = 0;
  param_1[0x13] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_140012ae0(param_1,param_1 + 3);
  *(undefined ***)((longlong)*(int *)(param_1[2] + 4) + 0x10 + (longlong)param_1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(param_1[2] + 4) + 0xc + (longlong)param_1) =
       *(int *)(param_1[2] + 4) + -0x10;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_1404740a0;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x20;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_140474130;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_140012b80(param_1 + 3);
  param_1[3] = (longlong)&PTR_FUN_1404740b8;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}

