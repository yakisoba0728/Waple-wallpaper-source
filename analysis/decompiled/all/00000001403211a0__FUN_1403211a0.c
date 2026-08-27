// Function: FUN_1403211a0
// Addr: 1403211a0
// Size: 209 bytes


void FUN_1403211a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x288) != 0) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x288) + 0x30);
      if (*(longlong *)(param_2 + 0x2b0) != 0) {
        FUN_1402f5c00();
      }
      FUN_1402f7f90(uVar1,*(undefined8 *)(param_2 + 0x2a8));
      *(undefined8 *)(param_2 + 0x288) = 0;
      *(undefined8 *)(param_2 + 0x290) = 0;
      *(undefined8 *)(param_2 + 0x298) = 0;
      *(undefined8 *)(param_2 + 0x2a0) = 0;
      *(undefined8 *)(param_2 + 0x2a8) = 0;
      *(undefined8 *)(param_2 + 0x2b0) = 0;
    }
    FUN_1402f7f90(param_1,*(undefined8 *)(param_2 + 0x2b8));
    *(undefined8 *)(param_2 + 0x2b8) = 0;
    FUN_1402f7f90(param_1,*(undefined8 *)(param_2 + 0x248));
    *(undefined8 *)(param_2 + 0x248) = 0;
    FUN_1402f7f90(param_1,*(undefined8 *)(param_2 + 600));
    *(undefined8 *)(param_2 + 600) = 0;
    FUN_1402f7f90(param_1,*(undefined8 *)(param_2 + 0x270));
    *(undefined8 *)(param_2 + 0x270) = 0;
  }
  return;
}

