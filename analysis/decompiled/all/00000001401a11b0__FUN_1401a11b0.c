// Function: FUN_1401a11b0
// Addr: 1401a11b0
// Size: 26 bytes


void FUN_1401a11b0(float *param_1,undefined8 param_2,longlong param_3,float *param_4)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  
  pfVar11 = param_1;
  for (lVar14 = param_3; 0x20 < lVar14; lVar14 = lVar14 + -0x20) {
    pfVar13 = pfVar11 + 0x80;
    if (pfVar11 != pfVar13) {
      for (pfVar12 = pfVar11 + 4; pfVar12 != pfVar13; pfVar12 = pfVar12 + 4) {
        fVar1 = *pfVar12;
        fVar3 = pfVar12[3];
        uVar2 = *(undefined8 *)(pfVar12 + 1);
        if (*pfVar11 <= fVar1 && fVar1 != *pfVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(pfVar11 + 4,pfVar11,(longlong)pfVar12 - (longlong)pfVar11);
        }
        pfVar7 = pfVar12 + -4;
        pfVar8 = pfVar12;
        pfVar9 = pfVar12;
        if (pfVar12[-4] <= fVar1 && fVar1 != pfVar12[-4]) {
          do {
            pfVar9 = pfVar7;
            fVar4 = pfVar9[1];
            fVar5 = pfVar9[2];
            fVar6 = pfVar9[3];
            *pfVar8 = *pfVar9;
            pfVar8[1] = fVar4;
            pfVar8[2] = fVar5;
            pfVar8[3] = fVar6;
            pfVar7 = pfVar9 + -4;
            pfVar8 = pfVar9;
          } while (*pfVar7 <= fVar1 && fVar1 != *pfVar7);
        }
        *(undefined8 *)(pfVar9 + 1) = uVar2;
        pfVar9[3] = fVar3;
        *pfVar9 = fVar1;
      }
    }
    pfVar11 = pfVar13;
  }
  FUN_14019ef30(pfVar11,param_2);
  if (param_3 < 0x21) {
    return;
  }
  lVar14 = 0x400;
  if (param_3 + -0x20 < 0x20) {
    lVar14 = param_3 * 0x10;
  }
  lVar10 = 0x3f0;
  if (param_3 + -0x20 < 0x20) {
    lVar10 = param_3 * 0x10 + -0x10;
  }
  pfVar13 = param_1;
  pfVar11 = param_1 + 0x80;
  do {
    for (; pfVar12 = param_4 + 4, *pfVar11 < *pfVar13 || *pfVar11 == *pfVar13; pfVar13 = pfVar13 + 4
        ) {
      fVar1 = pfVar13[1];
      fVar3 = pfVar13[2];
      fVar4 = pfVar13[3];
      *param_4 = *pfVar13;
      param_4[1] = fVar1;
      param_4[2] = fVar3;
      param_4[3] = fVar4;
      if (pfVar13 == param_1 + 0x7c) {
        lVar14 = (longlong)param_1 + (lVar14 - (longlong)pfVar11);
code_r0x0001401a135a:
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(pfVar12,pfVar11,lVar14);
      }
      param_4 = pfVar12;
    }
    fVar1 = pfVar11[1];
    fVar3 = pfVar11[2];
    fVar4 = pfVar11[3];
    *param_4 = *pfVar11;
    param_4[1] = fVar1;
    param_4[2] = fVar3;
    param_4[3] = fVar4;
    if (pfVar11 == (float *)(lVar10 + (longlong)param_1)) {
      lVar14 = (longlong)(param_1 + 0x80) - (longlong)pfVar13;
      pfVar11 = pfVar13;
      goto code_r0x0001401a135a;
    }
    pfVar11 = pfVar11 + 4;
    param_4 = pfVar12;
  } while( true );
}

