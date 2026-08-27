// Function: FUN_1402151b0
// Addr: 1402151b0
// Size: 72 bytes


undefined8 *
FUN_1402151b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar1 = *param_3;
  fVar3 = DAT_140492704 - param_4;
  uVar2 = *param_2;
  *(float *)(param_1 + 1) = fVar3 * *(float *)(param_2 + 1) + param_4 * *(float *)(param_3 + 1);
  *param_1 = CONCAT44(fVar3 * (float)((ulonglong)uVar2 >> 0x20) +
                      (float)((ulonglong)uVar1 >> 0x20) * param_4,
                      fVar3 * (float)uVar2 + (float)uVar1 * param_4);
  return param_1;
}

