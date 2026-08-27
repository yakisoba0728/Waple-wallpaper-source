// Function: FUN_140265bd0
// Addr: 140265bd0
// Size: 85 bytes


undefined8 * FUN_140265bd0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[4] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f800000;
  param_1[9] = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return param_1;
}

