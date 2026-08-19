// Function: FUN_14040cd80
// Addr: 14040cd80
// Size: 168 bytes


float * FUN_14040cd80(float *param_1,float *param_2)

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
  fVar9 = param_1[7] + *param_1;
  fVar2 = param_1[1] + param_1[8];
  if ((fVar9 != 0.0) || (fVar2 != 0.0)) {
    param_2[4] = fVar2 * 0.0 + fVar9 + 0.0;
    param_2[5] = fVar9 * 0.0 + fVar2 + 0.0;
  }
  uVar1 = DAT_1404930c0;
  fVar2 = DAT_1404927d4;
  fVar10 = 0.0;
  fVar9 = 0.0;
  if (param_1[2] != 0.0) {
    FUN_14041a3b0();
                    /* WARNING: Subroutine does not return */
    FUN_14041aa90(param_1[2]);
  }
  fVar8 = param_1[3];
  fVar4 = param_1[4];
  if ((fVar8 != DAT_1404927d4) || (fVar3 = DAT_1404927d4, fVar4 != DAT_1404927d4)) {
    fVar10 = fVar8 * 0.0;
    fVar3 = fVar8 * DAT_1404927d4;
    param_2[1] = fVar10;
    *param_2 = fVar3;
    fVar2 = fVar4 * fVar2;
    fVar9 = fVar4 * 0.0;
    param_2[3] = fVar2;
    param_2[2] = fVar9;
  }
  fVar8 = (float)((uint)param_1[5] ^ uVar1);
  if (fVar8 == 0.0) {
    fVar4 = fVar2;
    fVar7 = fVar3;
    fVar5 = fVar9;
    fVar6 = fVar10;
    if (param_1[6] == 0.0) goto code_r0x00014040d024;
code_r0x00014040cf68:
    fVar4 = (float)FUN_14041b1a0();
  }
  else {
    if (param_1[6] != 0.0) goto code_r0x00014040cf68;
    fVar4 = 0.0;
  }
  if (fVar8 == 0.0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = (float)FUN_14041b1a0(fVar8);
  }
  fVar6 = fVar2 * fVar4 + fVar10;
  fVar5 = fVar3 * fVar8 + fVar9;
  fVar7 = fVar4 * fVar9 + fVar3;
  fVar4 = fVar10 * fVar8 + fVar2;
  *param_2 = fVar7;
  param_2[1] = fVar6;
  param_2[2] = fVar5;
  param_2[3] = fVar4;
  param_2[4] = fVar3 * 0.0 + fVar9 * 0.0 + param_2[4];
  param_2[5] = fVar2 * 0.0 + fVar10 * 0.0 + param_2[5];
code_r0x00014040d024:
  fVar9 = (float)((uint)param_1[7] ^ uVar1);
  fVar2 = (float)((uint)param_1[8] ^ uVar1);
  if ((fVar9 != 0.0) || (fVar2 != 0.0)) {
    param_2[4] = fVar2 * fVar5 + fVar9 * fVar7 + param_2[4];
    param_2[5] = fVar2 * fVar4 + fVar9 * fVar6 + param_2[5];
  }
  return param_2;
}

