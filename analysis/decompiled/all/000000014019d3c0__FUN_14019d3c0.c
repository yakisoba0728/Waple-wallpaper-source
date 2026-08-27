// Function: FUN_14019d3c0
// Addr: 14019d3c0
// Size: 32 bytes


undefined8 * FUN_14019d3c0(undefined8 *param_1,float param_2)

{
  *(float *)(param_1 + 1) = param_2 * *(float *)(param_1 + 1);
  *param_1 = CONCAT44((float)((ulonglong)*param_1 >> 0x20) * param_2,(float)*param_1 * param_2);
  return param_1;
}

