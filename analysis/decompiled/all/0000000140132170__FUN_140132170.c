// Function: FUN_140132170
// Addr: 140132170
// Size: 1792 bytes


void FUN_140132170(int *param_1,int *param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  longlong lVar18;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  
  lVar11 = (longlong)param_2 - (longlong)param_1;
  do {
    if (lVar11 < 0x294) {
      if (param_1 != param_2) {
        for (piVar16 = param_1 + 5; piVar16 != param_2; piVar16 = piVar16 + 5) {
          iVar3 = *piVar16;
          uVar7 = *(undefined8 *)(piVar16 + 1);
          uVar8 = *(undefined8 *)(piVar16 + 3);
          if (iVar3 < *param_1) {
            FUN_1404210f0(param_1 + 5,param_1,(longlong)piVar16 - (longlong)param_1);
            *param_1 = iVar3;
            *(undefined8 *)(param_1 + 1) = uVar7;
            *(undefined8 *)(param_1 + 3) = uVar8;
          }
          else {
            iVar2 = piVar16[-5];
            piVar13 = piVar16 + -5;
            piVar15 = piVar16;
            while (piVar14 = piVar13, iVar3 < iVar2) {
              iVar2 = piVar14[1];
              iVar5 = piVar14[2];
              iVar6 = piVar14[3];
              *piVar15 = *piVar14;
              piVar15[1] = iVar2;
              piVar15[2] = iVar5;
              piVar15[3] = iVar6;
              piVar15[4] = piVar14[4];
              piVar13 = piVar14 + -5;
              piVar15 = piVar14;
              iVar2 = piVar14[-5];
            }
            *piVar15 = iVar3;
            *(undefined8 *)(piVar15 + 1) = uVar7;
            *(undefined8 *)(piVar15 + 3) = uVar8;
          }
        }
      }
      return;
    }
    uVar4 = ((longlong)param_2 - (longlong)param_1) / 0x14;
    lVar11 = (longlong)uVar4 >> 1;
    if (param_3 < 1) {
      if (0 < lVar11) {
        lVar12 = (longlong)(uVar4 - 1) >> 1;
        do {
          lVar18 = lVar11 + -1;
          iVar3 = param_1[lVar11 * 5 + -5];
          uVar7 = *(undefined8 *)(param_1 + lVar11 * 5 + -4);
          uVar8 = *(undefined8 *)(param_1 + lVar11 * 5 + -4 + 2);
          lVar11 = lVar18;
          while (lVar11 < lVar12) {
            lVar1 = (ulonglong)(param_1[lVar11 * 10 + 5] <= param_1[lVar11 * 10 + 10]) + 1 +
                    lVar11 * 2;
            uVar9 = *(undefined8 *)(param_1 + lVar1 * 5 + 2);
            *(undefined8 *)(param_1 + lVar11 * 5) = *(undefined8 *)(param_1 + lVar1 * 5);
            *(undefined8 *)(param_1 + lVar11 * 5 + 2) = uVar9;
            param_1[lVar11 * 5 + 4] = param_1[lVar1 * 5 + 4];
            lVar11 = lVar1;
          }
          lVar1 = lVar11;
          if ((lVar11 == lVar12) && ((uVar4 & 1) == 0)) {
            uVar9 = *(undefined8 *)(param_1 + uVar4 * 5 + -5 + 2);
            lVar1 = uVar4 - 1;
            *(undefined8 *)(param_1 + lVar11 * 5) = *(undefined8 *)(param_1 + uVar4 * 5 + -5);
            *(undefined8 *)(param_1 + lVar11 * 5 + 2) = uVar9;
            param_1[lVar11 * 5 + 4] = param_1[uVar4 * 5 + -1];
          }
          while ((lVar18 < lVar1 && (lVar11 = lVar1 + -1 >> 1, param_1[lVar11 * 5] < iVar3))) {
            uVar9 = *(undefined8 *)(param_1 + lVar11 * 5 + 2);
            *(undefined8 *)(param_1 + lVar1 * 5) = *(undefined8 *)(param_1 + lVar11 * 5);
            *(undefined8 *)(param_1 + lVar1 * 5 + 2) = uVar9;
            param_1[lVar1 * 5 + 4] = param_1[lVar11 * 5 + 4];
            lVar1 = lVar11;
          }
          param_1[lVar1 * 5] = iVar3;
          *(undefined8 *)(param_1 + lVar1 * 5 + 1) = uVar7;
          *(undefined8 *)(param_1 + lVar1 * 5 + 1 + 2) = uVar8;
          lVar11 = lVar18;
        } while (0 < lVar18);
      }
      if ((longlong)uVar4 < 2) {
        return;
      }
      do {
        if (1 < ((longlong)param_2 - (longlong)param_1 >> 2) * -0x3333333333333333) {
          local_78 = *(undefined8 *)(param_2 + -5);
          uStack_70 = *(undefined8 *)(param_2 + -3);
          local_68 = param_2[-1];
          iVar3 = param_1[1];
          iVar2 = param_1[2];
          iVar5 = param_1[3];
          param_2[-5] = *param_1;
          param_2[-4] = iVar3;
          param_2[-3] = iVar2;
          param_2[-2] = iVar5;
          param_2[-1] = param_1[4];
          FUN_140133c80(param_1,0,
                        ((longlong)(param_2 + -5) - (longlong)param_1 >> 2) * -0x3333333333333333,
                        &local_78,param_4);
        }
        param_2 = param_2 + -5;
      } while (0x27 < (longlong)param_2 - (longlong)param_1);
      return;
    }
    piVar16 = param_1 + lVar11 * 5;
    lVar12 = ((longlong)param_2 + (-0x14 - (longlong)param_1) >> 2) * -0x3333333333333333;
    if (lVar12 < 0x29) {
      if (*piVar16 < *param_1) {
        iVar2 = param_1[1];
        iVar5 = param_1[2];
        iVar6 = param_1[3];
        iVar3 = piVar16[4];
        uVar7 = *(undefined8 *)piVar16;
        uVar8 = *(undefined8 *)(piVar16 + 2);
        *piVar16 = *param_1;
        piVar16[1] = iVar2;
        piVar16[2] = iVar5;
        piVar16[3] = iVar6;
        piVar16[4] = param_1[4];
        *(undefined8 *)param_1 = uVar7;
        *(undefined8 *)(param_1 + 2) = uVar8;
        param_1[4] = iVar3;
      }
      if (param_2[-5] < *piVar16) {
        iVar2 = piVar16[1];
        iVar5 = piVar16[2];
        iVar6 = piVar16[3];
        iVar3 = param_2[-1];
        uVar7 = *(undefined8 *)(param_2 + -5);
        uVar8 = *(undefined8 *)(param_2 + -3);
        param_2[-5] = *piVar16;
        param_2[-4] = iVar2;
        param_2[-3] = iVar5;
        param_2[-2] = iVar6;
        param_2[-1] = piVar16[4];
        *(undefined8 *)piVar16 = uVar7;
        *(undefined8 *)(piVar16 + 2) = uVar8;
        piVar16[4] = iVar3;
        if (*piVar16 < *param_1) {
          iVar2 = param_1[1];
          iVar5 = param_1[2];
          iVar6 = param_1[3];
          *piVar16 = *param_1;
          piVar16[1] = iVar2;
          piVar16[2] = iVar5;
          piVar16[3] = iVar6;
          piVar16[4] = param_1[4];
          *(undefined8 *)param_1 = uVar7;
          *(undefined8 *)(param_1 + 2) = uVar8;
          param_1[4] = iVar3;
        }
      }
    }
    else {
      lVar12 = lVar12 + 1 >> 3;
      if (param_1[lVar12 * 5] < *param_1) {
        iVar2 = param_1[1];
        iVar5 = param_1[2];
        iVar6 = param_1[3];
        iVar3 = param_1[lVar12 * 5 + 4];
        uVar7 = *(undefined8 *)(param_1 + lVar12 * 5);
        uVar8 = *(undefined8 *)(param_1 + lVar12 * 5 + 2);
        piVar15 = param_1 + lVar12 * 5;
        *piVar15 = *param_1;
        piVar15[1] = iVar2;
        piVar15[2] = iVar5;
        piVar15[3] = iVar6;
        param_1[lVar12 * 5 + 4] = param_1[4];
        *(undefined8 *)param_1 = uVar7;
        *(undefined8 *)(param_1 + 2) = uVar8;
        param_1[4] = iVar3;
      }
      if (param_1[lVar12 * 10] < param_1[lVar12 * 5]) {
        piVar15 = param_1 + lVar12 * 5;
        iVar2 = piVar15[1];
        iVar5 = piVar15[2];
        iVar6 = piVar15[3];
        iVar3 = param_1[lVar12 * 10 + 4];
        uVar7 = *(undefined8 *)(param_1 + lVar12 * 10);
        uVar8 = *(undefined8 *)(param_1 + lVar12 * 10 + 2);
        piVar13 = param_1 + lVar12 * 10;
        *piVar13 = *piVar15;
        piVar13[1] = iVar2;
        piVar13[2] = iVar5;
        piVar13[3] = iVar6;
        param_1[lVar12 * 10 + 4] = param_1[lVar12 * 5 + 4];
        *(undefined8 *)(param_1 + lVar12 * 5) = uVar7;
        *(undefined8 *)(param_1 + lVar12 * 5 + 2) = uVar8;
        param_1[lVar12 * 5 + 4] = iVar3;
        if (param_1[lVar12 * 5] < *param_1) {
          iVar2 = param_1[1];
          iVar5 = param_1[2];
          iVar6 = param_1[3];
          piVar15 = param_1 + lVar12 * 5;
          *piVar15 = *param_1;
          piVar15[1] = iVar2;
          piVar15[2] = iVar5;
          piVar15[3] = iVar6;
          param_1[lVar12 * 5 + 4] = param_1[4];
          *(undefined8 *)param_1 = uVar7;
          *(undefined8 *)(param_1 + 2) = uVar8;
          param_1[4] = iVar3;
        }
      }
      piVar13 = piVar16 + lVar12 * -5;
      piVar15 = param_1 + (lVar12 + lVar11) * 5;
      if (*piVar16 < *piVar13) {
        iVar2 = piVar13[1];
        iVar5 = piVar13[2];
        iVar6 = piVar13[3];
        iVar3 = piVar16[4];
        uVar7 = *(undefined8 *)piVar16;
        uVar8 = *(undefined8 *)(piVar16 + 2);
        *piVar16 = *piVar13;
        piVar16[1] = iVar2;
        piVar16[2] = iVar5;
        piVar16[3] = iVar6;
        piVar16[4] = piVar13[4];
        *(undefined8 *)piVar13 = uVar7;
        *(undefined8 *)(piVar13 + 2) = uVar8;
        piVar13[4] = iVar3;
      }
      if (*piVar15 < *piVar16) {
        iVar2 = piVar16[1];
        iVar5 = piVar16[2];
        iVar6 = piVar16[3];
        iVar3 = piVar15[4];
        uVar7 = *(undefined8 *)piVar15;
        uVar8 = *(undefined8 *)(piVar15 + 2);
        *piVar15 = *piVar16;
        piVar15[1] = iVar2;
        piVar15[2] = iVar5;
        piVar15[3] = iVar6;
        piVar15[4] = piVar16[4];
        *(undefined8 *)piVar16 = uVar7;
        *(undefined8 *)(piVar16 + 2) = uVar8;
        piVar16[4] = iVar3;
        if (*piVar16 < *piVar13) {
          iVar2 = piVar13[1];
          iVar5 = piVar13[2];
          iVar6 = piVar13[3];
          *piVar16 = *piVar13;
          piVar16[1] = iVar2;
          piVar16[2] = iVar5;
          piVar16[3] = iVar6;
          piVar16[4] = piVar13[4];
          *(undefined8 *)piVar13 = uVar7;
          *(undefined8 *)(piVar13 + 2) = uVar8;
          piVar13[4] = iVar3;
        }
      }
      piVar13 = param_2 + lVar12 * -10 + -5;
      piVar15 = param_2 + lVar12 * -5 + -5;
      if (*piVar15 < *piVar13) {
        iVar2 = piVar13[1];
        iVar5 = piVar13[2];
        iVar6 = piVar13[3];
        iVar3 = piVar15[4];
        uVar7 = *(undefined8 *)piVar15;
        uVar8 = *(undefined8 *)(piVar15 + 2);
        *piVar15 = *piVar13;
        piVar15[1] = iVar2;
        piVar15[2] = iVar5;
        piVar15[3] = iVar6;
        piVar15[4] = piVar13[4];
        *(undefined8 *)piVar13 = uVar7;
        *(undefined8 *)(piVar13 + 2) = uVar8;
        piVar13[4] = iVar3;
      }
      if (param_2[-5] < *piVar15) {
        iVar2 = piVar15[1];
        iVar5 = piVar15[2];
        iVar6 = piVar15[3];
        iVar3 = param_2[-1];
        uVar7 = *(undefined8 *)(param_2 + -5);
        uVar8 = *(undefined8 *)(param_2 + -3);
        param_2[-5] = *piVar15;
        param_2[-4] = iVar2;
        param_2[-3] = iVar5;
        param_2[-2] = iVar6;
        param_2[-1] = piVar15[4];
        *(undefined8 *)piVar15 = uVar7;
        *(undefined8 *)(piVar15 + 2) = uVar8;
        piVar15[4] = iVar3;
        if (*piVar15 < *piVar13) {
          iVar2 = piVar13[1];
          iVar5 = piVar13[2];
          iVar6 = piVar13[3];
          *piVar15 = *piVar13;
          piVar15[1] = iVar2;
          piVar15[2] = iVar5;
          piVar15[3] = iVar6;
          piVar15[4] = piVar13[4];
          *(undefined8 *)piVar13 = uVar7;
          *(undefined8 *)(piVar13 + 2) = uVar8;
          piVar13[4] = iVar3;
        }
      }
      if (*piVar16 < param_1[lVar12 * 5]) {
        piVar13 = param_1 + lVar12 * 5;
        iVar2 = piVar13[1];
        iVar5 = piVar13[2];
        iVar6 = piVar13[3];
        iVar3 = piVar16[4];
        uVar7 = *(undefined8 *)piVar16;
        uVar8 = *(undefined8 *)(piVar16 + 2);
        *piVar16 = *piVar13;
        piVar16[1] = iVar2;
        piVar16[2] = iVar5;
        piVar16[3] = iVar6;
        piVar16[4] = param_1[lVar12 * 5 + 4];
        *(undefined8 *)(param_1 + lVar12 * 5) = uVar7;
        *(undefined8 *)(param_1 + lVar12 * 5 + 2) = uVar8;
        param_1[lVar12 * 5 + 4] = iVar3;
      }
      if (*piVar15 < *piVar16) {
        iVar2 = piVar16[1];
        iVar5 = piVar16[2];
        iVar6 = piVar16[3];
        iVar3 = piVar15[4];
        uVar7 = *(undefined8 *)piVar15;
        uVar8 = *(undefined8 *)(piVar15 + 2);
        *piVar15 = *piVar16;
        piVar15[1] = iVar2;
        piVar15[2] = iVar5;
        piVar15[3] = iVar6;
        piVar15[4] = piVar16[4];
        *(undefined8 *)piVar16 = uVar7;
        *(undefined8 *)(piVar16 + 2) = uVar8;
        piVar16[4] = iVar3;
        if (*piVar16 < param_1[lVar12 * 5]) {
          piVar15 = param_1 + lVar12 * 5;
          iVar2 = piVar15[1];
          iVar5 = piVar15[2];
          iVar6 = piVar15[3];
          *piVar16 = *piVar15;
          piVar16[1] = iVar2;
          piVar16[2] = iVar5;
          piVar16[3] = iVar6;
          piVar16[4] = param_1[lVar12 * 5 + 4];
          *(undefined8 *)(param_1 + lVar12 * 5) = uVar7;
          *(undefined8 *)(param_1 + lVar12 * 5 + 2) = uVar8;
          param_1[lVar12 * 5 + 4] = iVar3;
        }
      }
    }
    piVar15 = piVar16 + 5;
    while (piVar13 = piVar16, param_1 < piVar13) {
      iVar3 = piVar13[-5];
      if ((iVar3 < *piVar13) || (piVar16 = piVar13 + -5, *piVar13 < iVar3)) break;
    }
    piVar16 = piVar15;
    piVar14 = piVar13;
    if (piVar15 < param_2) {
      do {
        piVar16 = piVar15;
        if ((*piVar15 < *piVar13) || (*piVar13 < *piVar15)) break;
        piVar15 = piVar15 + 5;
        piVar16 = piVar15;
      } while (piVar15 < param_2);
    }
joined_r0x000140132498:
    if (piVar15 < param_2) {
      if (*piVar15 <= *piVar14) {
        if (*piVar15 < *piVar14) goto joined_r0x0001401324d5;
        if (piVar16 != piVar15) {
          iVar2 = piVar15[1];
          iVar5 = piVar15[2];
          iVar6 = piVar15[3];
          iVar3 = piVar16[4];
          uVar7 = *(undefined8 *)piVar16;
          uVar8 = *(undefined8 *)(piVar16 + 2);
          *piVar16 = *piVar15;
          piVar16[1] = iVar2;
          piVar16[2] = iVar5;
          piVar16[3] = iVar6;
          piVar16[4] = piVar15[4];
          *(undefined8 *)piVar15 = uVar7;
          *(undefined8 *)(piVar15 + 2) = uVar8;
          piVar15[4] = iVar3;
        }
        piVar16 = piVar16 + 5;
      }
      piVar15 = piVar15 + 5;
      goto joined_r0x000140132498;
    }
joined_r0x0001401324d5:
    while (piVar10 = piVar13, param_1 < piVar10) {
      piVar13 = piVar10 + -5;
      if (*piVar14 <= *piVar13) {
        if (*piVar14 < *piVar13) break;
        if (piVar10 != piVar14) {
          iVar2 = piVar10[-4];
          iVar5 = piVar10[-3];
          iVar6 = piVar10[-2];
          iVar3 = piVar14[-1];
          uVar7 = *(undefined8 *)(piVar14 + -5);
          uVar8 = *(undefined8 *)(piVar14 + -3);
          piVar14[-5] = *piVar13;
          piVar14[-4] = iVar2;
          piVar14[-3] = iVar5;
          piVar14[-2] = iVar6;
          piVar14[-1] = piVar10[-1];
          *(undefined8 *)piVar13 = uVar7;
          *(undefined8 *)(piVar10 + -3) = uVar8;
          piVar10[-1] = iVar3;
        }
        piVar14 = piVar14 + -5;
      }
    }
    if (piVar10 != param_1) {
      piVar13 = piVar10 + -5;
      if (piVar15 == param_2) {
        piVar17 = piVar14 + -5;
        if (piVar14 != piVar10) {
          uVar7 = *(undefined8 *)(piVar14 + -3);
          iVar3 = piVar10[-1];
          uVar8 = *(undefined8 *)piVar13;
          uVar9 = *(undefined8 *)(piVar10 + -3);
          *(undefined8 *)piVar13 = *(undefined8 *)piVar17;
          *(undefined8 *)(piVar10 + -3) = uVar7;
          piVar10[-1] = piVar14[-1];
          *(undefined8 *)piVar17 = uVar8;
          *(undefined8 *)(piVar14 + -3) = uVar9;
          piVar14[-1] = iVar3;
        }
        iVar2 = piVar16[-4];
        iVar5 = piVar16[-3];
        iVar6 = piVar16[-2];
        iVar3 = piVar14[-1];
        uVar7 = *(undefined8 *)piVar17;
        uVar8 = *(undefined8 *)(piVar14 + -3);
        *piVar17 = piVar16[-5];
        piVar14[-4] = iVar2;
        piVar14[-3] = iVar5;
        piVar14[-2] = iVar6;
        piVar14[-1] = piVar16[-1];
        *(undefined8 *)(piVar16 + -5) = uVar7;
        *(undefined8 *)(piVar16 + -3) = uVar8;
        piVar16[-1] = iVar3;
        piVar16 = piVar16 + -5;
        piVar14 = piVar17;
      }
      else {
        uVar7 = *(undefined8 *)piVar15;
        uVar8 = *(undefined8 *)(piVar15 + 2);
        iVar3 = piVar15[4];
        iVar2 = piVar10[-4];
        iVar5 = piVar10[-3];
        iVar6 = piVar10[-2];
        *piVar15 = *piVar13;
        piVar15[1] = iVar2;
        piVar15[2] = iVar5;
        piVar15[3] = iVar6;
        piVar15[4] = piVar10[-1];
        piVar15 = piVar15 + 5;
        *(undefined8 *)piVar13 = uVar7;
        *(undefined8 *)(piVar10 + -3) = uVar8;
        piVar10[-1] = iVar3;
      }
      goto joined_r0x000140132498;
    }
    if (piVar15 != param_2) {
      if (piVar16 != piVar15) {
        uVar7 = *(undefined8 *)(piVar16 + 2);
        iVar3 = piVar14[4];
        uVar8 = *(undefined8 *)piVar14;
        uVar9 = *(undefined8 *)(piVar14 + 2);
        *(undefined8 *)piVar14 = *(undefined8 *)piVar16;
        *(undefined8 *)(piVar14 + 2) = uVar7;
        piVar14[4] = piVar16[4];
        *(undefined8 *)piVar16 = uVar8;
        *(undefined8 *)(piVar16 + 2) = uVar9;
        piVar16[4] = iVar3;
      }
      iVar2 = piVar15[1];
      iVar5 = piVar15[2];
      iVar6 = piVar15[3];
      iVar3 = piVar14[4];
      uVar7 = *(undefined8 *)piVar14;
      uVar8 = *(undefined8 *)(piVar14 + 2);
      *piVar14 = *piVar15;
      piVar14[1] = iVar2;
      piVar14[2] = iVar5;
      piVar14[3] = iVar6;
      piVar14[4] = piVar15[4];
      *(undefined8 *)piVar15 = uVar7;
      *(undefined8 *)(piVar15 + 2) = uVar8;
      piVar15[4] = iVar3;
      piVar15 = piVar15 + 5;
      piVar16 = piVar16 + 5;
      piVar13 = piVar10;
      piVar14 = piVar14 + 5;
      goto joined_r0x000140132498;
    }
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (((longlong)piVar14 - (longlong)param_1 >> 2) * -0x3333333333333333 <
        ((longlong)param_2 - (longlong)piVar16 >> 2) * -0x3333333333333333) {
      FUN_140132170(param_1,piVar14,param_3,param_4);
      piVar14 = param_2;
      param_1 = piVar16;
    }
    else {
      FUN_140132170(piVar16,param_2,param_3,param_4);
    }
    lVar11 = (longlong)piVar14 - (longlong)param_1;
    param_2 = piVar14;
  } while( true );
}

