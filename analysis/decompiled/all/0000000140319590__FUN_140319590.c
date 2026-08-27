// Function: FUN_140319590
// Addr: 140319590
// Size: 84 bytes


void FUN_140319590(undefined8 param_1,longlong param_2)

{
  FUN_1402f7f90(param_1,*(undefined8 *)(param_2 + 0x30));
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  FUN_1402f7f90(param_1,*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_1402f7f90(param_1,param_2);
  return;
}

