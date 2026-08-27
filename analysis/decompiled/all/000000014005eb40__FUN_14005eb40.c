// Function: FUN_14005eb40
// Addr: 14005eb40
// Size: 32 bytes


undefined8 * FUN_14005eb40(undefined8 *param_1,undefined8 *param_2,float param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(float *)(param_1 + 1) = param_3 * *(float *)(param_2 + 1);
  *param_1 = CONCAT44((float)((ulonglong)uVar1 >> 0x20) * param_3,(float)uVar1 * param_3);
  return param_1;
}

