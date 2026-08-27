// Function: FUN_140216600
// Addr: 140216600
// Size: 26 bytes


undefined4 * FUN_140216600(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}

