// Function: FUN_140285fe0
// Addr: 140285fe0
// Size: 77 bytes


undefined8 * FUN_140285fe0(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffefffffffffffff;
    param_1[1] = 0;
    param_1[2] = 0xffefffffffffffff;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[3] = 0x7fefffffffffffff;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1 = param_1 + 8;
  }
  return param_1;
}

