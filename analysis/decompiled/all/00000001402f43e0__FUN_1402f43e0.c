// Function: FUN_1402f43e0
// Addr: 1402f43e0
// Size: 20 bytes


undefined8 FUN_1402f43e0(longlong param_1)

{
  if (param_1 == 0) {
    return 0x21;
  }
  *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
  return 0;
}

