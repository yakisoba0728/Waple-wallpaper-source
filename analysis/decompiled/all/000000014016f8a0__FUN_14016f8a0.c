// Function: FUN_14016f8a0
// Addr: 14016f8a0
// Size: 69 bytes


undefined8 * FUN_14016f8a0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_140017480(0,"g_LDirectional_Direction",0x18);
  *(undefined4 *)(param_1 + 4) = *param_3;
  return param_1;
}

