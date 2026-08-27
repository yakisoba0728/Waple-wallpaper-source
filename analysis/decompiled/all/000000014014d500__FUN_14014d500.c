// Function: FUN_14014d500
// Addr: 14014d500
// Size: 2604 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14014d500(longlong param_1,char *param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  size_t sVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined8 *******pppppppuVar13;
  longlong lVar14;
  undefined8 uVar15;
  int *piVar16;
  ulonglong uVar17;
  char *******pppppppcVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 *puVar23;
  char *******pppppppcVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [24];
  undefined4 *local_218;
  longlong *local_210;
  undefined4 local_208;
  char *******local_1f8;
  undefined8 uStack_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  undefined8 *******local_1d8;
  undefined8 uStack_1d0;
  undefined1 *local_1c8;
  ulonglong local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170 [2];
  undefined8 *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_120;
  longlong lStack_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8 [2];
  undefined8 *local_e0 [2];
  longlong local_d0;
  longlong local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined1 local_50;
  undefined1 local_48 [16];
  
  puVar23 = auStack_238;
  uVar19 = 0;
  local_1f8 = (char *******)0x0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  sVar10 = strlen(param_2);
  FUN_140017480(&local_1f8,param_2,sVar10);
  FUN_1400187b0(&local_1f8);
  uVar27 = local_1e0;
  uVar21 = local_1e8;
  pppppppcVar24 = local_1f8;
  uVar25 = 0xcbf29ce484222325;
  pppppppcVar18 = (char *******)&local_1f8;
  if (0xf < local_1e0) {
    pppppppcVar18 = local_1f8;
  }
  uVar17 = 0xcbf29ce484222325;
  if (local_1e8 != 0) {
    do {
      pbVar1 = (byte *)((longlong)pppppppcVar18 + uVar19);
      uVar19 = uVar19 + 1;
      uVar17 = (uVar17 ^ *pbVar1) * 0x100000001b3;
    } while (uVar19 < local_1e8);
  }
  uVar17 = uVar17 & *(ulonglong *)(param_1 + 0x70);
  lVar14 = *(longlong *)(param_1 + 0x48);
  lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 8 + uVar17 * 0x10);
  if (lVar22 != lVar14) {
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x58) + uVar17 * 0x10);
    while( true ) {
      puVar20 = (undefined8 *)(lVar22 + 0x10);
      if (0xf < *(ulonglong *)(lVar22 + 0x28)) {
        puVar20 = (undefined8 *)*puVar20;
      }
      pppppppcVar18 = (char *******)&local_1f8;
      if (0xf < uVar27) {
        pppppppcVar18 = pppppppcVar24;
      }
      if ((uVar21 == *(ulonglong *)(lVar22 + 0x20)) &&
         ((uVar21 == 0 || (iVar8 = memcmp(pppppppcVar18,puVar20,uVar21), iVar8 == 0)))) {
        lVar14 = *(longlong *)(param_1 + 0x48);
        goto LAB_14014d629;
      }
      if (lVar22 == lVar14) break;
      lVar22 = *(longlong *)(lVar22 + 8);
    }
    lVar14 = *(longlong *)(param_1 + 0x48);
  }
  lVar22 = 0;
LAB_14014d629:
  if ((lVar22 == 0) || (lVar22 == lVar14)) {
    uVar19 = param_1 + 0x40;
    pppppppcVar18 = (char *******)&local_1f8;
    if (0xf < uVar27) {
      pppppppcVar18 = pppppppcVar24;
    }
    uVar17 = 0;
    if (uVar21 != 0) {
      do {
        pbVar1 = (byte *)((longlong)pppppppcVar18 + uVar17);
        uVar17 = uVar17 + 1;
        uVar25 = (uVar25 ^ *pbVar1) * 0x100000001b3;
      } while (uVar17 < uVar21);
    }
    uVar25 = uVar25 & *(ulonglong *)(param_1 + 0x30);
    lVar14 = *(longlong *)(param_1 + 8);
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar25 * 0x10);
    if (lVar22 != lVar14) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar25 * 0x10);
      while( true ) {
        puVar20 = (undefined8 *)(lVar22 + 0x10);
        if (0xf < *(ulonglong *)(lVar22 + 0x28)) {
          puVar20 = (undefined8 *)*puVar20;
        }
        pppppppcVar18 = (char *******)&local_1f8;
        if (0xf < uVar27) {
          pppppppcVar18 = pppppppcVar24;
        }
        if ((uVar21 == *(ulonglong *)(lVar22 + 0x20)) &&
           ((uVar21 == 0 || (iVar8 = memcmp(pppppppcVar18,puVar20,uVar21), iVar8 == 0))))
        goto LAB_14014d72f;
        if (lVar22 == lVar2) break;
        lVar22 = *(longlong *)(lVar22 + 8);
      }
    }
    lVar22 = 0;
LAB_14014d72f:
    if ((lVar22 != 0) && (lVar22 != lVar14)) {
      if (param_3 != 0) {
        FUN_14014df30(param_3,*(longlong *)(lVar22 + 0x30) + 0x18);
      }
      if (param_4 != 0) {
        FUN_14014e130(param_4,*(longlong *)(lVar22 + 0x30) + 0xa8);
      }
      FUN_14014e2b0(&local_190,*(longlong *)(lVar22 + 0x30) + 0x18);
      FUN_14014e370(&local_130,*(longlong *)(lVar22 + 0x30) + 0xa8);
      plVar11 = (longlong *)FUN_14014e850(uVar19,local_48,&local_1f8);
      lVar14 = *plVar11;
      FUN_14014e410(lVar14 + 0x30,&local_190);
      FUN_14014e4f0(lVar14 + 0x90,&local_130);
      FUN_1400efd70(&local_120);
      FUN_14000d9e0(&local_158);
      FUN_14000da50(&local_168);
      uVar26 = 1;
      pppppppcVar24 = local_1f8;
      uVar27 = local_1e0;
      goto LAB_14014dece;
    }
    pppppppcVar18 = (char *******)&local_1f8;
    if (0xf < uVar27) {
      pppppppcVar18 = pppppppcVar24;
    }
    local_1c8 = (undefined1 *)0xa;
    local_1c0 = 0xf;
    local_1d8 = (undefined8 *******)s_materials__140487008._0_8_;
    uStack_1d0 = (ulonglong)(ushort)s_materials__140487008._8_2_;
    puVar12 = (undefined4 *)strlen((char *)pppppppcVar18);
    if (&DAT_00000005 < puVar12) {
      local_218 = puVar12;
      FUN_140053110(&local_1d8,puVar12,uVar19 & 0xff,pppppppcVar18);
    }
    else {
      local_1c8 = (undefined1 *)((longlong)puVar12 + 10);
      FUN_1404210f0((longlong)&uStack_1d0 + 2,pppppppcVar18,puVar12);
      *(undefined1 *)((longlong)&uStack_1d0 + 2 + (longlong)puVar12) = 0;
    }
    puVar6 = local_1c8;
    if (local_1c0 - (longlong)local_1c8 < 4) {
      local_218 = (undefined4 *)&DAT_00000004;
      FUN_140053110(&local_1d8,4,uVar19 & 0xff,&DAT_140486ff8);
    }
    else {
      pppppppuVar13 = &local_1d8;
      if (0xf < local_1c0) {
        pppppppuVar13 = local_1d8;
      }
      puVar12 = (undefined4 *)((longlong)pppppppuVar13 + (longlong)local_1c8);
      local_1c8 = local_1c8 + 4;
      *puVar12 = 0x7865742e;
      *(undefined1 *)((longlong)pppppppuVar13 + (longlong)(puVar6 + 4)) = 0;
    }
    pppppppuVar13 = &local_1d8;
    if (0xf < local_1c0) {
      pppppppuVar13 = local_1d8;
    }
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x1898);
    lVar14 = (**(code **)(*plVar11 + 8))(plVar11,pppppppuVar13,1);
    uVar26 = 0;
    if (lVar14 == 0) {
LAB_14014de8c:
      pppppppcVar24 = local_1f8;
      uVar27 = local_1e0;
      if (0xf < local_1c0) {
        uVar21 = local_1c0 + 1;
        pppppppuVar13 = local_1d8;
        if (0xfff < uVar21) {
          pppppppuVar13 = (undefined8 *******)local_1d8[-1];
          if (0x1f < (ulonglong)((longlong)local_1d8 + (-8 - (longlong)pppppppuVar13)))
          goto LAB_14014df20;
          uVar21 = local_1c0 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar13,uVar21);
        pppppppcVar24 = local_1f8;
        uVar27 = local_1e0;
      }
      goto LAB_14014dece;
    }
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x1898);
    uVar9 = (**(code **)(*plVar11 + 0x18))(plVar11,lVar14);
    uVar5 = 1;
    if (1 < uVar9) {
      uVar5 = uVar9;
    }
    uVar15 = thunk_FUN_14028af20();
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x1898);
    iVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,lVar14,uVar15,uVar5);
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x1898);
    (**(code **)(*plVar11 + 0x20))(plVar11,lVar14);
    piVar16 = (int *)FUN_14028af20(0x18);
    *piVar16 = 1;
    *(undefined8 *)(piVar16 + 2) = uVar15;
    piVar16[4] = uVar5;
    if (iVar8 == 0) {
LAB_14014de70:
      *piVar16 = *piVar16 + -1;
      if (*piVar16 == 0) {
        thunk_FUN_14028af80(*(undefined8 *)(piVar16 + 2));
        thunk_FUN_14028af80(piVar16,0x18);
      }
      goto LAB_14014de8c;
    }
    local_90 = 0xf;
    local_98 = 0;
    local_88 = 0;
    lStack_80 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 1;
    local_f0 = 0;
    FUN_14000d970(local_e8);
    local_210 = &local_a8;
    local_208 = 1;
    local_1a8 = 0;
    lStack_1a0 = 0;
    local_198 = 0;
    local_218 = &local_1b8;
    cVar7 = FUN_14015e580(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x158),0,piVar16,
                          &local_108);
    if (cVar7 == '\0') {
LAB_14014dcdb:
      if (local_1a8 != 0) {
        uVar21 = local_198 - local_1a8 & 0xffffffffffffffe0;
        lVar14 = local_1a8;
        if (0xfff < uVar21) {
          lVar14 = *(longlong *)(local_1a8 + -8);
          if (0x1f < (local_1a8 - lVar14) - 8U) goto LAB_14014df20;
          uVar21 = uVar21 + 0x27;
        }
        thunk_FUN_14028af80(lVar14,uVar21);
        local_198 = 0;
        local_1a8 = 0;
        lStack_1a0 = 0;
      }
      FUN_14000d9e0(&local_d0);
      FUN_14000da50(local_e0);
      if (local_68 != 0) {
        uVar21 = (local_58 - local_68 >> 3) * 8;
        lVar14 = local_68;
        if (0xfff < uVar21) {
          lVar14 = *(longlong *)(local_68 + -8);
          if (0x1f < (local_68 - lVar14) - 8U) goto LAB_14014df20;
          uVar21 = uVar21 + 0x27;
        }
        thunk_FUN_14028af80(lVar14,uVar21);
        local_58 = 0;
        local_68 = 0;
        uStack_60 = 0;
      }
      lVar22 = local_78;
      lVar14 = lStack_80;
      if (lStack_80 != 0) {
        for (; lVar14 != lVar22; lVar14 = lVar14 + 0x18) {
          FUN_1400caf90(lVar14);
        }
        uVar21 = (lStack_70 - lStack_80 >> 3) * 8;
        lVar14 = lStack_80;
        if (0xfff < uVar21) {
          lVar14 = *(longlong *)(lStack_80 + -8);
          if (0x1f < (lStack_80 - lVar14) - 8U) goto LAB_14014df20;
          uVar21 = uVar21 + 0x27;
        }
        thunk_FUN_14028af80(lVar14,uVar21);
        lStack_80 = 0;
        local_78 = 0;
        lStack_70 = 0;
      }
      if (0xf < local_90) {
        uVar21 = local_90 + 1;
        lVar14 = local_a8;
        if (0xfff < uVar21) {
          lVar14 = *(longlong *)(local_a8 + -8);
          if (0x1f < (local_a8 - lVar14) - 8U) goto LAB_14014df20;
          uVar21 = local_90 + 0x28;
        }
        thunk_FUN_14028af80(lVar14,uVar21);
      }
      goto LAB_14014de70;
    }
    if (param_3 != 0) {
      FUN_14014df30(param_3,&local_108);
    }
    if (param_4 != 0) {
      FUN_14014e130(param_4,&local_1b8);
    }
    local_190 = (undefined4)local_108;
    local_18c = local_108._4_4_;
    local_188 = (undefined4)local_100;
    local_184 = local_100._4_4_;
    local_180 = (undefined4)local_f8;
    local_17c = local_f8._4_4_;
    local_178 = (undefined4)local_f0;
    local_174 = local_f0._4_4_;
    local_170[0] = local_e8[0];
    local_168 = (undefined8 *)0x0;
    local_160 = 0;
    local_168 = (undefined8 *)FUN_14028af20(0x50);
    *local_168 = local_168;
    local_168[1] = local_168;
    local_140 = local_b8;
    local_138 = local_b0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    FUN_140011f50(&local_158,local_c8 - local_d0 >> 3,local_168);
    FUN_14014ef50(local_170,*local_e0[0],local_e0[0]);
    local_12c = local_1b4;
    local_130 = local_1b8;
    local_128 = local_1b0;
    local_124 = local_1ac;
    local_120 = 0;
    lStack_118 = 0;
    local_110 = 0;
    if (lStack_1a0 - local_1a8 != 0) {
      if (0x7ffffffffffffff < (ulonglong)(lStack_1a0 - local_1a8 >> 5)) goto LAB_14014df27;
      FUN_14014fb40(&local_120);
      lVar14 = local_120;
      uVar21 = lStack_1a0 - local_1a8;
      FUN_1404210f0(local_120,local_1a8,uVar21);
      lStack_118 = (uVar21 & 0xffffffffffffffe0) + lVar14;
    }
    plVar11 = (longlong *)FUN_14014e850(param_1 + 0x40,local_48,&local_1f8);
    lVar14 = *plVar11;
    FUN_14014e410(lVar14 + 0x30,&local_190);
    FUN_14014e4f0(lVar14 + 0x90,&local_130);
    if (local_120 == 0) {
LAB_14014dc3a:
      if (local_158 != 0) {
        uVar21 = (local_148 - local_158 >> 3) * 8;
        lVar14 = local_158;
        if (0xfff < uVar21) {
          lVar14 = *(longlong *)(local_158 + -8);
          if (0x1f < (local_158 - lVar14) - 8U) goto LAB_14014df20;
          uVar21 = uVar21 + 0x27;
        }
        thunk_FUN_14028af80(lVar14,uVar21);
        local_148 = 0;
        local_158 = 0;
        uStack_150 = 0;
      }
      *(undefined8 *)local_168[1] = 0;
      puVar20 = (undefined8 *)*local_168;
      while (puVar20 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar20;
        FUN_140017240(puVar20 + 6);
        FUN_140017240(puVar20 + 2);
        thunk_FUN_14028af80(puVar20,0x50);
        puVar20 = puVar3;
      }
      thunk_FUN_14028af80(local_168,0x50);
      uVar26 = 1;
      goto LAB_14014dcdb;
    }
    uVar21 = local_110 - local_120 & 0xffffffffffffffe0;
    lVar14 = local_120;
    if (uVar21 < 0x1000) {
LAB_14014dc29:
      thunk_FUN_14028af80(lVar14,uVar21);
      local_110 = 0;
      local_120 = 0;
      lStack_118 = 0;
      goto LAB_14014dc3a;
    }
    lVar14 = *(longlong *)(local_120 + -8);
    if ((local_120 - lVar14) - 8U < 0x20) {
      uVar21 = uVar21 + 0x27;
      goto LAB_14014dc29;
    }
  }
  else {
    if (param_3 != 0) {
      FUN_14014df30(param_3,lVar22 + 0x30);
      pppppppcVar24 = local_1f8;
      uVar27 = local_1e0;
    }
    if (param_4 != 0) {
      FUN_14014e130(param_4,lVar22 + 0x90);
      pppppppcVar24 = local_1f8;
      uVar27 = local_1e0;
    }
    uVar26 = 1;
LAB_14014dece:
    if (uVar27 < 0x10) {
      return uVar26;
    }
    uVar21 = uVar27 + 1;
    pppppppcVar18 = pppppppcVar24;
    if (uVar21 < 0x1000) {
LAB_14014def9:
      thunk_FUN_14028af80(pppppppcVar18,uVar21);
      return uVar26;
    }
    pppppppcVar18 = (char *******)pppppppcVar24[-1];
    if ((ulonglong)((longlong)pppppppcVar24 + (-8 - (longlong)pppppppcVar18)) < 0x20) {
      uVar21 = uVar27 + 0x28;
      goto LAB_14014def9;
    }
  }
LAB_14014df20:
  pcVar4 = (code *)swi(0x29);
  (*pcVar4)(5);
  puVar23 = auStack_230;
LAB_14014df27:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar23 + -8) = &UNK_14014df2c;
  FUN_140013050();
}

