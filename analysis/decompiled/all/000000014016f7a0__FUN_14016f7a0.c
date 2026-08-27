// Function: FUN_14016f7a0
// Addr: 14016f7a0
// Size: 86 bytes


undefined8 * FUN_14016f7a0(undefined8 *param_1,char *param_2,undefined4 *param_3)

{
  size_t sVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(param_2);
  FUN_140017480(param_1,param_2,sVar1);
  *(undefined4 *)(param_1 + 4) = *param_3;
  return param_1;
}

