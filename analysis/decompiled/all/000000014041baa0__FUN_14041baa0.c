// Function: FUN_14041baa0
// Addr: 14041baa0
// Size: 140 bytes


void FUN_14041baa0(uint param_1)

{
  if (((param_1 & 0x7f800000) == 0x7f800000) && ((param_1 & 0x7fffff) == 0)) {
    FUN_1402ecb40(&DAT_140472070,0x1e,0xffc00000,1,8,0x21,param_1,0,1);
    return;
  }
  return;
}

