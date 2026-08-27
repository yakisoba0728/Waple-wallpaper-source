// Function: FUN_1402f4b60
// Addr: 1402f4b60
// Size: 19 bytes


uint FUN_1402f4b60(int param_1)

{
  return param_1 + (param_1 >> 0x1f) + 0x8000U & 0xffff0000;
}

