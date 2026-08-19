// Function: FUN_140265c70
// Addr: 140265c70
// Size: 43 bytes


undefined8 * FUN_140265c70(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 7) = 0xbf800000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  return param_1;
}

