// Function: FUN_14019ef50
// Addr: 14019ef50
// Size: 1029 bytes


void FUN_14019ef50(float *param_1,float *param_2,ulonglong param_3,float *param_4,longlong param_5,
                  undefined1 param_6)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  float *pfVar19;
  longlong lVar20;
  longlong lVar21;
  
  if ((longlong)param_3 < 0x21) {
    if (param_1 != param_2) {
      for (pfVar19 = param_1 + 4; pfVar19 != param_2; pfVar19 = pfVar19 + 4) {
        fVar4 = *pfVar19;
        fVar6 = pfVar19[3];
        uVar5 = *(undefined8 *)(pfVar19 + 1);
        if (fVar4 < *param_1 || fVar4 == *param_1) {
          pfVar10 = pfVar19 + -4;
          pfVar12 = pfVar19;
          pfVar11 = pfVar19;
          if (pfVar19[-4] <= fVar4 && fVar4 != pfVar19[-4]) {
            do {
              pfVar12 = pfVar10;
              fVar7 = pfVar12[1];
              fVar8 = pfVar12[2];
              fVar9 = pfVar12[3];
              *pfVar11 = *pfVar12;
              pfVar11[1] = fVar7;
              pfVar11[2] = fVar8;
              pfVar11[3] = fVar9;
              pfVar10 = pfVar12 + -4;
              pfVar11 = pfVar12;
            } while (*pfVar10 <= fVar4 && fVar4 != *pfVar10);
          }
          *(undefined8 *)(pfVar12 + 1) = uVar5;
          pfVar12[3] = fVar6;
          *pfVar12 = fVar4;
        }
        else {
          FUN_1404210f0(param_1 + 4,param_1,(longlong)pfVar19 - (longlong)param_1);
          *(undefined8 *)(param_1 + 1) = uVar5;
          param_1[3] = fVar6;
          *param_1 = fVar4;
        }
      }
    }
  }
  else {
    uVar18 = param_3 >> 1;
    lVar20 = param_3 - uVar18;
    lVar17 = lVar20;
    pfVar19 = param_1;
    if (param_5 < lVar20) {
      FUN_14019ef50(param_1,param_1 + lVar20 * 4,lVar20,param_4,param_5,param_6);
      FUN_14019ef50(param_1 + lVar20 * 4,param_2,uVar18,param_4,param_5,param_6);
    }
    else {
      for (; 0x20 < lVar17; lVar17 = lVar17 + -0x20) {
        pfVar10 = pfVar19 + 0x80;
        if (pfVar19 != pfVar10) {
          for (pfVar12 = pfVar19 + 4; pfVar12 != pfVar10; pfVar12 = pfVar12 + 4) {
            fVar4 = *pfVar12;
            fVar6 = pfVar12[3];
            uVar5 = *(undefined8 *)(pfVar12 + 1);
            if (fVar4 < *pfVar19 || fVar4 == *pfVar19) {
              pfVar11 = pfVar12 + -4;
              pfVar13 = pfVar12;
              pfVar16 = pfVar12;
              if (pfVar12[-4] <= fVar4 && fVar4 != pfVar12[-4]) {
                do {
                  pfVar16 = pfVar11;
                  fVar7 = pfVar16[1];
                  fVar8 = pfVar16[2];
                  fVar9 = pfVar16[3];
                  *pfVar13 = *pfVar16;
                  pfVar13[1] = fVar7;
                  pfVar13[2] = fVar8;
                  pfVar13[3] = fVar9;
                  pfVar11 = pfVar16 + -4;
                  pfVar13 = pfVar16;
                } while (*pfVar11 <= fVar4 && fVar4 != *pfVar11);
              }
              *(undefined8 *)(pfVar16 + 1) = uVar5;
              pfVar16[3] = fVar6;
              *pfVar16 = fVar4;
            }
            else {
              FUN_1404210f0(pfVar19 + 4,pfVar19,(longlong)pfVar12 - (longlong)pfVar19);
              *(undefined8 *)(pfVar19 + 1) = uVar5;
              pfVar19[3] = fVar6;
              *pfVar19 = fVar4;
            }
          }
        }
        pfVar19 = pfVar10;
      }
      pfVar10 = param_1 + lVar20 * 4;
      FUN_14019ee60(pfVar19,pfVar10);
      pfVar19 = param_4;
      pfVar12 = param_1;
      lVar17 = lVar20;
      if (0x20 < lVar20) {
        do {
          lVar1 = lVar17 + -0x20;
          pfVar11 = pfVar12 + 0x80;
          lVar21 = lVar17 + -0x40;
          if (lVar1 < 0x20) {
            lVar21 = 0;
          }
          lVar14 = 0x400;
          if (lVar1 < 0x20) {
            lVar14 = lVar17 * 0x10;
          }
          pfVar16 = (float *)(lVar14 + (longlong)pfVar12);
          pfVar13 = pfVar12 + 0x7c;
          lVar14 = 0x3f0;
          if (lVar1 < 0x20) {
            lVar14 = lVar17 * 0x10 + -0x10;
          }
          pfVar3 = (float *)(lVar14 + (longlong)pfVar12);
          pfVar15 = pfVar11;
          while( true ) {
            for (; pfVar2 = pfVar19 + 4, *pfVar15 < *pfVar12 || *pfVar15 == *pfVar12;
                pfVar12 = pfVar12 + 4) {
              fVar4 = pfVar12[1];
              fVar6 = pfVar12[2];
              fVar7 = pfVar12[3];
              *pfVar19 = *pfVar12;
              pfVar19[1] = fVar4;
              pfVar19[2] = fVar6;
              pfVar19[3] = fVar7;
              if (pfVar12 == pfVar13) {
                lVar17 = (longlong)pfVar16 - (longlong)pfVar15;
                goto LAB_14019f1fa;
              }
              pfVar19 = pfVar2;
            }
            fVar4 = pfVar15[1];
            fVar6 = pfVar15[2];
            fVar7 = pfVar15[3];
            *pfVar19 = *pfVar15;
            pfVar19[1] = fVar4;
            pfVar19[2] = fVar6;
            pfVar19[3] = fVar7;
            if (pfVar15 == pfVar3) break;
            pfVar15 = pfVar15 + 4;
            pfVar19 = pfVar2;
          }
          lVar17 = (longlong)pfVar11 - (longlong)pfVar12;
          pfVar15 = pfVar12;
LAB_14019f1fa:
          FUN_1404210f0(pfVar2,pfVar15,lVar17);
          pfVar19 = (float *)((longlong)pfVar19 + lVar17 + 0x10);
          pfVar12 = pfVar16;
          lVar17 = lVar21;
        } while (0x20 < lVar21);
        FUN_1404210f0(pfVar19,pfVar16,(longlong)pfVar10 - (longlong)pfVar16);
        lVar17 = 0x40;
        FUN_1401a28d0(param_4,param_4 + lVar20 * 4,param_1,0x40,lVar20,param_6);
        if (0x7f < lVar20 + -1) {
          do {
            FUN_1401a28d0(param_1,pfVar10,param_4,lVar17 * 2,lVar20,param_6);
            lVar17 = lVar17 * 4;
            FUN_1401a28d0(param_4,param_4 + lVar20 * 4,param_1,lVar17,lVar20,param_6);
          } while (lVar17 <= (lVar20 + -1) / 2);
        }
      }
      FUN_1401a10e0(pfVar10,param_2,uVar18,param_4,param_6);
    }
    FUN_1401a1360(param_1,param_1 + lVar20 * 4,param_2,lVar20,uVar18,param_4,param_5,param_6);
  }
  return;
}

