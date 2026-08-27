// Function: FUN_140335020
// Addr: 140335020
// Size: 78 bytes


void FUN_140335020(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FUN_1402f7f90(uVar1,param_1[0xf]);
    param_1[0xf] = 0;
    FUN_1402f7f90(uVar1,param_1[0x11]);
    param_1[0x11] = 0;
  }
  return;
}

