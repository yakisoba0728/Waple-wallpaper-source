// Function: FUN_1400f4810
// Addr: 1400f4810
// Size: 2299 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1400f4810(longlong *param_1,undefined8 *param_2,uint *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  char *******pppppppcVar3;
  code *pcVar4;
  char *******pppppppcVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  size_t sVar10;
  char *******pppppppcVar11;
  char *******_Buf1;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char ******ppppppcVar15;
  char *******_Buf2;
  ulonglong uVar16;
  char *******pppppppcVar17;
  undefined1 *puVar18;
  longlong lVar19;
  char ******ppppppcVar20;
  uint uVar21;
  char *pcVar22;
  bool bVar23;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  char *******local_138;
  char *******pppppppcStack_130;
  char ******local_128;
  ulonglong uStack_120;
  char *******local_118;
  char *******pppppppcStack_110;
  char ******local_108;
  ulonglong uStack_100;
  char *******local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  longlong *local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  puVar18 = auStack_158;
  plVar8 = (longlong *)FUN_1400f4630();
  uVar14 = 0;
LAB_1400f4840:
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (longlong *)0x0;
  lStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  cVar6 = FUN_1400dc300(param_2,&local_b8,*plVar8 + uVar14 * 0x28);
  if (cVar6 != '\0') {
    lVar19 = lStack_a0 - (longlong)local_a8 >> 0x3f;
    lVar12 = (lStack_a0 - (longlong)local_a8) / 0x18 + lVar19;
    plVar9 = &local_60;
    if (lVar12 != lVar19) {
      plVar9 = local_a8;
    }
    if ((char)plVar9[2] == '\0') {
      local_118 = (char *******)0x0;
      pppppppcStack_110 = (char *******)0x0;
    }
    else {
      local_118 = (char *******)*plVar9;
      pppppppcStack_110 = (char *******)plVar9[1];
    }
    if (2 < (longlong)pppppppcStack_110 - (longlong)local_118) {
      plVar8 = &local_60;
      if (2 < (ulonglong)(lVar12 - lVar19)) {
        plVar8 = local_a8 + 6;
      }
      if ((char)plVar8[2] == '\0') {
        local_118 = (char *******)0x0;
        pppppppcStack_110 = (char *******)0x0;
      }
      else {
        local_118 = (char *******)*plVar8;
        pppppppcStack_110 = (char *******)plVar8[1];
      }
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      if (local_118 == pppppppcStack_110) {
        local_d8 = 0;
        uStack_c0 = 0xf;
      }
      else {
        FUN_140017480(&local_d8,local_118,(longlong)pppppppcStack_110 - (longlong)local_118);
      }
      puVar2 = param_3 + 2;
      if (puVar2 == (uint *)&local_d8) {
        if (0xf < uStack_c0) {
          uVar13 = uStack_c0 + 1;
          lVar19 = local_d8;
          if (0xfff < uVar13) {
            lVar19 = *(longlong *)(local_d8 + -8);
            if (0x1f < (local_d8 - lVar19) - 8U) goto LAB_1400f50ff;
            uVar13 = uStack_c0 + 0x28;
          }
          thunk_FUN_14028af80(lVar19,uVar13);
        }
      }
      else {
        uVar13 = *(ulonglong *)(param_3 + 8);
        if (0xf < uVar13) {
          lVar19 = *(longlong *)puVar2;
          uVar16 = uVar13 + 1;
          if (0xfff < uVar16) {
            if (0x1f < (lVar19 - *(longlong *)(lVar19 + -8)) - 8U) goto LAB_1400f50ff;
            uVar16 = uVar13 + 0x28;
            lVar19 = *(longlong *)(lVar19 + -8);
          }
          thunk_FUN_14028af80(lVar19,uVar16);
        }
        *(longlong *)puVar2 = local_d8;
        *(undefined8 *)(param_3 + 4) = uStack_d0;
        *(undefined8 *)(param_3 + 6) = local_c8;
        *(ulonglong *)(param_3 + 8) = uStack_c0;
      }
      *param_3 = (uint)uVar14;
      param_3[10] = 0;
      *(undefined1 *)(param_3 + 0xb) = 0;
      plVar8 = &local_60;
      if (1 < (ulonglong)((lStack_a0 - (longlong)local_a8) / 0x18)) {
        plVar8 = local_a8 + 3;
      }
      if ((char)plVar8[2] == '\0') {
        local_118 = (char *******)0x0;
        pppppppcStack_110 = (char *******)0x0;
      }
      else {
        local_118 = (char *******)*plVar8;
        pppppppcStack_110 = (char *******)plVar8[1];
      }
      local_e8 = 0;
      local_e0 = 0;
      local_f8 = (char *******)0x0;
      uStack_f0 = 0;
      if (local_118 == pppppppcStack_110) {
        local_e0 = 0xf;
        local_f8 = (char *******)0x0;
      }
      else {
        FUN_140017480(&local_f8,local_118,(longlong)pppppppcStack_110 - (longlong)local_118);
      }
      plVar8 = local_a8;
      uVar13 = local_e0;
      uVar14 = local_e8;
      pppppppcVar5 = local_f8;
      pppppppcVar17 = (char *******)&local_f8;
      if (0xf < local_e0) {
        pppppppcVar17 = local_f8;
      }
      if ((local_e8 == 2) && (iVar7 = memcmp(pppppppcVar17,&DAT_1404875c8,2), iVar7 == 0)) {
        uVar21 = 1;
      }
      else {
        pppppppcVar17 = (char *******)&local_f8;
        if (0xf < uVar13) {
          pppppppcVar17 = pppppppcVar5;
        }
        if (uVar14 == 3) {
          iVar7 = memcmp(pppppppcVar17,&DAT_1404875cc,3);
          bVar23 = iVar7 == 0;
        }
        else {
          bVar23 = false;
        }
        uVar21 = (uint)bVar23 * 2;
      }
      param_3[0xc] = uVar21;
      lVar19 = lStack_a0 - (longlong)plVar8 >> 0x3f;
      lVar12 = (lStack_a0 - (longlong)plVar8) / 0x18 + lVar19;
      uVar14 = lVar12 - lVar19;
      plVar9 = &local_60;
      if (lVar12 != lVar19) {
        plVar9 = plVar8;
      }
      if ((char)plVar9[2] == '\0') {
        local_118 = (char *******)0x0;
        pppppppcStack_110 = (char *******)0x0;
      }
      else {
        local_118 = (char *******)*plVar9;
        pppppppcStack_110 = (char *******)plVar9[1];
      }
      if ((longlong)pppppppcStack_110 - (longlong)local_118 < 4) goto LAB_1400f506c;
      plVar9 = &local_60;
      if (3 < uVar14) {
        plVar9 = plVar8 + 9;
      }
      if ((char)plVar9[2] == '\0') goto LAB_1400f506c;
      plVar9 = &local_60;
      if (3 < uVar14) {
        plVar9 = plVar8 + 9;
      }
      if ((char)plVar9[2] == '\0') {
        local_118 = (char *******)0x0;
        pppppppcStack_110 = (char *******)0x0;
      }
      else {
        local_118 = (char *******)*plVar9;
        pppppppcStack_110 = (char *******)plVar9[1];
      }
      local_e8 = 0;
      local_e0 = 0;
      local_f8 = (char *******)0x0;
      uStack_f0 = 0;
      if (local_118 == pppppppcStack_110) goto LAB_1400f506c;
      FUN_140017480(&local_f8,local_118,(longlong)pppppppcStack_110 - (longlong)local_118);
      if (local_e8 < 3) goto LAB_1400f502b;
      local_128 = (char ******)0x0;
      pppppppcVar17 = (char *******)&local_f8;
      if (0xf < local_e0) {
        pppppppcVar17 = local_f8;
      }
      uStack_120 = 0;
      local_138 = (char *******)0x0;
      pppppppcStack_130 = (char *******)0x0;
      sVar10 = strlen((char *)pppppppcVar17);
      FUN_140017480(&local_138,pppppppcVar17,sVar10);
      if ((char ******)0x2 < local_128) {
        local_108 = (char ******)0x0;
        uStack_100 = 0;
        local_118 = (char *******)0x0;
        pppppppcStack_110 = (char *******)0x0;
        if (local_128 == (char ******)0x0) goto LAB_1400f5106;
        uVar14 = (longlong)local_128 - 2U;
        if ((longlong)local_128 - 1U < (longlong)local_128 - 2U) {
          uVar14 = (longlong)local_128 - 1U;
        }
        pppppppcVar17 = (char *******)&local_138;
        if (0xf < uStack_120) {
          pppppppcVar17 = local_138;
        }
        FUN_140017480(&local_118,(char *)((longlong)pppppppcVar17 + 1),uVar14);
        if (0xf < uStack_120) {
          uVar14 = uStack_120 + 1;
          pppppppcVar17 = local_138;
          if (0xfff < uVar14) {
            pppppppcVar17 = (char *******)local_138[-1];
            if ((char *)0x1f < (char *)((longlong)local_138 + (-8 - (longlong)pppppppcVar17)))
            goto LAB_1400f50ff;
            uVar14 = uStack_120 + 0x28;
          }
          thunk_FUN_14028af80(pppppppcVar17,uVar14);
        }
        local_138 = local_118;
        pppppppcStack_130 = pppppppcStack_110;
        local_128 = local_108;
        uStack_120 = uStack_100;
      }
      pppppppcVar17 = (char *******)&local_138;
      if (0xf < uStack_120) {
        pppppppcVar17 = local_138;
      }
      iVar7 = isdigit((int)*(char *)pppppppcVar17);
      if (iVar7 != 0) {
        pppppppcVar17 = (char *******)&local_138;
        if (0xf < uStack_120) {
          pppppppcVar17 = local_138;
        }
        uVar21 = FUN_1402c82c0(pppppppcVar17);
        pppppppcVar17 = local_138;
        uVar14 = uStack_120;
        goto LAB_1400f4fc8;
      }
      pppppppcVar17 = (char *******)&local_138;
      if (0xf < uStack_120) {
        pppppppcVar17 = local_138;
      }
      pppppppcVar17 = (char *******)((longlong)pppppppcVar17 + (longlong)local_128);
      pppppppcVar11 = (char *******)&local_138;
      if (0xf < uStack_120) {
        pppppppcVar11 = local_138;
      }
      while ((pppppppcVar11 != pppppppcVar17 &&
             (iVar7 = isspace((int)*(char *)pppppppcVar11), iVar7 != 0))) {
        pppppppcVar11 = (char *******)((longlong)pppppppcVar11 + 1);
      }
      pppppppcVar17 = (char *******)&local_138;
      if (0xf < uStack_120) {
        pppppppcVar17 = local_138;
      }
      ppppppcVar20 = (char ******)((longlong)pppppppcVar11 - (longlong)pppppppcVar17);
      if (local_128 < (char ******)((longlong)pppppppcVar11 - (longlong)pppppppcVar17)) {
        ppppppcVar20 = local_128;
      }
      pppppppcVar17 = (char *******)&local_138;
      if (0xf < uStack_120) {
        pppppppcVar17 = local_138;
      }
      lVar19 = (longlong)local_128 - (longlong)ppppppcVar20;
      FUN_1404210f0(pppppppcVar17,(char *)((longlong)pppppppcVar17 + (longlong)ppppppcVar20),
                    lVar19 + 1);
      local_128 = (char ******)lVar19;
      pppppppcVar17 = (char *******)&local_138;
      if (0xf < uStack_120) {
        pppppppcVar17 = local_138;
      }
      pppppppcVar11 = (char *******)((longlong)pppppppcVar17 + lVar19);
      do {
        pppppppcVar3 = pppppppcVar11;
        if (pppppppcVar3 == pppppppcVar17) break;
        iVar7 = isspace((int)*(char *)((longlong)pppppppcVar3 + -1));
        pppppppcVar11 = (char *******)((longlong)pppppppcVar3 + -1);
      } while (iVar7 != 0);
      pppppppcVar11 = (char *******)&local_138;
      if (0xf < uStack_120) {
        pppppppcVar11 = local_138;
      }
      pcVar22 = (char *)((longlong)pppppppcVar17 + (lVar19 - (longlong)pppppppcVar3));
      lVar19 = (longlong)pppppppcVar3 - (longlong)pppppppcVar11;
      if ((char *)((longlong)local_128 - lVar19) < pcVar22) {
        pcVar22 = (char *)((longlong)local_128 - lVar19);
      }
      pppppppcVar17 = (char *******)&local_138;
      if (0xf < uStack_120) {
        pppppppcVar17 = local_138;
      }
      ppppppcVar20 = (char ******)((longlong)local_128 - (longlong)pcVar22);
      FUN_1404210f0((char *)((longlong)pppppppcVar17 + lVar19),
                    (char *)((longlong)pppppppcVar17 + lVar19) + (longlong)pcVar22,
                    (longlong)ppppppcVar20 + (1 - lVar19));
      uVar14 = uStack_120;
      pppppppcVar17 = local_138;
      lVar19 = *param_1;
      uVar16 = 0xcbf29ce484222325;
      pppppppcVar11 = (char *******)&local_138;
      if (0xf < uStack_120) {
        pppppppcVar11 = local_138;
      }
      local_128 = ppppppcVar20;
      ppppppcVar15 = (char ******)0x0;
      if (ppppppcVar20 != (char ******)0x0) {
        do {
          pbVar1 = (byte *)((longlong)pppppppcVar11 + (longlong)ppppppcVar15);
          ppppppcVar15 = (char ******)((longlong)ppppppcVar15 + 1);
          uVar16 = (uVar16 ^ *pbVar1) * 0x100000001b3;
        } while (ppppppcVar15 < ppppppcVar20);
      }
      uVar16 = uVar16 & *(ulonglong *)(lVar19 + 0x30);
      local_118 = *(char ********)(lVar19 + 8);
      pppppppcVar11 = *(char ********)(*(longlong *)(lVar19 + 0x18) + 8 + uVar16 * 0x10);
      if (pppppppcVar11 == local_118) {
LAB_1400f4fb9:
        pppppppcVar11 = (char *******)0x0;
      }
      else {
        pppppppcVar3 = *(char ********)(*(longlong *)(lVar19 + 0x18) + uVar16 * 0x10);
        while( true ) {
          _Buf2 = pppppppcVar11 + 2;
          if ((char ******)0xf < pppppppcVar11[5]) {
            _Buf2 = (char *******)*_Buf2;
          }
          _Buf1 = (char *******)&local_138;
          if (0xf < uVar14) {
            _Buf1 = pppppppcVar17;
          }
          if ((ppppppcVar20 == pppppppcVar11[4]) &&
             ((ppppppcVar20 == (char ******)0x0 ||
              (iVar7 = memcmp(_Buf1,_Buf2,(size_t)ppppppcVar20), iVar7 == 0)))) break;
          if (pppppppcVar11 == pppppppcVar3) goto LAB_1400f4fb9;
          pppppppcVar11 = (char *******)pppppppcVar11[1];
        }
      }
      if ((pppppppcVar11 != (char *******)0x0) && (pppppppcVar11 != local_118)) {
        uVar21 = *(uint *)(pppppppcVar11 + 6);
LAB_1400f4fc8:
        param_3[10] = uVar21;
      }
      if ((*param_3 < 0xe) && ((0x2803U >> (*param_3 & 0x1f) & 1) != 0)) {
        *(undefined1 *)(param_3 + 0xb) = 1;
      }
      if (uVar14 < 0x10) {
LAB_1400f502b:
        plVar8 = local_a8;
        if (0xf < local_e0) {
          uVar14 = local_e0 + 1;
          pppppppcVar17 = local_f8;
          if (0xfff < uVar14) {
            pppppppcVar17 = (char *******)local_f8[-1];
            if ((char *)0x1f < (char *)((longlong)local_f8 + (-8 - (longlong)pppppppcVar17)))
            goto LAB_1400f50ff;
            uVar14 = local_e0 + 0x28;
          }
          thunk_FUN_14028af80(pppppppcVar17,uVar14);
          plVar8 = local_a8;
        }
LAB_1400f506c:
        if (0xf < uVar13) {
          uVar14 = uVar13 + 1;
          pppppppcVar17 = pppppppcVar5;
          if (0xfff < uVar14) {
            pppppppcVar17 = (char *******)pppppppcVar5[-1];
            if ((char *)0x1f < (char *)((longlong)pppppppcVar5 + (-8 - (longlong)pppppppcVar17)))
            goto LAB_1400f50ff;
            uVar14 = uVar13 + 0x28;
          }
          thunk_FUN_14028af80(pppppppcVar17,uVar14);
          plVar8 = local_a8;
        }
        if (plVar8 == (longlong *)0x0) {
          return 1;
        }
        uVar14 = ((local_98 - (longlong)plVar8) / 0x18) * 0x18;
        plVar9 = plVar8;
        if (uVar14 < 0x1000) {
LAB_1400f50f0:
          thunk_FUN_14028af80(plVar9,uVar14);
          return 1;
        }
        plVar9 = (longlong *)plVar8[-1];
        if ((ulonglong)((longlong)plVar8 + (-8 - (longlong)plVar9)) < 0x20) {
          uVar14 = uVar14 + 0x27;
          goto LAB_1400f50f0;
        }
      }
      else {
        uVar16 = uVar14 + 1;
        pppppppcVar11 = pppppppcVar17;
        if (uVar16 < 0x1000) {
LAB_1400f5015:
          thunk_FUN_14028af80(pppppppcVar11,uVar16);
          goto LAB_1400f502b;
        }
        pppppppcVar11 = (char *******)pppppppcVar17[-1];
        if ((char *)((longlong)pppppppcVar17 + (-8 - (longlong)pppppppcVar11)) < (char *)0x20) {
          uVar16 = uVar14 + 0x28;
          goto LAB_1400f5015;
        }
      }
LAB_1400f50ff:
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar18 = auStack_150;
LAB_1400f5106:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar18 + -8) = &UNK_1400f510b;
      FUN_140012940();
    }
  }
  if (local_a8 != (longlong *)0x0) {
    uVar13 = ((local_98 - (longlong)local_a8) / 0x18) * 0x18;
    plVar9 = local_a8;
    if (0xfff < uVar13) {
      plVar9 = (longlong *)local_a8[-1];
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar9))) goto LAB_1400f50ff;
      uVar13 = uVar13 + 0x27;
    }
    thunk_FUN_14028af80(plVar9,uVar13);
  }
  uVar21 = (uint)uVar14 + 1;
  uVar14 = (ulonglong)uVar21;
  if (0xe < (int)uVar21) {
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_140098760("HLSL var error: %s\n",param_2);
    return 0;
  }
  goto LAB_1400f4840;
}

