// Function: FUN_14019ef30
// Addr: 14019ef30
// Size: 13 bytes


float * FUN_14019ef30(float *param_1,float *param_2)

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
  float *pfVar10;
  
  if (param_1 == param_2) {
    return param_2;
  }
  pfVar10 = param_1 + 4;
  while( true ) {
    if (pfVar10 == param_2) {
      return param_2;
    }
    fVar1 = *pfVar10;
    fVar3 = pfVar10[3];
    uVar2 = *(undefined8 *)(pfVar10 + 1);
    if (*param_1 <= fVar1 && fVar1 != *param_1) break;
    pfVar7 = pfVar10 + -4;
    pfVar8 = pfVar10;
    pfVar9 = pfVar10;
    if (pfVar10[-4] <= fVar1 && fVar1 != pfVar10[-4]) {
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
    pfVar10 = pfVar10 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(param_1 + 4,param_1,(longlong)pfVar10 - (longlong)param_1);
}

