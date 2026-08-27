// Function: FUN_140308940
// Addr: 140308940
// Size: 71 bytes


void FUN_140308940(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  FUN_1402f7f90(uVar1,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_2 + 0x10) = 0;
  FUN_1402f7f90(uVar1,*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}

