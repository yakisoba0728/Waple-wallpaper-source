// Function: FUN_1400c66d0
// Addr: 1400c66d0
// Size: 2205 bytes


undefined4 FUN_1400c66d0(ulonglong param_1,longlong *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte bVar13;
  undefined **ppuVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  char *pcVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  longlong *in_R10;
  undefined8 *puVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  float fVar24;
  float fVar25;
  undefined8 local_res8;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  undefined8 local_198;
  ulonglong local_190;
  undefined4 local_188;
  ulonglong local_180;
  undefined8 *local_160;
  longlong local_158 [7];
  longlong *local_120;
  longlong local_118 [7];
  longlong *local_e0;
  longlong local_d8 [7];
  longlong *local_a0;
  undefined1 local_98;
  longlong local_88 [7];
  longlong *local_50;
  undefined1 local_48 [32];
  
  puVar21 = auStack_1b8;
  iVar8 = FUN_140290d80(param_1 + 0x450);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x49c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x49c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  *(int *)(param_1 + 0x4a0) = *(int *)(param_1 + 0x4a0) + 1;
  uVar23 = extraout_XMM0_Da;
  if (*(longlong *)(param_1 + 0x4b8) == 0) {
    uVar9 = FUN_140005ee0(&local_198);
    uVar9 = FUN_140005d20(uVar9,&DAT_140473850);
    uVar9 = FUN_140005c80(uVar9,L"winrtutil64.exe");
    FUN_140016600(local_48,uVar9);
    FUN_140016770(&local_198);
    local_198 = &PTR_FUN_140485f70;
    local_160 = &local_198;
    local_190 = param_1;
    FUN_140082060(param_1 + 0x6d8,&local_198);
    pcVar19 = "__WPXProviderAPIMediaControlPID";
    if ((*(byte *)(param_1 + 0xb60) & 2) != 0) {
      pcVar19 = "__WPXProviderAPIMediaControlSSPID";
    }
    puVar10 = (undefined8 *)FUN_140018ce0(local_48,&local_198);
    if (0xf < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_1400832c0(param_1 + 0x668,puVar10,"-mediainterface");
    if (local_180 < 0x10) {
LAB_1400c6835:
      uVar18 = *(ulonglong *)(param_1 + 0xb78);
      local_198 = (undefined **)0x6;
      local_190 = 0;
      local_188 = 0;
      local_180 = 0;
      if (uVar18 != 0) {
        plVar15 = (longlong *)(param_1 + 0xb68);
        local_188 = (int)uVar18;
        uVar11 = thunk_FUN_14028af20(uVar18 & 0xffffffff);
        if (0xf < *(ulonglong *)(param_1 + 0xb80)) {
          plVar15 = (longlong *)*plVar15;
        }
        local_180 = uVar11;
        FUN_1404210f0(uVar11,plVar15,uVar18 & 0xffffffff);
        local_198 = (undefined **)CONCAT44((int)uVar18,(undefined4)local_198);
        local_190 = uVar11;
      }
      uVar18 = local_190;
      FUN_1400182d0(param_1 + 0x668,&local_198);
      thunk_FUN_14028af80(uVar18);
      uVar23 = FUN_140016770(local_48);
      goto LAB_1400c68bf;
    }
    uVar18 = local_180 + 1;
    ppuVar14 = local_198;
    if (uVar18 < 0x1000) {
LAB_1400c6830:
      thunk_FUN_14028af80(ppuVar14,uVar18);
      goto LAB_1400c6835;
    }
    ppuVar14 = (undefined **)local_198[-1];
    if ((ulonglong)((longlong)local_198 + (-8 - (longlong)ppuVar14)) < 0x20) {
      uVar18 = local_180 + 0x28;
      goto LAB_1400c6830;
    }
    plVar15 = (longlong *)&DAT_00000005;
    pcVar1 = (code *)swi(0x29);
    uVar23 = (*pcVar1)();
    puVar7 = auStack_1b0;
LAB_1400c6931:
    puVar21 = puVar7;
    local_50 = (longlong *)0x0;
    if (in_R10 != (longlong *)0x0) {
      if (in_R10 == (longlong *)(puVar21 + 0x60)) {
        pcVar1 = *(code **)(*plVar15 + 8);
        *(undefined8 *)(puVar21 + -8) = 0x1400c6951;
        local_50 = (longlong *)(*pcVar1)(uVar23,local_88);
        plVar15 = local_120;
        pcVar19 = (char *)local_a0;
        uVar23 = extraout_XMM0_Da_01;
        if (local_120 == (longlong *)0x0) goto LAB_1400c6990;
        pcVar1 = *(code **)(*local_120 + 0x20);
        *(undefined8 *)(puVar21 + -8) = 0x1400c6972;
        uVar23 = (*pcVar1)(local_120,
                           CONCAT71((int7)((ulonglong)(puVar21 + 0x60) >> 8),
                                    local_120 != (longlong *)(puVar21 + 0x60)));
        pcVar19 = (char *)local_a0;
        plVar15 = local_50;
      }
      local_50 = plVar15;
      local_120 = (longlong *)0x0;
      plVar15 = (longlong *)0x0;
    }
LAB_1400c6990:
    plVar12 = plVar15;
    if ((longlong *)pcVar19 != (longlong *)0x0) {
      if ((longlong *)pcVar19 == local_d8) {
        pcVar1 = *(code **)(*(longlong *)pcVar19 + 8);
        *(undefined8 *)(puVar21 + -8) = 0x1400c69ac;
        plVar12 = (longlong *)(*pcVar1)(pcVar19,puVar21 + 0x60);
        uVar23 = extraout_XMM0_Da_02;
        local_120 = plVar12;
        if (local_a0 == (longlong *)0x0) goto LAB_1400c69e7;
        pcVar1 = *(code **)(*local_a0 + 0x20);
        *(undefined8 *)(puVar21 + -8) = 0x1400c69cf;
        uVar23 = (*pcVar1)(local_a0,local_a0 != local_d8);
        pcVar19 = (char *)local_120;
      }
      local_120 = (longlong *)pcVar19;
      local_a0 = (longlong *)0x0;
      plVar12 = local_120;
    }
LAB_1400c69e7:
    plVar2 = local_120;
    plVar15 = local_a0;
    if ((local_50 != (longlong *)0x0) && (plVar15 = local_50, local_50 == local_88)) {
      pcVar1 = *(code **)(*local_50 + 8);
      *(undefined8 *)(puVar21 + -8) = 0x1400c6a02;
      local_a0 = (longlong *)(*pcVar1)(local_50,local_d8);
      plVar12 = local_120;
      uVar23 = extraout_XMM0_Da_03;
      plVar2 = local_120;
      plVar15 = local_a0;
      if (local_50 != (longlong *)0x0) {
        pcVar1 = *(code **)(*local_50 + 0x20);
        *(undefined8 *)(puVar21 + -8) = 0x1400c6a1f;
        uVar23 = (*pcVar1)(local_50,CONCAT71((int7)((ulonglong)local_88 >> 8),local_50 != local_88))
        ;
        plVar12 = local_120;
        plVar2 = local_120;
        plVar15 = local_a0;
      }
    }
  }
  else {
LAB_1400c68bf:
    *(int *)(param_1 + 0x4ec) = *(int *)(param_1 + 0x4ec) + 1;
    puVar10 = (undefined8 *)param_2[7];
    local_e0 = (longlong *)0x0;
    local_a0 = (longlong *)0x0;
    local_98 = 0;
    local_120 = (longlong *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      local_120 = (longlong *)(**(code **)*puVar10)(puVar10,local_158);
      uVar23 = extraout_XMM0_Da_00;
    }
    plVar15 = local_120;
    puVar7 = auStack_1b8;
    pcVar19 = (char *)local_a0;
    in_R10 = local_120;
    if ((local_120 == local_158) ||
       (plVar12 = local_a0, puVar7 = auStack_1b8, plVar2 = local_a0, local_a0 == local_d8))
    goto LAB_1400c6931;
  }
  local_a0 = plVar15;
  local_120 = plVar2;
  if (plVar12 != (longlong *)0x0) {
    pcVar1 = *(code **)(*plVar12 + 0x20);
    *(undefined8 *)(puVar21 + -8) = 0x1400c6a3f;
    (*pcVar1)(uVar23,CONCAT71((int7)((ulonglong)(puVar21 + 0x60) >> 8),
                              plVar12 != (longlong *)(puVar21 + 0x60)));
  }
  lVar16 = *(longlong *)(param_1 + 0x4c0);
  uVar18 = (((((ulonglong)*(byte *)(param_1 + 0x4a0) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)(param_1 + 0x4a1)) * 0x100000001b3 ^
            (ulonglong)*(byte *)(param_1 + 0x4a2)) * 0x100000001b3 ^
           (ulonglong)*(byte *)(param_1 + 0x4a3)) * 0x100000001b3;
  uVar11 = uVar18 & *(ulonglong *)(param_1 + 0x4d8);
  puVar10 = *(undefined8 **)(lVar16 + 8 + uVar11 * 0x10);
  puVar22 = *(undefined8 **)(param_1 + 0x4b0);
  if (puVar10 != *(undefined8 **)(param_1 + 0x4b0)) {
    iVar8 = *(int *)(puVar10 + 2);
    while (*(int *)(param_1 + 0x4a0) != iVar8) {
      puVar22 = puVar10;
      if (puVar10 == *(undefined8 **)(lVar16 + uVar11 * 0x10)) goto LAB_1400c6ae6;
      puVar10 = (undefined8 *)puVar10[1];
      iVar8 = *(int *)(puVar10 + 2);
    }
    goto LAB_1400c6e73;
  }
LAB_1400c6ae6:
  if (*(longlong *)(param_1 + 0x4b8) == 0x199999999999999) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar21 + -8) = &UNK_1400c6f70;
    FUN_14028c2e0("unordered_map/set too long");
  }
  *(undefined8 *)(puVar21 + -8) = 0x1400c6b07;
  puVar10 = (undefined8 *)FUN_14028af20(0xa0);
  *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(param_1 + 0x4a0);
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  fVar24 = (float)(*(longlong *)(param_1 + 0x4b8) + 1);
  uVar11 = *(ulonglong *)(param_1 + 0x4e0);
  fVar25 = *(float *)(param_1 + 0x4a8);
  if (fVar25 < fVar24 / (float)uVar11) {
    *(undefined8 *)(puVar21 + -8) = 0x1400c6bbd;
    fVar25 = (float)FUN_140419fa0(fVar24 / fVar25);
    lVar16 = 0;
    if ((DAT_140492974 <= fVar25) && (fVar25 = fVar25 - DAT_140492974, fVar25 < DAT_140492974)) {
      lVar16 = -0x8000000000000000;
    }
    uVar17 = 8;
    if (8 < (ulonglong)((longlong)fVar25 + lVar16)) {
      uVar17 = (longlong)fVar25 + lVar16;
    }
    uVar20 = uVar11;
    if ((uVar11 < uVar17) && ((0x1ff < uVar11 || (uVar20 = uVar11 * 8, uVar11 * 8 < uVar17)))) {
      uVar20 = uVar17;
    }
    for (lVar16 = 0x3f; 0xfffffffffffffffU >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar16 & 0x3f)) < uVar20) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar21 + -8) = &UNK_1400c6f45;
      FUN_14028c2e0("invalid hash bucket count");
    }
    plVar15 = *(longlong **)(param_1 + 0x4b0);
    uVar11 = uVar20 - 1 | 1;
    lVar16 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    bVar13 = (char)lVar16 + 1;
    lVar16 = 1L << (bVar13 & 0x3f);
    *(undefined8 *)(puVar21 + -8) = 0x1400c6c61;
    FUN_14004f190((longlong *)(param_1 + 0x4c0),2L << (bVar13 & 0x3f),plVar15);
    *(longlong *)(param_1 + 0x4e0) = lVar16;
    *(longlong *)(param_1 + 0x4d8) = lVar16 + -1;
    plVar12 = (longlong *)**(undefined8 **)(param_1 + 0x4b0);
joined_r0x0001400c6c83:
    if (plVar12 != plVar15) {
      lVar16 = *(longlong *)(param_1 + 0x4c0);
      plVar2 = (longlong *)*plVar12;
      uVar11 = (((((ulonglong)*(byte *)(plVar12 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar12 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar12 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar12 + 0x13)) * 0x100000001b3 &
               *(ulonglong *)(param_1 + 0x4d8);
      plVar3 = *(longlong **)(lVar16 + uVar11 * 0x10);
      if (plVar3 == plVar15) {
        *(longlong **)(lVar16 + uVar11 * 0x10) = plVar12;
        *(longlong **)(lVar16 + 8 + uVar11 * 0x10) = plVar12;
        plVar12 = plVar2;
      }
      else {
        plVar4 = *(longlong **)(lVar16 + 8 + uVar11 * 0x10);
        if ((int)plVar12[2] == (int)plVar4[2]) {
          plVar4 = (longlong *)*plVar4;
          if (plVar4 != plVar12) {
            plVar3 = (longlong *)plVar12[1];
            *plVar3 = (longlong)plVar2;
            puVar22 = (undefined8 *)plVar2[1];
            *puVar22 = plVar4;
            puVar5 = (undefined8 *)plVar4[1];
            *puVar5 = plVar12;
            plVar4[1] = (longlong)puVar22;
            plVar2[1] = (longlong)plVar3;
            plVar12[1] = (longlong)puVar5;
          }
          *(longlong **)(lVar16 + 8 + uVar11 * 0x10) = plVar12;
          plVar12 = plVar2;
        }
        else {
          do {
            if (plVar3 == plVar4) {
              plVar3 = (longlong *)plVar12[1];
              *plVar3 = (longlong)plVar2;
              puVar22 = (undefined8 *)plVar2[1];
              *puVar22 = plVar4;
              puVar5 = (undefined8 *)plVar4[1];
              *puVar5 = plVar12;
              plVar4[1] = (longlong)puVar22;
              plVar2[1] = (longlong)plVar3;
              plVar12[1] = (longlong)puVar5;
              *(longlong **)(lVar16 + uVar11 * 0x10) = plVar12;
              plVar12 = plVar2;
              goto joined_r0x0001400c6c83;
            }
            plVar4 = (longlong *)plVar4[1];
          } while ((int)plVar12[2] != (int)plVar4[2]);
          lVar16 = *plVar4;
          plVar3 = (longlong *)plVar12[1];
          *plVar3 = (longlong)plVar2;
          plVar4 = (longlong *)plVar2[1];
          *plVar4 = lVar16;
          puVar22 = *(undefined8 **)(lVar16 + 8);
          *puVar22 = plVar12;
          *(longlong **)(lVar16 + 8) = plVar4;
          plVar2[1] = (longlong)plVar3;
          plVar12[1] = (longlong)puVar22;
          plVar12 = plVar2;
        }
      }
      goto joined_r0x0001400c6c83;
    }
    local_res8 = 0;
    *(undefined8 *)(puVar21 + -8) = 0x1400c6dac;
    FUN_1400cdac0(&local_res8);
    uVar11 = uVar18 & *(ulonglong *)(param_1 + 0x4d8);
    puVar22 = *(undefined8 **)(param_1 + 0x4b0);
    puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x4c0) + 8 + uVar11 * 0x10);
    if (puVar5 != puVar22) {
      iVar8 = *(int *)(puVar5 + 2);
      puVar22 = puVar5;
      while (*(int *)(puVar10 + 2) != iVar8) {
        if (puVar22 == *(undefined8 **)(*(longlong *)(param_1 + 0x4c0) + uVar11 * 0x10))
        goto LAB_1400c6df1;
        puVar22 = (undefined8 *)puVar22[1];
        iVar8 = *(int *)(puVar22 + 2);
      }
      puVar22 = (undefined8 *)*puVar22;
    }
  }
LAB_1400c6df1:
  puVar5 = (undefined8 *)puVar22[1];
  *(longlong *)(param_1 + 0x4b8) = *(longlong *)(param_1 + 0x4b8) + 1;
  *puVar10 = puVar22;
  puVar10[1] = puVar5;
  *puVar5 = puVar10;
  puVar22[1] = puVar10;
  lVar16 = *(longlong *)(param_1 + 0x4c0);
  uVar18 = *(ulonglong *)(param_1 + 0x4d8) & uVar18;
  puVar6 = *(undefined8 **)(lVar16 + uVar18 * 0x10);
  if (puVar6 == *(undefined8 **)(param_1 + 0x4b0)) {
    *(undefined8 **)(lVar16 + uVar18 * 0x10) = puVar10;
  }
  else {
    if (puVar6 == puVar22) {
      *(undefined8 **)(lVar16 + uVar18 * 0x10) = puVar10;
      goto LAB_1400c6e73;
    }
    if (*(undefined8 **)(lVar16 + 8 + uVar18 * 0x10) != puVar5) goto LAB_1400c6e73;
  }
  *(undefined8 **)(lVar16 + 8 + uVar18 * 0x10) = puVar10;
LAB_1400c6e73:
  *(undefined8 *)(puVar21 + -8) = 0x1400c6e80;
  FUN_1400cb010(puVar10 + 3,local_118);
  *(undefined8 *)(puVar21 + -8) = 0x1400c6e8d;
  FUN_1400cb010(puVar10 + 0xb,local_d8);
  *(undefined1 *)(puVar10 + 0x13) = local_98;
  uVar23 = *(undefined4 *)(param_1 + 0x4a0);
  if (local_a0 != (longlong *)0x0) {
    pcVar1 = *(code **)(*local_a0 + 0x20);
    *(undefined8 *)(puVar21 + -8) = 0x1400c6eb6;
    (*pcVar1)(local_a0,local_a0 != local_d8);
    local_a0 = (longlong *)0x0;
  }
  if (local_e0 != (longlong *)0x0) {
    pcVar1 = *(code **)(*local_e0 + 0x20);
    *(undefined8 *)(puVar21 + -8) = 0x1400c6ed9;
    (*pcVar1)(local_e0,local_e0 != local_118);
    local_e0 = (longlong *)0x0;
  }
  *(undefined8 *)(puVar21 + -8) = 0x1400c6ee9;
  FUN_140290ea0(param_1 + 0x450);
  plVar15 = (longlong *)param_2[7];
  if (plVar15 != (longlong *)0x0) {
    pcVar1 = *(code **)(*plVar15 + 0x20);
    *(undefined8 *)(puVar21 + -8) = 0x1400c6eff;
    (*pcVar1)(plVar15,plVar15 != param_2);
    param_2[7] = 0;
  }
  return uVar23;
}

