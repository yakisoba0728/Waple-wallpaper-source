// Function: FUN_140132c10
// Addr: 140132c10
// Size: 123 bytes


undefined4 * FUN_140132c10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  FUN_14000df10(param_1 + 6,param_2 + 6);
  FUN_14000df10(param_1 + 0xe,param_2 + 0xe);
  FUN_14000df10(param_1 + 0x16,param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  param_1[0x20] = param_2[0x20];
  return param_1;
}

