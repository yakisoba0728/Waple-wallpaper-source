// Function: FUN_1400fabf0
// Addr: 1400fabf0
// Size: 63 bytes


longlong FUN_1400fabf0(longlong param_1,ulonglong param_2)

{
  FUN_14003f730(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0xc0000001;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,400);
  }
  return param_1;
}

