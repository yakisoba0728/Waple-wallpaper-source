// Function: FUN_14015e1d0
// Addr: 14015e1d0
// Size: 940 bytes


undefined8
FUN_14015e1d0(float param_1,longlong *param_2,longlong param_3,longlong *param_4,float *param_5)

{
  uint *puVar1;
  float fVar2;
  ulonglong uVar3;
  float *pfVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  
  fVar16 = 0.0;
  param_5[1] = param_1;
  *param_5 = 0.0;
  pfVar5 = (float *)param_2[1];
  fVar8 = fVar16;
  if ((longlong)pfVar5 + (4 - *param_2) <= (longlong)(ulonglong)*(uint *)(param_2 + 2)) {
    param_2[1] = (longlong)(pfVar5 + 1);
    fVar8 = *pfVar5;
    pfVar5 = pfVar5 + 1;
  }
  fVar2 = 0.0;
  if ((int)param_1 < 3) {
    param_5[2] = *(float *)(param_3 + 0x14);
    fVar16 = *(float *)(param_3 + 0x18);
  }
  else {
    fVar15 = fVar2;
    if ((4 - *param_2) + (longlong)pfVar5 <= (longlong)(ulonglong)*(uint *)(param_2 + 2)) {
      param_2[1] = (longlong)(pfVar5 + 1);
      fVar15 = *pfVar5;
    }
    param_5[2] = fVar15;
    pfVar5 = (float *)param_2[1];
    if ((longlong)pfVar5 + (4 - *param_2) <= (longlong)(ulonglong)*(uint *)(param_2 + 2)) {
      param_2[1] = (longlong)(pfVar5 + 1);
      fVar16 = *pfVar5;
    }
  }
  param_5[3] = fVar16;
  if (0 < (int)fVar8) {
    do {
      pfVar5 = (float *)param_2[1];
      lVar7 = 4 - *param_2;
      uVar3 = (ulonglong)*(uint *)(param_2 + 2);
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      local_78 = 0;
      uStack_70 = 0;
      fStack_84 = fVar2;
      if ((longlong)pfVar5 + lVar7 <= (longlong)uVar3) {
        param_2[1] = (longlong)(pfVar5 + 1);
        fStack_84 = *pfVar5;
        pfVar5 = pfVar5 + 1;
      }
      if ((longlong)uVar3 < (longlong)pfVar5 + lVar7) {
        local_88 = 0.0;
        pfVar4 = pfVar5;
      }
      else {
        pfVar4 = pfVar5 + 1;
        param_2[1] = (longlong)pfVar4;
        local_88 = *pfVar5;
      }
      if (param_1 == 1.4013e-45) {
        fVar16 = fVar2;
        if ((longlong)pfVar4 + lVar7 <= (longlong)uVar3) {
          param_2[1] = (longlong)(pfVar4 + 1);
          fVar16 = *pfVar4;
          pfVar4 = pfVar4 + 1;
        }
        fVar16 = (float)(int)fVar16;
        fVar15 = fVar2;
        if ((longlong)pfVar4 + lVar7 <= (longlong)uVar3) {
          param_2[1] = (longlong)(pfVar4 + 1);
          fVar15 = *pfVar4;
          pfVar4 = pfVar4 + 1;
        }
        fVar15 = (float)(int)fVar15;
        fVar12 = 0.0;
        fVar14 = fVar12;
        if ((longlong)pfVar4 + lVar7 <= (longlong)uVar3) {
          param_2[1] = (longlong)(pfVar4 + 1);
          fVar14 = *pfVar4;
          pfVar4 = pfVar4 + 1;
        }
        fVar14 = (float)(int)fVar14;
        fVar13 = fVar12;
        if ((longlong)pfVar4 + lVar7 <= (longlong)uVar3) {
          param_2[1] = (longlong)(pfVar4 + 1);
          fVar13 = *pfVar4;
          pfVar4 = pfVar4 + 1;
        }
        fVar13 = (float)(int)fVar13;
        if ((longlong)pfVar4 + lVar7 <= (longlong)uVar3) {
          param_2[1] = (longlong)(pfVar4 + 1);
          fVar12 = *pfVar4;
          pfVar4 = pfVar4 + 1;
        }
        fVar12 = (float)(int)fVar12;
        if ((longlong)uVar3 < (longlong)pfVar4 + lVar7) {
          fVar11 = 0.0;
        }
        else {
          param_2[1] = (longlong)(pfVar4 + 1);
          fVar11 = (float)(int)*pfVar4;
        }
      }
      else {
        if ((longlong)uVar3 < (longlong)pfVar4 + lVar7) {
          fVar16 = 0.0;
          pfVar5 = pfVar4;
        }
        else {
          pfVar5 = pfVar4 + 1;
          param_2[1] = (longlong)pfVar5;
          fVar16 = *pfVar4;
        }
        if ((longlong)uVar3 < (longlong)pfVar5 + lVar7) {
          fVar15 = 0.0;
          pfVar4 = pfVar5;
        }
        else {
          pfVar4 = pfVar5 + 1;
          param_2[1] = (longlong)pfVar4;
          fVar15 = *pfVar5;
        }
        if ((longlong)uVar3 < (longlong)pfVar4 + lVar7) {
          fVar14 = 0.0;
          pfVar5 = pfVar4;
        }
        else {
          pfVar5 = pfVar4 + 1;
          param_2[1] = (longlong)pfVar5;
          fVar14 = *pfVar4;
        }
        if ((longlong)uVar3 < (longlong)pfVar5 + lVar7) {
          fVar13 = 0.0;
          pfVar4 = pfVar5;
        }
        else {
          pfVar4 = pfVar5 + 1;
          param_2[1] = (longlong)pfVar4;
          fVar13 = *pfVar5;
        }
        if ((longlong)uVar3 < (longlong)pfVar4 + lVar7) {
          fVar12 = 0.0;
          pfVar5 = pfVar4;
        }
        else {
          pfVar5 = pfVar4 + 1;
          param_2[1] = (longlong)pfVar5;
          fVar12 = *pfVar4;
        }
        if ((longlong)uVar3 < (longlong)pfVar5 + lVar7) {
          fVar11 = 0.0;
        }
        else {
          param_2[1] = (longlong)(pfVar5 + 1);
          fVar11 = *pfVar5;
        }
      }
      lVar7 = *param_4;
      uVar6 = (ulonglong)(int)fStack_84;
      uVar3 = (param_4[1] - lVar7 >> 3) * -0x5555555555555555;
      if (uVar6 <= uVar3 && uVar3 - uVar6 != 0) {
        puVar1 = *(uint **)(lVar7 + uVar6 * 0x18);
        if (puVar1 != *(uint **)(lVar7 + 8 + uVar6 * 0x18)) {
          fVar9 = (float)*puVar1;
          fVar10 = (float)puVar1[1];
          fStack_80 = fVar16 / fVar9;
          fStack_7c = fVar15 / fVar10;
          local_78 = CONCAT44(fVar13 / fVar10,fVar14 / fVar9);
          uStack_70 = CONCAT44(fVar11 / fVar10,fVar12 / fVar9);
        }
      }
      *param_5 = local_88 + *param_5;
      pfVar5 = *(float **)(param_5 + 6);
      if (pfVar5 == *(float **)(param_5 + 8)) {
        FUN_1401614a0(param_5 + 4,pfVar5,&local_88);
      }
      else {
        *pfVar5 = local_88;
        pfVar5[1] = fStack_84;
        pfVar5[2] = fStack_80;
        pfVar5[3] = fStack_7c;
        *(undefined8 *)(pfVar5 + 4) = local_78;
        *(undefined8 *)(pfVar5 + 6) = uStack_70;
        *(longlong *)(param_5 + 6) = *(longlong *)(param_5 + 6) + 0x20;
      }
      fVar8 = (float)((int)fVar8 + -1);
    } while (fVar8 != 0.0);
  }
  return 1;
}

