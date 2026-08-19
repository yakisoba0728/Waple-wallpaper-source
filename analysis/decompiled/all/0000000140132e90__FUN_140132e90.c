// Function: FUN_140132e90
// Addr: 140132e90
// Size: 1090 bytes


void FUN_140132e90(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  lVar4 = (longlong)param_2 - (longlong)param_1;
  do {
    if (lVar4 >> 2 < 0x21) {
      if (param_1 != param_2) {
        for (piVar10 = param_1 + 1; piVar10 != param_2; piVar10 = piVar10 + 1) {
          iVar1 = *piVar10;
          if (iVar1 < *param_1) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(param_1 + 1,param_1,(longlong)piVar10 - (longlong)param_1);
          }
          iVar2 = piVar10[-1];
          piVar12 = piVar10 + -1;
          piVar9 = piVar10;
          while (piVar8 = piVar12, iVar1 < iVar2) {
            *piVar9 = *piVar8;
            piVar12 = piVar8 + -1;
            piVar9 = piVar8;
            iVar2 = piVar8[-1];
          }
          *piVar9 = iVar1;
        }
      }
      return;
    }
    uVar13 = (longlong)param_2 - (longlong)param_1;
    lVar4 = (longlong)uVar13 >> 3;
    if (param_3 < 1) {
      lVar5 = (longlong)uVar13 >> 2;
      if (0 < lVar4) {
        lVar7 = lVar5 + -1 >> 1;
        do {
          iVar1 = param_1[lVar4 + -1];
          lVar4 = lVar4 + -1;
          lVar14 = lVar4;
          while (lVar14 < lVar7) {
            lVar6 = (ulonglong)(param_1[lVar14 * 2 + 1] <= param_1[lVar14 * 2 + 2]) + 1 + lVar14 * 2
            ;
            param_1[lVar14] = param_1[lVar6];
            lVar14 = lVar6;
          }
          if ((lVar14 == lVar7) && ((uVar13 & 4) == 0)) {
            param_1[lVar14] = *(int *)((longlong)param_1 + ((uVar13 & 0xfffffffffffffffc) - 4));
            lVar14 = lVar5 + -1;
          }
          while (lVar4 < lVar14) {
            lVar6 = lVar14 + -1 >> 1;
            if (iVar1 <= param_1[lVar6]) break;
            param_1[lVar14] = param_1[lVar6];
            lVar14 = lVar6;
          }
          param_1[lVar14] = iVar1;
        } while (0 < lVar4);
      }
      if (lVar5 < 2) {
        return;
      }
      do {
        if (1 < (longlong)param_2 - (longlong)param_1 >> 2) {
          iVar1 = param_2[-1];
          lVar4 = 0;
          param_2[-1] = *param_1;
          uVar13 = (longlong)(param_2 + -1) - (longlong)param_1;
          lVar7 = ((longlong)uVar13 >> 2) + -1;
          lVar14 = lVar7 >> 1;
          lVar5 = lVar4;
          if (0 < lVar14) {
            do {
              lVar4 = (ulonglong)(param_1[lVar5 * 2 + 1] <= param_1[lVar5 * 2 + 2]) + 1 + lVar5 * 2;
              param_1[lVar5] = param_1[lVar4];
              lVar5 = lVar4;
            } while (lVar4 < lVar14);
          }
          if ((lVar4 == lVar14) && ((uVar13 & 4) == 0)) {
            param_1[lVar4] = *(int *)((longlong)param_1 + ((uVar13 & 0xfffffffffffffffc) - 4));
            lVar4 = lVar7;
          }
          while (0 < lVar4) {
            lVar5 = lVar4 + -1 >> 1;
            if (iVar1 <= param_1[lVar5]) break;
            param_1[lVar4] = param_1[lVar5];
            lVar4 = lVar5;
          }
          param_1[lVar4] = iVar1;
        }
        param_2 = param_2 + -1;
        if ((longlong)param_2 - (longlong)param_1 < 8) {
          return;
        }
      } while( true );
    }
    iVar1 = *param_1;
    piVar10 = param_1 + lVar4;
    lVar5 = (longlong)param_2 + (-4 - (longlong)param_1) >> 2;
    if (lVar5 < 0x29) {
      iVar2 = *piVar10;
      if (iVar2 < iVar1) {
        *piVar10 = iVar1;
        *param_1 = iVar2;
      }
      iVar1 = param_2[-1];
      if (iVar1 < *piVar10) {
        param_2[-1] = *piVar10;
        *piVar10 = iVar1;
        if (iVar1 < *param_1) {
          *piVar10 = *param_1;
          *param_1 = iVar1;
        }
      }
    }
    else {
      lVar5 = lVar5 + 1 >> 3;
      iVar2 = param_1[lVar5];
      if (iVar2 < iVar1) {
        param_1[lVar5] = iVar1;
        *param_1 = iVar2;
      }
      iVar1 = param_1[lVar5 * 2];
      if (iVar1 < param_1[lVar5]) {
        param_1[lVar5 * 2] = param_1[lVar5];
        param_1[lVar5] = iVar1;
        if (iVar1 < *param_1) {
          param_1[lVar5] = *param_1;
          *param_1 = iVar1;
        }
      }
      iVar1 = *piVar10;
      piVar9 = piVar10 + -lVar5;
      if (iVar1 < *piVar9) {
        *piVar10 = *piVar9;
        *piVar9 = iVar1;
      }
      iVar1 = param_1[lVar5 + lVar4];
      if (iVar1 < *piVar10) {
        param_1[lVar5 + lVar4] = *piVar10;
        *piVar10 = iVar1;
        if (iVar1 < *piVar9) {
          *piVar10 = *piVar9;
          *piVar9 = iVar1;
        }
      }
      piVar9 = param_2 + (-1 - lVar5);
      piVar12 = param_2 + lVar5 * -2 + -1;
      iVar1 = *piVar9;
      if (iVar1 < *piVar12) {
        *piVar9 = *piVar12;
        *piVar12 = iVar1;
      }
      iVar1 = param_2[-1];
      if (iVar1 < *piVar9) {
        param_2[-1] = *piVar9;
        *piVar9 = iVar1;
        if (iVar1 < *piVar12) {
          *piVar9 = *piVar12;
          *piVar12 = iVar1;
        }
      }
      iVar1 = *piVar10;
      if (iVar1 < param_1[lVar5]) {
        *piVar10 = param_1[lVar5];
        param_1[lVar5] = iVar1;
      }
      iVar1 = *piVar9;
      if (iVar1 < *piVar10) {
        *piVar9 = *piVar10;
        *piVar10 = iVar1;
        if (iVar1 < param_1[lVar5]) {
          *piVar10 = param_1[lVar5];
          param_1[lVar5] = iVar1;
        }
      }
    }
    piVar9 = piVar10 + 1;
    while (piVar12 = piVar10, param_1 < piVar12) {
      iVar1 = piVar12[-1];
      if ((iVar1 < *piVar12) || (piVar10 = piVar12 + -1, *piVar12 < iVar1)) break;
    }
    piVar10 = piVar9;
    piVar8 = piVar12;
    if (piVar9 < param_2) {
      do {
        piVar10 = piVar9;
        if ((*piVar9 < *piVar12) || (*piVar12 < *piVar9)) break;
        piVar9 = piVar9 + 1;
        piVar10 = piVar9;
      } while (piVar9 < param_2);
    }
joined_r0x000140133058:
    if (piVar9 < param_2) {
      iVar1 = *piVar9;
      if (iVar1 <= *piVar8) {
        if (iVar1 < *piVar8) goto joined_r0x000140133083;
        if (piVar10 != piVar9) {
          iVar2 = *piVar10;
          *piVar10 = iVar1;
          *piVar9 = iVar2;
        }
        piVar10 = piVar10 + 1;
      }
      piVar9 = piVar9 + 1;
      goto joined_r0x000140133058;
    }
joined_r0x000140133083:
    while (piVar3 = piVar12, param_1 < piVar3) {
      iVar1 = piVar3[-1];
      piVar12 = piVar3 + -1;
      if (*piVar8 <= iVar1) {
        if (*piVar8 < iVar1) break;
        if (piVar3 != piVar8) {
          iVar2 = piVar8[-1];
          piVar8[-1] = iVar1;
          *piVar12 = iVar2;
        }
        piVar8 = piVar8 + -1;
      }
    }
    if (piVar3 != param_1) {
      piVar12 = piVar3 + -1;
      if (piVar9 == param_2) {
        piVar11 = piVar8 + -1;
        if (piVar8 != piVar3) {
          iVar1 = *piVar12;
          *piVar12 = *piVar11;
          *piVar11 = iVar1;
        }
        iVar1 = *piVar11;
        *piVar11 = piVar10[-1];
        piVar10[-1] = iVar1;
        piVar10 = piVar10 + -1;
        piVar8 = piVar11;
      }
      else {
        iVar1 = *piVar9;
        *piVar9 = *piVar12;
        piVar9 = piVar9 + 1;
        *piVar12 = iVar1;
      }
      goto joined_r0x000140133058;
    }
    if (piVar9 != param_2) {
      if (piVar10 != piVar9) {
        iVar1 = *piVar8;
        *piVar8 = *piVar10;
        *piVar10 = iVar1;
      }
      iVar1 = *piVar8;
      *piVar8 = *piVar9;
      *piVar9 = iVar1;
      piVar9 = piVar9 + 1;
      piVar10 = piVar10 + 1;
      piVar12 = piVar3;
      piVar8 = piVar8 + 1;
      goto joined_r0x000140133058;
    }
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)piVar8 - (longlong)param_1 >> 2 < (longlong)param_2 - (longlong)piVar10 >> 2) {
      FUN_140132e90(param_1,piVar8,param_3);
      piVar8 = param_2;
      param_1 = piVar10;
    }
    else {
      FUN_140132e90(piVar10,param_2,param_3);
    }
    lVar4 = (longlong)piVar8 - (longlong)param_1;
    param_2 = piVar8;
  } while( true );
}

