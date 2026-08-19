// Function: FUN_1401b8c60
// Addr: 1401b8c60
// Size: 1 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1401b8c60(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar5 = fVar1;
  if (fVar1 <= fVar2) {
    fVar5 = fVar2;
  }
  fVar6 = fVar1;
  if (fVar2 <= fVar1) {
    fVar6 = fVar2;
  }
  if (fVar5 <= fVar3) {
    fVar5 = fVar3;
  }
  if (fVar3 <= fVar6) {
    fVar6 = fVar3;
  }
  param_1[2] = fVar5;
  fVar6 = fVar5 - fVar6;
  if ((fVar6 < _DAT_1404926bc) || (fVar5 <= 0.0)) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
  }
  else {
    param_1[1] = fVar6 / fVar5;
    if (fVar1 < fVar5) {
      if (fVar2 < fVar5) {
        dVar4 = (double)((fVar1 - fVar2) / fVar6) + _DAT_1404928a8;
      }
      else {
        dVar4 = (double)((fVar3 - fVar1) / fVar6) + DAT_140492880;
      }
      fVar6 = (float)dVar4;
    }
    else {
      fVar6 = (fVar2 - fVar3) / fVar6;
    }
    fVar6 = fVar6 / DAT_140492930;
    *param_1 = fVar6;
    if (fVar6 < 0.0) {
      *param_1 = fVar6 + DAT_1404927d4;
      return param_1;
    }
  }
  return param_1;
}

