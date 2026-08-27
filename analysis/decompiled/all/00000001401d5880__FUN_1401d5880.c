// Function: FUN_1401d5880
// Addr: 1401d5880
// Size: 445 bytes


void FUN_1401d5880(undefined8 param_1,longlong param_2,uint param_3,float *param_4)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = *param_4;
  fVar4 = param_4[1];
  fVar1 = param_4[2];
  if (fVar4 * fVar4 + 0.0 + 0.0 <= fVar6 * fVar6 + 0.0 + 0.0) {
    fVar5 = 0.0;
    fVar8 = 0.0;
    fVar10 = fVar6;
  }
  else {
    fVar5 = fVar4;
    fVar10 = 0.0;
    fVar8 = fVar6;
    fVar4 = 0.0;
  }
  if (fVar1 * fVar1 + 0.0 <= fVar10 * fVar10 + fVar5 * fVar5 + 0.0) {
    fVar11 = 0.0;
    fVar6 = 0.0;
    fVar9 = 0.0;
    fVar7 = fVar10;
    fVar10 = fVar1;
  }
  else {
    fVar6 = fVar5;
    fVar7 = 0.0;
    fVar9 = fVar10;
    fVar10 = 0.0;
    fVar11 = fVar1;
    fVar5 = 0.0;
  }
  if (fVar9 * fVar9 + fVar6 * fVar6 + fVar10 * fVar10 <= fVar8 * fVar8 + fVar4 * fVar4 + 0.0) {
    fVar10 = 0.0;
    fVar6 = fVar4;
    fVar9 = fVar8;
  }
  lVar2 = *(longlong *)(param_2 + 0x20);
  uVar3 = (ulonglong)param_3;
  fVar4 = fVar7 + fVar5 + fVar11;
  *(float *)(lVar2 + uVar3 * 0xc) = fVar7 / fVar4;
  *(float *)(lVar2 + 4 + uVar3 * 0xc) = fVar5 / fVar4;
  *(float *)(lVar2 + 8 + uVar3 * 0xc) = fVar11 / fVar4;
  *(float *)(*(longlong *)(param_2 + 0x50) + uVar3 * 4) = fVar4 - (fVar6 + fVar9 + fVar10);
  lVar2 = *(longlong *)(param_2 + 0x38);
  *(float *)(lVar2 + uVar3 * 0xc) = fVar9;
  *(float *)(lVar2 + 4 + uVar3 * 0xc) = fVar6;
  *(float *)(lVar2 + 8 + uVar3 * 0xc) = fVar10;
  return;
}

