// Function: FUN_140170600
// Addr: 140170600
// Size: 97 bytes


longlong FUN_140170600(longlong param_1,ulonglong param_2)

{
  FUN_14000d9e0(param_1 + 0xa0);
  FUN_14015a700(param_1 + 0x90);
  FUN_14000d9e0(param_1 + 0x60);
  FUN_14015a780(param_1 + 0x50);
  FUN_1401a3b60(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xd8);
  }
  return param_1;
}

