// Function: FUN_1401a9c90
// Addr: 1401a9c90
// Size: 706 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1401a9c90(longlong *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar7 = param_1[3];
  uVar10 = param_1[4] - lVar7 >> 2;
  if (uVar10 <= (ulonglong)(longlong)param_2) {
    if (*param_1 == param_1[1]) {
      FUN_1401aaa10(param_1 + 3);
      return 0;
    }
    FUN_1401aaa10(param_1 + 3);
    fVar5 = DAT_140492900;
    fVar4 = DAT_1404927d4;
    fVar3 = DAT_140492790;
    if ((int)uVar10 <= param_2) {
code_r0x0001401a9d70:
      piVar2 = (int *)*param_1;
      iVar8 = 0;
      uVar12 = (param_1[1] - (longlong)piVar2 >> 2) * 0x6db6db6db6db6db7;
      do {
        iVar9 = (int)uVar10;
        if (iVar8 == 0) {
          if (*piVar2 < iVar9) goto LAB_1401a9dbb;
          iVar8 = piVar2[1];
LAB_1401a9fa3:
          *(int *)(param_1[3] + (longlong)iVar9 * 4) = iVar8;
          break;
        }
        if ((((0 < iVar8) && (uVar11 = (ulonglong)iVar8, uVar11 < uVar12)) &&
            (piVar2[(uVar11 - 1) * 7] <= iVar9)) && (iVar1 = piVar2[uVar11 * 7], iVar9 < iVar1)) {
          iVar8 = piVar2[uVar11 * 7 + -7];
          if ((iVar8 == iVar9) || ((*(byte *)(piVar2 + uVar11 * 7 + 2) & 4) != 0)) {
            iVar8 = piVar2[uVar11 * 7 + -6];
            goto LAB_1401a9fa3;
          }
          iVar6 = 0;
          fVar17 = (float)(iVar1 - iVar8) * fVar3;
          fVar16 = (float)((iVar9 - iVar8) / (iVar1 - iVar8));
          fVar15 = DAT_1404927cc;
          goto LAB_1401a9e60;
        }
LAB_1401a9dbb:
        if (((longlong)iVar8 == uVar12) && (0 < iVar8)) {
          iVar8 = piVar2[((longlong)iVar8 - 1U) * 7 + 1];
          goto LAB_1401a9fa3;
        }
        iVar8 = iVar8 + 1;
      } while ((ulonglong)(longlong)iVar8 <= uVar12);
      goto LAB_1401a9fad;
    }
LAB_1401aa005:
    lVar7 = param_1[3];
  }
  return *(undefined4 *)(lVar7 + (longlong)param_2 * 4);
  while( true ) {
    fVar15 = fVar15 * fVar3;
    if (fVar13 <= (float)iVar9) {
      fVar16 = fVar16 + fVar15;
    }
    else {
      fVar16 = fVar16 - fVar15;
    }
    iVar6 = iVar6 + 1;
    if (999 < iVar6) break;
LAB_1401a9e60:
    fVar13 = fVar4 - fVar16;
    fVar14 = fVar13 * fVar5;
    fVar13 = (fVar17 * (float)piVar2[uVar11 * 7 + -2] + (float)iVar8) * fVar14 * fVar13 * fVar16 +
             fVar13 * fVar13 * fVar13 * (float)iVar8 +
             (fVar17 * (float)piVar2[uVar11 * 7 + 3] + (float)iVar1) * fVar14 * fVar16 * fVar16 +
             fVar16 * fVar16 * fVar16 * (float)iVar1;
    if ((double)(float)((uint)(fVar13 - (float)iVar9) & _DAT_140493090) < DAT_1404927d8) break;
  }
  if (fVar4 <= fVar16) {
    fVar16 = fVar4;
  }
  if (fVar16 < 0.0) {
    fVar16 = 0.0;
  }
  fVar15 = fVar4 - fVar16;
  fVar17 = fVar15 * fVar5;
  *(float *)(param_1[3] + (longlong)iVar9 * 4) =
       fVar17 * fVar15 * fVar16 * ((float)piVar2[uVar11 * 7 + -6] + (float)piVar2[uVar11 * 7 + -1])
       + fVar15 * fVar15 * fVar15 * (float)piVar2[uVar11 * 7 + -6] +
       fVar17 * fVar16 * fVar16 * ((float)piVar2[uVar11 * 7 + 1] + (float)piVar2[uVar11 * 7 + 4]) +
       fVar16 * fVar16 * fVar16 * (float)piVar2[uVar11 * 7 + 1];
LAB_1401a9fad:
  uVar10 = (ulonglong)(iVar9 + 1U);
  if (param_2 < (int)(iVar9 + 1U)) goto LAB_1401aa005;
  goto code_r0x0001401a9d70;
}

