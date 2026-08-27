// Function: FUN_1402f5480
// Addr: 1402f5480
// Size: 25 bytes


void FUN_1402f5480(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = param_3;
  return;
}

