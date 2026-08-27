// Function: FUN_1401240c0
// Addr: 1401240c0
// Size: 56 bytes


undefined8 FUN_1401240c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x78) != 1) {
    return 0x80040227;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x40))();
  if (-1 < (int)uVar1) {
    *(undefined4 *)(param_1 + 0x78) = 2;
  }
  return uVar1;
}

