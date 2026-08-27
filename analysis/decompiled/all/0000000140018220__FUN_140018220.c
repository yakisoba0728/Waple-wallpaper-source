// Function: FUN_140018220
// Addr: 140018220
// Size: 22 bytes


undefined4 * FUN_140018220(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}

