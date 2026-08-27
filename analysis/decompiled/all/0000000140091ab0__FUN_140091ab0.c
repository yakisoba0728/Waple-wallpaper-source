// Function: FUN_140091ab0
// Addr: 140091ab0
// Size: 86 bytes


longlong FUN_140091ab0(longlong param_1,ulonglong param_2)

{
  FUN_140017240(param_1 + 0xb0);
  FUN_140017240(param_1 + 0x60);
  FUN_140092620(param_1 + 0x38);
  FUN_1400929a0(param_1 + 0x10);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xf0);
  }
  return param_1;
}

