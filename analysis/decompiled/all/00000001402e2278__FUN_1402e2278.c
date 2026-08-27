// Function: FUN_1402e2278
// Addr: 1402e2278
// Size: 25 bytes


uint FUN_1402e2278(void)

{
  return *(uint *)(*(longlong *)((longlong)Self + 0x60) + 0xbc) >> 8 & 0xffffff01;
}

