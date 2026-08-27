// Function: FUN_1401e2810
// Addr: 1401e2810
// Size: 82 bytes


undefined4 * FUN_1401e2810(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = 0;
  param_1[4] = param_2[3];
  param_1[5] = param_2[4];
  param_1[6] = param_2[5];
  param_1[7] = 0;
  param_1[8] = param_2[6];
  param_1[9] = param_2[7];
  param_1[10] = param_2[8];
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0x3f800000;
  return param_1;
}

