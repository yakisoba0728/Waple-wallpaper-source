// Function: FUN_14032fb40
// Addr: 14032fb40
// Size: 99 bytes


void FUN_14032fb40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 3) == -0x21524111) {
    uVar1 = param_1[6];
    FUN_1402f7f90(uVar1,*param_1);
    *param_1 = 0;
    FUN_1402f7f90(uVar1,param_1[4]);
    param_1[4] = 0;
    FUN_1402f7f90(uVar1,param_1[5]);
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}

