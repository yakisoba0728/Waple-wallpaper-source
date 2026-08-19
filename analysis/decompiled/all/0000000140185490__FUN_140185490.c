// Function: FUN_140185490
// Addr: 140185490
// Size: 130 bytes


undefined8 FUN_140185490(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_58;
  float fStack_54;
  float fStack_50;
  float afStack_4c [19];
  
  fVar4 = (*param_3 - *param_1) * (DAT_1404927d4 / *param_2);
  fVar3 = ((float)((uint)*param_3 ^ DAT_1404930c0) - *param_1) * (DAT_1404927d4 / *param_2);
  fStack_54 = ((float)((uint)param_3[1] ^ DAT_1404930c0) - param_1[1]) *
              (DAT_1404927d4 / param_2[1]);
  local_58 = (param_3[1] - param_1[1]) * (DAT_1404927d4 / param_2[1]);
  afStack_4c[0] =
       ((float)((uint)param_3[2] ^ DAT_1404930c0) - param_1[2]) * (DAT_1404927d4 / param_2[2]);
  fVar2 = fVar4;
  if (fVar3 <= fVar4) {
    fVar2 = fVar3;
  }
  pfVar1 = &local_58;
  if (fStack_54 <= local_58) {
    pfVar1 = &fStack_54;
  }
  fStack_50 = (param_3[2] - param_1[2]) * (DAT_1404927d4 / param_2[2]);
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = *pfVar1;
  if (*pfVar1 <= fVar2) {
    fVar3 = fVar2;
  }
  pfVar1 = &fStack_50;
  if (afStack_4c[0] <= fStack_50) {
    pfVar1 = afStack_4c;
  }
  fVar2 = *pfVar1;
  if (*pfVar1 <= fVar3) {
    fVar2 = fVar3;
  }
  pfVar1 = &local_58;
  if (local_58 <= fStack_54) {
    pfVar1 = &fStack_54;
  }
  fVar3 = *pfVar1;
  if (fVar4 <= *pfVar1) {
    fVar3 = fVar4;
  }
  pfVar1 = &fStack_50;
  if (fStack_50 <= afStack_4c[0]) {
    pfVar1 = afStack_4c;
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

