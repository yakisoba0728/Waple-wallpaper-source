// Function: FUN_140113bc0
// Addr: 140113bc0
// Size: 23 bytes


undefined8 * FUN_140113bc0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x1000000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}

