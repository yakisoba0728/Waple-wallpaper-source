// Function: FUN_14005f650
// Addr: 14005f650
// Size: 38 bytes


undefined8 *
FUN_14005f650(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_3[1];
  param_1[2] = *param_3;
  param_1[3] = uVar1;
  uVar1 = param_4[1];
  param_1[4] = *param_4;
  param_1[5] = uVar1;
  uVar1 = param_5[1];
  param_1[6] = *param_5;
  param_1[7] = uVar1;
  return param_1;
}

