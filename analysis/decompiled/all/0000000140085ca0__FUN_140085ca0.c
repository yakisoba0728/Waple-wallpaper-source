// Function: FUN_140085ca0
// Addr: 140085ca0
// Size: 29 bytes


longlong FUN_140085ca0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 1) >> 8 & 1) != 0) {
    lVar1 = lVar1 + 4;
  }
  return lVar1;
}

