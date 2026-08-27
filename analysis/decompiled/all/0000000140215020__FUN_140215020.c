// Function: FUN_140215020
// Addr: 140215020
// Size: 380 bytes


float * FUN_140215020(float *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *param_2;
  fVar2 = (float)FUN_14041a2e0(uVar1);
  fVar3 = (float)FUN_14041a9c0(uVar1);
  uVar1 = *param_3;
  fVar4 = (float)FUN_14041a2e0(uVar1);
  fVar5 = (float)FUN_14041a9c0(uVar1);
  uVar1 = *param_4;
  fVar6 = (float)FUN_14041a2e0(uVar1);
  fVar7 = (float)FUN_14041a9c0(uVar1);
  *param_1 = fVar4 * fVar2;
  fVar8 = (float)((uint)fVar5 ^ DAT_140492ff0);
  param_1[1] = fVar4 * fVar3;
  param_1[2] = fVar8;
  param_1[3] = 0.0;
  param_1[4] = fVar5 * fVar2 * fVar7 - fVar6 * fVar3;
  param_1[5] = fVar5 * fVar3 * fVar7 + fVar6 * fVar2;
  param_1[6] = fVar7 * fVar4;
  param_1[7] = 0.0;
  param_1[8] = fVar6 * fVar2 * fVar5 + fVar7 * fVar3;
  param_1[9] = fVar6 * fVar3 * fVar5 - fVar7 * fVar2;
  param_1[10] = fVar6 * fVar4;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  return param_1;
}

