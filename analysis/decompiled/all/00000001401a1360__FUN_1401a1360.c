// Function: FUN_1401a1360
// Addr: 1401a1360
// Size: 902 bytes


void FUN_1401a1360(float *param_1,float *param_2,float *param_3,longlong param_4,longlong param_5,
                  float *param_6,longlong param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  ulonglong uVar9;
  float *pfVar10;
  ulonglong uVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  
  if (param_2 == param_3) {
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  while (*param_2 < *param_1 || *param_2 == *param_1) {
    param_1 = param_1 + 4;
    param_4 = param_4 + -1;
    if (param_1 == param_2) {
      return;
    }
  }
  pfVar10 = param_3 + -4;
  if (param_2 != pfVar10) {
    fVar2 = param_2[-4];
    do {
      pfVar13 = pfVar10;
      if (fVar2 < *pfVar13) {
        if (param_4 == 1) {
          uVar6 = *(undefined8 *)param_1;
          uVar7 = *(undefined8 *)(param_1 + 2);
          FUN_1404210f0(param_1,fVar2,(longlong)param_3 - (longlong)param_2);
          puVar1 = (undefined8 *)(((longlong)param_3 - (longlong)param_2) + (longlong)param_1);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          return;
        }
        if ((param_5 < param_4) || (param_7 < param_4)) {
          if (param_7 < param_5) {
            if (param_5 < param_4) {
              lVar12 = param_5 >> 1;
              uVar9 = (longlong)param_2 - (longlong)param_1 >> 4;
              pfVar13 = param_2 + lVar12 * 4;
              pfVar10 = param_1;
              if (0 < (longlong)uVar9) {
                do {
                  uVar11 = uVar9 >> 1;
                  if (*pfVar13 < pfVar10[uVar11 * 4] || *pfVar13 == pfVar10[uVar11 * 4]) {
                    pfVar10 = pfVar10 + uVar11 * 4 + 4;
                    uVar11 = uVar9 + (-1 - uVar11);
                  }
                  uVar9 = uVar11;
                } while (0 < (longlong)uVar11);
              }
              lVar14 = (longlong)pfVar10 - (longlong)param_1 >> 4;
            }
            else {
              lVar14 = param_4 >> 1;
              uVar9 = (longlong)param_3 - (longlong)param_2 >> 4;
              pfVar10 = param_1 + lVar14 * 4;
              pfVar13 = param_2;
              if (0 < (longlong)uVar9) {
                do {
                  uVar11 = uVar9 >> 1;
                  if (*pfVar10 < pfVar13[uVar11 * 4]) {
                    pfVar13 = pfVar13 + uVar11 * 4 + 4;
                    uVar11 = uVar9 + (-1 - uVar11);
                  }
                  uVar9 = uVar11;
                } while (0 < (longlong)uVar11);
              }
              lVar12 = (longlong)pfVar13 - (longlong)param_2 >> 4;
            }
            FUN_1401a3450(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pfVar10,
                          pfVar13,lVar14,lVar12);
            return;
          }
          FUN_1404210f0(param_6,fVar2,(longlong)param_3 - (longlong)param_2);
          uVar6 = *(undefined8 *)(param_2 + -2);
          pfVar8 = (float *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -0x10);
          pfVar10 = param_2 + -8;
          *(undefined8 *)pfVar13 = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)(pfVar13 + 2) = uVar6;
          while( true ) {
            while (*pfVar8 < *pfVar10 || *pfVar8 == *pfVar10) {
              uVar6 = *(undefined8 *)pfVar8;
              uVar7 = *(undefined8 *)(pfVar8 + 2);
              pfVar8 = pfVar8 + -4;
              *(undefined8 *)(pfVar13 + -4) = uVar6;
              *(undefined8 *)(pfVar13 + -2) = uVar7;
              if (param_6 == pfVar8) {
                fVar2 = pfVar10[1];
                fVar3 = pfVar10[2];
                fVar4 = pfVar10[3];
                pfVar13[-8] = *pfVar10;
                pfVar13[-7] = fVar2;
                pfVar13[-6] = fVar3;
                pfVar13[-5] = fVar4;
                FUN_1404210f0((longlong)(pfVar13 + -8) - ((longlong)pfVar10 - (longlong)param_1),
                              param_1);
                uVar6 = *(undefined8 *)(param_6 + 2);
                *(undefined8 *)param_1 = *(undefined8 *)param_6;
                *(undefined8 *)(param_1 + 2) = uVar6;
                return;
              }
              pfVar13 = pfVar13 + -4;
            }
            uVar6 = *(undefined8 *)(pfVar10 + 2);
            *(undefined8 *)(pfVar13 + -4) = *(undefined8 *)pfVar10;
            *(undefined8 *)(pfVar13 + -2) = uVar6;
            if (param_1 == pfVar10) break;
            pfVar10 = pfVar10 + -4;
            pfVar13 = pfVar13 + -4;
          }
          fVar2 = pfVar8[1];
          fVar3 = pfVar8[2];
          fVar4 = pfVar8[3];
          lVar12 = (longlong)pfVar8 - (longlong)param_6;
          pfVar13[-8] = *pfVar8;
          pfVar13[-7] = fVar2;
          pfVar13[-6] = fVar3;
          pfVar13[-5] = fVar4;
          pfVar8 = (float *)((longlong)(pfVar13 + -8) - lVar12);
        }
        else {
          lVar12 = (longlong)param_2 - (longlong)param_1;
          FUN_1404210f0(param_6,param_1,lVar12);
          uVar6 = *(undefined8 *)(param_2 + 2);
          pfVar10 = param_2 + 4;
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 2) = uVar6;
          pfVar13 = param_6;
          do {
            for (; pfVar8 = param_1, param_1 = pfVar8 + 4,
                *pfVar10 < *pfVar13 || *pfVar10 == *pfVar13; pfVar13 = pfVar13 + 4) {
              fVar2 = pfVar13[1];
              fVar3 = pfVar13[2];
              fVar4 = pfVar13[3];
              *param_1 = *pfVar13;
              pfVar8[5] = fVar2;
              pfVar8[6] = fVar3;
              pfVar8[7] = fVar4;
              if (pfVar13 == (float *)((longlong)param_6 + lVar12 + -0x20)) {
                uVar6 = *(undefined8 *)((longlong)param_6 + lVar12 + -0x10);
                uVar7 = *(undefined8 *)((longlong)param_6 + lVar12 + -8);
                FUN_1404210f0(pfVar8 + 8,pfVar10,(longlong)param_3 - (longlong)pfVar10);
                puVar1 = (undefined8 *)
                         (((longlong)param_3 - (longlong)pfVar10) + 0x10 + (longlong)param_1);
                *puVar1 = uVar6;
                puVar1[1] = uVar7;
                return;
              }
            }
            fVar2 = *pfVar10;
            fVar3 = pfVar10[1];
            fVar4 = pfVar10[2];
            fVar5 = pfVar10[3];
            pfVar10 = pfVar10 + 4;
            *param_1 = fVar2;
            pfVar8[5] = fVar3;
            pfVar8[6] = fVar4;
            pfVar8[7] = fVar5;
          } while (pfVar10 != param_3);
          lVar12 = (longlong)param_6 + (lVar12 - (longlong)pfVar13);
          pfVar8 = pfVar8 + 8;
          param_6 = pfVar13;
        }
        FUN_1404210f0(pfVar8,param_6,lVar12);
        return;
      }
      param_5 = param_5 + -1;
      pfVar10 = pfVar13 + -4;
      param_3 = pfVar13;
    } while (param_2 != pfVar10);
  }
  uVar6 = *(undefined8 *)param_2;
  uVar7 = *(undefined8 *)(param_2 + 2);
  FUN_1404210f0((longlong)pfVar10 + (0x10 - ((longlong)param_2 - (longlong)param_1)),param_1,
                (longlong)param_2 - (longlong)param_1);
  *(undefined8 *)param_1 = uVar6;
  *(undefined8 *)(param_1 + 2) = uVar7;
  return;
}

