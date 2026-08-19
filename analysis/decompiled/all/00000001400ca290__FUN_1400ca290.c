// Function: FUN_1400ca290
// Addr: 1400ca290
// Size: 149 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400ca290(undefined8 param_1,ulonglong param_2,uint param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  
  iVar6 = func_0x000140290e50(&DAT_1404df858);
  lVar5 = DAT_1404df8c8;
  plVar2 = DAT_1404df8b8;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (DAT_1404df8a4 == 0x7fffffff) {
    DAT_1404df8a4 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(6);
  }
  uVar12 = 0;
  uVar10 = DAT_1404df8e0 &
           ((((((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
                 0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff) *
               0x100000001b3 ^ param_2 >> 0x20 & 0xff) * 0x100000001b3 ^ param_2 >> 0x28 & 0xff) *
             0x100000001b3 ^ param_2 >> 0x30 & 0xff) * 0x100000001b3 ^ param_2 >> 0x38) *
           0x100000001b3;
  plVar3 = *(longlong **)(DAT_1404df8c8 + 8 + uVar10 * 0x10);
  if (plVar3 == DAT_1404df8b8) {
code_r0x0001400ca391:
    plVar13 = (longlong *)0x0;
  }
  else {
    uVar11 = plVar3[2];
    plVar13 = plVar3;
    while (param_2 != uVar11) {
      if (plVar13 == *(longlong **)(DAT_1404df8c8 + uVar10 * 0x10)) goto code_r0x0001400ca391;
      plVar13 = (longlong *)plVar13[1];
      uVar11 = plVar13[2];
    }
  }
  uVar11 = uVar12;
  if (plVar13 != (longlong *)0x0) {
    plVar4 = *(longlong **)(DAT_1404df8c8 + uVar10 * 0x10);
    if (plVar3 == plVar13) {
      if (plVar4 == plVar13) {
        *(longlong **)(DAT_1404df8c8 + uVar10 * 0x10) = DAT_1404df8b8;
        *(longlong **)(lVar5 + 8 + uVar10 * 0x10) = plVar2;
      }
      else {
        *(longlong *)(DAT_1404df8c8 + 8 + uVar10 * 0x10) = plVar13[1];
      }
    }
    else if (plVar4 == plVar13) {
      *(longlong *)(DAT_1404df8c8 + uVar10 * 0x10) = *plVar13;
    }
    lVar5 = *plVar13;
    DAT_1404df8c0 = DAT_1404df8c0 + -1;
    *(longlong *)plVar13[1] = lVar5;
    *(longlong *)(lVar5 + 8) = plVar13[1];
    func_0x00014028b040(plVar13,0x18);
  }
  do {
    if (param_3 <= *(uint *)(PTR_DAT_1404df850 + uVar11 * 4)) {
      lVar9 = uVar11 + 4;
      lVar5 = *(longlong *)(lVar9 * 0x28 + 0x1404df870);
      if ((((char)lVar5 + *(char *)(lVar9 * 0x28 + 0x1404df868) & 1U) == 0) &&
         (*(ulonglong *)(lVar9 * 0x28 + 0x1404df860) <= lVar5 + 2U >> 1)) {
        func_0x0001400ce100(&PTR_DAT_1404df850 + lVar9 * 5);
      }
      lVar5 = *(longlong *)(lVar9 * 0x28 + 0x1404df860);
      puVar1 = (ulonglong *)(lVar9 * 0x28 + 0x1404df868);
      *puVar1 = *puVar1 & lVar5 * 2 - 1U;
      uVar11 = *(longlong *)(lVar9 * 0x28 + 0x1404df870) + *(longlong *)(lVar9 * 0x28 + 0x1404df868)
      ;
      uVar14 = uVar11 >> 1;
      uVar10 = uVar14 & lVar5 - 1U;
      if (*(longlong *)(*(longlong *)(&DAT_1404df858 + lVar9 * 0x28) + uVar10 * 8) == 0) {
        uVar8 = func_0x00014028aff0(0x10);
        *(undefined8 *)(*(longlong *)(&DAT_1404df858 + lVar9 * 0x28) + uVar10 * 8) = uVar8;
      }
      *(ulonglong *)
       (*(longlong *)
         (*(longlong *)(&DAT_1404df858 + lVar9 * 0x28) +
         (*(longlong *)(lVar9 * 0x28 + 0x1404df860) - 1U & uVar14) * 8) +
       (ulonglong)((uint)uVar11 & 1) * 8) = param_2;
      plVar2 = (longlong *)(lVar9 * 0x28 + 0x1404df870);
      *plVar2 = *plVar2 + 1;
      break;
    }
    uVar7 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar7;
  } while ((int)uVar7 < 10);
  if (DAT_1404df8c0 == 0) {
    _DAT_1404df8a8 = 0;
    do {
      if ((&DAT_1404df910)[uVar12 * 5] != 0) {
        while( true ) {
          func_0x00014028b040(*(undefined8 *)
                               (*(longlong *)
                                 ((&DAT_1404df8f8)[uVar12 * 5] +
                                 ((&DAT_1404df900)[uVar12 * 5] - 1 &
                                 (ulonglong)(&DAT_1404df908)[uVar12 * 5] >> 1) * 8) +
                               (ulonglong)((uint)(&DAT_1404df908)[uVar12 * 5] & 1) * 8));
          plVar2 = &DAT_1404df910 + uVar12 * 5;
          *plVar2 = *plVar2 + -1;
          if (*plVar2 == 0) break;
          (&DAT_1404df908)[uVar12 * 5] = (&DAT_1404df908)[uVar12 * 5] + 1;
        }
        (&DAT_1404df908)[uVar12 * 5] = 0;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 10);
  }
  DAT_1404df8a4 = DAT_1404df8a4 + -1;
  if (DAT_1404df8a4 == 0) {
    uRam00000001404df8a0 = 0xffffffff;
    (*DAT_140426298)(0x1404df868);
  }
  return 0;
}

