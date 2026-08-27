// Function: FUN_140216070
// Addr: 140216070
// Size: 513 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140216070(float *param_1,float *param_2,float *param_3,float param_4)

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
  float fVar11;
  float fVar12;
  
  fVar9 = *param_3;
  fVar10 = param_3[1];
  fVar11 = param_3[2];
  fVar12 = param_3[3];
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar7 = fVar3 * param_3[2] + fVar1 * *param_3 + fVar4 * param_3[3] + fVar2 * param_3[1];
  if (fVar7 < 0.0) {
    fVar9 = (float)((uint)fVar9 ^ DAT_140492ff0);
    fVar10 = (float)((uint)fVar10 ^ DAT_140492ff0);
    fVar11 = (float)((uint)fVar11 ^ DAT_140492ff0);
    fVar12 = (float)((uint)fVar12 ^ DAT_140492ff0);
    fVar7 = (float)((uint)fVar7 ^ DAT_140492ff0);
  }
  fVar8 = DAT_140492704 - param_4;
  if (fVar7 <= _DAT_140492700) {
    fVar7 = (float)FUN_14041c220(fVar7);
    fVar5 = (float)FUN_14041a9c0();
    fVar6 = (float)FUN_14041a9c0(fVar7 * param_4);
    fVar7 = (float)FUN_14041a9c0(fVar8 * fVar7);
    *param_1 = (fVar1 * fVar7 + fVar9 * fVar6) / fVar5;
    param_1[1] = (fVar2 * fVar7 + fVar10 * fVar6) / fVar5;
    param_1[2] = (fVar3 * fVar7 + fVar11 * fVar6) / fVar5;
    param_1[3] = (fVar4 * fVar7 + fVar12 * fVar6) / fVar5;
  }
  else {
    fVar1 = param_2[1];
    *param_1 = fVar8 * *param_2 + fVar9 * param_4;
    fVar9 = param_2[2];
    fVar2 = param_2[3];
    param_1[1] = fVar8 * fVar1 + fVar10 * param_4;
    param_1[2] = fVar8 * fVar9 + fVar11 * param_4;
    param_1[3] = fVar8 * fVar2 + fVar12 * param_4;
  }
  return param_1;
}

