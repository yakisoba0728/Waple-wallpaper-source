// Function: FUN_1401a27f0
// Addr: 1401a27f0
// Size: 34 bytes


undefined4 * FUN_1401a27f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[4] = param_2;
  param_1[8] = param_2;
  return param_1;
}

