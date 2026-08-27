// Function: FUN_1400450f0
// Addr: 1400450f0
// Size: 2482 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_1400450f0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 ******ppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  ulonglong *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  ulonglong local_res10;
  undefined4 local_res18 [2];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined8 *******local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined8 *******local_108;
  ulonglong local_100;
  ulonglong *local_f8;
  ulonglong *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  ulonglong uStack_c8;
  undefined1 local_b8 [8];
  longlong *local_b0 [2];
  longlong local_a0 [3];
  ulonglong local_88;
  undefined1 local_78 [8];
  undefined8 *local_70 [2];
  undefined1 local_60 [40];
  
  puVar22 = auStack_148;
  local_res10 = param_2;
  uVar10 = FUN_140086de0(param_1 + 0x48,"virtualdesktops","");
  FUN_140085520(uVar10,param_2);
  FUN_1400493a0(local_b8);
  if (*(char *)(param_2 + 8) == '\a') {
    FUN_140088360(param_2,&local_f8);
    puVar25 = local_f0;
    puVar18 = local_f8;
    puVar24 = local_f8;
    if (local_f8 != local_f0) {
LAB_140045184:
      uVar21 = puVar24[2];
      local_128 = (undefined8 *******)0x0;
      uStack_120 = 0;
      local_118 = 0;
      local_110 = 0;
      puVar26 = puVar24;
      if (0xf < puVar24[3]) {
        puVar26 = (ulonglong *)*puVar24;
      }
      if (0x7fffffffffffffff < uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_1400172e0();
      }
      if (uVar21 < 0x10) {
        local_110 = 0xf;
        local_128 = (undefined8 *******)*puVar26;
        uStack_120 = puVar26[1];
        local_118 = uVar21;
      }
      else {
        uVar23 = uVar21 | 0xf;
        if (uVar23 < 0x8000000000000000) {
          if (uVar23 < 0x16) {
            uVar23 = 0x16;
          }
          uVar1 = uVar23 + 1;
          pppppppuVar16 = (undefined8 *******)0x0;
          if (uVar1 != 0) {
            if (0xfff < uVar1) {
              uVar20 = uVar23 + 0x28;
              if (uVar20 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              goto LAB_140045215;
            }
            pppppppuVar16 = (undefined8 *******)FUN_14028af20(uVar1);
          }
        }
        else {
          uVar23 = 0x7fffffffffffffff;
          uVar20 = 0x8000000000000027;
LAB_140045215:
          ppppppuVar15 = (undefined8 ******)FUN_14028af20(uVar20);
          if (ppppppuVar15 == (undefined8 ******)0x0) goto LAB_140045a7d;
          pppppppuVar16 = (undefined8 *******)((longlong)ppppppuVar15 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar16[-1] = ppppppuVar15;
        }
        local_128 = pppppppuVar16;
        local_118 = uVar21;
        local_110 = uVar23;
        FUN_1404210f0(pppppppuVar16,puVar26,uVar21 + 1);
      }
      uVar23 = local_110;
      uVar21 = local_118;
      pppppppuVar16 = local_128;
      pppppppuVar17 = &local_128;
      if (0xf < local_110) {
        pppppppuVar17 = local_128;
      }
      if ((local_118 == 5) && (iVar8 = memcmp(pppppppuVar17,"login",5), iVar8 == 0)) {
        if (uVar23 < 0x10) goto LAB_14004535a;
        uVar21 = uVar23 + 1;
        pppppppuVar17 = pppppppuVar16;
        if (0xfff < uVar21) {
          pppppppuVar17 = (undefined8 *******)pppppppuVar16[-1];
          if (0x1f < (ulonglong)((longlong)pppppppuVar16 + (-8 - (longlong)pppppppuVar17)))
          goto LAB_140045a7d;
          uVar21 = uVar23 + 0x28;
        }
      }
      else {
        pppppppuVar17 = &local_128;
        if (0xf < uVar23) {
          pppppppuVar17 = pppppppuVar16;
        }
        lVar11 = FUN_140087490(local_res10,pppppppuVar17,uVar21 + (longlong)pppppppuVar17);
        if (lVar11 == 0) {
          lVar11 = FUN_140084ac0();
        }
        cVar7 = FUN_1400886e0(lVar11);
        if (cVar7 != '\0') {
          local_res18[0] = FUN_140085ee0(lVar11);
          FUN_14004b690(local_b8,&local_108,local_res18);
        }
        if (local_110 < 0x10) goto LAB_14004535a;
        uVar21 = local_110 + 1;
        pppppppuVar17 = local_128;
        if (0xfff < uVar21) {
          if ((ulonglong)((longlong)local_128 + (-8 - (longlong)local_128[-1])) < 0x20) {
            uVar21 = local_110 + 0x28;
            pppppppuVar17 = (undefined8 *******)local_128[-1];
            goto LAB_140045355;
          }
          goto LAB_140045a7d;
        }
      }
LAB_140045355:
      thunk_FUN_14028af80(pppppppuVar17,uVar21);
LAB_14004535a:
      puVar24 = puVar24 + 4;
      if (puVar24 == puVar25) goto LAB_140045379;
      goto LAB_140045184;
    }
LAB_140045379:
    puVar24 = puVar18;
    if (puVar18 != (ulonglong *)0x0) {
      for (; puVar24 != puVar25; puVar24 = puVar24 + 4) {
        FUN_140017240(puVar24);
      }
      uVar21 = local_e8 - (longlong)puVar18 & 0xffffffffffffffe0;
      if (0xfff < uVar21) {
        if (0x1f < (ulonglong)((longlong)puVar18 + (-8 - (longlong)puVar18[-1])))
        goto LAB_140045a7d;
        uVar21 = uVar21 + 0x27;
        puVar18 = (ulonglong *)puVar18[-1];
      }
      thunk_FUN_14028af80(puVar18,uVar21);
    }
  }
  plVar6 = local_b0[0];
  lVar11 = param_1 + 0x48;
  plVar19 = (longlong *)*local_b0[0];
  if (plVar19 != local_b0[0]) {
    do {
      uVar9 = *(uint *)(plVar19 + 2);
      local_res10 = CONCAT44(local_res10._4_4_,uVar9);
      uVar21 = (((((ulonglong)uVar9 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)((int)uVar9 >> 8 & 0xff)) * 0x100000001b3 ^
                (ulonglong)((int)uVar9 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)((int)uVar9 >> 0x18 & 0xff)) * 0x100000001b3 &
               *(ulonglong *)(param_1 + 0xd0);
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 8 + uVar21 * 0x10);
      if (lVar14 == *(longlong *)(param_1 + 0xa8)) {
LAB_140045486:
        lVar14 = 0;
      }
      else {
        uVar2 = *(uint *)(lVar14 + 0x10);
        while (uVar9 != uVar2) {
          if (lVar14 == *(longlong *)(*(longlong *)(param_1 + 0xb8) + uVar21 * 0x10))
          goto LAB_140045486;
          lVar14 = *(longlong *)(lVar14 + 8);
          uVar2 = *(uint *)(lVar14 + 0x10);
        }
      }
      if ((lVar14 == 0) || (lVar14 == *(longlong *)(param_1 + 0xa8))) {
        plVar12 = (longlong *)FUN_14028af20(0x20);
        *plVar12 = 0;
        plVar12[1] = 0;
        plVar12[2] = 0;
        plVar12[3] = 0xf;
        *(undefined1 *)plVar12 = 0;
        uVar10 = FUN_140053e40(&local_128,local_res10 & 0xffffffff);
        FUN_14002fd20(&local_e0,"wallpaperconfigvd",uVar10);
        if (0xf < local_110) {
          uVar21 = local_110 + 1;
          pppppppuVar16 = local_128;
          if (0xfff < uVar21) {
            pppppppuVar16 = (undefined8 *******)local_128[-1];
            if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppppuVar16)))
            goto LAB_140045a7d;
            uVar21 = local_110 + 0x28;
          }
          thunk_FUN_14028af80(pppppppuVar16,uVar21);
        }
        if (plVar12 == &local_e0) {
          if (0xf < uStack_c8) {
            lVar5 = CONCAT44(local_e0._4_4_,(undefined4)local_e0);
            uVar21 = uStack_c8 + 1;
            lVar14 = lVar5;
            if (0xfff < uVar21) {
              lVar14 = *(longlong *)(lVar5 + -8);
              if (0x1f < (lVar5 - lVar14) - 8U) goto LAB_140045a7d;
              uVar21 = uStack_c8 + 0x28;
            }
            thunk_FUN_14028af80(lVar14,uVar21);
          }
        }
        else {
          uVar21 = plVar12[3];
          if (0xf < uVar21) {
            lVar14 = *plVar12;
            uVar23 = uVar21 + 1;
            if (0xfff < uVar23) {
              if (0x1f < (lVar14 - *(longlong *)(lVar14 + -8)) - 8U) goto LAB_140045a7d;
              uVar23 = uVar21 + 0x28;
              lVar14 = *(longlong *)(lVar14 + -8);
            }
            thunk_FUN_14028af80(lVar14,uVar23);
          }
          *(undefined4 *)plVar12 = (undefined4)local_e0;
          *(undefined4 *)((longlong)plVar12 + 4) = local_e0._4_4_;
          *(undefined4 *)(plVar12 + 1) = uStack_d8;
          *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_d4;
          plVar12[2] = local_d0;
          plVar12[3] = uStack_c8;
        }
        plVar13 = (longlong *)FUN_14004b8a0(param_1 + 0xa0,&local_108,&local_res10);
        *(longlong **)(*plVar13 + 0x18) = plVar12;
      }
      plVar19 = (longlong *)*plVar19;
    } while (plVar19 != plVar6);
  }
  lVar14 = FUN_140087490(lVar11,"wpropertiesvd","");
  if ((lVar14 != 0) &&
     (lVar14 = FUN_140086de0(lVar11,"wpropertiesvd",""), *(char *)(lVar14 + 8) == '\a')) {
    FUN_1400316b0(local_78);
    uVar10 = FUN_140086de0(lVar11,"wpropertiesvd","");
    FUN_140088360(uVar10,&local_f8);
    for (puVar18 = local_f8; puVar18 != local_f0; puVar18 = puVar18 + 4) {
      uVar21 = puVar18[2];
      local_128 = (undefined8 *******)0x0;
      uStack_120 = 0;
      local_118 = 0;
      local_110 = 0;
      puVar25 = puVar18;
      if (0xf < puVar18[3]) {
        puVar25 = (ulonglong *)*puVar18;
      }
      if (0x7fffffffffffffff < uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_1400172e0();
      }
      if (uVar21 < 0x10) {
        local_110 = 0xf;
        local_128 = (undefined8 *******)*puVar25;
        uStack_120 = puVar25[1];
        local_118 = uVar21;
      }
      else {
        uVar23 = uVar21 | 0xf;
        if (uVar23 < 0x8000000000000000) {
          if (uVar23 < 0x16) {
            uVar23 = 0x16;
          }
          uVar1 = uVar23 + 1;
          pppppppuVar16 = (undefined8 *******)0x0;
          if (uVar1 != 0) {
            if (0xfff < uVar1) {
              uVar20 = uVar23 + 0x28;
              if (uVar20 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              goto LAB_14004570b;
            }
            pppppppuVar16 = (undefined8 *******)FUN_14028af20(uVar1);
          }
        }
        else {
          uVar23 = 0x7fffffffffffffff;
          uVar20 = 0x8000000000000027;
LAB_14004570b:
          ppppppuVar15 = (undefined8 ******)FUN_14028af20(uVar20);
          if (ppppppuVar15 == (undefined8 ******)0x0) goto LAB_140045a7d;
          pppppppuVar16 = (undefined8 *******)((longlong)ppppppuVar15 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar16[-1] = ppppppuVar15;
        }
        local_128 = pppppppuVar16;
        local_118 = uVar21;
        local_110 = uVar23;
        FUN_1404210f0(pppppppuVar16,puVar25,uVar21 + 1);
      }
      pppppppuVar16 = &local_128;
      if (0xf < local_110) {
        pppppppuVar16 = local_128;
      }
      uVar9 = FUN_1402c82c0((longlong)pppppppuVar16 + 2);
      uVar21 = (((((ulonglong)(uVar9 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)((int)uVar9 >> 8 & 0xff)) * 0x100000001b3 ^
                (ulonglong)((int)uVar9 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)((int)uVar9 >> 0x18 & 0xff)) * 0x100000001b3 & local_88;
      plVar19 = *(longlong **)(local_a0[0] + 8 + uVar21 * 0x10);
      if (plVar19 == local_b0[0]) {
LAB_140045801:
        plVar19 = (longlong *)0x0;
      }
      else {
        uVar2 = *(uint *)(plVar19 + 2);
        while (uVar9 != uVar2) {
          if (plVar19 == *(longlong **)(local_a0[0] + uVar21 * 0x10)) goto LAB_140045801;
          plVar19 = (longlong *)plVar19[1];
          uVar2 = *(uint *)(plVar19 + 2);
        }
      }
      if ((plVar19 == (longlong *)0x0) || (plVar19 == local_b0[0])) {
        FUN_140032bc0(local_78,&local_108,&local_128);
      }
      if (0xf < local_110) {
        uVar21 = local_110 + 1;
        pppppppuVar16 = local_128;
        if (0xfff < uVar21) {
          pppppppuVar16 = (undefined8 *******)local_128[-1];
          if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppppuVar16)))
          goto LAB_140045a7d;
          uVar21 = local_110 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar16,uVar21);
      }
    }
    puVar18 = local_f8;
    if (local_f8 != (ulonglong *)0x0) {
      for (; puVar18 != local_f0; puVar18 = puVar18 + 4) {
        FUN_140017240(puVar18);
      }
      uVar21 = local_e8 - (longlong)local_f8 & 0xffffffffffffffe0;
      if (0xfff < uVar21) {
        if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)local_f8[-1]))) {
LAB_140045a7d:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar22 = auStack_140;
LAB_140045a84:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar22 + -8) = &UNK_140045a89;
          FUN_140017370();
        }
        uVar21 = uVar21 + 0x27;
        local_f8 = (ulonglong *)local_f8[-1];
      }
      thunk_FUN_14028af80(local_f8,uVar21);
    }
    for (puVar3 = (undefined8 *)*local_70[0]; puVar3 != local_70[0]; puVar3 = (undefined8 *)*puVar3)
    {
      uVar21 = puVar3[4];
      puVar18 = puVar3 + 2;
      pppppppuVar16 = (undefined8 *******)0x0;
      local_128 = (undefined8 *******)0x0;
      uStack_120 = 0;
      local_118 = 0;
      local_110 = 0;
      if (0xf < (ulonglong)puVar3[5]) {
        puVar18 = (ulonglong *)*puVar18;
      }
      if (0x7fffffffffffffff < uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_1400172e0();
      }
      if (uVar21 < 0x10) {
        local_110 = 0xf;
        local_128 = (undefined8 *******)*puVar18;
        uStack_120 = puVar18[1];
        local_118 = uVar21;
      }
      else {
        uVar23 = uVar21 | 0xf;
        if (uVar23 < 0x8000000000000000) {
          if (uVar23 < 0x16) {
            uVar23 = 0x16;
          }
          uVar1 = uVar23 + 1;
          if (uVar1 != 0) {
            if (0xfff < uVar1) {
              uVar20 = uVar23 + 0x28;
              if (uVar1 < uVar20) goto LAB_140045971;
              goto LAB_140045a84;
            }
            pppppppuVar16 = (undefined8 *******)FUN_14028af20(uVar1);
          }
        }
        else {
          uVar23 = 0x7fffffffffffffff;
          uVar20 = 0x8000000000000027;
LAB_140045971:
          ppppppuVar15 = (undefined8 ******)FUN_14028af20(uVar20);
          if (ppppppuVar15 == (undefined8 ******)0x0) goto LAB_140045a7d;
          pppppppuVar16 = (undefined8 *******)((longlong)ppppppuVar15 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar16[-1] = ppppppuVar15;
        }
        local_128 = pppppppuVar16;
        local_118 = uVar21;
        local_110 = uVar23;
        FUN_1404210f0(pppppppuVar16,puVar18,uVar21 + 1);
      }
      uVar10 = FUN_140086de0(lVar11,"wpropertiesvd","");
      local_100 = local_118;
      local_108 = &local_128;
      if (0xf < local_110) {
        local_108 = local_128;
      }
      FUN_1400878f0(uVar10,&local_108);
      if (0xf < local_110) {
        uVar21 = local_110 + 1;
        pppppppuVar16 = local_128;
        if (0xfff < uVar21) {
          pppppppuVar16 = (undefined8 *******)local_128[-1];
          if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppppuVar16)))
          goto LAB_140045a7d;
          uVar21 = local_110 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar16,uVar21);
      }
    }
    FUN_14000d9e0(local_60);
    FUN_140031340(local_70);
  }
  FUN_14000d9e0(local_a0);
  FUN_140049340(local_b0);
  return;
}

