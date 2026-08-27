// Function: FUN_1400ce230
// Addr: 1400ce230
// Size: 161 bytes


undefined4 * FUN_1400ce230(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    *(undefined8 *)(param_3 + 0x12) = 0;
    FUN_140037830(param_3 + 4,param_1 + 4);
    *(undefined8 *)(param_3 + 0x22) = 0;
    FUN_140037830(param_3 + 0x14,param_1 + 0x14);
    param_3 = param_3 + 0x24;
  }
  FUN_1400cb330(param_3,param_3);
  return param_3;
}

