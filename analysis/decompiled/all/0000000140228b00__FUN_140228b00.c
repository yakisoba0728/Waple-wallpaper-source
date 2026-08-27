// Function: FUN_140228b00
// Addr: 140228b00
// Size: 448 bytes


float * FUN_140228b00(float *param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = DAT_140492ff0;
  fVar3 = param_2[8] * param_2[4] - param_2[7] * param_2[5];
  fVar2 = DAT_140492704 /
          ((fVar3 * *param_2 - (param_2[8] * param_2[1] - param_2[7] * param_2[2]) * param_2[3]) +
          (param_2[1] * param_2[5] - param_2[4] * param_2[2]) * param_2[6]);
  *param_1 = fVar3 * fVar2;
  param_1[3] = (float)((uint)(param_2[8] * param_2[3] - param_2[6] * param_2[5]) ^ uVar1) * fVar2;
  param_1[6] = (param_2[7] * param_2[3] - param_2[6] * param_2[4]) * fVar2;
  param_1[1] = (float)((uint)(param_2[8] * param_2[1] - param_2[7] * param_2[2]) ^ uVar1) * fVar2;
  param_1[4] = (param_2[8] * *param_2 - param_2[6] * param_2[2]) * fVar2;
  param_1[7] = (float)((uint)(param_2[7] * *param_2 - param_2[6] * param_2[1]) ^ uVar1) * fVar2;
  param_1[2] = (param_2[5] * param_2[1] - param_2[4] * param_2[2]) * fVar2;
  param_1[5] = (float)((uint)(param_2[5] * *param_2 - param_2[3] * param_2[2]) ^ uVar1) * fVar2;
  param_1[8] = (param_2[4] * *param_2 - param_2[3] * param_2[1]) * fVar2;
  return param_1;
}

