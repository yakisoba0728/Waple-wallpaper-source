// Function: FUN_140184440
// Addr: 140184440
// Size: 119 bytes


float * FUN_140184440(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  fVar1 = param_3[1];
  fVar2 = *param_3;
  uVar4 = *(undefined8 *)(param_2 + 1);
  fVar3 = param_3[2];
  uVar5 = *(undefined8 *)(param_2 + 7);
  *param_1 = fVar1 * param_2[3] + fVar2 * *param_2 + fVar3 * param_2[6];
  *(ulonglong *)(param_1 + 1) =
       CONCAT44((float)((ulonglong)uVar4 >> 0x20) * fVar2 +
                (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20) * fVar1 +
                (float)((ulonglong)uVar5 >> 0x20) * fVar3,
                (float)uVar4 * fVar2 + (float)*(undefined8 *)(param_2 + 4) * fVar1 +
                (float)uVar5 * fVar3);
  return param_1;
}

