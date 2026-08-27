// Function: FUN_1400ca1c0
// Addr: 1400ca1c0
// Size: 799 bytes


void FUN_1400ca1c0(undefined8 param_1,ulonglong param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  
  iVar6 = FUN_140290d80(&DAT_1404df788);
  lVar9 = DAT_1404df7f8;
  plVar1 = DAT_1404df7e8;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404df7d4 == 0x7fffffff) {
    DAT_1404df7d4 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  uVar11 = 0;
  uVar10 = DAT_1404df810 &
           ((((((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
                 0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff) *
               0x100000001b3 ^ param_2 >> 0x20 & 0xff) * 0x100000001b3 ^ param_2 >> 0x28 & 0xff) *
             0x100000001b3 ^ param_2 >> 0x30 & 0xff) * 0x100000001b3 ^ param_2 >> 0x38) *
           0x100000001b3;
  plVar2 = *(longlong **)(DAT_1404df7f8 + 8 + uVar10 * 0x10);
  if (plVar2 == DAT_1404df7e8) {
LAB_1400ca2c1:
    plVar12 = (longlong *)0x0;
  }
  else {
    uVar13 = plVar2[2];
    plVar12 = plVar2;
    while (param_2 != uVar13) {
      if (plVar12 == *(longlong **)(DAT_1404df7f8 + uVar10 * 0x10)) goto LAB_1400ca2c1;
      plVar12 = (longlong *)plVar12[1];
      uVar13 = plVar12[2];
    }
  }
  uVar13 = uVar11;
  if (plVar12 != (longlong *)0x0) {
    plVar3 = *(longlong **)(DAT_1404df7f8 + uVar10 * 0x10);
    if (plVar2 == plVar12) {
      if (plVar3 == plVar12) {
        *(longlong **)(DAT_1404df7f8 + uVar10 * 0x10) = DAT_1404df7e8;
        *(longlong **)(lVar9 + 8 + uVar10 * 0x10) = plVar1;
      }
      else {
        *(longlong *)(DAT_1404df7f8 + 8 + uVar10 * 0x10) = plVar12[1];
      }
    }
    else if (plVar3 == plVar12) {
      *(longlong *)(DAT_1404df7f8 + uVar10 * 0x10) = *plVar12;
    }
    lVar9 = *plVar12;
    DAT_1404df7f0 = DAT_1404df7f0 + -1;
    *(longlong *)plVar12[1] = lVar9;
    *(longlong *)(lVar9 + 8) = plVar12[1];
    thunk_FUN_14028af80(plVar12,0x18);
  }
  do {
    if (param_3 <= *(uint *)(PTR_DAT_1404df780 + uVar13 * 4)) {
      lVar9 = uVar13 + 4;
      if ((((char)*(longlong *)(&DAT_1404df7a0 + lVar9 * 0x28) + (&DAT_1404df798)[lVar9 * 0x28] & 1U
           ) == 0) &&
         (*(ulonglong *)(&DAT_1404df790 + lVar9 * 0x28) <=
          *(longlong *)(&DAT_1404df7a0 + lVar9 * 0x28) + 2U >> 1)) {
        FUN_1400ce030(&PTR_DAT_1404df780 + lVar9 * 5);
      }
      *(ulonglong *)(&DAT_1404df798 + lVar9 * 0x28) =
           *(ulonglong *)(&DAT_1404df798 + lVar9 * 0x28) &
           *(longlong *)(&DAT_1404df790 + lVar9 * 0x28) * 2 - 1U;
      lVar4 = *(longlong *)(&DAT_1404df7a0 + lVar9 * 0x28);
      lVar5 = *(longlong *)(&DAT_1404df798 + lVar9 * 0x28);
      uVar13 = (ulonglong)(lVar4 + lVar5) >> 1;
      uVar10 = uVar13 & *(longlong *)(&DAT_1404df790 + lVar9 * 0x28) - 1U;
      if (*(longlong *)(*(longlong *)(&DAT_1404df788 + lVar9 * 0x28) + uVar10 * 8) == 0) {
        uVar8 = FUN_14028af20(0x10);
        *(undefined8 *)(*(longlong *)(&DAT_1404df788 + lVar9 * 0x28) + uVar10 * 8) = uVar8;
      }
      *(ulonglong *)
       (*(longlong *)
         (*(longlong *)(&DAT_1404df788 + lVar9 * 0x28) +
         (*(longlong *)(&DAT_1404df790 + lVar9 * 0x28) - 1U & uVar13) * 8) +
       (ulonglong)((uint)(lVar4 + lVar5) & 1) * 8) = param_2;
      *(longlong *)(&DAT_1404df7a0 + lVar9 * 0x28) =
           *(longlong *)(&DAT_1404df7a0 + lVar9 * 0x28) + 1;
      break;
    }
    uVar7 = (int)uVar13 + 1;
    uVar13 = (ulonglong)uVar7;
  } while ((int)uVar7 < 10);
  if (DAT_1404df7f0 == 0) {
    DAT_1404df7d8 = 0;
    do {
      if ((&DAT_1404df840)[uVar11 * 5] != 0) {
        while( true ) {
          thunk_FUN_14028af80(*(undefined8 *)
                               (*(longlong *)
                                 ((&DAT_1404df828)[uVar11 * 5] +
                                 ((&DAT_1404df830)[uVar11 * 5] - 1 &
                                 (ulonglong)(&DAT_1404df838)[uVar11 * 5] >> 1) * 8) +
                               (ulonglong)((uint)(&DAT_1404df838)[uVar11 * 5] & 1) * 8));
          plVar1 = &DAT_1404df840 + uVar11 * 5;
          *plVar1 = *plVar1 + -1;
          if (*plVar1 == 0) break;
          (&DAT_1404df838)[uVar11 * 5] = (&DAT_1404df838)[uVar11 * 5] + 1;
        }
        (&DAT_1404df838)[uVar11 * 5] = 0;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 10);
  }
  FUN_140290ea0(&DAT_1404df788);
  return;
}

