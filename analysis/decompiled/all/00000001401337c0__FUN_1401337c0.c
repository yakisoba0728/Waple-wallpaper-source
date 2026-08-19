// Function: FUN_1401337c0
// Addr: 1401337c0
// Size: 41 bytes


undefined8 * FUN_1401337c0(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1 = param_1 + 3;
  }
  return param_1;
}

