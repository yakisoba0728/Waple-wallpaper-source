// Function: FUN_140213130
// Addr: 140213130
// Size: 97 bytes


longlong FUN_140213130(longlong param_1,ulonglong param_2)

{
  FUN_14000d9e0(param_1 + 0xb8);
  FUN_14015a700(param_1 + 0xa8);
  FUN_14000d9e0(param_1 + 0x78);
  FUN_14015a780(param_1 + 0x68);
  FUN_1401a3b60(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xf0);
  }
  return param_1;
}

