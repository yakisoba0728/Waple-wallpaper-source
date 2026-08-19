// Function: FUN_1403e6460
// Addr: 1403e6460
// Size: 73 bytes


void FUN_1403e6460(int *param_1,int *param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  
  if (*param_2 == 2) goto LAB_1403e657f;
  if (*param_2 != 1) {
    return;
  }
  if (*param_1 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = uVar1;
    param_1[4] = param_2[4];
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  pfVar4 = (float *)(param_2 + 3);
  pfVar3 = (float *)(param_1 + 1);
  if (*pfVar4 <= (float)param_2[1]) {
code_r0x0001403e653d:
    *pfVar3 = 0.0;
    param_1[2] = 0;
    param_1[3] = -0x40800000;
    fVar5 = DAT_140492a88;
  }
  else {
    if ((float)param_2[4] <= (float)param_2[2]) goto code_r0x0001403e653d;
    if ((float)param_1[3] <= *pfVar3) goto code_r0x0001403e653d;
    if ((float)param_1[4] <= (float)param_1[2]) goto code_r0x0001403e653d;
    pfVar2 = (float *)(param_2 + 1);
    if ((float)param_2[1] <= *pfVar3) {
      pfVar2 = pfVar3;
    }
    *pfVar3 = *pfVar2;
    pfVar3 = (float *)(param_2 + 2);
    if ((float)param_2[2] <= (float)param_1[2]) {
      pfVar3 = (float *)(param_1 + 2);
    }
    param_1[2] = (int)*pfVar3;
    if ((float)param_1[3] <= *pfVar4) {
      pfVar4 = (float *)(param_1 + 3);
    }
    param_1[3] = (int)*pfVar4;
    pfVar4 = (float *)(param_2 + 4);
    if ((float)param_1[4] <= (float)param_2[4]) {
      pfVar4 = (float *)(param_1 + 4);
    }
    fVar5 = *pfVar4;
  }
  param_1[4] = (int)fVar5;
  if (((float)param_1[1] < (float)param_1[3]) && ((float)param_1[2] < fVar5)) {
    return;
  }
LAB_1403e657f:
  *param_1 = 2;
  return;
}

