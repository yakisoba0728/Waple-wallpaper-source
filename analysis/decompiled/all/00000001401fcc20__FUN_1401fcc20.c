// Function: FUN_1401fcc20
// Addr: 1401fcc20
// Size: 1800 bytes


longlong * FUN_1401fcc20(ulonglong param_1,ulonglong *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  longlong lVar16;
  ulonglong *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong *plVar23;
  ulonglong uVar24;
  longlong *local_res18;
  longlong local_res20;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 local_58;
  undefined1 local_50;
  longlong local_48;
  
  puVar18 = auStack_78;
  puVar19 = auStack_78;
  lVar6 = FUN_140087490(param_2,"animation","");
  if (lVar6 == 0) {
    lVar6 = FUN_140084ac0();
  }
  if (2 < *(byte *)(lVar6 + 8) - 1) {
    return (longlong *)0x0;
  }
  local_res20 = FUN_140087490(param_2,"autosort","");
  if (local_res20 == 0) {
    local_res20 = FUN_140084ac0();
  }
  local_48 = FUN_140087490(param_2,"index","");
  if (local_48 == 0) {
    local_48 = FUN_140084ac0();
  }
  lVar6 = FUN_140086000(lVar6);
  plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x4b8) + 200);
  plVar23 = *(longlong **)(*(longlong *)(param_1 + 0x4b8) + 0xd0);
  if (plVar10 == plVar23) {
    return (longlong *)0x0;
  }
  while (*plVar10 != lVar6) {
    plVar10 = plVar10 + 0x2b;
    if (plVar10 == plVar23) {
      return (longlong *)0x0;
    }
  }
  uVar7 = FUN_14028af20(0x198);
  plVar8 = (longlong *)FUN_14026c680(uVar7,*(undefined8 *)(param_1 + 200));
  local_res18 = plVar8;
  FUN_1401a38f0(plVar8 + 1,param_2);
  plVar8[0x25] = (longlong)plVar10;
  plVar23 = plVar10 + 5;
  if (0xf < (ulonglong)plVar10[8]) {
    plVar23 = (longlong *)*plVar23;
  }
  local_50 = 0;
  local_58 = 0;
  FUN_1401a8c10(plVar23,(int)plVar10[9],*(undefined4 *)((longlong)plVar10 + 0x4c));
  if (plVar8 == plVar10 + 2) {
LAB_1401fd04a:
    FUN_1401730d0(*(longlong *)(param_1 + 200) + 0x1708,plVar8,param_2);
    if ((*(byte *)((longlong)plVar8 + 0x104) & 2) == 0) {
      *(uint *)(plVar8 + 0x1a) = *(uint *)(plVar8 + 0x1a) & 0xfffffff7;
    }
    if ((*(char *)(local_res20 + 8) != '\x05') ||
       (cVar4 = FUN_140086300(local_res20), cVar4 == '\0')) {
      if (2 < *(byte *)(local_48 + 8) - 1) {
        FUN_14019e140(*(longlong *)(param_1 + 0x4b8) + 0x3d0,&local_res18);
        return local_res18;
      }
      iVar5 = FUN_140085ee0();
      uVar21 = (ulonglong)iVar5;
      plVar10 = (longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x3d0);
      lVar6 = *plVar10;
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x3d8) - lVar6 >> 3;
      uVar12 = lVar16 - 1;
      uVar24 = uVar12;
      if (uVar21 <= uVar12) {
        uVar24 = uVar21;
      }
      if (uVar24 == 0) {
        iVar5 = 0;
      }
      else if (uVar12 < uVar21) {
        iVar5 = (int)lVar16 + -1;
      }
      FUN_140215a00(plVar10,&local_res20,lVar6 + (longlong)iVar5 * 8,&local_res18);
      return local_res18;
    }
    puVar13 = *(ulonglong **)(param_1 + 0x4b8);
    puVar17 = (ulonglong *)puVar13[0x7b];
    param_1 = puVar13[0x7a];
    uVar3 = (uint)((longlong)((longlong)puVar17 - param_1) >> 3);
    do {
      uVar2 = uVar3 - 1;
      uVar11 = uVar2;
      if ((int)uVar2 < 0) break;
      uVar11 = uVar3;
      uVar3 = uVar2;
    } while ((*(byte *)(*(longlong *)(param_1 + (ulonglong)uVar2 * 8) + 0xd0) & 2) != 0);
    puVar15 = (ulonglong *)(param_1 + (longlong)(int)uVar11 * 8);
    if (puVar17 != (ulonglong *)puVar13[0x7c]) {
      if (puVar15 == puVar17) {
        *puVar17 = (ulonglong)plVar8;
        puVar13[0x7b] = puVar13[0x7b] + 8;
        return plVar8;
      }
      *puVar17 = puVar17[-1];
      puVar13[0x7b] = puVar13[0x7b] + 8;
      FUN_1404210f0(puVar15 + 1,puVar15);
      *puVar15 = (ulonglong)plVar8;
      return plVar8;
    }
    if ((longlong)puVar17 - param_1 == -8) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar12 = (longlong)((longlong)puVar13[0x7c] - param_1) >> 3;
    if (0x1fffffffffffffff - (uVar12 >> 1) < uVar12) {
LAB_1401fd319:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    plVar23 = (longlong *)((uVar12 >> 1) + uVar12);
    local_res18 = (longlong *)(((longlong)((longlong)puVar17 - param_1) >> 3) + 1);
    plVar10 = local_res18;
    if (local_res18 <= plVar23) {
      plVar10 = plVar23;
    }
    if ((longlong *)0x1fffffffffffffff < plVar10) goto LAB_1401fd319;
    uVar12 = (longlong)plVar10 * 8;
    if (uVar12 == 0) {
      uVar12 = 0;
      puVar19 = auStack_78;
      goto LAB_1401fd1de;
    }
    if (uVar12 < 0x1000) {
      uVar12 = FUN_14028af20();
      goto LAB_1401fd1de;
    }
    if (uVar12 + 0x27 <= uVar12) goto LAB_1401fd319;
    lVar6 = FUN_14028af20(uVar12 + 0x27);
    if (lVar6 == 0) goto LAB_1401fd1c1;
  }
  else {
    puVar17 = (ulonglong *)plVar10[0x24];
    puVar15 = (ulonglong *)plVar8[0x22];
    plVar22 = (longlong *)(plVar10[0x25] - (longlong)puVar17);
    lVar6 = plVar8[0x24] - (longlong)puVar15 >> 3;
    plVar23 = (longlong *)(((longlong)plVar22 >> 3) * -0x3333333333333333);
    plVar10 = (longlong *)(lVar6 * -0x3333333333333333);
    if (plVar23 < plVar10 || (longlong)plVar23 + lVar6 * 0x3333333333333333 == 0) {
      puVar13 = (ulonglong *)plVar8[0x23];
      lVar6 = (longlong)puVar13 - (longlong)puVar15 >> 3;
      if (plVar23 < (longlong *)(lVar6 * -0x3333333333333333) ||
          (longlong)plVar23 + lVar6 * 0x3333333333333333 == 0) {
        puVar13 = puVar15 + ((longlong)plVar22 >> 3);
        while (plVar22 != (longlong *)0x0) {
          *(int *)puVar15 = (int)*puVar17;
          if (puVar15 != puVar17) {
            puVar14 = puVar17 + 1;
            if (0xf < puVar17[4]) {
              puVar14 = (ulonglong *)*puVar14;
            }
            FUN_14000f880(puVar15 + 1,puVar14,puVar17[3]);
          }
          puVar15 = puVar15 + 5;
          puVar17 = puVar17 + 5;
          plVar23 = (longlong *)((longlong)plVar23 + -1);
          plVar22 = plVar23;
        }
        puVar17 = (ulonglong *)plVar8[0x23];
        for (puVar15 = puVar13; puVar15 != puVar17; puVar15 = puVar15 + 5) {
          FUN_140017240(puVar15 + 1);
        }
      }
      else {
        if (puVar15 != puVar13) {
          do {
            *(int *)puVar15 = (int)*puVar17;
            if (puVar15 != puVar17) {
              puVar13 = puVar17 + 1;
              if (0xf < puVar17[4]) {
                puVar13 = (ulonglong *)*puVar13;
              }
              FUN_14000f880(puVar15 + 1,puVar13,puVar17[3]);
            }
            puVar13 = (ulonglong *)plVar8[0x23];
            puVar15 = puVar15 + 5;
            puVar17 = puVar17 + 5;
          } while (puVar15 != puVar13);
        }
        for (lVar6 = (longlong)plVar23 + lVar6 * 0x3333333333333333; lVar6 != 0; lVar6 = lVar6 + -1)
        {
          *(int *)puVar13 = (int)*puVar17;
          FUN_140016fc0(puVar13 + 1,puVar17 + 1);
          puVar13 = puVar13 + 5;
          puVar17 = puVar17 + 5;
        }
      }
      plVar8[0x23] = (longlong)puVar13;
      goto LAB_1401fd04a;
    }
    if ((longlong *)0x666666666666666 < plVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    plVar9 = (longlong *)(0x666666666666666 - ((ulonglong)plVar10 >> 1));
    if (plVar10 < plVar9 || (longlong)plVar10 - (longlong)plVar9 == 0) {
      plVar10 = (longlong *)(((ulonglong)plVar10 >> 1) + (longlong)plVar10);
      if (plVar10 < plVar23) {
        plVar10 = plVar23;
      }
    }
    else {
      plVar10 = (longlong *)0x666666666666666;
    }
    puVar13 = param_2;
    if (puVar15 == (ulonglong *)0x0) {
LAB_1401fceb2:
      uVar12 = 0;
      if ((longlong *)0x666666666666666 < plVar10) goto LAB_1401fd319;
      puVar15 = (ulonglong *)((longlong)plVar10 * 0x28);
      if (puVar15 != (ulonglong *)0x0) {
        if (puVar15 < (ulonglong *)0x1000) {
          uVar12 = FUN_14028af20(puVar15);
        }
        else {
          if ((ulonglong *)((longlong)puVar15 + 0x27U) <= puVar15) goto LAB_1401fd319;
          lVar6 = FUN_14028af20();
          if (lVar6 == 0) goto LAB_1401fd1c1;
          uVar12 = lVar6 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar12 - 8) = lVar6;
        }
      }
      plVar8[0x22] = uVar12;
      plVar8[0x23] = uVar12;
      plVar8[0x24] = uVar12 + (longlong)puVar15;
      puVar20 = (undefined4 *)plVar8[0x22];
      while (plVar22 != (longlong *)0x0) {
        *puVar20 = (int)*puVar17;
        FUN_140016fc0(puVar20 + 2,puVar17 + 1);
        puVar20 = puVar20 + 10;
        puVar17 = puVar17 + 5;
        plVar23 = (longlong *)((longlong)plVar23 + -1);
        plVar22 = plVar23;
      }
      plVar8[0x23] = (longlong)puVar20;
      goto LAB_1401fd04a;
    }
    puVar13 = (ulonglong *)plVar8[0x23];
    for (; puVar15 != puVar13; puVar15 = puVar15 + 5) {
      FUN_140017240(puVar15 + 1);
    }
    lVar6 = plVar8[0x22];
    uVar12 = (plVar8[0x24] - lVar6 >> 3) * 8;
    if (uVar12 < 0x1000) {
LAB_1401fce88:
      thunk_FUN_14028af80(lVar6,uVar12);
      plVar8[0x22] = 0;
      plVar8[0x23] = 0;
      plVar8[0x24] = 0;
      goto LAB_1401fceb2;
    }
    if ((lVar6 - *(longlong *)(lVar6 + -8)) - 8U < 0x20) {
      uVar12 = uVar12 + 0x27;
      lVar6 = *(longlong *)(lVar6 + -8);
      goto LAB_1401fce88;
    }
LAB_1401fd1c1:
    pcVar1 = (code *)swi(0x29);
    lVar6 = (*pcVar1)(5);
    puVar18 = auStack_70;
  }
  uVar12 = lVar6 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar12 - 8) = lVar6;
  puVar19 = puVar18;
LAB_1401fd1de:
  uVar24 = (longlong)puVar15 - param_1 & 0xfffffffffffffff8;
  *(longlong **)(uVar24 + uVar12) = plVar8;
  puVar17 = (ulonglong *)puVar13[0x7a];
  if (puVar15 == (ulonglong *)puVar13[0x7b]) {
    lVar6 = (longlong)puVar13[0x7b] - (longlong)puVar17;
    uVar24 = uVar12;
    puVar15 = puVar17;
  }
  else {
    *(undefined8 *)(puVar19 + -8) = 0x1401fd212;
    FUN_1404210f0(uVar12,puVar17,(longlong)puVar15 - (longlong)puVar17);
    uVar24 = uVar24 + 8 + uVar12;
    lVar6 = puVar13[0x7b] - (longlong)puVar15;
  }
  *(undefined8 *)(puVar19 + -8) = 0x1401fd22b;
  FUN_1404210f0(uVar24,puVar15,lVar6);
  *(undefined8 *)(puVar19 + -8) = 0x1401fd245;
  FUN_1400384c0(puVar13 + 0x7a,uVar12,*(undefined8 *)(puVar19 + 0x90),plVar10);
  return plVar8;
}

