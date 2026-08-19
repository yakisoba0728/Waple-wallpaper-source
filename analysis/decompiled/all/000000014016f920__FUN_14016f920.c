// Function: FUN_14016f920
// Addr: 14016f920
// Size: 19 bytes


undefined8 * FUN_14016f920(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x000140017550(0,"g_LightsColorPremultiplied",0x1a);
  *(undefined4 *)(param_1 + 4) = *param_3;
  return param_1;
}

