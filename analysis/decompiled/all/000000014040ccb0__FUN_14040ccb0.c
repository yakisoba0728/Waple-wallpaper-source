// Function: FUN_14040ccb0
// Addr: 14040ccb0
// Size: 837 bytes


float * FUN_14040ccb0(float *param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  param_2[0] = 1.0;
  param_2[1] = 0.0;
  param_2[3] = 1.0;
  param_2[4] = 0.0;
  param_2[2] = 0.0;
  param_2[5] = 0.0;
  fVar6 = param_1[7] + *param_1;
  fVar2 = param_1[1] + param_1[8];
  if ((fVar6 == 0.0) && (fVar2 == 0.0)) {
    fVar2 = 0.0;
    fVar7 = 0.0;
  }
  else {
    fVar7 = fVar2 * 0.0 + fVar6 + 0.0;
    fVar2 = fVar6 * 0.0 + fVar2 + 0.0;
    param_2[4] = fVar7;
    param_2[5] = fVar2;
  }
  uVar1 = DAT_140492ff0;
  fVar6 = DAT_140492704;
  fVar10 = 0.0;
  fVar9 = 0.0;
  fVar3 = DAT_140492704;
  fVar8 = DAT_140492704;
  if (param_1[2] != 0.0) {
    fVar3 = (float)FUN_14041a2e0();
    fVar4 = (float)FUN_14041a9c0(param_1[2]);
    param_2[4] = fVar7 + 0.0;
    fVar9 = fVar3 * 0.0 + (float)((uint)fVar4 ^ uVar1);
    param_2[5] = fVar2 + 0.0;
    fVar8 = fVar4 * 0.0 + fVar3;
    fVar10 = fVar3 * 0.0 + fVar4;
    fVar3 = (float)((uint)fVar4 ^ uVar1) * 0.0 + fVar3;
    param_2[2] = fVar9;
    *param_2 = fVar8;
    param_2[1] = fVar10;
    param_2[3] = fVar3;
  }
  fVar2 = param_1[3];
  fVar7 = param_1[4];
  if ((fVar2 != fVar6) || (fVar7 != fVar6)) {
    fVar10 = fVar2 * fVar10;
    fVar8 = fVar2 * fVar8;
    param_2[1] = fVar10;
    *param_2 = fVar8;
    fVar3 = fVar7 * fVar3;
    fVar9 = fVar7 * fVar9;
    param_2[3] = fVar3;
    param_2[2] = fVar9;
  }
  fVar2 = (float)((uint)param_1[5] ^ uVar1);
  if (fVar2 == 0.0) {
    fVar6 = fVar3;
    fVar7 = fVar8;
    fVar4 = fVar9;
    fVar5 = fVar10;
    if (param_1[6] == 0.0) goto LAB_14040cf54;
LAB_14040ce98:
    fVar6 = (float)FUN_14041b0d0();
  }
  else {
    if (param_1[6] != 0.0) goto LAB_14040ce98;
    fVar6 = 0.0;
  }
  if (fVar2 == 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)FUN_14041b0d0(fVar2);
  }
  fVar5 = fVar3 * fVar6 + fVar10;
  fVar4 = fVar8 * fVar2 + fVar9;
  fVar7 = fVar6 * fVar9 + fVar8;
  fVar6 = fVar10 * fVar2 + fVar3;
  *param_2 = fVar7;
  param_2[1] = fVar5;
  param_2[2] = fVar4;
  param_2[3] = fVar6;
  param_2[4] = fVar8 * 0.0 + fVar9 * 0.0 + param_2[4];
  param_2[5] = fVar3 * 0.0 + fVar10 * 0.0 + param_2[5];
LAB_14040cf54:
  fVar3 = (float)((uint)param_1[7] ^ uVar1);
  fVar2 = (float)((uint)param_1[8] ^ uVar1);
  if ((fVar3 != 0.0) || (fVar2 != 0.0)) {
    param_2[4] = fVar2 * fVar4 + fVar3 * fVar7 + param_2[4];
    param_2[5] = fVar2 * fVar6 + fVar3 * fVar5 + param_2[5];
  }
  return param_2;
}

