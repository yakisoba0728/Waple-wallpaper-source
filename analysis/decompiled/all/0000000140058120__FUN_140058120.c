// Function: FUN_140058120
// Addr: 140058120
// Size: 15 bytes


undefined8 * FUN_140058120(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  (*DAT_140426290)(param_1 + 0x15);
  (*DAT_140426658)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x19) = 0;
  (*DAT_140426290)(param_1 + 0x18);
  (*DAT_140426658)(param_1 + 0x17);
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return param_1;
}

