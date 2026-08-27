// Function: FUN_1401ac4e0
// Addr: 1401ac4e0
// Size: 783 bytes


void FUN_1401ac4e0(undefined8 *param_1,float param_2,float param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((((param_2 < 0.0) || (iVar10 = *(int *)*param_1 + -1, (float)iVar10 < param_2)) ||
      (param_3 < 0.0)) || (iVar9 = *(int *)param_1[1] + -1, (float)iVar9 < param_3)) {
    uVar6 = 0;
    param_4[1] = 0;
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    fVar15 = (float)FUN_14041a5c0();
    fVar16 = (float)FUN_14041a5c0();
    fVar5 = DAT_1404926c0;
    param_3 = param_3 - fVar16;
    param_2 = param_2 - fVar15;
    lVar11 = *(longlong *)(param_1[2] + 0x10);
    iVar1 = (int)fVar16 + 1;
    fVar17 = (DAT_140492704 - param_3) * param_2;
    iVar2 = (int)fVar15 + 1;
    fVar18 = (DAT_140492704 - param_3) * (DAT_140492704 - param_2);
    lVar14 = (longlong)((int)fVar15 * 4);
    fVar15 = (DAT_140492704 - param_2) * param_3;
    lVar3 = lVar11 + lVar14;
    param_3 = param_3 * param_2;
    if (iVar2 <= iVar10) {
      iVar10 = iVar2;
    }
    lVar13 = (longlong)((int)fVar16 * *(int *)param_1[3]);
    lVar12 = (longlong)(iVar10 << 2);
    if (iVar1 <= iVar9) {
      iVar9 = iVar1;
    }
    lVar4 = lVar11 + lVar12;
    lVar11 = *(int *)param_1[3] * iVar9 + lVar11;
    iVar10 = (int)((float)*(byte *)(lVar4 + lVar13) * fVar17 +
                   (float)*(byte *)(lVar3 + lVar13) * fVar18 +
                   (float)*(byte *)(lVar11 + lVar14) * fVar15 +
                   (float)*(byte *)(lVar11 + lVar12) * param_3 + DAT_1404926c0);
    if (iVar10 < 0xff) {
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      uVar6 = (undefined1)iVar10;
    }
    else {
      uVar6 = 0xff;
    }
    *param_4 = uVar6;
    iVar10 = (int)((float)*(byte *)(lVar4 + 1 + lVar13) * fVar17 +
                   (float)*(byte *)(lVar3 + 1 + lVar13) * fVar18 +
                   (float)*(byte *)(lVar11 + 1 + lVar14) * fVar15 +
                   (float)*(byte *)(lVar11 + 1 + lVar12) * param_3 + fVar5);
    if (iVar10 < 0xff) {
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      uVar6 = (undefined1)iVar10;
    }
    else {
      uVar6 = 0xff;
    }
    param_4[1] = uVar6;
    iVar10 = (int)((float)*(byte *)(lVar4 + 2 + lVar13) * fVar17 +
                   (float)*(byte *)(lVar3 + 2 + lVar13) * fVar18 +
                   (float)*(byte *)(lVar11 + 2 + lVar14) * fVar15 +
                   (float)*(byte *)(lVar11 + 2 + lVar12) * param_3 + fVar5);
    if (iVar10 < 0xff) {
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      uVar8 = (undefined1)iVar10;
    }
    else {
      uVar8 = 0xff;
    }
    param_4[2] = uVar8;
    iVar10 = (int)((float)*(byte *)(lVar4 + 3 + lVar13) * fVar17 +
                   (float)*(byte *)(lVar3 + 3 + lVar13) * fVar18 +
                   (float)*(byte *)(lVar11 + 3 + lVar14) * fVar15 +
                   (float)*(byte *)(lVar11 + 3 + lVar12) * param_3 + fVar5);
    if (iVar10 < 0xff) {
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      uVar7 = (undefined1)iVar10;
      uVar6 = *param_4;
    }
    else {
      uVar6 = *param_4;
      uVar7 = 0xff;
    }
  }
  param_4[3] = uVar7;
  *param_4 = uVar8;
  param_4[2] = uVar6;
  return;
}

