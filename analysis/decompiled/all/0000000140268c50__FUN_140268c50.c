// Function: FUN_140268c50
// Addr: 140268c50
// Size: 554 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140268c50(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar6 = *param_3;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar5 = fVar1 * fVar6 + fVar2 * fVar7 + fVar3 * fVar8 + fVar4 * fVar9;
  if (fVar5 < 0.0) {
    fVar6 = (float)((uint)fVar6 ^ DAT_140492ff0);
    fVar7 = (float)((uint)fVar7 ^ DAT_140492ff0);
    fVar8 = (float)((uint)fVar8 ^ DAT_140492ff0);
    fVar9 = (float)((uint)fVar9 ^ DAT_140492ff0);
    fVar5 = (float)((uint)fVar5 ^ DAT_140492ff0);
  }
  fVar10 = DAT_140492704 - param_4;
  if (fVar5 <= _DAT_140492700) {
    fVar3 = (float)FUN_14041c220(fVar5);
    fVar4 = (float)FUN_14041a9c0();
    fVar5 = (float)FUN_14041a9c0(fVar3 * param_4);
    fVar10 = (float)FUN_14041a9c0(fVar10 * fVar3);
    fVar3 = param_2[2];
    *param_1 = (fVar1 * fVar10 + fVar6 * fVar5) / fVar4;
    param_1[1] = (fVar2 * fVar10 + fVar7 * fVar5) / fVar4;
    param_1[2] = (fVar3 * fVar10 + fVar8 * fVar5) / fVar4;
    param_1[3] = (param_2[3] * fVar10 + fVar9 * fVar5) / fVar4;
  }
  else {
    *param_1 = fVar1 * fVar10 + fVar6 * param_4;
    param_1[1] = fVar2 * fVar10 + fVar7 * param_4;
    param_1[2] = fVar3 * fVar10 + fVar8 * param_4;
    param_1[3] = fVar4 * fVar10 + fVar9 * param_4;
  }
  return param_1;
}

