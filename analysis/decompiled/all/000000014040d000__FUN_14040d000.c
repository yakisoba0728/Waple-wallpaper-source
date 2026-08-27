// Function: FUN_14040d000
// Addr: 14040d000
// Size: 517 bytes


/* WARNING: Removing unreachable block (ram,0x00014040d0bc) */

void FUN_14040d000(float *param_1,float *param_2)

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
  
  fVar5 = param_2[2];
  fVar6 = *param_2;
  fVar4 = param_2[1];
  fVar1 = param_2[3];
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = -1.0;
  param_2[3] = -1.0;
  fVar3 = fVar6 * *param_1 + param_1[4] + fVar4 * param_1[2];
  fVar7 = fVar6 * param_1[1] + param_1[5] + fVar4 * param_1[3];
  param_2[2] = fVar3;
  *param_2 = fVar3;
  param_2[3] = fVar7;
  param_2[1] = fVar7;
  fVar8 = fVar6 * *param_1 + param_1[4] + fVar1 * param_1[2];
  fVar9 = fVar6 * param_1[1] + param_1[5] + fVar1 * param_1[3];
  fVar6 = fVar3;
  if (fVar8 <= fVar3) {
    fVar6 = fVar8;
  }
  fVar2 = fVar7;
  if (fVar9 <= fVar7) {
    fVar2 = fVar9;
  }
  if (fVar3 <= fVar8) {
    fVar3 = fVar8;
  }
  if (fVar7 <= fVar9) {
    fVar7 = fVar9;
  }
  *param_2 = fVar6;
  param_2[1] = fVar2;
  param_2[2] = fVar3;
  param_2[3] = fVar7;
  fVar8 = fVar5 * *param_1 + param_1[4] + fVar4 * param_1[2];
  fVar4 = fVar5 * param_1[1] + param_1[5] + fVar4 * param_1[3];
  if (fVar6 <= fVar3) {
    if (fVar8 <= fVar6) {
      fVar6 = fVar8;
    }
    if (fVar4 <= fVar2) {
      fVar2 = fVar4;
    }
    if (fVar3 <= fVar8) {
      fVar3 = fVar8;
    }
    fVar8 = fVar3;
    if (fVar7 <= fVar4) {
      fVar7 = fVar4;
    }
    *param_2 = fVar6;
    param_2[1] = fVar2;
    param_2[2] = fVar8;
    param_2[3] = fVar7;
  }
  else {
    param_2[2] = fVar8;
    *param_2 = fVar8;
    param_2[3] = fVar4;
    param_2[1] = fVar4;
    fVar2 = fVar4;
    fVar6 = fVar8;
    fVar7 = fVar4;
  }
  fVar4 = fVar5 * *param_1 + param_1[4] + fVar1 * param_1[2];
  fVar5 = fVar5 * param_1[1] + param_1[5] + fVar1 * param_1[3];
  if (fVar6 <= fVar8) {
    if (fVar4 <= fVar6) {
      fVar6 = fVar4;
    }
    if (fVar5 <= fVar2) {
      fVar2 = fVar5;
    }
    if (fVar8 <= fVar4) {
      fVar8 = fVar4;
    }
    if (fVar7 <= fVar5) {
      fVar7 = fVar5;
    }
    *param_2 = fVar6;
    param_2[1] = fVar2;
    param_2[2] = fVar8;
    param_2[3] = fVar7;
  }
  else {
    param_2[2] = fVar4;
    *param_2 = fVar4;
    param_2[3] = fVar5;
    param_2[1] = fVar5;
  }
  return;
}

