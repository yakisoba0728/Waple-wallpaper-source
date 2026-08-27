// Function: FUN_14026e340
// Addr: 14026e340
// Size: 2078 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14026e340(float *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5,uint *param_6,char param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  char cVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_138;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  
  lVar6 = *param_3;
  lVar9 = *param_5;
  uVar17 = (ulonglong)*param_6;
  lVar10 = (longlong)**(int **)(param_6 + 4);
  fVar23 = *(float *)(lVar9 + 0x34 + uVar17 * 0x50) - *(float *)(lVar9 + 0x34 + lVar10 * 0x50);
  fVar20 = *(float *)(lVar9 + 0x3c + uVar17 * 0x50) - *(float *)(lVar9 + 0x3c + lVar10 * 0x50);
  fVar21 = *(float *)(lVar9 + 0x38 + uVar17 * 0x50) - *(float *)(lVar9 + 0x38 + lVar10 * 0x50);
  fVar20 = fVar23 * fVar23 + fVar21 * fVar21 + fVar20 * fVar20;
  if (fVar20 < 0.0) {
    fVar20 = (float)FUN_14041ad10(fVar20);
  }
  else {
    fVar20 = SQRT(fVar20);
  }
  FUN_14005f730(&local_118,param_1);
  fVar21 = DAT_140492704;
  if (((float)param_6[2] < fVar20) && ((*(byte *)(uVar17 * 0xf0 + 0x68 + lVar6) & 0x80) != 0)) {
    fVar21 = fVar20 / (float)param_6[2];
  }
  uVar15 = 1;
  uVar11 = *(uint *)(uVar17 * 0xf0 + 0x68 + lVar6) & 0x100;
  iVar14 = (int)(*(longlong *)(param_6 + 6) - *(longlong *)(param_6 + 4) >> 2);
  iVar19 = iVar14 + -1;
  if (uVar11 != 0) {
    iVar19 = iVar14;
  }
  if (1 < iVar19) {
    do {
      lVar6 = *(longlong *)(param_6 + 4);
      cVar18 = '\0';
      cVar13 = '\0';
      iVar14 = (int)uVar15;
      if (param_7 == '\0') {
        lVar9 = (longlong)(iVar19 - iVar14);
        if (uVar11 == 0) {
          lVar10 = lVar9;
          lVar9 = lVar9 + 1;
        }
        else {
          lVar10 = lVar9 + -1;
        }
        iVar12 = *(int *)(lVar6 + lVar9 * 4);
        iVar16 = *(int *)(lVar6 + lVar10 * 4);
        local_138 = fVar21 * *(float *)(*param_2 + (longlong)iVar12 * 4);
        if (iVar14 == 1) {
          cVar13 = (char)uVar15;
        }
      }
      else {
        iVar12 = *(int *)(lVar6 + uVar15 * 4);
        iVar16 = *(int *)(lVar6 + -4 + uVar15 * 4);
        local_138 = fVar21 * *(float *)(*param_2 + (longlong)iVar12 * 4);
        if (iVar14 == 1) {
          cVar18 = (char)uVar15;
        }
      }
      lVar6 = *param_5;
      lVar9 = (longlong)iVar12;
      lVar10 = (longlong)iVar16;
      fVar20 = *(float *)(lVar6 + 0x38 + lVar9 * 0x50);
      fVar23 = *(float *)(lVar6 + 0x3c + lVar9 * 0x50);
      fVar24 = *(float *)(lVar6 + 0x34 + lVar9 * 0x50) * local_118 + fVar20 * local_108 +
               fVar23 * local_f8 + local_e8;
      fVar22 = *(float *)(lVar6 + 0x34 + lVar9 * 0x50);
      fVar28 = *(float *)(lVar6 + 0x38 + lVar10 * 0x50);
      fVar27 = fVar22 * local_114 + fVar20 * local_104 + fVar23 * local_f4 + local_e4;
      fVar22 = fVar22 * local_110 + fVar20 * local_100 + fVar23 * local_f0 + local_e0;
      fVar20 = *(float *)(lVar6 + 0x3c + lVar10 * 0x50);
      fVar25 = *(float *)(lVar6 + 0x34 + lVar10 * 0x50) * local_118 + fVar28 * local_108 +
               fVar20 * local_f8 + local_e8;
      fVar23 = *(float *)(lVar6 + 0x34 + lVar10 * 0x50);
      fVar26 = fVar24 - fVar25;
      fVar29 = fVar23 * local_110 + fVar28 * local_100 + fVar20 * local_f0 + local_e0;
      fVar30 = fVar23 * local_114 + fVar28 * local_104 + fVar20 * local_f4 + local_e4;
      fVar28 = fVar27 - fVar30;
      fVar23 = fVar22 - fVar29;
      fVar20 = fVar28 * fVar28 + fVar26 * fVar26 + fVar23 * fVar23;
      if (fVar20 < 0.0) {
        fVar20 = (float)FUN_14041ad10(fVar20);
      }
      else {
        fVar20 = SQRT(fVar20);
      }
      local_138 = local_138 - fVar20;
      if (DAT_140492608 < (float)((uint)local_138 & _DAT_140492fc0)) {
        if (fVar20 <= DAT_140492620) {
          fVar23 = 0.0;
          fVar26 = DAT_1404926cc;
          fVar20 = DAT_1404926cc;
        }
        else {
          fVar23 = fVar23 / fVar20;
          fVar26 = fVar26 / fVar20;
          fVar20 = fVar28 / fVar20;
        }
        if ((cVar18 == '\0') || (cVar13 != '\0')) {
          fVar28 = param_1[2];
          fVar1 = param_1[9];
          fVar2 = param_1[1];
          fVar3 = param_1[5];
          fVar4 = param_1[6];
          fVar5 = param_1[10];
          if (cVar13 == '\0') {
            local_138 = local_138 * DAT_1404926c0;
            fVar25 = fVar25 - fVar26 * local_138;
            fVar7 = param_1[0xd];
            fVar8 = param_1[0xe];
            fVar22 = fVar22 + fVar23 * local_138;
            fVar24 = fVar26 * local_138 + fVar24;
            fVar29 = fVar29 - fVar23 * local_138;
            fVar30 = fVar30 - fVar20 * local_138;
            fVar27 = fVar20 * local_138 + fVar27;
            *(float *)(lVar6 + 0x34 + lVar9 * 0x50) =
                 *param_1 * fVar24 + param_1[4] * fVar27 + param_1[8] * fVar22 + param_1[0xc];
            *(float *)(lVar6 + 0x38 + lVar9 * 0x50) =
                 fVar2 * fVar24 + fVar3 * fVar27 + fVar1 * fVar22 + fVar7;
            *(float *)(lVar6 + 0x3c + lVar9 * 0x50) =
                 fVar28 * fVar24 + fVar4 * fVar27 + fVar5 * fVar22 + fVar8;
            fVar26 = param_1[0xc];
            fVar1 = param_1[0xe];
            fVar20 = param_1[10];
            fVar23 = param_1[8];
            fVar22 = param_1[6];
            fVar28 = param_1[4];
            fVar24 = param_1[2];
            fVar27 = *param_1;
            *(float *)(lVar6 + 0x38 + lVar10 * 0x50) =
                 fVar25 * param_1[1] + fVar30 * param_1[5] + fVar29 * param_1[9] + param_1[0xd];
            *(float *)(lVar6 + 0x3c + lVar10 * 0x50) =
                 fVar25 * fVar24 + fVar30 * fVar22 + fVar29 * fVar20 + fVar1;
            *(float *)(lVar6 + 0x34 + lVar10 * 0x50) =
                 fVar25 * fVar27 + fVar30 * fVar28 + fVar29 * fVar23 + fVar26;
          }
          else {
            fVar29 = fVar29 - fVar23 * local_138;
            fVar23 = param_1[0xd];
            fVar22 = param_1[0xe];
            fVar25 = fVar25 - fVar26 * local_138;
            fVar30 = fVar30 - fVar20 * local_138;
            *(float *)(lVar6 + 0x34 + lVar10 * 0x50) =
                 fVar25 * *param_1 + fVar30 * param_1[4] + fVar29 * param_1[8] + param_1[0xc];
            *(float *)(lVar6 + 0x3c + lVar10 * 0x50) =
                 fVar25 * fVar28 + fVar30 * fVar4 + fVar29 * fVar5 + fVar22;
            *(float *)(lVar6 + 0x38 + lVar10 * 0x50) =
                 fVar25 * fVar2 + fVar30 * fVar3 + fVar29 * fVar1 + fVar23;
          }
        }
        else {
          fVar24 = fVar26 * local_138 + fVar24;
          fVar22 = fVar23 * local_138 + fVar22;
          fVar30 = param_1[0xd];
          fVar1 = param_1[0xe];
          fVar27 = fVar20 * local_138 + fVar27;
          fVar20 = param_1[1];
          fVar23 = param_1[9];
          fVar28 = param_1[10];
          fVar25 = param_1[5];
          fVar26 = param_1[6];
          fVar29 = param_1[2];
          *(float *)(lVar6 + 0x34 + lVar9 * 0x50) =
               fVar24 * *param_1 + fVar27 * param_1[4] + fVar22 * param_1[8] + param_1[0xc];
          *(float *)(lVar6 + 0x38 + lVar9 * 0x50) =
               fVar24 * fVar20 + fVar27 * fVar25 + fVar22 * fVar23 + fVar30;
          *(float *)(lVar6 + 0x3c + lVar9 * 0x50) =
               fVar24 * fVar29 + fVar27 * fVar26 + fVar22 * fVar28 + fVar1;
        }
      }
      uVar15 = (ulonglong)(iVar14 + 1U);
    } while ((int)(iVar14 + 1U) < iVar19);
  }
  return;
}

