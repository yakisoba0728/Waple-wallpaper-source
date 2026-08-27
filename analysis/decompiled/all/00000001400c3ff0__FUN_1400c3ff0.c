// Function: FUN_1400c3ff0
// Addr: 1400c3ff0
// Size: 1816 bytes


void FUN_1400c3ff0(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar13 = auStack_58;
  puVar14 = auStack_58;
  param_2 = param_2 & 0xffffffff;
  iVar5 = FUN_140290d80(&DAT_1404df788);
  lVar6 = DAT_1404df7f8;
  plVar17 = DAT_1404df7e8;
  puVar15 = auStack_58;
  if (iVar5 != 0) goto LAB_1400c46f5;
  if (DAT_1404df7d4 == 0x7fffffff) {
    DAT_1404df7d4 = 0x7ffffffe;
    puVar14 = auStack_58;
    goto LAB_1400c46ea;
  }
  uVar11 = DAT_1404df810 &
           ((((((((param_3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_3 >> 8 & 0xff) *
                 0x100000001b3 ^ param_3 >> 0x10 & 0xff) * 0x100000001b3 ^ param_3 >> 0x18 & 0xff) *
               0x100000001b3 ^ param_3 >> 0x20 & 0xff) * 0x100000001b3 ^ param_3 >> 0x28 & 0xff) *
             0x100000001b3 ^ param_3 >> 0x30 & 0xff) * 0x100000001b3 ^ param_3 >> 0x38) *
           0x100000001b3;
  plVar2 = *(longlong **)(DAT_1404df7f8 + 8 + uVar11 * 0x10);
  if (plVar2 == DAT_1404df7e8) {
LAB_1400c4104:
    plVar10 = (longlong *)0x0;
  }
  else {
    uVar8 = plVar2[2];
    plVar10 = plVar2;
    while (param_3 != uVar8) {
      if (plVar10 == *(longlong **)(DAT_1404df7f8 + uVar11 * 0x10)) goto LAB_1400c4104;
      plVar10 = (longlong *)plVar10[1];
      uVar8 = plVar10[2];
    }
  }
  if (plVar10 != (longlong *)0x0) {
    plVar3 = *(longlong **)(DAT_1404df7f8 + uVar11 * 0x10);
    if (plVar2 == plVar10) {
      if (plVar3 == plVar10) {
        *(longlong **)(DAT_1404df7f8 + uVar11 * 0x10) = DAT_1404df7e8;
        *(longlong **)(lVar6 + 8 + uVar11 * 0x10) = plVar17;
      }
      else {
        *(longlong *)(DAT_1404df7f8 + 8 + uVar11 * 0x10) = plVar10[1];
      }
    }
    else if (plVar3 == plVar10) {
      *(longlong *)(DAT_1404df7f8 + uVar11 * 0x10) = *plVar10;
    }
    lVar6 = *plVar10;
    DAT_1404df7f0 = DAT_1404df7f0 + -1;
    *(longlong *)plVar10[1] = lVar6;
    *(longlong *)(lVar6 + 8) = plVar10[1];
    thunk_FUN_14028af80(plVar10,0x18);
  }
  lVar6 = 0;
  if ((((((param_4 <= *(uint *)PTR_DAT_1404df780) ||
         (lVar6 = 1, param_4 <= *(uint *)(PTR_DAT_1404df780 + 4))) ||
        (lVar6 = 2, param_4 <= *(uint *)(PTR_DAT_1404df780 + 8))) ||
       ((lVar6 = 3, param_4 <= *(uint *)(PTR_DAT_1404df780 + 0xc) ||
        (lVar6 = 4, param_4 <= *(uint *)(PTR_DAT_1404df780 + 0x10))))) ||
      ((lVar6 = 5, param_4 <= *(uint *)(PTR_DAT_1404df780 + 0x14) ||
       ((lVar6 = 6, param_4 <= *(uint *)(PTR_DAT_1404df780 + 0x18) ||
        (lVar6 = 7, param_4 <= *(uint *)(PTR_DAT_1404df780 + 0x1c))))))) ||
     ((lVar6 = 8, param_4 <= *(uint *)(PTR_DAT_1404df780 + 0x20) ||
      (lVar6 = 9, param_4 <= *(uint *)(PTR_DAT_1404df780 + 0x24))))) {
    uVar11 = (&DAT_1404df838)[lVar6 * 5];
    puVar14 = auStack_58;
    if ((((char)uVar11 + (char)(&DAT_1404df840)[lVar6 * 5] & 1U) == 0) &&
       (uVar8 = (&DAT_1404df830)[lVar6 * 5], puVar14 = auStack_58,
       uVar8 <= (&DAT_1404df840)[lVar6 * 5] + 2 >> 1)) {
      uVar16 = 1;
      if (uVar8 != 0) {
        uVar16 = uVar8;
      }
      for (; (uVar16 == uVar8 || (uVar16 < 8)); uVar16 = uVar16 * 2) {
        if (0xfffffffffffffff - uVar16 < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_140082f20();
        }
      }
      if (0x1fffffffffffffff < uVar16) {
LAB_1400c4700:
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      uVar8 = uVar16 * 8;
      if (uVar8 == 0) {
        param_3 = 0;
LAB_1400c42bf:
        uVar11 = uVar11 >> 1;
        uVar8 = uVar16 >> 1;
        lVar7 = uVar11 * 8;
        for (; uVar16 <= uVar8; uVar16 = uVar16 * 2) {
        }
        uVar16 = uVar16 - (&DAT_1404df830)[lVar6 * 5];
        lVar12 = ((&DAT_1404df830)[lVar6 * 5] - uVar11) * 8;
        FUN_1404210f0(lVar7 + param_3,(&DAT_1404df828)[lVar6 * 5] + lVar7,lVar12);
        lVar12 = lVar12 + lVar7 + param_3;
        if (uVar16 < uVar11) {
          lVar7 = uVar16 * 8;
          FUN_1404210f0(lVar12,(&DAT_1404df828)[lVar6 * 5],lVar7);
          lVar12 = (uVar11 - uVar16) * 8;
          FUN_1404210f0(param_3,(&DAT_1404df828)[lVar6 * 5] + lVar7,lVar12);
          uVar11 = param_3 + lVar12;
        }
        else {
          FUN_1404210f0(lVar12,(&DAT_1404df828)[lVar6 * 5],lVar7);
          FUN_1404217a0(lVar12 + lVar7,0,(uVar16 - uVar11) * 8);
          uVar11 = param_3;
        }
        FUN_1404217a0(uVar11,0,lVar7);
        lVar7 = (&DAT_1404df828)[lVar6 * 5];
        if (lVar7 != 0) {
          lVar12 = lVar7;
          puVar13 = auStack_58;
          if ((0xfff < (ulonglong)((&DAT_1404df830)[lVar6 * 5] * 8)) &&
             (lVar12 = *(longlong *)(lVar7 + -8), puVar13 = auStack_58, 0x1f < (lVar7 - lVar12) - 8U
             )) goto LAB_1400c43db;
          goto LAB_1400c43e5;
        }
      }
      else {
        if (uVar8 < 0x1000) {
          param_3 = FUN_14028af20();
          goto LAB_1400c42bf;
        }
        if (uVar8 + 0x27 <= uVar8) goto LAB_1400c4700;
        lVar7 = FUN_14028af20(uVar8 + 0x27);
        if (lVar7 != 0) {
          param_3 = lVar7 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(param_3 - 8) = lVar7;
          goto LAB_1400c42bf;
        }
LAB_1400c43db:
        lVar12 = 5;
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar13 = auStack_50;
LAB_1400c43e5:
        *(undefined8 *)(puVar13 + -8) = 0x1400c43ed;
        thunk_FUN_14028af80(lVar12);
      }
      (&DAT_1404df828)[lVar6 * 5] = param_3;
      (&DAT_1404df830)[lVar6 * 5] = (&DAT_1404df830)[lVar6 * 5] + uVar16;
      param_3 = *(ulonglong *)(puVar13 + 0x70);
      puVar14 = puVar13;
    }
    lVar7 = (&DAT_1404df840)[lVar6 * 5];
    (&DAT_1404df838)[lVar6 * 5] = (&DAT_1404df838)[lVar6 * 5] & (&DAT_1404df830)[lVar6 * 5] * 2 - 1U
    ;
    lVar12 = (&DAT_1404df838)[lVar6 * 5];
    uVar11 = (ulonglong)(lVar7 + lVar12) >> 1;
    uVar8 = (&DAT_1404df830)[lVar6 * 5] - 1 & uVar11;
    if (*(longlong *)((&DAT_1404df828)[lVar6 * 5] + uVar8 * 8) == 0) {
      *(undefined8 *)(puVar14 + -8) = 0x1400c4457;
      uVar9 = FUN_14028af20(0x10);
      *(undefined8 *)((&DAT_1404df828)[lVar6 * 5] + uVar8 * 8) = uVar9;
    }
    param_2 = (ulonglong)*(uint *)(puVar14 + 0x68);
    *(ulonglong *)
     (*(longlong *)((&DAT_1404df828)[lVar6 * 5] + ((&DAT_1404df830)[lVar6 * 5] - 1 & uVar11) * 8) +
     (ulonglong)((uint)(lVar7 + lVar12) & 1) * 8) = param_3;
    (&DAT_1404df840)[lVar6 * 5] = (&DAT_1404df840)[lVar6 * 5] + 1;
  }
  if (DAT_1404df7f0 == 0) {
    DAT_1404df7d8 = 0;
    lVar6 = 0;
    do {
      if ((&DAT_1404df840)[lVar6 * 5] != 0) {
        while( true ) {
          uVar9 = *(undefined8 *)
                   (*(longlong *)
                     ((&DAT_1404df828)[lVar6 * 5] +
                     ((&DAT_1404df830)[lVar6 * 5] - 1 & (ulonglong)(&DAT_1404df838)[lVar6 * 5] >> 1)
                     * 8) + (ulonglong)((uint)(&DAT_1404df838)[lVar6 * 5] & 1) * 8);
          *(undefined8 *)(puVar14 + -8) = 0x1400c450c;
          thunk_FUN_14028af80(uVar9);
          plVar17 = &DAT_1404df840 + lVar6 * 5;
          *plVar17 = *plVar17 + -1;
          if (*plVar17 == 0) break;
          (&DAT_1404df838)[lVar6 * 5] = (&DAT_1404df838)[lVar6 * 5] + 1;
        }
        (&DAT_1404df838)[lVar6 * 5] = 0;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 10);
    param_2 = (ulonglong)*(uint *)(puVar14 + 0x68);
  }
  *(undefined8 *)(puVar14 + -8) = 0x1400c4547;
  FUN_140290ea0(&DAT_1404df788);
  *(undefined8 *)(puVar14 + -8) = 0x1400c4553;
  iVar5 = FUN_140290d80(param_1 + 0x310);
  puVar15 = puVar14;
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x35c) != 0x7fffffff) {
      *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) - param_4;
      uVar11 = ((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)(byte)puVar14[0x69]) * 0x100000001b3 ^ (ulonglong)(byte)puVar14[0x6a]) *
                0x100000001b3 ^ (ulonglong)(byte)puVar14[0x6b]) * 0x100000001b3 &
               *(ulonglong *)(param_1 + 0x3e0);
      plVar17 = *(longlong **)(*(longlong *)(param_1 + 0x3c8) + 8 + uVar11 * 0x10);
      if (plVar17 == *(longlong **)(param_1 + 0x3b8)) {
LAB_1400c4601:
        plVar17 = (longlong *)0x0;
      }
      else {
        iVar5 = (int)plVar17[2];
        while ((int)param_2 != iVar5) {
          if (plVar17 == *(longlong **)(*(longlong *)(param_1 + 0x3c8) + uVar11 * 0x10))
          goto LAB_1400c4601;
          plVar17 = (longlong *)plVar17[1];
          iVar5 = (int)plVar17[2];
        }
      }
      if (plVar17 == (longlong *)0x0) {
        plVar17 = *(longlong **)(param_1 + 0x3b8);
      }
      piVar1 = (int *)((longlong)plVar17 + 0x14);
      *piVar1 = *piVar1 - param_4;
      if (*piVar1 == 0) {
        lVar6 = *(longlong *)(param_1 + 0x3c8);
        uVar11 = (((((ulonglong)*(byte *)(plVar17 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar17 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar17 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar17 + 0x13)) * 0x100000001b3 &
                 *(ulonglong *)(param_1 + 0x3e0);
        plVar2 = *(longlong **)(lVar6 + uVar11 * 0x10);
        if (*(longlong **)(lVar6 + 8 + uVar11 * 0x10) == plVar17) {
          if (plVar2 == plVar17) {
            uVar9 = *(undefined8 *)(param_1 + 0x3b8);
            *(undefined8 *)(lVar6 + uVar11 * 0x10) = uVar9;
            *(undefined8 *)(lVar6 + 8 + uVar11 * 0x10) = uVar9;
          }
          else {
            *(longlong *)(lVar6 + 8 + uVar11 * 0x10) = plVar17[1];
          }
        }
        else if (plVar2 == plVar17) {
          *(longlong *)(lVar6 + uVar11 * 0x10) = *plVar17;
        }
        lVar6 = *plVar17;
        *(longlong *)(param_1 + 0x3c0) = *(longlong *)(param_1 + 0x3c0) + -1;
        *(longlong *)plVar17[1] = lVar6;
        *(longlong *)(lVar6 + 8) = plVar17[1];
        *(undefined8 *)(puVar14 + -8) = 0x1400c46b5;
        thunk_FUN_14028af80(plVar17,0x18);
      }
      *(undefined8 *)(puVar14 + -8) = 0x1400c46c1;
      FUN_140290ef0(param_1 + 0x360);
      FUN_140290ea0(param_1 + 0x310);
      return;
    }
    *(undefined4 *)(param_1 + 0x35c) = 0x7ffffffe;
LAB_1400c46ea:
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar14 + -8) = &UNK_1400c46f4;
    FUN_140290d30(6);
  }
LAB_1400c46f5:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -8) = &UNK_1400c46ff;
  FUN_140290d30(5);
}

