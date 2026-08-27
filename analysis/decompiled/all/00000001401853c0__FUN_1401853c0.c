// Function: FUN_1401853c0
// Addr: 1401853c0
// Size: 339 bytes


undefined8 FUN_1401853c0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_58;
  float local_54;
  float local_50;
  float local_4c [19];
  
  fVar4 = (*param_3 - *param_1) * (DAT_140492704 / *param_2);
  fVar3 = ((float)((uint)*param_3 ^ DAT_140492ff0) - *param_1) * (DAT_140492704 / *param_2);
  local_54 = ((float)((uint)param_3[1] ^ DAT_140492ff0) - param_1[1]) * (DAT_140492704 / param_2[1])
  ;
  local_58 = (param_3[1] - param_1[1]) * (DAT_140492704 / param_2[1]);
  local_4c[0] = ((float)((uint)param_3[2] ^ DAT_140492ff0) - param_1[2]) *
                (DAT_140492704 / param_2[2]);
  fVar2 = fVar4;
  if (fVar3 <= fVar4) {
    fVar2 = fVar3;
  }
  pfVar1 = &local_58;
  if (local_54 <= local_58) {
    pfVar1 = &local_54;
  }
  local_50 = (param_3[2] - param_1[2]) * (DAT_140492704 / param_2[2]);
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = *pfVar1;
  if (*pfVar1 <= fVar2) {
    fVar3 = fVar2;
  }
  pfVar1 = &local_50;
  if (local_4c[0] <= local_50) {
    pfVar1 = local_4c;
  }
  fVar2 = *pfVar1;
  if (*pfVar1 <= fVar3) {
    fVar2 = fVar3;
  }
  pfVar1 = &local_58;
  if (local_58 <= local_54) {
    pfVar1 = &local_54;
  }
  fVar3 = *pfVar1;
  if (fVar4 <= *pfVar1) {
    fVar3 = fVar4;
  }
  pfVar1 = &local_50;
  if (local_50 <= local_4c[0]) {
    pfVar1 = local_4c;
  }
  fVar4 = *pfVar1;
  if (fVar3 <= *pfVar1) {
    fVar4 = fVar3;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar2;
  }
  return CONCAT71((int7)((ulonglong)pfVar1 >> 8),fVar2 <= fVar4);
}

