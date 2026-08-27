// Function: FUN_1400fb510
// Addr: 1400fb510
// Size: 40 bytes


longlong FUN_1400fb510(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0xc0000001;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x10);
  }
  return param_1;
}

