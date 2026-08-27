// Function: FUN_14019df90
// Addr: 14019df90
// Size: 428 bytes


float * FUN_14019df90(float *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                     float *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined1 local_a8 [160];
  
  uVar1 = FUN_14005ecb0(local_a8,param_4);
  FUN_14005f730(&local_e8,uVar1);
  fVar3 = (*param_2 - *param_5) / param_5[2];
  fVar2 = (param_2[1] - param_5[1]) / param_5[3];
  fVar5 = (param_2[2] + param_2[2]) - DAT_140492704;
  fVar4 = (fVar3 + fVar3) - DAT_140492704;
  fVar3 = (fVar2 + fVar2) - DAT_140492704;
  fVar2 = fVar5 * local_bc + local_ac + fVar3 * local_cc + fVar4 * local_dc;
  *param_1 = (local_b8 + fVar5 * local_c8 + fVar3 * local_d8 + local_e8 * fVar4) / fVar2;
  param_1[2] = (fVar5 * local_c0 + local_b0 + local_e0 * fVar4 + local_d0 * fVar3) / fVar2;
  param_1[1] = (local_b4 + fVar5 * local_c4 + fVar4 * local_e4 + local_d4 * fVar3) / fVar2;
  return param_1;
}

