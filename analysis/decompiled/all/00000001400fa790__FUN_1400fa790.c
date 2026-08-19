// Function: FUN_1400fa790
// Addr: 1400fa790
// Size: 40 bytes


longlong FUN_1400fa790(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 0xc0000001;
  if ((param_2 & 1) != 0) {
    lVar1 = func_0x00014028b040(param_1,0x88);
    return lVar1;
  }
  return param_1;
}

