// Function: FUN_1400646a0
// Addr: 1400646a0
// Size: 265 bytes


undefined8 FUN_1400646a0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = param_2[2] - *param_2;
  iVar2 = param_2[1];
  iVar7 = param_2[3] - iVar2;
  iVar6 = param_1[2] - *param_1;
  iVar5 = param_1[3] - param_1[1];
  if ((iVar1 < iVar6) || (iVar3 = iVar5, iVar4 = iVar6, iVar7 < iVar5)) {
    fVar8 = (float)iVar7;
    fVar9 = (float)iVar1;
    if (iVar1 < iVar6) {
      iVar3 = (int)((((float)iVar5 / (float)iVar6) * fVar8) / (fVar8 / fVar9));
      iVar4 = iVar1;
    }
    else {
      iVar3 = iVar7;
      iVar4 = (int)((((float)iVar6 / (float)iVar5) * fVar9) / (fVar9 / fVar8));
    }
  }
  iVar1 = (iVar1 / 2 - iVar4 / 2) + *param_2;
  *param_3 = iVar1;
  iVar1 = param_3[2] - iVar1;
  iVar2 = (iVar7 / 2 - iVar3 / 2) + iVar2;
  iVar7 = param_3[3] - iVar2;
  param_3[1] = iVar2;
  iVar2 = 0;
  if (iVar1 < 1) {
    iVar1 = iVar2;
  }
  if (iVar7 < 1) {
    iVar7 = iVar2;
  }
  if (iVar7 * iVar1 != 0) {
    if (iVar6 < 1) {
      iVar6 = iVar2;
    }
    if (iVar5 < 1) {
      iVar5 = iVar2;
    }
    if (iVar5 * iVar6 != 0) {
      return 1;
    }
  }
  return 0;
}

