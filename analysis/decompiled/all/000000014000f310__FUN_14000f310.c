// Function: FUN_14000f310
// Addr: 14000f310
// Size: 59 bytes


longlong FUN_14000f310(longlong param_1,ulonglong param_2)

{
  param_1 = param_1 + -0x98;
  FUN_1400056d0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xf8);
  }
  return param_1;
}

