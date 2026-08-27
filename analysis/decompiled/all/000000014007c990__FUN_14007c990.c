// Function: FUN_14007c990
// Addr: 14007c990
// Size: 89 bytes


longlong FUN_14007c990(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140016fc0(param_3,param_1);
    FUN_140016fc0(param_3 + 0x20,param_1 + 0x20);
    param_3 = param_3 + 0x40;
    param_1 = param_1 + 0x40;
  }
  return param_3;
}

