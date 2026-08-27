// Function: FUN_1403248a0
// Addr: 1403248a0
// Size: 124 bytes


void FUN_1403248a0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 0x120);
  FUN_1402f7f90(uVar1,*(undefined8 *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  FUN_1402f7f90(uVar1,*(undefined8 *)(param_1 + 0x118));
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  return;
}

