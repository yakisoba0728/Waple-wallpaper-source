// Function: FUN_140305f60
// Addr: 140305f60
// Size: 853 bytes


void FUN_140305f60(uint *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar15;
  uint uVar16;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  ulonglong uVar14;
  ulonglong uVar17;
  ulonglong uVar21;
  ulonglong uVar25;
  
  if (*param_1 != 1) {
    uVar17 = 1;
    uVar16 = 1;
    uVar22 = 1;
    if (1 < *param_1) {
      do {
        uVar18 = (ulonglong)uVar22;
        uVar19 = uVar22;
        while (uVar19 != 0) {
          uVar19 = (int)uVar18 - 1;
          piVar1 = param_2 + (ulonglong)uVar19 * 3;
          piVar2 = param_2 + uVar18 * 3;
          if (*piVar1 <= param_2[uVar18 * 3]) break;
          uVar3 = *(undefined8 *)piVar2;
          iVar26 = piVar2[2];
          iVar28 = piVar1[1];
          iVar27 = piVar1[2];
          *piVar2 = *piVar1;
          piVar2[1] = iVar28;
          piVar2[2] = iVar27;
          *(undefined8 *)piVar1 = uVar3;
          piVar1[2] = iVar26;
          uVar18 = (ulonglong)uVar19;
        }
        uVar19 = *param_1;
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar19);
      if (1 < uVar19) {
        uVar22 = 1;
        uVar14 = 1;
        uVar25 = 0;
        uVar24 = 0;
        iVar26 = *param_2;
        uVar18 = uVar25;
        do {
          uVar15 = (uint)uVar14;
          if (param_3 < param_2[uVar14 * 3] - iVar26) {
LAB_14030605f:
            uVar13 = (uint)uVar18;
            uVar19 = uVar24;
            if (uVar13 < uVar15) {
              uVar11 = uVar15 - uVar13;
              uVar14 = uVar18;
              if (7 < uVar11) {
                iVar31 = 0;
                iVar32 = 0;
                iVar33 = 0;
                iVar34 = 0;
                iVar27 = 0;
                iVar28 = 0;
                iVar29 = 0;
                iVar30 = 0;
                do {
                  iVar10 = (int)uVar14;
                  iVar4 = param_2[(ulonglong)(iVar10 + 3) * 3];
                  param_2[(ulonglong)(iVar10 + 3) * 3] = 0;
                  iVar5 = param_2[(ulonglong)(iVar10 + 2) * 3];
                  param_2[(ulonglong)(iVar10 + 2) * 3] = 0;
                  iVar6 = param_2[(ulonglong)(iVar10 + 1) * 3];
                  param_2[(ulonglong)(iVar10 + 1) * 3] = 0;
                  iVar7 = param_2[uVar14 * 3];
                  iVar8 = param_2[(ulonglong)(iVar10 + 7) * 3];
                  param_2[uVar14 * 3] = 0;
                  iVar9 = param_2[(ulonglong)(iVar10 + 6) * 3];
                  iVar31 = iVar31 + iVar7;
                  iVar32 = iVar32 + iVar6;
                  iVar33 = iVar33 + iVar5;
                  iVar34 = iVar34 + iVar4;
                  param_2[(ulonglong)(iVar10 + 6) * 3] = 0;
                  param_2[(ulonglong)(iVar10 + 7) * 3] = 0;
                  iVar4 = param_2[(ulonglong)(iVar10 + 5) * 3];
                  param_2[(ulonglong)(iVar10 + 5) * 3] = 0;
                  uVar13 = iVar10 + 8;
                  uVar14 = (ulonglong)uVar13;
                  iVar5 = param_2[(ulonglong)(iVar10 + 4) * 3];
                  param_2[(ulonglong)(iVar10 + 4) * 3] = 0;
                  iVar27 = iVar27 + iVar5;
                  iVar28 = iVar28 + iVar4;
                  iVar29 = iVar29 + iVar9;
                  iVar30 = iVar30 + iVar8;
                } while (uVar13 < uVar15 - (uVar11 & 7));
                uVar19 = iVar27 + iVar31 + iVar29 + iVar33 + iVar28 + iVar32 + iVar30 + iVar34;
                if (uVar15 <= uVar13) goto LAB_1403061ff;
              }
              uVar13 = (uint)uVar14;
              uVar11 = uVar24;
              uVar20 = 0;
              if (uVar15 - uVar13 < 2) {
LAB_1403061e9:
                uVar14 = (ulonglong)uVar13;
                uVar19 = uVar19 + param_2[uVar14 * 3];
                uVar13 = uVar13 + 1;
                param_2[uVar14 * 3] = 0;
              }
              else {
                uVar21 = uVar25;
                uVar23 = uVar25;
                do {
                  uVar20 = (int)uVar21 + param_2[uVar14 * 3];
                  uVar21 = (ulonglong)uVar20;
                  uVar12 = (ulonglong)((int)uVar14 + 1);
                  param_2[uVar14 * 3] = 0;
                  uVar11 = (int)uVar23 + param_2[uVar12 * 3];
                  uVar23 = (ulonglong)uVar11;
                  uVar13 = (int)uVar14 + 2;
                  uVar14 = (ulonglong)uVar13;
                  param_2[uVar12 * 3] = 0;
                } while (uVar13 < uVar15 - 1);
                if (uVar13 < uVar15) goto LAB_1403061e9;
              }
              uVar19 = uVar19 + uVar11 + uVar20;
            }
LAB_1403061ff:
            param_2[uVar18 * 3] = (int)uVar19 / (int)uVar13;
            uVar19 = *param_1;
            if (uVar15 < uVar19 - 1) {
              uVar18 = (ulonglong)(uVar15 + 1);
              iVar26 = param_2[uVar18 * 3];
            }
          }
          else if (uVar15 == uVar19 - 1) {
            uVar15 = uVar15 + 1;
            goto LAB_14030605f;
          }
          uVar14 = (ulonglong)(uVar15 + 1);
        } while (uVar15 + 1 < uVar19);
        if (1 < uVar19) {
          do {
            piVar1 = param_2 + (ulonglong)uVar22 * 3;
            uVar18 = uVar17;
            if (param_2[(ulonglong)uVar22 * 3] != 0) {
              iVar26 = piVar1[1];
              uVar18 = (ulonglong)((int)uVar17 + 1);
              param_2[uVar17 * 3] = *piVar1;
              (param_2 + uVar17 * 3)[1] = iVar26;
              param_2[uVar17 * 3 + 2] = piVar1[2];
            }
            uVar16 = (uint)uVar18;
            uVar22 = uVar22 + 1;
            uVar17 = uVar18;
          } while (uVar22 < *param_1);
        }
      }
    }
    *param_1 = uVar16;
  }
  return;
}

