// Function: FUN_14004c570
// Addr: 14004c570
// Size: 132 bytes


undefined8 * FUN_14004c570(undefined8 *param_1)

{
  FUN_140012b80();
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x71) = 0;
  *param_1 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  param_1[3] = param_1 + 1;
  param_1[0xb] = (undefined4 *)((longlong)param_1 + 0x4c);
  param_1[4] = param_1 + 2;
  param_1[7] = param_1 + 5;
  param_1[8] = param_1 + 6;
  param_1[10] = param_1 + 9;
  param_1[2] = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = DAT_1404e8f40;
  param_1[0xd] = 0;
  return param_1;
}

