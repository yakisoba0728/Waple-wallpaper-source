// Function: FUN_14019d570
// Addr: 14019d570
// Size: 34 bytes


undefined8 * FUN_14019d570(undefined8 *param_1,float param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *(float *)(param_1 + 1) = param_2 * *(float *)(param_3 + 1);
  *param_1 = CONCAT44((float)((ulonglong)uVar1 >> 0x20) * param_2,(float)uVar1 * param_2);
  return param_1;
}

