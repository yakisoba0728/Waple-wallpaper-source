// Function: FUN_14015f9a0
// Addr: 14015f9a0
// Size: 129 bytes


void FUN_14015f9a0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_2 + 0x10) = uVar1;
  func_0x00014028aff0(0x50);
  return;
}

