// Function: FUN_140092d00
// Addr: 140092d00
// Size: 59 bytes


longlong FUN_140092d00(longlong param_1,ulonglong param_2)

{
  param_1 = param_1 + -0x90;
  FUN_14008d4b0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xf0);
  }
  return param_1;
}

