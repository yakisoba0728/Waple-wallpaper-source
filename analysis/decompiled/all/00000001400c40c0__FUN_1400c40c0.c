// Function: FUN_1400c40c0
// Addr: 1400c40c0
// Size: 1311 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400c40c0(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  
  iVar6 = func_0x000140290e50(&DAT_1404df858);
  lVar8 = DAT_1404df8c8;
  plVar12 = DAT_1404df8b8;
  if (iVar6 != 0) {
LAB_1400c47c5:
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (DAT_1404df8a4 == 0x7fffffff) {
    DAT_1404df8a4 = 0x7ffffffe;
  }
  else {
    uVar10 = DAT_1404df8e0 &
             ((((((((param_3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_3 >> 8 & 0xff) *
                   0x100000001b3 ^ param_3 >> 0x10 & 0xff) * 0x100000001b3 ^ param_3 >> 0x18 & 0xff)
                 * 0x100000001b3 ^ param_3 >> 0x20 & 0xff) * 0x100000001b3 ^ param_3 >> 0x28 & 0xff)
               * 0x100000001b3 ^ param_3 >> 0x30 & 0xff) * 0x100000001b3 ^ param_3 >> 0x38) *
             0x100000001b3;
    plVar3 = *(longlong **)(DAT_1404df8c8 + 8 + uVar10 * 0x10);
    if (plVar3 == DAT_1404df8b8) {
LAB_1400c41d4:
      plVar9 = (longlong *)0x0;
    }
    else {
      uVar11 = plVar3[2];
      plVar9 = plVar3;
      while (param_3 != uVar11) {
        if (plVar9 == *(longlong **)(DAT_1404df8c8 + uVar10 * 0x10)) goto LAB_1400c41d4;
        plVar9 = (longlong *)plVar9[1];
        uVar11 = plVar9[2];
      }
    }
    if (plVar9 != (longlong *)0x0) {
      plVar4 = *(longlong **)(DAT_1404df8c8 + uVar10 * 0x10);
      if (plVar3 == plVar9) {
        if (plVar4 == plVar9) {
          *(longlong **)(DAT_1404df8c8 + uVar10 * 0x10) = DAT_1404df8b8;
          *(longlong **)(lVar8 + 8 + uVar10 * 0x10) = plVar12;
        }
        else {
          *(longlong *)(DAT_1404df8c8 + 8 + uVar10 * 0x10) = plVar9[1];
        }
      }
      else if (plVar4 == plVar9) {
        *(longlong *)(DAT_1404df8c8 + uVar10 * 0x10) = *plVar9;
      }
      lVar8 = *plVar9;
      DAT_1404df8c0 = DAT_1404df8c0 + -1;
      *(longlong *)plVar9[1] = lVar8;
      *(longlong *)(lVar8 + 8) = plVar9[1];
      uVar7 = func_0x00014028b040(plVar9,0x18);
      return uVar7;
    }
    lVar8 = 0;
    if ((((((param_4 <= *(uint *)PTR_DAT_1404df850) ||
           (lVar8 = 1, param_4 <= *(uint *)(PTR_DAT_1404df850 + 4))) ||
          (lVar8 = 2, param_4 <= *(uint *)(PTR_DAT_1404df850 + 8))) ||
         ((lVar8 = 3, param_4 <= *(uint *)(PTR_DAT_1404df850 + 0xc) ||
          (lVar8 = 4, param_4 <= *(uint *)(PTR_DAT_1404df850 + 0x10))))) ||
        ((lVar8 = 5, param_4 <= *(uint *)(PTR_DAT_1404df850 + 0x14) ||
         ((lVar8 = 6, param_4 <= *(uint *)(PTR_DAT_1404df850 + 0x18) ||
          (lVar8 = 7, param_4 <= *(uint *)(PTR_DAT_1404df850 + 0x1c))))))) ||
       ((lVar8 = 8, param_4 <= *(uint *)(PTR_DAT_1404df850 + 0x20) ||
        (lVar8 = 9, param_4 <= *(uint *)(PTR_DAT_1404df850 + 0x24))))) {
      if ((((char)(&DAT_1404df908)[lVar8 * 5] + (char)(&DAT_1404df910)[lVar8 * 5] & 1U) == 0) &&
         (uVar10 = (&DAT_1404df900)[lVar8 * 5], uVar10 <= (&DAT_1404df910)[lVar8 * 5] + 2 >> 1)) {
        uVar11 = 1;
        if (uVar10 != 0) {
          uVar11 = uVar10;
        }
        for (; (uVar11 == uVar10 || (uVar11 < 8)); uVar11 = uVar11 * 2) {
          if (0xfffffffffffffff - uVar11 < uVar11) {
            func_0x000140082ff0();
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return uVar7;
          }
        }
        if (uVar11 < 0x2000000000000000) {
          uVar10 = uVar11 * 8;
          if (uVar10 == 0) {
            uVar13 = (ulonglong)(&DAT_1404df908)[lVar8 * 5] >> 1;
            uVar10 = uVar11 >> 1;
            lVar2 = uVar13 * 8;
            for (; uVar11 <= uVar10; uVar11 = uVar11 * 2) {
            }
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(lVar2,(&DAT_1404df8f8)[lVar8 * 5] + lVar2,
                          ((&DAT_1404df900)[lVar8 * 5] - uVar13) * 8);
          }
          if (uVar10 < 0x1000) {
            uVar7 = func_0x00014028aff0();
            return uVar7;
          }
          if (uVar10 < uVar10 + 0x27) {
            uVar7 = func_0x00014028aff0(uVar10 + 0x27);
            return uVar7;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_140017440();
      }
      (&DAT_1404df908)[lVar8 * 5] =
           (&DAT_1404df908)[lVar8 * 5] & (&DAT_1404df900)[lVar8 * 5] * 2 - 1U;
      uVar10 = (ulonglong)((&DAT_1404df910)[lVar8 * 5] + (&DAT_1404df908)[lVar8 * 5]) >> 1;
      if (*(longlong *)
           ((&DAT_1404df8f8)[lVar8 * 5] + ((&DAT_1404df900)[lVar8 * 5] - 1 & uVar10) * 8) == 0) {
        uVar7 = func_0x00014028aff0(0x10);
        return uVar7;
      }
      *(ulonglong *)
       (*(longlong *)((&DAT_1404df8f8)[lVar8 * 5] + ((&DAT_1404df900)[lVar8 * 5] - 1 & uVar10) * 8)
       + (ulonglong)((uint)((&DAT_1404df910)[lVar8 * 5] + (&DAT_1404df908)[lVar8 * 5]) & 1) * 8) =
           param_3;
      (&DAT_1404df910)[lVar8 * 5] = (&DAT_1404df910)[lVar8 * 5] + 1;
    }
    if (DAT_1404df8c0 == 0) {
      _DAT_1404df8a8 = 0;
      lVar8 = 0;
      do {
        if ((&DAT_1404df910)[lVar8 * 5] != 0) {
          uVar7 = func_0x00014028b040(*(undefined8 *)
                                       (*(longlong *)
                                         ((&DAT_1404df8f8)[lVar8 * 5] +
                                         ((&DAT_1404df900)[lVar8 * 5] - 1 &
                                         (ulonglong)(&DAT_1404df908)[lVar8 * 5] >> 1) * 8) +
                                       (ulonglong)((uint)(&DAT_1404df908)[lVar8 * 5] & 1) * 8));
          return uVar7;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 10);
    }
    FUN_140290f70(&DAT_1404df858);
    iVar6 = func_0x000140290e50(param_1 + 0x310);
    if (iVar6 != 0) goto LAB_1400c47c5;
    if (*(int *)(param_1 + 0x35c) != 0x7fffffff) {
      *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) - param_4;
      uVar10 = ((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
                 0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff) *
               0x100000001b3 & *(ulonglong *)(param_1 + 0x3e0);
      plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x3c8) + 8 + uVar10 * 0x10);
      if (plVar12 == *(longlong **)(param_1 + 0x3b8)) {
LAB_1400c46d1:
        plVar12 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar12[2];
        while ((int)param_2 != iVar6) {
          if (plVar12 == *(longlong **)(*(longlong *)(param_1 + 0x3c8) + uVar10 * 0x10))
          goto LAB_1400c46d1;
          plVar12 = (longlong *)plVar12[1];
          iVar6 = (int)plVar12[2];
        }
      }
      if (plVar12 == (longlong *)0x0) {
        plVar12 = *(longlong **)(param_1 + 0x3b8);
      }
      piVar1 = (int *)((longlong)plVar12 + 0x14);
      *piVar1 = *piVar1 - param_4;
      if (*piVar1 == 0) {
        lVar8 = *(longlong *)(param_1 + 0x3c8);
        uVar10 = (((((ulonglong)*(byte *)(plVar12 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar12 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar12 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar12 + 0x13)) * 0x100000001b3 &
                 *(ulonglong *)(param_1 + 0x3e0);
        plVar3 = *(longlong **)(lVar8 + uVar10 * 0x10);
        if (*(longlong **)(lVar8 + 8 + uVar10 * 0x10) == plVar12) {
          if (plVar3 == plVar12) {
            uVar7 = *(undefined8 *)(param_1 + 0x3b8);
            *(undefined8 *)(lVar8 + uVar10 * 0x10) = uVar7;
            *(undefined8 *)(lVar8 + 8 + uVar10 * 0x10) = uVar7;
          }
          else {
            *(longlong *)(lVar8 + 8 + uVar10 * 0x10) = plVar12[1];
          }
        }
        else if (plVar3 == plVar12) {
          *(longlong *)(lVar8 + uVar10 * 0x10) = *plVar12;
        }
        lVar8 = *plVar12;
        *(longlong *)(param_1 + 0x3c0) = *(longlong *)(param_1 + 0x3c0) + -1;
        *(longlong *)plVar12[1] = lVar8;
        *(longlong *)(lVar8 + 8) = plVar12[1];
        func_0x00014028b040(plVar12,0x18);
      }
      FUN_140290fc0(param_1 + 0x360);
      piVar1 = (int *)(param_1 + 0x35c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(param_1 + 0x358) = 0xffffffff;
        (*DAT_140426298)(param_1 + 800);
      }
      return 0;
    }
    *(undefined4 *)(param_1 + 0x35c) = 0x7ffffffe;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

