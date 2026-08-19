// Function: FUN_14000f110
// Addr: 14000f110
// Size: 59 bytes


longlong FUN_14000f110(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  param_1 = param_1 + -0x98;
  func_0x000140005c20(param_1);
  if ((param_2 & 1) != 0) {
    lVar1 = func_0x00014028b040(param_1,0xf8);
    return lVar1;
  }
  return param_1;
}

