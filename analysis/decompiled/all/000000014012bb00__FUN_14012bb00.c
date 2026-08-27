// Function: FUN_14012bb00
// Addr: 14012bb00
// Size: 65 bytes


longlong FUN_14012bb00(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1404217a0(param_1,0,param_2 * 0x48);
    return param_1 + param_2 * 0x48;
  }
  return param_1;
}

