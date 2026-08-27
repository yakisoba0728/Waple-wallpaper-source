// Function: FUN_140124080
// Addr: 140124080
// Size: 61 bytes


undefined8 FUN_140124080(longlong param_1)

{
  undefined8 uVar1;
  
  if (1 < *(int *)(param_1 + 0x78) - 2U) {
    return 0x80040227;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x38))();
  if (-1 < (int)uVar1) {
    *(undefined4 *)(param_1 + 0x78) = 1;
  }
  return uVar1;
}

