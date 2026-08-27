// Function: FUN_140146ac0
// Addr: 140146ac0
// Size: 162 bytes


void FUN_140146ac0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

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
  
  fVar3 = (float)param_2[2];
  fVar2 = (float)((ulonglong)param_2[2] >> 0x20);
  fVar5 = (float)param_2[1];
  fVar1 = (float)param_2[3];
  fVar4 = fVar5 - fVar1;
  fVar8 = (float)*param_2;
  fVar9 = (float)((ulonglong)*param_2 >> 0x20);
  fVar6 = fVar3 + fVar8;
  fVar7 = fVar2 + fVar9;
  fVar8 = fVar8 - fVar3;
  fVar9 = fVar9 - fVar2;
  fVar2 = (float)((ulonglong)param_2[3] >> 0x20);
  fVar1 = fVar1 + fVar5;
  fVar5 = (float)((ulonglong)param_2[1] >> 0x20);
  fVar3 = fVar2 + fVar5;
  fVar5 = fVar5 - fVar2;
  *param_3 = CONCAT44(fVar7 + fVar3,fVar6 + fVar1);
  param_3[2] = CONCAT44(fVar7 - fVar3,fVar6 - fVar1);
  *(float *)((longlong)param_3 + 0xc) = fVar9 - fVar4;
  *(float *)((longlong)param_3 + 0x1c) = fVar4 + fVar9;
  *(float *)(param_3 + 3) = fVar8 - fVar5;
  *(float *)(param_3 + 1) = fVar8 + fVar5;
  return;
}

