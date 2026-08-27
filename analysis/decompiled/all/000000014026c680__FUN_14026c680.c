// Function: FUN_14026c680
// Addr: 14026c680
// Size: 337 bytes


undefined8 * FUN_14026c680(undefined8 *param_1,longlong param_2)

{
  param_1[2] = param_2 + 0x1c88;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_1404921f8;
  FUN_140153760(param_1 + 9);
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xf;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2c] = 0x3f800000;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f000000;
  param_1[0x32] = param_2;
  FUN_1401a38f0(param_1 + 1,0);
  return param_1;
}

