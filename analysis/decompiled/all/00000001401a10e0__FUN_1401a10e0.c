// Function: FUN_1401a10e0
// Addr: 1401a10e0
// Size: 630 bytes


void FUN_1401a10e0(float *param_1,longlong param_2,longlong param_3,float *param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  longlong lVar18;
  
  pfVar14 = param_1;
  for (lVar18 = param_3; 0x20 < lVar18; lVar18 = lVar18 + -0x20) {
    pfVar17 = pfVar14 + 0x80;
    if (pfVar14 != pfVar17) {
      for (pfVar13 = pfVar14 + 4; pfVar13 != pfVar17; pfVar13 = pfVar13 + 4) {
        fVar3 = *pfVar13;
        fVar5 = pfVar13[3];
        uVar4 = *(undefined8 *)(pfVar13 + 1);
        if (fVar3 < *pfVar14 || fVar3 == *pfVar14) {
          pfVar9 = pfVar13 + -4;
          pfVar16 = pfVar13;
          pfVar10 = pfVar13;
          if (pfVar13[-4] <= fVar3 && fVar3 != pfVar13[-4]) {
            do {
              pfVar10 = pfVar9;
              fVar6 = pfVar10[1];
              fVar7 = pfVar10[2];
              fVar8 = pfVar10[3];
              *pfVar16 = *pfVar10;
              pfVar16[1] = fVar6;
              pfVar16[2] = fVar7;
              pfVar16[3] = fVar8;
              pfVar9 = pfVar10 + -4;
              pfVar16 = pfVar10;
            } while (*pfVar9 <= fVar3 && fVar3 != *pfVar9);
          }
          *(undefined8 *)(pfVar10 + 1) = uVar4;
          pfVar10[3] = fVar5;
          *pfVar10 = fVar3;
        }
        else {
          FUN_1404210f0(pfVar14 + 4,pfVar14,(longlong)pfVar13 - (longlong)pfVar14);
          *(undefined8 *)(pfVar14 + 1) = uVar4;
          pfVar14[3] = fVar5;
          *pfVar14 = fVar3;
        }
      }
    }
    pfVar14 = pfVar17;
  }
  FUN_14019ee60(pfVar14,param_2);
  pfVar14 = param_4;
  lVar18 = param_3;
  pfVar17 = param_1;
  if (0x20 < param_3) {
    do {
      lVar1 = lVar18 + -0x20;
      pfVar13 = pfVar17 + 0x80;
      lVar15 = lVar18 + -0x40;
      if (lVar1 < 0x20) {
        lVar15 = 0;
      }
      lVar11 = 0x400;
      if (lVar1 < 0x20) {
        lVar11 = lVar18 * 0x10;
      }
      pfVar16 = (float *)(lVar11 + (longlong)pfVar17);
      pfVar9 = pfVar17 + 0x7c;
      lVar11 = 0x3f0;
      if (lVar1 < 0x20) {
        lVar11 = lVar18 * 0x10 + -0x10;
      }
      pfVar10 = (float *)(lVar11 + (longlong)pfVar17);
      pfVar12 = pfVar13;
      while( true ) {
        for (; pfVar2 = pfVar14 + 4, *pfVar12 < *pfVar17 || *pfVar12 == *pfVar17;
            pfVar17 = pfVar17 + 4) {
          fVar3 = pfVar17[1];
          fVar5 = pfVar17[2];
          fVar6 = pfVar17[3];
          *pfVar14 = *pfVar17;
          pfVar14[1] = fVar3;
          pfVar14[2] = fVar5;
          pfVar14[3] = fVar6;
          if (pfVar17 == pfVar9) {
            lVar18 = (longlong)pfVar16 - (longlong)pfVar12;
            goto LAB_1401a128a;
          }
          pfVar14 = pfVar2;
        }
        fVar3 = pfVar12[1];
        fVar5 = pfVar12[2];
        fVar6 = pfVar12[3];
        *pfVar14 = *pfVar12;
        pfVar14[1] = fVar3;
        pfVar14[2] = fVar5;
        pfVar14[3] = fVar6;
        if (pfVar12 == pfVar10) break;
        pfVar12 = pfVar12 + 4;
        pfVar14 = pfVar2;
      }
      lVar18 = (longlong)pfVar13 - (longlong)pfVar17;
      pfVar12 = pfVar17;
LAB_1401a128a:
      FUN_1404210f0(pfVar2,pfVar12,lVar18);
      pfVar14 = (float *)((longlong)pfVar14 + lVar18 + 0x10);
      lVar18 = lVar15;
      pfVar17 = pfVar16;
    } while (0x20 < lVar15);
    FUN_1404210f0(pfVar14,pfVar16,param_2 - (longlong)pfVar16);
    lVar18 = 0x40;
    FUN_1401a28d0(param_4,param_4 + param_3 * 4,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1401a28d0(param_1,param_2,param_4,lVar18 * 2,param_3,param_5);
        lVar18 = lVar18 * 4;
        FUN_1401a28d0(param_4,param_4 + param_3 * 4,param_1,lVar18,param_3,param_5);
      } while (lVar18 <= (param_3 + -1) / 2);
    }
  }
  return;
}

