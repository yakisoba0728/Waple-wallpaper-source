// Function: FUN_1402c97a0
// Addr: 1402c97a0
// Size: 41 bytes


uint FUN_1402c97a0(void)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = FUN_1402d9894();
  uVar2 = *(int *)(lVar1 + 0x28) * 0x343fd + 0x269ec3;
  *(uint *)(lVar1 + 0x28) = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}

