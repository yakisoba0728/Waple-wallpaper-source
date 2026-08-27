// Function: FUN_1400fb450
// Addr: 1400fb450
// Size: 186 bytes


longlong * FUN_1400fb450(longlong *param_1)

{
  *param_1 = (longlong)&DAT_140475df0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x16] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  FUN_140012ae0(param_1,param_1 + 2);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_140475df8;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  FUN_14004c570(param_1 + 2);
  return param_1;
}

