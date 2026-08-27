// Function: FUN_14026b4d0
// Addr: 14026b4d0
// Size: 124 bytes


undefined8 * FUN_14026b4d0(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_1[4] = 0x3f800000;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    param_1[9] = 0x3f800000;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 100) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1 = param_1 + 0x10;
  }
  return param_1;
}

