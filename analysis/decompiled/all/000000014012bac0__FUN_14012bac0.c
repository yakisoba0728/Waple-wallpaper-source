// Function: FUN_14012bac0
// Addr: 14012bac0
// Size: 64 bytes


longlong FUN_14012bac0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1404217a0(param_1,0,param_2 * 0x40);
    return param_1 + param_2 * 0x40;
  }
  return param_1;
}

