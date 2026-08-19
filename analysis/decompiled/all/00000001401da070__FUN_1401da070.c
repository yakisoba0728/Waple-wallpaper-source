// Function: FUN_1401da070
// Addr: 1401da070
// Size: 798 bytes


void FUN_1401da070(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lStackX_8;
  
  lVar4 = (longlong)param_2 - (longlong)param_1;
  do {
    if (lVar4 >> 3 < 0x21) {
      if (param_1 != param_2) {
        for (plVar9 = param_1 + 1; plVar9 != param_2; plVar9 = plVar9 + 1) {
          lVar4 = *plVar9;
          if (*(uint *)(lVar4 + 4) < *(uint *)(*param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(param_1 + 1,param_1,(longlong)plVar9 - (longlong)param_1);
          }
          plVar8 = plVar9;
          plVar11 = plVar9;
          if (*(uint *)(lVar4 + 4) < *(uint *)(plVar9[-1] + 4)) {
            do {
              plVar8 = plVar11 + -1;
              *plVar11 = *plVar8;
              plVar7 = plVar11 + -2;
              plVar11 = plVar8;
            } while (*(uint *)(lVar4 + 4) < *(uint *)(*plVar7 + 4));
          }
          *plVar8 = lVar4;
        }
      }
      return;
    }
    uVar12 = (longlong)param_2 - (longlong)param_1;
    lVar4 = (longlong)uVar12 >> 4;
    if (param_3 < 1) {
      lVar14 = (longlong)uVar12 >> 3;
      if (0 < lVar4) {
        lVar5 = lVar14 + -1 >> 1;
        do {
          lVar2 = param_1[lVar4 + -1];
          lVar4 = lVar4 + -1;
          lVar13 = lVar4;
          while (lVar13 < lVar5) {
            lVar6 = (2 - (ulonglong)
                         (*(uint *)(param_1[lVar13 * 2 + 2] + 4) <
                         *(uint *)(param_1[lVar13 * 2 + 1] + 4))) + lVar13 * 2;
            param_1[lVar13] = param_1[lVar6];
            lVar13 = lVar6;
          }
          if ((lVar13 == lVar5) && ((uVar12 & 8) == 0)) {
            param_1[lVar13] = *(longlong *)((longlong)param_1 + ((uVar12 & 0xfffffffffffffff8) - 8))
            ;
            lVar13 = lVar14 + -1;
          }
          while (lVar4 < lVar13) {
            lVar6 = lVar13 + -1 >> 1;
            if (*(uint *)(lVar2 + 4) <= *(uint *)(param_1[lVar6] + 4)) break;
            param_1[lVar13] = param_1[lVar6];
            lVar13 = lVar6;
          }
          param_1[lVar13] = lVar2;
        } while (0 < lVar4);
      }
      if (lVar14 < 2) {
        return;
      }
      do {
        if (1 < (longlong)param_2 - (longlong)param_1 >> 3) {
          lStackX_8 = param_2[-1];
          param_2[-1] = *param_1;
          func_0x0001401dc5e0(param_1,0,(longlong)(param_2 + -1) - (longlong)param_1 >> 3,&lStackX_8
                              ,param_4);
        }
        param_2 = param_2 + -1;
      } while (0xf < (longlong)param_2 - (longlong)param_1);
      return;
    }
    lVar14 = *param_1;
    plVar9 = param_1 + lVar4;
    lVar5 = (longlong)param_2 + (-8 - (longlong)param_1) >> 3;
    if (lVar5 < 0x29) {
      lVar4 = *plVar9;
      if (*(uint *)(lVar4 + 4) < *(uint *)(lVar14 + 4)) {
        *plVar9 = lVar14;
        *param_1 = lVar4;
      }
      lVar4 = param_2[-1];
      if (*(uint *)(lVar4 + 4) < *(uint *)(*plVar9 + 4)) {
        param_2[-1] = *plVar9;
        *plVar9 = lVar4;
        if (*(uint *)(lVar4 + 4) < *(uint *)(*param_1 + 4)) {
          *plVar9 = *param_1;
          *param_1 = lVar4;
        }
      }
    }
    else {
      lVar13 = lVar5 + 1 >> 3;
      lVar5 = param_1[lVar13];
      if (*(uint *)(lVar5 + 4) < *(uint *)(lVar14 + 4)) {
        param_1[lVar13] = lVar14;
        *param_1 = lVar5;
      }
      lVar14 = param_1[lVar13 * 2];
      if (*(uint *)(lVar14 + 4) < *(uint *)(param_1[lVar13] + 4)) {
        param_1[lVar13 * 2] = param_1[lVar13];
        param_1[lVar13] = lVar14;
        if (*(uint *)(lVar14 + 4) < *(uint *)(*param_1 + 4)) {
          param_1[lVar13] = *param_1;
          *param_1 = lVar14;
        }
      }
      lVar14 = *plVar9;
      plVar8 = plVar9 + -lVar13;
      if (*(uint *)(lVar14 + 4) < *(uint *)(*plVar8 + 4)) {
        *plVar9 = *plVar8;
        *plVar8 = lVar14;
      }
      lVar14 = param_1[lVar13 + lVar4];
      if (*(uint *)(lVar14 + 4) < *(uint *)(*plVar9 + 4)) {
        param_1[lVar13 + lVar4] = *plVar9;
        *plVar9 = lVar14;
        if (*(uint *)(lVar14 + 4) < *(uint *)(*plVar8 + 4)) {
          *plVar9 = *plVar8;
          *plVar8 = lVar14;
        }
      }
      plVar11 = param_2 + lVar13 * -2 + -1;
      plVar8 = param_2 + (-1 - lVar13);
      lVar4 = *plVar8;
      if (*(uint *)(lVar4 + 4) < *(uint *)(*plVar11 + 4)) {
        *plVar8 = *plVar11;
        *plVar11 = lVar4;
      }
      lVar4 = param_2[-1];
      if (*(uint *)(lVar4 + 4) < *(uint *)(*plVar8 + 4)) {
        param_2[-1] = *plVar8;
        *plVar8 = lVar4;
        if (*(uint *)(lVar4 + 4) < *(uint *)(*plVar11 + 4)) {
          *plVar8 = *plVar11;
          *plVar11 = lVar4;
        }
      }
      lVar4 = *plVar9;
      if (*(uint *)(lVar4 + 4) < *(uint *)(param_1[lVar13] + 4)) {
        *plVar9 = param_1[lVar13];
        param_1[lVar13] = lVar4;
      }
      lVar4 = *plVar8;
      if (*(uint *)(lVar4 + 4) < *(uint *)(*plVar9 + 4)) {
        *plVar8 = *plVar9;
        *plVar9 = lVar4;
        if (*(uint *)(lVar4 + 4) < *(uint *)(param_1[lVar13] + 4)) {
          *plVar9 = param_1[lVar13];
          param_1[lVar13] = lVar4;
        }
      }
    }
    plVar8 = plVar9 + 1;
    while (plVar11 = plVar9, param_1 < plVar11) {
      uVar1 = *(uint *)(plVar11[-1] + 4);
      if ((uVar1 < *(uint *)(*plVar11 + 4)) ||
         (plVar9 = plVar11 + -1, uVar1 != *(uint *)(*plVar11 + 4))) break;
    }
    plVar9 = plVar8;
    plVar7 = plVar11;
    if (plVar8 < param_2) {
      do {
        plVar9 = plVar8;
        if ((*(uint *)(*plVar8 + 4) < *(uint *)(*plVar11 + 4)) ||
           (*(uint *)(*plVar8 + 4) != *(uint *)(*plVar11 + 4))) break;
        plVar8 = plVar8 + 1;
        plVar9 = plVar8;
      } while (plVar8 < param_2);
    }
joined_r0x0001401da2a3:
    if (plVar8 < param_2) {
      uVar1 = *(uint *)(*plVar8 + 4);
      if (uVar1 <= *(uint *)(*plVar7 + 4)) {
        if (*(uint *)(*plVar7 + 4) != uVar1) goto joined_r0x0001401da2df;
        if (plVar9 != plVar8) {
          lVar4 = *plVar9;
          *plVar9 = *plVar8;
          *plVar8 = lVar4;
        }
        plVar9 = plVar9 + 1;
      }
      plVar8 = plVar8 + 1;
      goto joined_r0x0001401da2a3;
    }
joined_r0x0001401da2df:
    while (plVar3 = plVar11, param_1 < plVar3) {
      plVar11 = plVar3 + -1;
      uVar1 = *(uint *)(*plVar11 + 4);
      if (*(uint *)(*plVar7 + 4) <= uVar1) {
        if (uVar1 != *(uint *)(*plVar7 + 4)) break;
        if (plVar3 != plVar7) {
          lVar4 = plVar7[-1];
          plVar7[-1] = *plVar11;
          *plVar11 = lVar4;
        }
        plVar7 = plVar7 + -1;
      }
    }
    if (plVar3 != param_1) {
      plVar11 = plVar3 + -1;
      if (plVar8 == param_2) {
        plVar10 = plVar7 + -1;
        if (plVar7 != plVar3) {
          lVar4 = *plVar11;
          *plVar11 = *plVar10;
          *plVar10 = lVar4;
        }
        lVar4 = *plVar10;
        *plVar10 = plVar9[-1];
        plVar9[-1] = lVar4;
        plVar9 = plVar9 + -1;
        plVar7 = plVar10;
      }
      else {
        lVar4 = *plVar8;
        *plVar8 = *plVar11;
        plVar8 = plVar8 + 1;
        *plVar11 = lVar4;
      }
      goto joined_r0x0001401da2a3;
    }
    if (plVar8 != param_2) {
      if (plVar9 != plVar8) {
        lVar4 = *plVar7;
        *plVar7 = *plVar9;
        *plVar9 = lVar4;
      }
      lVar4 = *plVar7;
      *plVar7 = *plVar8;
      *plVar8 = lVar4;
      plVar8 = plVar8 + 1;
      plVar9 = plVar9 + 1;
      plVar11 = plVar3;
      plVar7 = plVar7 + 1;
      goto joined_r0x0001401da2a3;
    }
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)plVar7 - (longlong)param_1 >> 3 < (longlong)param_2 - (longlong)plVar9 >> 3) {
      FUN_1401da070(param_1,plVar7,param_3,param_4);
      plVar7 = param_2;
      param_1 = plVar9;
    }
    else {
      FUN_1401da070(plVar9,param_2,param_3,param_4);
    }
    lVar4 = (longlong)plVar7 - (longlong)param_1;
    param_2 = plVar7;
  } while( true );
}

