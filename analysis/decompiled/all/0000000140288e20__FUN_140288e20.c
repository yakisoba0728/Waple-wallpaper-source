// Function: FUN_140288e20
// Addr: 140288e20
// Size: 469 bytes


void FUN_140288e20(longlong *param_1,double *param_2,double *param_3,double *param_4,double *param_5
                  )

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 local_68 [64];
  
  dVar5 = (double)param_1[2];
  dVar1 = (double)param_1[3];
  if (dVar5 < *param_2) {
    *param_2 = dVar5;
  }
  if (dVar1 < *param_3) {
    *param_3 = dVar1;
  }
  if (*param_4 <= dVar5 && dVar5 != *param_4) {
    *param_4 = dVar5;
  }
  if (*param_5 <= dVar1 && dVar1 != *param_5) {
    *param_5 = dVar1;
  }
  dVar5 = (double)param_1[6];
  dVar1 = (double)param_1[7];
  if (dVar5 < *param_2) {
    *param_2 = dVar5;
  }
  if (dVar1 < *param_3) {
    *param_3 = dVar1;
  }
  if (*param_4 <= dVar5 && dVar5 != *param_4) {
    *param_4 = dVar5;
  }
  if (*param_5 <= dVar1 && dVar1 != *param_5) {
    *param_5 = dVar1;
  }
  dVar1 = DAT_140492778;
  dVar4 = (double)param_1[4] - (double)param_1[2];
  dVar3 = (double)param_1[6] - (double)param_1[4];
  dVar6 = dVar4 - dVar3;
  dVar5 = ((double)param_1[5] - (double)param_1[3]) - ((double)param_1[7] - (double)param_1[5]);
  if (((dVar6 != 0.0) && (dVar4 = dVar4 / dVar6, 0.0 < dVar4)) && (dVar4 < DAT_140492778)) {
    pdVar2 = (double *)(**(code **)(*param_1 + 0x20))(dVar3,local_68);
    dVar3 = *pdVar2;
    dVar4 = pdVar2[1];
    if (dVar3 < *param_2) {
      *param_2 = dVar3;
    }
    if (dVar4 < *param_3) {
      *param_3 = dVar4;
    }
    if (*param_4 <= dVar3 && dVar3 != *param_4) {
      *param_4 = dVar3;
    }
    if (*param_5 <= dVar4 && dVar4 != *param_5) {
      *param_5 = dVar4;
    }
  }
  if (((dVar5 != 0.0) && (dVar5 = ((double)param_1[5] - (double)param_1[3]) / dVar5, 0.0 < dVar5))
     && (dVar5 < dVar1)) {
    pdVar2 = (double *)(**(code **)(*param_1 + 0x20))(param_1,local_68);
    dVar5 = *pdVar2;
    dVar1 = pdVar2[1];
    if (dVar5 < *param_2) {
      *param_2 = dVar5;
    }
    if (dVar1 < *param_3) {
      *param_3 = dVar1;
    }
    if (*param_4 <= dVar5 && dVar5 != *param_4) {
      *param_4 = dVar5;
    }
    if (*param_5 <= dVar1 && dVar1 != *param_5) {
      *param_5 = dVar1;
    }
  }
  return;
}

