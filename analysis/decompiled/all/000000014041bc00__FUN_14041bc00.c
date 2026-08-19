// Function: FUN_14041bc00
// Addr: 14041bc00
// Size: 140 bytes


void FUN_14041bc00(uint param_1)

{
  if (((param_1 & 0x7f800000) == 0x7f800000) && ((param_1 & 0x7fffff) == 0)) {
    FUN_1402ecc10(&DAT_140472150,0x20,0xffc00000,1,8,0x21,param_1,0,1);
    return;
  }
  return;
}

