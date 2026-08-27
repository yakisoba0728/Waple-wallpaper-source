// Function: FUN_14026b860
// Addr: 14026b860
// Size: 284 bytes


undefined8 * FUN_14026b860(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    *(undefined8 *)((longlong)param_1 + 100) = 0;
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
    *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x74) = 0;
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0x84) = 0;
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0x447a0000;
    *(undefined8 *)((longlong)param_1 + 0x94) = 0;
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
    param_1[0x14] = 0x3f800000;
    param_1[0x15] = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
    *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc4) = 2;
    param_1[0x19] = 0x42480000;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0xffffffff;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1 = param_1 + 0x1e;
  }
  return param_1;
}

