// Function: FUN_140170580
// Addr: 140170580
// Size: 119 bytes


void FUN_140170580(float *param_1,int *param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = param_1[1];
  fVar6 = (float)FUN_14041d0c0(fVar2,*param_1);
  fVar5 = param_1[4];
  iVar1 = (int)fVar5 + -1;
  iVar4 = (int)(fVar2 / *param_1);
  *param_4 = fVar6 / *param_1;
  iVar3 = iVar1;
  if (iVar4 <= iVar1) {
    iVar3 = iVar4;
  }
  if (iVar3 < 1) {
    iVar4 = 0;
  }
  else if (iVar1 < iVar4) {
    iVar4 = iVar1;
  }
  *param_2 = iVar4;
  if (iVar4 + 1 <= (int)fVar5) {
    fVar5 = (float)(iVar4 + 1);
  }
  *param_3 = fVar5;
  return;
}

