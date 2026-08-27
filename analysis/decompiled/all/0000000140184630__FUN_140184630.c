// Function: FUN_140184630
// Addr: 140184630
// Size: 38 bytes


undefined8 * FUN_140184630(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 2) = 0xbf800000;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  return param_1;
}

