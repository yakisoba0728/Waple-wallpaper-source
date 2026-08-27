// Function: FUN_14040caa0
// Addr: 14040caa0
// Size: 516 bytes


int * FUN_14040caa0(float *param_1,int *param_2,char param_3,char param_4)

{
  double dVar1;
  short sVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double local_res8 [4];
  double local_78 [11];
  
  dVar4 = (double)FUN_1402edf40((double)*param_1);
  dVar5 = (double)FUN_1402edf40((double)param_1[1]);
  dVar6 = (double)FUN_1402edf40((double)param_1[2]);
  dVar7 = (double)FUN_1402edf40((double)param_1[3]);
  sVar2 = thunk_FUN_1402e7cc0(dVar4);
  if ((((sVar2 < 1) && (sVar2 = thunk_FUN_1402e7cc0(dVar5), sVar2 < 1)) &&
      (sVar2 = thunk_FUN_1402e7cc0(dVar6), sVar2 < 1)) &&
     (sVar2 = thunk_FUN_1402e7cc0(dVar7), dVar1 = DAT_140492898, sVar2 < 1)) {
    dVar8 = dVar4;
    if (param_3 != '\0') {
      dVar8 = dVar6;
    }
    local_78[0] = DAT_140492a08;
    pdVar3 = local_res8;
    if (dVar8 < DAT_140492a08) {
      pdVar3 = local_78;
    }
    dVar8 = *pdVar3;
    if (DAT_140492898 <= *pdVar3) {
      dVar8 = DAT_140492898;
    }
    dVar9 = dVar7;
    if (param_4 != '\0') {
      dVar9 = dVar5;
    }
    pdVar3 = local_res8;
    if (dVar9 < DAT_140492a08) {
      pdVar3 = local_78;
    }
    dVar9 = *pdVar3;
    if (DAT_140492898 <= *pdVar3) {
      dVar9 = DAT_140492898;
    }
    if (param_3 == '\0') {
      dVar4 = dVar6 - dVar4;
    }
    else {
      dVar4 = dVar4 - dVar6;
    }
    pdVar3 = local_res8;
    if (dVar4 < DAT_140492a08) {
      pdVar3 = local_78;
    }
    dVar4 = *pdVar3;
    if (DAT_140492898 <= *pdVar3) {
      dVar4 = DAT_140492898;
    }
    if (param_4 == '\0') {
      dVar7 = dVar5 - dVar7;
    }
    else {
      dVar7 = dVar7 - dVar5;
    }
    pdVar3 = local_res8;
    if (dVar7 < DAT_140492a08) {
      pdVar3 = local_78;
    }
    dVar7 = *pdVar3;
    *param_2 = (int)dVar8;
    if (dVar1 <= dVar7) {
      dVar7 = dVar1;
    }
    param_2[1] = (int)dVar9;
    param_2[2] = (int)dVar4;
    param_2[3] = (int)dVar7;
  }
  else {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return param_2;
}

