// Function: FUN_1401d8360
// Addr: 1401d8360
// Size: 67 bytes


float * FUN_1401d8360(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = DAT_140492704;
  fVar2 = 0.0;
  if (0.0 <= *param_2) {
    fVar2 = *param_2;
  }
  fVar4 = 0.0;
  if (0.0 <= param_2[2]) {
    fVar4 = param_2[2];
  }
  fVar1 = DAT_140492704;
  if (fVar2 <= DAT_140492704) {
    fVar1 = fVar2;
  }
  fVar2 = 0.0;
  if (0.0 <= param_2[1]) {
    fVar2 = param_2[1];
  }
  *param_1 = fVar1;
  fVar1 = fVar3;
  if (fVar2 <= fVar3) {
    fVar1 = fVar2;
  }
  if (fVar4 <= fVar3) {
    fVar3 = fVar4;
  }
  param_1[1] = fVar1;
  param_1[2] = fVar3;
  return param_1;
}

