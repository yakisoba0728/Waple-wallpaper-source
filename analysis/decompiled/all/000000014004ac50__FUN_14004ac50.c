// Function: FUN_14004ac50
// Addr: 14004ac50
// Size: 59 bytes


longlong FUN_14004ac50(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  param_1 = param_1 + -0xb0;
  FUN_14003f800(param_1);
  if ((param_2 & 1) != 0) {
    lVar1 = func_0x00014028b040(param_1,0x110);
    return lVar1;
  }
  return param_1;
}

