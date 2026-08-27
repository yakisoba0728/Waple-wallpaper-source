// Function: FUN_14027ba30
// Addr: 14027ba30
// Size: 145 bytes


float FUN_14027ba30(float *param_1,float *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  dVar4 = DAT_140492778 - param_3;
  fVar2 = (float)((double)param_1[1] * dVar4 + (double)param_2[1] * param_3);
  fVar1 = (float)((double)*param_1 * dVar4 + (double)*param_2 * param_3);
  fVar3 = fVar2;
  if (fVar2 <= fVar1) {
    fVar3 = fVar1;
  }
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  fVar1 = (float)((double)param_1[2] * dVar4 + (double)param_2[2] * param_3);
  if (fVar3 <= fVar1) {
    fVar1 = fVar3;
  }
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}

