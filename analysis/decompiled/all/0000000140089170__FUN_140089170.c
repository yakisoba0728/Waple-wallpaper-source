// Function: FUN_140089170
// Addr: 140089170
// Size: 59 bytes


longlong FUN_140089170(longlong param_1,ulonglong param_2)

{
  param_1 = param_1 + -0x88;
  FUN_140085e60(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xe8);
  }
  return param_1;
}

