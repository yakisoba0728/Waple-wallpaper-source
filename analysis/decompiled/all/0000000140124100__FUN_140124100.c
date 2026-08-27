// Function: FUN_140124100
// Addr: 140124100
// Size: 60 bytes


undefined8 FUN_140124100(longlong param_1)

{
  undefined8 uVar1;
  
  if (1 < *(int *)(param_1 + 0x78) - 1U) {
    return 0x80040227;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x48))();
  if (-1 < (int)uVar1) {
    *(undefined4 *)(param_1 + 0x78) = 3;
  }
  return uVar1;
}

