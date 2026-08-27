// Function: FUN_1400edef0
// Addr: 1400edef0
// Size: 2491 bytes


void FUN_1400edef0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined4 *puVar21;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined4 local_c8;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  
  puVar19 = auStack_e8;
  plVar5 = *(longlong **)(param_1 + 0xe8);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  if (((char)plVar5[3] == '\0') && (*(char *)(param_2 + 0xc4) == '\0')) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  plVar1 = (longlong *)(param_1 + 0x140);
  uVar14 = 0;
  lVar13 = (longlong)*(int *)(param_2 + 0x44) * 0x20;
  puVar21 = (undefined4 *)((longlong)*(int *)(param_2 + 0x40) * 0x20 + *plVar5);
  lVar15 = *(longlong *)(puVar21 + 2);
  *(undefined8 *)(lVar13 + lVar15) = *(undefined8 *)(param_2 + 200);
  *(undefined4 *)(lVar13 + 8 + lVar15) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(lVar13 + 0xc + lVar15) = *(undefined4 *)(param_2 + 0x48);
  local_a8 = *(undefined4 *)(param_1 + 0x160);
  local_b8 = 0;
  uStack_b4 = 0;
  local_b0 = 0;
  local_a4 = 1;
  local_94 = 0;
  local_ac = 1;
  local_9c = 1;
  local_98 = 8;
  puVar21[1] = puVar21[1] + -1;
  if (bVar8) {
    if ((*(char *)(*(longlong *)(param_1 + 0xe8) + 0x18) == '\0') ||
       (puVar20 = auStack_e8, *plVar1 == *(longlong *)(param_1 + 0x148))) {
      *(undefined1 *)(*(longlong *)(param_1 + 0xe8) + 0x18) = 1;
      if (*(longlong **)(param_1 + 0x168) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x168) + 0x10))();
        *(undefined8 *)(param_1 + 0x168) = 0;
      }
      plVar5 = *(longlong **)(param_1 + 0x148);
      for (plVar18 = (longlong *)*plVar1; plVar18 != plVar5; plVar18 = plVar18 + 3) {
        if ((longlong *)plVar18[2] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar18[2] + 0x10))();
          plVar18[2] = 0;
        }
        if ((longlong *)*plVar18 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar18 + 0x10))();
          *plVar18 = 0;
        }
        if ((longlong *)plVar18[1] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar18[1] + 0x10))();
          plVar18[1] = 0;
        }
      }
      if (*plVar1 != *(longlong *)(param_1 + 0x148)) {
        *(longlong *)(param_1 + 0x148) = *plVar1;
      }
      FUN_1400eef70(param_1);
      puVar20 = auStack_e8;
    }
    goto LAB_1400ee7b8;
  }
  lVar15 = *plVar1;
  if (puVar21[1] == 0) {
    puVar11 = *(undefined8 **)(param_1 + 0x148);
    uVar16 = (*(longlong **)(param_1 + 0xe8))[1] - **(longlong **)(param_1 + 0xe8) >> 5;
    lVar13 = (longlong)puVar11 - lVar15 >> 3;
    if (uVar16 < (ulonglong)(lVar13 * -0x5555555555555555)) {
      *(ulonglong *)(param_1 + 0x148) = lVar15 + uVar16 * 0x18;
    }
    else if ((ulonglong)(lVar13 * -0x5555555555555555) < uVar16) {
      uVar12 = (*(longlong *)(param_1 + 0x150) - lVar15 >> 3) * -0x5555555555555555;
      if (uVar12 < uVar16) {
        if (0xaaaaaaaaaaaaaaa < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_140013050();
        }
        uVar10 = 0xaaaaaaaaaaaaaaa - (uVar12 >> 1);
        if ((uVar10 <= uVar12 && uVar12 - uVar10 != 0) ||
           ((uVar12 = (uVar12 >> 1) + uVar12, uVar10 = uVar16, uVar16 <= uVar12 &&
            (uVar10 = uVar12, 0xaaaaaaaaaaaaaaa < uVar12)))) {
LAB_1400ee8a3:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar12 = uVar10 * 0x18;
        if (uVar12 != 0) {
          if (uVar12 < 0x1000) {
            uVar14 = FUN_14028af20();
          }
          else {
            if (uVar12 + 0x27 <= uVar12) goto LAB_1400ee8a3;
            lVar15 = FUN_14028af20(uVar12 + 0x27);
            if (lVar15 == 0) goto LAB_1400ee6eb;
            uVar14 = lVar15 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(uVar14 - 8) = lVar15;
          }
        }
        puVar11 = (undefined8 *)(uVar14 + lVar13 * 8);
        for (lVar15 = uVar16 + lVar13 * 0x5555555555555555; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11 = puVar11 + 3;
        }
        FUN_1404210f0(uVar14,*(longlong *)(param_1 + 0x140),
                      *(longlong *)(param_1 + 0x148) - *(longlong *)(param_1 + 0x140));
        FUN_1400efe40(param_1 + 0x140,uVar14,uVar16,uVar10);
      }
      else {
        for (lVar15 = uVar16 + lVar13 * 0x5555555555555555; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11 = puVar11 + 3;
        }
        *(undefined8 **)(param_1 + 0x148) = puVar11;
      }
    }
    lVar15 = 0;
    uVar9 = FUN_1400eb090(*(undefined4 *)(param_1 + 0x160));
    if ((*(longlong *)(puVar21 + 4) - *(longlong *)(puVar21 + 2) == 0x20) &&
       (puVar20 = auStack_e8,
       *(longlong *)
        (*(longlong *)(param_1 + 0x140) + 0x10 + (longlong)*(int *)(param_2 + 0x40) * 0x18) != 0))
    goto LAB_1400ee7b8;
    plVar5 = (longlong *)
             (*(longlong *)(param_1 + 0x140) + (longlong)*(int *)(param_2 + 0x40) * 0x18);
    if (*(longlong **)(param_1 + 0x168) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x168) + 0x10))();
      lVar15 = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
    }
    if ((longlong *)plVar5[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar5[2] + 0x10))();
      lVar15 = 0;
      plVar5[2] = 0;
    }
    if ((longlong *)*plVar5 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar5 + 0x10))();
      lVar15 = 0;
      *plVar5 = 0;
    }
    if ((longlong *)plVar5[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar5[1] + 0x10))();
      lVar15 = 0;
      plVar5[1] = 0;
    }
    local_b0 = (undefined4)(*(longlong *)(puVar21 + 4) - *(longlong *)(puVar21 + 2) >> 5);
    local_b8 = *(undefined4 *)(*(longlong *)(puVar21 + 2) + 0x10);
    uStack_b4 = *(uint *)(*(longlong *)(puVar21 + 2) + 0x14);
    puVar11 = *(undefined8 **)(puVar21 + 4);
    puVar17 = *(undefined8 **)(puVar21 + 2);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = lVar15;
    for (; puVar17 != puVar11; puVar17 = puVar17 + 4) {
      local_c8 = uVar9;
      FUN_1400eb220(&local_48,*puVar17,*(undefined4 *)(puVar17 + 2),
                    *(undefined4 *)((longlong)puVar17 + 0x14));
    }
    if ((*(byte *)(param_1 + 0x1c) & 0x40) == 0) {
      (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x138) + 0x28))
                ((longlong *)**(undefined8 **)(param_1 + 0x138),&local_b8,local_48,plVar5);
    }
    else {
      local_94._4_4_ = (undefined4)((ulonglong)local_94 >> 0x20);
      local_6c = (undefined4)local_94;
      local_68 = local_94._4_4_;
      local_80 = *(undefined4 *)(*(longlong *)(puVar21 + 2) + 0x18);
      local_88 = local_b8;
      local_84 = uStack_b4;
      local_7c = local_b0;
      local_78 = local_a8;
      local_74 = local_9c;
      local_70 = local_98;
      (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x138) + 0x30))
                ((longlong *)**(undefined8 **)(param_1 + 0x138),&local_88,local_48,plVar5 + 1);
    }
    lVar15 = *plVar5;
    local_60 = *(undefined4 *)(param_1 + 0x160);
    uStack_54 = local_b0;
    if (lVar15 == 0) {
      uStack_5c = 8;
      uStack_58 = 0;
      if (plVar5[1] != 0) {
        lVar15 = plVar5[1];
        goto LAB_1400ee337;
      }
    }
    else {
      uStack_5c = (*(uint *)(param_1 + 0x1c) & 0x2000000 | 0x4000000) >> 0x18;
LAB_1400ee337:
      uStack_58 = 0;
      (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x138) + 0x38))
                ((longlong *)**(undefined8 **)(param_1 + 0x138),lVar15,&local_60,plVar5 + 2);
    }
    puVar20 = auStack_e8;
    if (local_48 == 0) goto LAB_1400ee7b8;
    uVar14 = local_38 - local_48 & 0xfffffffffffffff0;
    lVar15 = local_48;
    if (0xfff < uVar14) {
      if ((local_48 - *(longlong *)(local_48 + -8)) - 8U < 0x20) {
        thunk_FUN_14028af80(*(longlong *)(local_48 + -8),uVar14 + 0x27);
        puVar20 = auStack_e8;
        goto LAB_1400ee7b8;
      }
LAB_1400ee6eb:
      pcVar7 = (code *)swi(0x29);
      lVar15 = (*pcVar7)(5);
      puVar19 = auStack_e0;
    }
  }
  else {
    if (((((ulonglong)(longlong)*(int *)(param_2 + 0x40) <
           (ulonglong)((*(longlong *)(param_1 + 0x148) - lVar15 >> 3) * -0x5555555555555555)) &&
         (puVar20 = auStack_e8,
         *(longlong *)(lVar15 + (longlong)*(int *)(param_2 + 0x40) * 0x18) != 0)) ||
        (puVar20 = auStack_e8, *(int *)(param_2 + 0x38) != 1)) ||
       (puVar20 = auStack_e8, *(char *)(param_2 + 0xc4) != '\0')) goto LAB_1400ee7b8;
    local_b8 = *(undefined4 *)(param_2 + 0x4c);
    uStack_b4 = *(uint *)(param_2 + 0x50);
    local_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_b0 = 1;
    local_38 = 0;
    local_c8 = FUN_1400eb090(*(undefined4 *)(param_1 + 0x160));
    FUN_1400eb220(&local_48,*(undefined8 *)(param_2 + 200));
    if ((*(byte *)(param_1 + 0x1c) & 0x40) == 0) {
      (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x138) + 0x28))
                ((longlong *)**(undefined8 **)(param_1 + 0x138),&local_b8,local_48);
    }
    else {
      local_7c = local_b0;
      local_80 = *(undefined4 *)(param_2 + 0x54);
      local_84 = uStack_b4;
      local_74 = local_9c;
      local_70 = local_98;
      local_88 = local_b8;
      local_78 = local_a8;
      local_6c = (undefined4)local_94;
      local_68 = local_94._4_4_;
      (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x138) + 0x30))
                ((longlong *)**(undefined8 **)(param_1 + 0x138),&local_88,local_48);
    }
    lVar15 = CONCAT44(uStack_5c,local_60);
    local_88 = *(undefined4 *)(param_1 + 0x160);
    if (lVar15 == 0) {
      local_84 = 8;
    }
    else {
      local_84 = (*(uint *)(param_1 + 0x1c) & 0x2000000 | 0x4000000) >> 0x18;
    }
    local_7c = local_b0;
    local_80 = 0;
    if ((lVar15 != 0) || (CONCAT44(uStack_54,uStack_58) != 0)) {
      lVar13 = CONCAT44(uStack_54,uStack_58);
      if (lVar15 != 0) {
        lVar13 = lVar15;
      }
      (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x138) + 0x38))
                ((longlong *)**(undefined8 **)(param_1 + 0x138),lVar13,&local_88);
    }
    puVar19 = auStack_e8;
    uVar14 = 0;
    lVar15 = *plVar1;
    uVar16 = (ulonglong)(*(int *)(param_2 + 0x40) + 1);
    puVar11 = *(undefined8 **)(param_1 + 0x148);
    lVar13 = (longlong)puVar11 - lVar15 >> 3;
    if (uVar16 < (ulonglong)(lVar13 * -0x5555555555555555)) {
      *(ulonglong *)(param_1 + 0x148) = lVar15 + uVar16 * 0x18;
    }
    else if ((ulonglong)(lVar13 * -0x5555555555555555) < uVar16) {
      uVar12 = (*(longlong *)(param_1 + 0x150) - lVar15 >> 3) * -0x5555555555555555;
      if (uVar12 < uVar16) {
        if (0xaaaaaaaaaaaaaaa < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_140013050();
        }
        uVar10 = 0xaaaaaaaaaaaaaaa - (uVar12 >> 1);
        if ((uVar10 <= uVar12 && uVar12 - uVar10 != 0) ||
           ((uVar12 = (uVar12 >> 1) + uVar12, uVar10 = uVar16, uVar16 <= uVar12 &&
            (uVar10 = uVar12, 0xaaaaaaaaaaaaaaa < uVar12)))) {
LAB_1400ee897:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar12 = uVar10 * 0x18;
        if (uVar12 != 0) {
          if (uVar12 < 0x1000) {
            uVar14 = FUN_14028af20();
          }
          else {
            if (uVar12 + 0x27 <= uVar12) goto LAB_1400ee897;
            lVar15 = FUN_14028af20(uVar12 + 0x27);
            if (lVar15 == 0) goto LAB_1400ee6eb;
            uVar14 = lVar15 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(uVar14 - 8) = lVar15;
          }
        }
        puVar11 = (undefined8 *)(uVar14 + lVar13 * 8);
        for (lVar15 = uVar16 + lVar13 * 0x5555555555555555; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11 = puVar11 + 3;
        }
        FUN_1404210f0(uVar14,*(longlong *)(param_1 + 0x140),
                      *(longlong *)(param_1 + 0x148) - *(longlong *)(param_1 + 0x140));
        FUN_1400efe40(param_1 + 0x140,uVar14,uVar16,uVar10);
      }
      else {
        for (lVar15 = uVar16 + lVar13 * 0x5555555555555555; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11 = puVar11 + 3;
        }
        *(undefined8 **)(param_1 + 0x148) = puVar11;
      }
    }
    iVar3 = *(int *)(param_2 + 0x40);
    lVar15 = *(longlong *)(param_1 + 0x140);
    puVar2 = (undefined4 *)(lVar15 + (longlong)iVar3 * 0x18);
    *puVar2 = local_60;
    puVar2[1] = uStack_5c;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    *(undefined8 *)(lVar15 + 0x10 + (longlong)iVar3 * 0x18) = local_50;
    puVar20 = auStack_e8;
    if (local_48 == 0) goto LAB_1400ee7b8;
    uVar14 = local_38 - local_48 & 0xfffffffffffffff0;
    lVar15 = local_48;
    if (0xfff < uVar14) {
      if ((local_48 - *(longlong *)(local_48 + -8)) - 8U < 0x20) {
        thunk_FUN_14028af80(*(longlong *)(local_48 + -8),uVar14 + 0x27);
        puVar20 = auStack_e8;
        goto LAB_1400ee7b8;
      }
      goto LAB_1400ee6eb;
    }
  }
  *(undefined8 *)(puVar19 + -8) = 0x1400ee6fa;
  thunk_FUN_14028af80(lVar15);
  puVar20 = puVar19;
LAB_1400ee7b8:
  if ((puVar21[1] == 0) && (*(longlong *)(param_1 + 0xe8) != 0)) {
    puVar11 = *(undefined8 **)(puVar21 + 4);
    for (puVar17 = *(undefined8 **)(puVar21 + 2); puVar17 != puVar11; puVar17 = puVar17 + 4) {
      if ((*(uint *)((longlong)puVar17 + 0xc) & 0x40000000) != 0) {
        uVar9 = *(undefined4 *)(puVar17 + 1);
        uVar6 = *puVar17;
        uVar4 = *puVar21;
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x158);
        pcVar7 = *(code **)(*plVar5 + 0x18);
        *(undefined8 *)(puVar20 + -8) = 0x1400ee804;
        (*pcVar7)(plVar5,uVar4,uVar6,uVar9);
      }
    }
    if (*(longlong *)(puVar21 + 2) != *(longlong *)(puVar21 + 4)) {
      *(longlong *)(puVar21 + 4) = *(longlong *)(puVar21 + 2);
    }
    plVar5 = *(longlong **)(param_1 + 0xe8);
    for (lVar15 = *plVar5; lVar15 != plVar5[1]; lVar15 = lVar15 + 0x20) {
      if (*(longlong *)(lVar15 + 8) != *(longlong *)(lVar15 + 0x10)) {
        return;
      }
    }
    *(undefined8 *)(puVar20 + -8) = 0x1400ee84b;
    FUN_1400efce0(plVar5);
    *(undefined8 *)(puVar20 + -8) = 0x1400ee858;
    thunk_FUN_14028af80(plVar5,0x20);
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}

