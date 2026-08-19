// Function: FUN_1402eea60
// Addr: 1402eea60
// Size: 51 bytes


void FUN_1402eea60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)*param_1;
    if (*(code **)(param_1[1] + 0x10) != (code *)0x0) {
      (**(code **)(param_1[1] + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402f8060(uVar1,param_1);
  }
  return;
}

