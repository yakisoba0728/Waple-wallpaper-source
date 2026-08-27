// Function: FUN_1402ee990
// Addr: 1402ee990
// Size: 61 bytes


void FUN_1402ee990(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)*param_1;
    if (*(code **)(param_1[1] + 0x10) != (code *)0x0) {
      (**(code **)(param_1[1] + 0x10))();
    }
    FUN_1402f7f90(uVar1,param_1);
  }
  return;
}

