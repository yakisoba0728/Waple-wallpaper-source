// Function: FUN_1400170d0
// Addr: 1400170d0
// Size: 33 bytes


undefined8 * FUN_1400170d0(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  *param_1 = param_2;
  sVar1 = strlen(param_2);
  param_1[1] = sVar1;
  return param_1;
}

