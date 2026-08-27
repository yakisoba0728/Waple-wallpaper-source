// Function: FUN_140060510
// Addr: 140060510
// Size: 66 bytes


undefined8 * FUN_140060510(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[6] = 0x42700000;
  *(undefined4 *)(param_1 + 9) = 0xfffffffe;
  return param_1;
}

