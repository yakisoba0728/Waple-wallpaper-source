// Function: FUN_140256100
// Addr: 140256100
// Size: 143 bytes


undefined8 * FUN_140256100(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 0x7c) = 0x3f800000;
    *param_1 = 0x3f800000;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    param_1[5] = 0x3f800000;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
    param_1[8] = 0x3f800000;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined8 *)((longlong)param_1 + 0x54) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
    *(undefined4 *)((longlong)param_1 + 100) = 0;
    param_1[0xd] = 0x3f800000;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    param_1 = (undefined8 *)((longlong)param_1 + 0x84);
  }
  return param_1;
}

