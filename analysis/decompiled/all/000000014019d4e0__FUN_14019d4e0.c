// Function: FUN_14019d4e0
// Addr: 14019d4e0
// Size: 88 bytes


undefined8 * FUN_14019d4e0(undefined8 *param_1,undefined4 *param_2)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = param_2[3];
  *(undefined4 *)(param_1 + 1) = param_2[6];
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 2) = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2[7];
  *(undefined4 *)(param_1 + 3) = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_2[5];
  *(undefined4 *)(param_1 + 4) = param_2[8];
  return param_1;
}

