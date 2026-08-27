// Function: FUN_14031cad0
// Addr: 14031cad0
// Size: 126 bytes


void FUN_14031cad0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x18))();
    }
    if (*(longlong *)(param_1 + 0x3e0) != 0) {
      FUN_14031e8a0();
      FUN_1402f7f90(uVar1,*(undefined8 *)(param_1 + 0x3e0));
      *(undefined8 *)(param_1 + 0x3e0) = 0;
    }
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x90))(param_1);
    }
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  return;
}

