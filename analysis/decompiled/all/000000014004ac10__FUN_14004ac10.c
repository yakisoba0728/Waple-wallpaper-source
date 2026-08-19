// Function: FUN_14004ac10
// Addr: 14004ac10
// Size: 50 bytes


longlong FUN_14004ac10(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  param_1 = param_1 + -0xa8;
  FUN_14003fb60(param_1);
  if ((param_2 & 1) != 0) {
    lVar1 = func_0x00014028b040(param_1,0x108);
    return lVar1;
  }
  return param_1;
}

