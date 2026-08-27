// Function: FUN_14026b240
// Addr: 14026b240
// Size: 37 bytes


undefined8 * FUN_14026b240(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  return param_1;
}

