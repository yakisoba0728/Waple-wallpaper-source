// Function: FUN_14000f040
// Addr: 14000f040
// Size: 59 bytes


longlong FUN_14000f040(longlong param_1,ulonglong param_2)

{
  param_1 = param_1 + -0x98;
  FUN_140005b50(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xf8);
  }
  return param_1;
}

