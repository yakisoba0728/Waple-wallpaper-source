// Function: FUN_140185300
// Addr: 140185300
// Size: 103 bytes


longlong FUN_140185300(longlong param_1,ulonglong param_2)

{
  FUN_14000d9e0(param_1 + 0x298);
  FUN_14015a700(param_1 + 0x288);
  FUN_14000d9e0(param_1 + 600);
  FUN_14015a780(param_1 + 0x248);
  FUN_1401de1e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x2c0);
  }
  return param_1;
}

