// Function: FUN_140089240
// Addr: 140089240
// Size: 50 bytes


longlong FUN_140089240(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  param_1 = param_1 + -0x88;
  FUN_140085f30(param_1);
  if ((param_2 & 1) != 0) {
    lVar1 = func_0x00014028b040(param_1,0xe8);
    return lVar1;
  }
  return param_1;
}

