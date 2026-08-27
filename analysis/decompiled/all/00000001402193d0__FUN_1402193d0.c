// Function: FUN_1402193d0
// Addr: 1402193d0
// Size: 90 bytes


undefined8 * FUN_1402193d0(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined2 *)((longlong)param_1 + 0x4d) = 0;
    *(undefined1 *)((longlong)param_1 + 0x4f) = 0;
    *param_1 = 0x3f800000;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined8 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
    param_1 = param_1 + 10;
  }
  return param_1;
}

