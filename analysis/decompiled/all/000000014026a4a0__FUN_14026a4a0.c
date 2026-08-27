// Function: FUN_14026a4a0
// Addr: 14026a4a0
// Size: 88 bytes


undefined8 * FUN_14026a4a0(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    param_1[4] = 0x3f800000;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 9) = 0x3f800000;
    param_1 = (undefined8 *)((longlong)param_1 + 0x4c);
  }
  return param_1;
}

