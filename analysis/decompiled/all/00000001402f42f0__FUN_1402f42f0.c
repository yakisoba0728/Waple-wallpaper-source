// Function: FUN_1402f42f0
// Addr: 1402f42f0
// Size: 24 bytes


undefined8 FUN_1402f42f0(longlong param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    return 0x23;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 0x60);
  *piVar1 = *piVar1 + 1;
  return 0;
}

