// Function: FUN_1402167c0
// Addr: 1402167c0
// Size: 631 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1402167c0(float *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = DAT_140492704;
  fVar4 = param_2[2];
  fVar9 = *param_2;
  fVar5 = param_3[1];
  fVar2 = param_2[1];
  fVar6 = param_3[2];
  fVar7 = *param_3;
  fVar3 = fVar9 * fVar7 + fVar2 * fVar5 + fVar4 * fVar6;
  if (fVar3 < _DAT_140492700) {
    if (DAT_1404929b4 <= fVar3) {
      fVar3 = fVar3 + DAT_140492704 + fVar3 + DAT_140492704;
      if (fVar3 < 0.0) {
        fVar3 = (float)FUN_14041ad10(fVar3);
      }
      else {
        fVar3 = SQRT(fVar3);
      }
      fVar8 = fVar8 / fVar3;
      *param_1 = fVar3 * DAT_1404926c0;
      param_1[1] = (fVar6 * fVar2 - fVar4 * fVar5) * fVar8;
      param_1[2] = (fVar4 * fVar7 - fVar6 * fVar9) * fVar8;
      param_1[3] = (fVar5 * fVar9 - fVar2 * fVar7) * fVar8;
    }
    else {
      fVar8 = fVar4 * 0.0;
      fVar7 = fVar9 * 0.0;
      fVar9 = fVar9 - fVar8;
      fVar5 = fVar8 - fVar2;
      fVar6 = fVar2 * 0.0 - fVar7;
      if (fVar9 * fVar9 + fVar5 * fVar5 + fVar6 * fVar6 < DAT_1404925e0) {
        fVar5 = fVar8 - fVar2 * 0.0;
        fVar9 = fVar7 - fVar4;
        fVar6 = fVar2 - fVar7;
      }
      fVar4 = fVar9 * fVar9 + fVar5 * fVar5 + fVar6 * fVar6;
      if (fVar4 < 0.0) {
        fVar4 = (float)FUN_14041ad10(fVar4);
      }
      else {
        fVar4 = SQRT(fVar4);
      }
      uVar1 = DAT_140492744;
      fVar4 = DAT_140492704 / fVar4;
      fVar2 = (float)FUN_14041a9c0(DAT_140492744);
      fVar7 = (float)FUN_14041a2e0(uVar1);
      param_1[1] = fVar5 * fVar4 * fVar2;
      param_1[2] = fVar9 * fVar4 * fVar2;
      param_1[3] = fVar6 * fVar4 * fVar2;
      *param_1 = fVar7;
    }
  }
  else {
    param_1[0] = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
  }
  return param_1;
}

