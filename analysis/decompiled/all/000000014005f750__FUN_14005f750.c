// Function: FUN_14005f750
// Addr: 14005f750
// Size: 49 bytes


undefined4 * FUN_14005f750(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  param_1[5] = param_2;
  param_1[10] = param_2;
  param_1[0xf] = param_2;
  return param_1;
}

