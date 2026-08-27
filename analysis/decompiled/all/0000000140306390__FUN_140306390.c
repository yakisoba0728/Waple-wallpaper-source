// Function: FUN_140306390
// Addr: 140306390
// Size: 916 bytes


undefined8 FUN_140306390(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  short sVar10;
  short sVar11;
  undefined1 *puVar12;
  uint uVar13;
  bool bVar14;
  
  puVar8 = param_1 + 6;
  if ((param_2 < puVar8) ||
     (puVar2 = puVar8 + (ulonglong)CONCAT11(param_1[4],param_1[5]) * 2, param_2 < puVar2)) {
    return 0;
  }
  if (puVar8 < puVar2) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    sVar10 = 0;
    do {
      puVar12 = puVar8 + 2;
      puVar8 = param_1 + CONCAT11(*puVar8,puVar8[1]);
      sVar11 = CONCAT11(uVar3,uVar4);
      if (CONCAT11(uVar3,uVar4) == 7) {
        if (param_2 < puVar8 + 8) {
          return 0;
        }
        if (CONCAT11(*puVar8,puVar8[1]) != 1) {
          return 0;
        }
        sVar11 = CONCAT11(puVar8[2],puVar8[3]);
        if ((sVar10 != 0) && (bVar14 = sVar10 != sVar11, sVar11 = sVar10, bVar14)) {
          return 0;
        }
        puVar8 = puVar8 + CONCAT31(CONCAT21(CONCAT11(puVar8[4],puVar8[5]),puVar8[6]),puVar8[7]);
      }
      puVar1 = puVar8 + 6;
      if (param_2 < puVar1) {
        return 0;
      }
      sVar10 = CONCAT11(*puVar8,puVar8[1]);
      if (sVar11 == 1) {
        if (sVar10 == 1) {
          cVar5 = FUN_1403062c0(puVar8 + CONCAT11(puVar8[2],puVar8[3]),param_2,0);
          if (cVar5 == '\0') {
            return 0;
          }
        }
        else {
          if (sVar10 != 2) {
            return 0;
          }
          uVar7 = (ulonglong)CONCAT11(puVar8[2],puVar8[3]);
          puVar6 = puVar8 + uVar7 + 4;
          if (param_2 < puVar6) {
            return 0;
          }
          if (CONCAT11(puVar8[uVar7],puVar8[uVar7 + 1]) == 1) {
            uVar13 = (uint)CONCAT11(puVar6[-2],puVar6[-1]);
            if (param_2 < puVar6 + uVar13 * 2) {
              return 0;
            }
          }
          else {
            if (CONCAT11(puVar8[uVar7],puVar8[uVar7 + 1]) != 2) {
              return 0;
            }
            puVar9 = puVar6 + (ulonglong)CONCAT11(puVar6[-2],puVar6[-1]) * 6;
            if (param_2 < puVar9) {
              return 0;
            }
            uVar13 = 0;
            for (; puVar6 < puVar9; puVar6 = puVar6 + 6) {
              if ((uint)CONCAT11(puVar6[2],puVar6[3]) < (uint)CONCAT11(*puVar6,puVar6[1])) {
                return 0;
              }
              uVar13 = uVar13 + 1 +
                       ((uint)CONCAT11(puVar6[2],puVar6[3]) - (uint)CONCAT11(*puVar6,puVar6[1]));
            }
          }
          if (param_2 < puVar1 + (uint)CONCAT11(puVar8[4],puVar8[5]) * 2) {
            return 0;
          }
          if (CONCAT11(puVar8[4],puVar8[5]) != uVar13) {
            return 0;
          }
        }
      }
      else {
        if (sVar11 != 3) {
          return 0;
        }
        if (sVar10 != 1) {
          return 0;
        }
        uVar7 = (ulonglong)CONCAT11(puVar8[2],puVar8[3]);
        puVar6 = puVar8 + uVar7 + 4;
        if (param_2 < puVar6) {
          return 0;
        }
        if (CONCAT11(puVar8[uVar7],puVar8[uVar7 + 1]) == 1) {
          uVar13 = (uint)CONCAT11(puVar6[-2],puVar6[-1]);
          if (param_2 < puVar6 + uVar13 * 2) {
            return 0;
          }
        }
        else {
          if (CONCAT11(puVar8[uVar7],puVar8[uVar7 + 1]) != 2) {
            return 0;
          }
          puVar9 = puVar6 + (ulonglong)CONCAT11(puVar6[-2],puVar6[-1]) * 6;
          if (param_2 < puVar9) {
            return 0;
          }
          uVar13 = 0;
          for (; puVar6 < puVar9; puVar6 = puVar6 + 6) {
            if ((uint)CONCAT11(puVar6[2],puVar6[3]) < (uint)CONCAT11(*puVar6,puVar6[1])) {
              return 0;
            }
            uVar13 = uVar13 + 1 +
                     ((uint)CONCAT11(puVar6[2],puVar6[3]) - (uint)CONCAT11(*puVar6,puVar6[1]));
          }
        }
        if (param_2 < puVar1 + (uint)CONCAT11(puVar8[4],puVar8[5]) * 2) {
          return 0;
        }
        puVar6 = puVar1;
        if (CONCAT11(puVar8[4],puVar8[5]) != uVar13) {
          return 0;
        }
        while (puVar6 < puVar1 + (uint)CONCAT11(puVar8[4],puVar8[5]) * 2) {
          puVar9 = puVar8 + CONCAT11(*puVar6,puVar6[1]);
          if (param_2 < puVar9 + 2) {
            return 0;
          }
          puVar6 = puVar6 + 2;
          if (param_2 < puVar9 + ((ulonglong)CONCAT11(*puVar9,puVar9[1]) + 1) * 2) {
            return 0;
          }
        }
      }
      puVar8 = puVar12;
      sVar10 = sVar11;
    } while (puVar12 < puVar2);
  }
  return 1;
}

