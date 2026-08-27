// Function: FUN_14024f4f0
// Addr: 14024f4f0
// Size: 36 bytes


undefined8 * FUN_14024f4f0(undefined8 *param_1,undefined8 *param_2,float param_3)

{
  *param_1 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) - param_3,(float)*param_2 - param_3);
  *(float *)(param_1 + 1) = *(float *)(param_2 + 1) - param_3;
  return param_1;
}

