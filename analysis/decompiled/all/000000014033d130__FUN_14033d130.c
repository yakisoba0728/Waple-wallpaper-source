// Function: FUN_14033d130
// Addr: 14033d130
// Size: 85 bytes


void FUN_14033d130(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00014033d610(param_1 + 0x30,uVar1);
  func_0x00014033d610(param_1 + 0x60,uVar1);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

