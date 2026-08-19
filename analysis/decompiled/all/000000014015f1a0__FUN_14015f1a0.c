// Function: FUN_14015f1a0
// Addr: 14015f1a0
// Size: 267 bytes


void FUN_14015f1a0(longlong *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  
  if ((param_1[0x1c] != 0) || (param_1[0x1b] != 0)) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    if ((longlong *)param_1[0x1b] == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014015f3f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014015f3e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0x1b] + 0x78))();
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x1c) & 4) == 0) {
LAB_14015f1e0:
    *(undefined4 *)(param_1 + 0x13) = 0;
    return;
  }
  pfVar8 = (float *)param_1[0x18];
  pfVar3 = (float *)param_1[0x17];
  if (pfVar3 == pfVar8) goto LAB_14015f1e0;
  lVar4 = param_1[1];
  iVar7 = *(int *)(lVar4 + 0x132c);
  if (-1 < iVar7) {
    if ((ulonglong)((longlong)pfVar8 - (longlong)pfVar3 >> 5) <= (ulonglong)(longlong)iVar7) {
      iVar7 = 0;
    }
    pfVar8 = pfVar3 + (longlong)iVar7 * 8;
    goto LAB_14015f34c;
  }
  if (*(int *)((longlong)param_1 + 0xa4) == *(int *)(lVar4 + 0x144)) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = *(float *)(lVar4 + 0x14c);
  }
  iVar7 = *(int *)((longlong)param_1 + 0x9c);
  if ((iVar7 < 0) ||
     (lVar5 = (longlong)pfVar8 - (longlong)pfVar3,
     (ulonglong)(lVar5 >> 5) <= (ulonglong)(longlong)iVar7)) {
    lVar5 = (longlong)pfVar8 - (longlong)pfVar3;
    pfVar8 = pfVar3;
  }
  else {
    pfVar8 = pfVar3 + (longlong)iVar7 * 8;
  }
  if (fVar9 <= 0.0) {
    if (fVar9 < 0.0) {
      fVar10 = fVar9 + *(float *)(param_1 + 0x14);
      *(float *)(param_1 + 0x14) = fVar10;
      if (fVar10 <= 0.0) {
        *(int *)((longlong)param_1 + 0x9c) = iVar7 + -1;
        if (iVar7 + -1 < 0) {
          iVar7 = (int)(lVar5 >> 5);
          *(int *)((longlong)param_1 + 0x9c) = iVar7 + -1;
        }
        pfVar8 = pfVar3 + ((longlong)iVar7 + -1) * 8;
        fVar9 = fVar10 + *pfVar8;
        if (fVar10 + *pfVar8 <= 0.0) {
          fVar9 = 0.0;
        }
        goto code_r0x00014015f331;
      }
    }
  }
  else {
    fVar9 = fVar9 + *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x14) = fVar9;
    if (*pfVar8 <= fVar9) {
      iVar7 = iVar7 + 1;
      fVar9 = fVar9 - *pfVar8;
      *(int *)((longlong)param_1 + 0x9c) = iVar7;
      *(float *)(param_1 + 0x14) = fVar9;
      if ((ulonglong)(lVar5 >> 5) <= (ulonglong)(longlong)iVar7) {
        *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
        iVar7 = 0;
      }
      pfVar8 = pfVar3 + (longlong)iVar7 * 8;
      if (*pfVar8 <= fVar9) {
        fVar9 = *pfVar8;
      }
code_r0x00014015f331:
      *(float *)(param_1 + 0x14) = fVar9;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(lVar4 + 0x144);
LAB_14015f34c:
  fVar9 = 0.0;
  if (pfVar8 != (float *)0x0) {
    fVar10 = pfVar8[5];
    uVar6 = (ulonglong)(param_2 & 0xf);
    fVar9 = pfVar8[1];
    fVar1 = pfVar8[6];
    fVar2 = pfVar8[7];
    *(float *)(lVar4 + 0x1cc + uVar6 * 0x10) = pfVar8[4];
    *(float *)(lVar4 + 0x1d0 + uVar6 * 0x10) = fVar10;
    *(float *)(lVar4 + 0x1d4 + uVar6 * 0x10) = fVar1;
    *(float *)(lVar4 + 0x1d8 + uVar6 * 0x10) = fVar2;
    lVar4 = param_1[1];
    fVar10 = pfVar8[3];
    *(float *)(lVar4 + 0x26c + uVar6 * 8) = pfVar8[2];
    *(float *)(lVar4 + 0x270 + uVar6 * 8) = fVar10;
  }
  *(float *)(param_1 + 0x13) = fVar9;
  return;
}

