// Function: FUN_14009c4e0
// Addr: 14009c4e0
// Size: 23 bytes


undefined8 * FUN_14009c4e0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  param_1[3] = 0;
  return param_1;
}

