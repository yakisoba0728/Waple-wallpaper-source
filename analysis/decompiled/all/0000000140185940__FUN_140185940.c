// Function: FUN_140185940
// Addr: 140185940
// Size: 11 bytes


uint FUN_140185940(longlong param_1)

{
  return CONCAT31((uint3)(*(uint *)(param_1 + 0x2c4) >> 9),(char)(*(uint *)(param_1 + 0x2c4) >> 1))
         & 0xffffff01;
}

