// Function: FUN_140341630
// Addr: 140341630
// Size: 53 bytes


void FUN_140341630(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_1402f7f90();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

