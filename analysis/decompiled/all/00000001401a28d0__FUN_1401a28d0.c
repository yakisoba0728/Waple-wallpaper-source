// Function: FUN_1401a28d0
// Addr: 1401a28d0
// Size: 266 bytes


void FUN_1401a28d0(float *param_1,longlong param_2,float *param_3,longlong param_4,longlong param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  
  if (param_4 < param_5) {
    pfVar11 = param_1;
    do {
      pfVar1 = pfVar11 + param_4 * 4;
      lVar9 = param_5 - param_4;
      lVar6 = param_4;
      if (lVar9 < param_4) {
        lVar6 = lVar9;
      }
      lVar10 = param_4 * 2;
      if (lVar9 < param_4) {
        lVar10 = param_5;
      }
      param_1 = pfVar11 + lVar10 * 4;
      pfVar7 = pfVar1;
      do {
        while (pfVar8 = param_3, param_3 = pfVar8 + 4, *pfVar11 <= *pfVar7 && *pfVar7 != *pfVar11) {
          fVar2 = *pfVar7;
          fVar3 = pfVar7[1];
          fVar4 = pfVar7[2];
          fVar5 = pfVar7[3];
          pfVar7 = pfVar7 + 4;
          *pfVar8 = fVar2;
          pfVar8[1] = fVar3;
          pfVar8[2] = fVar4;
          pfVar8[3] = fVar5;
          if (pfVar7 == param_1) {
            lVar10 = (longlong)pfVar1 - (longlong)pfVar11;
            pfVar7 = pfVar11;
            goto LAB_1401a2990;
          }
        }
        fVar2 = *pfVar11;
        fVar3 = pfVar11[1];
        fVar4 = pfVar11[2];
        fVar5 = pfVar11[3];
        pfVar11 = pfVar11 + 4;
        *pfVar8 = fVar2;
        pfVar8[1] = fVar3;
        pfVar8[2] = fVar4;
        pfVar8[3] = fVar5;
      } while (pfVar11 != pfVar1);
      lVar10 = (longlong)param_1 - (longlong)pfVar7;
LAB_1401a2990:
      FUN_1404210f0(param_3,pfVar7,lVar10);
      param_3 = (float *)((longlong)pfVar8 + lVar10 + 0x10);
      param_5 = lVar9 - lVar6;
      pfVar11 = param_1;
    } while (param_4 < lVar9 - lVar6);
  }
  FUN_1404210f0(param_3,param_1,param_2 - (longlong)param_1);
  return;
}

