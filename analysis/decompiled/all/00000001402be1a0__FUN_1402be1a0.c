// Function: FUN_1402be1a0
// Addr: 1402be1a0
// Size: 76 bytes


undefined4 FUN_1402be1a0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1402bdf30();
  lVar2 = FUN_1402bbec0();
  *(undefined4 *)(lVar2 + 0x78) = 0xfffffffe;
  return uVar1;
}

