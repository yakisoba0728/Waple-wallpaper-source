// Function: FUN_140016750
// Addr: 140016750
// Size: 32 bytes


void FUN_140016750(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined2 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  return;
}

