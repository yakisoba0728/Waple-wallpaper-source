// Function: FUN_14009a700
// Addr: 14009a700
// Size: 23 bytes


void FUN_14009a700(undefined8 param_1,float *param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  fVar1 = DAT_140492878;
  *param_2 = DAT_140492878 / (param_4 - param_3);
  fVar2 = DAT_140492a88;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = fVar1 / (param_6 - param_5);
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[10] = fVar2 / (param_7 - param_8);
  uVar3 = DAT_1404930c0;
  param_2[0xb] = 0.0;
  param_2[0xc] = (float)((uint)(param_3 + param_4) ^ uVar3) / (param_4 - param_3);
  param_2[0xd] = (float)((uint)(param_5 + param_6) ^ uVar3) / (param_6 - param_5);
  param_2[0xe] = (float)((uint)param_8 ^ uVar3) / (param_7 - param_8);
  param_2[0xf] = 1.0;
  return;
}

