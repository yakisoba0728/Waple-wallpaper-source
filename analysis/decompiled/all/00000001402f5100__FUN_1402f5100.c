// Function: FUN_1402f5100
// Addr: 1402f5100
// Size: 69 bytes


void FUN_1402f5100(longlong *param_1)

{
  if (param_1[4] != 0) {
    if (*param_1 != 0) {
      (**(code **)(param_1[6] + 0x10))(param_1[6]);
    }
    *param_1 = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    return;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

