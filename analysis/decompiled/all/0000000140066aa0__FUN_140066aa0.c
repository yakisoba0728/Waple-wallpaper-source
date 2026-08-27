// Function: FUN_140066aa0
// Addr: 140066aa0
// Size: 1474 bytes


void FUN_140066aa0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  undefined4 uVar19;
  longlong *local_res8 [4];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [24];
  longlong *local_1a8;
  uint local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_178;
  longlong *plStack_170;
  longlong *local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_134;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_120;
  undefined8 local_118;
  longlong lStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined2 local_c8;
  undefined1 local_c6;
  char *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar16 = auStack_1c8;
  local_res8[0] = param_1;
  lVar8 = FUN_140086de0(&DAT_1404e6378,"selectedwallpapers","");
  if (*(char *)(lVar8 + 8) == '\a') {
    uVar9 = FUN_140086de0(&DAT_1404e6378,"selectedwallpapers","");
    FUN_140085090(&local_1a8,uVar9);
  }
  else {
    local_1a0 = CONCAT31(local_1a0._1_3_,7);
    local_1a0 = local_1a0 & 0xfffffeff;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    plVar18 = (longlong *)FUN_14028af20(0x10);
    *plVar18 = 0;
    plVar18[1] = 0;
    lVar8 = FUN_14028af20(0x58);
    *(longlong *)lVar8 = lVar8;
    *(longlong *)(lVar8 + 8) = lVar8;
    *(longlong *)(lVar8 + 0x10) = lVar8;
    *(undefined2 *)(lVar8 + 0x18) = 0x101;
    *plVar18 = lVar8;
    local_1a8 = plVar18;
  }
  puVar14 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar14 = (undefined8 *)*param_2;
  }
  uVar9 = FUN_140086de0(&local_1a8,puVar14,param_2[2] + (longlong)puVar14);
  uVar10 = FUN_140086de0(uVar9,&DAT_140473b68,&DAT_140473b6c);
  uVar11 = FUN_140086de0(uVar9,&DAT_140473b68,&DAT_140473b6c);
  FUN_140085520(uVar11,uVar10);
  if ((*(char *)(param_3 + 8) == '\a') &&
     (lVar8 = FUN_140086de0(param_3,&DAT_14047491c,&DAT_140474921), *(char *)(lVar8 + 8) == '\x06'))
  {
    uVar10 = FUN_140086de0(param_3,&DAT_14047491c,&DAT_140474921);
    uVar6 = FUN_1400863a0(uVar10);
    if (uVar6 < 2) goto LAB_140066c26;
    uVar9 = FUN_140086de0(uVar9,"playlist","");
    FUN_140085520(uVar9,param_3);
  }
  else {
LAB_140066c26:
    local_b0 = 8;
    local_b8 = "playlist";
    FUN_1400878f0(uVar9,&local_b8);
  }
  uVar9 = FUN_140086de0(&DAT_1404e6378,"selectedwallpapers","");
  FUN_140085520(uVar9,&local_1a8);
  local_78 = 0x42700000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_6c = 0;
  local_64 = 0;
  local_60 = 0xfffffffe;
  local_5c = 0;
  local_48 = 0;
  FUN_140075a90(&DAT_1404e52e0,param_3,&local_a8);
  plVar4 = DAT_1404e5330;
  plVar13 = DAT_1404e5330;
  for (plVar18 = (longlong *)*DAT_1404e5330; DAT_1404e5330 = plVar13, plVar18 != plVar4;
      plVar18 = (longlong *)*plVar18) {
    *(undefined4 *)((longlong)plVar18 + 0x7c) = 0;
    plVar13 = DAT_1404e5330;
  }
  FUN_140030de0(&DAT_1404e5328,local_res8,param_2);
  plVar18 = local_res8[0];
  if (local_res8[0] != plVar13) {
    FUN_140067070(local_res8[0] + 7,&local_a8);
    puVar17 = auStack_1c8;
    if (((longlong *)plVar18[6] == (longlong *)0x0) ||
       (iVar7 = (**(code **)(*(longlong *)plVar18[6] + 0x20))(), puVar17 = auStack_1c8, iVar7 != 4))
    goto LAB_140067025;
    lVar8 = plVar18[6];
    FUN_140030de0(&DAT_1404e5328,local_res8,param_2);
    if (local_res8[0] == DAT_1404e5330) {
LAB_140066d90:
      *(byte *)(lVar8 + 0xa6) = *(byte *)(lVar8 + 0xa6) & 0xbf;
    }
    else {
      if (((int)local_res8[0][0xe] == 1) && ((*(byte *)((longlong)local_res8[0] + 0x74) & 1) != 0))
      {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (((*(byte *)((longlong)local_res8[0] + 0x74) & 0x10) == 0) ||
         (*(char *)((longlong)local_res8[0] + 0xe2) == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar2 && !bVar3) goto LAB_140066d90;
      *(byte *)(lVar8 + 0xa6) = *(byte *)(lVar8 + 0xa6) | 0x40;
    }
    puVar17 = auStack_1c8;
    if (*(longlong **)(lVar8 + 0x160) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar8 + 0x160) + 0x50))();
      puVar17 = auStack_1c8;
    }
    goto LAB_140067025;
  }
  local_148 = 0;
  local_178 = 0;
  plStack_170 = (longlong *)0x0;
  uStack_100 = 0;
  local_108 = 0;
  uStack_e0 = 0;
  local_e8 = 0;
  local_168 = (longlong *)0x0;
  lStack_160 = 0;
  local_158 = 0;
  lStack_150 = 0;
  local_140 = 0x42700000;
  local_134 = 0;
  local_12c = 0;
  local_128 = 0xfffffffe;
  local_124 = 0;
  local_120 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_f8 = 0;
  local_f0 = 0xf;
  local_d8 = 0;
  local_d0 = 0xf;
  local_c8 = 0;
  local_c6 = 0;
  FUN_140067070(&plStack_170,&local_a8);
  uVar9 = FUN_140079340(&DAT_1404e5328,param_2);
  FUN_140067250(uVar9,&local_178);
  uVar19 = FUN_140067a00(&DAT_1404e52e0,param_2,0);
  FUN_14006a030(uVar19,1);
  if (local_d0 < 0x10) {
LAB_140066e9d:
    if (0xf < local_f0) {
      uVar15 = local_f0 + 1;
      lVar8 = local_108;
      if (0xfff < uVar15) {
        lVar8 = *(longlong *)(local_108 + -8);
        if (0x1f < (local_108 - lVar8) - 8U) goto LAB_140067016;
        uVar15 = local_f0 + 0x28;
      }
      thunk_FUN_14028af80(lVar8,uVar15);
    }
    if (local_120 != 0) {
      uVar15 = (lStack_110 - local_120 >> 2) * 4;
      lVar8 = local_120;
      if (0xfff < uVar15) {
        if (0x1f < (local_120 - *(longlong *)(local_120 + -8)) - 8U) goto LAB_140067016;
        uVar15 = uVar15 + 0x27;
        lVar8 = *(longlong *)(local_120 + -8);
      }
      thunk_FUN_14028af80(lVar8,uVar15);
    }
    lVar5 = lStack_150;
    lVar12 = local_158;
    lVar8 = local_158;
    if (local_158 != 0) {
      for (; lVar8 != lVar5; lVar8 = lVar8 + 0x48) {
        FUN_140017240(lVar8 + 0x28);
        FUN_140017240(lVar8);
      }
      uVar15 = (local_148 - lVar12 >> 3) * 8;
      if (0xfff < uVar15) {
        plVar18 = (longlong *)((lVar12 - *(longlong *)(lVar12 + -8)) + -8);
        if ((longlong *)0x1f < plVar18) goto LAB_140067016;
        uVar15 = uVar15 + 0x27;
        lVar12 = *(longlong *)(lVar12 + -8);
      }
      thunk_FUN_14028af80(lVar12,uVar15);
    }
    plVar4 = local_168;
    plVar13 = plStack_170;
    puVar17 = auStack_1c8;
    plVar18 = plStack_170;
    if (plStack_170 == (longlong *)0x0) goto LAB_140067025;
    for (; plVar18 != plVar4; plVar18 = plVar18 + 9) {
      FUN_140017240(plVar18 + 5);
      FUN_140017240(plVar18);
    }
    if (0xfff < (ulonglong)((lStack_160 - (longlong)plVar13 >> 3) * 8)) {
      plVar18 = (longlong *)((longlong)plVar13 + (-8 - plVar13[-1]));
      plVar13 = (longlong *)plVar13[-1];
      puVar16 = auStack_1c8;
      if ((longlong *)0x1f < plVar18) goto LAB_140067016;
    }
  }
  else {
    uVar15 = local_d0 + 1;
    lVar8 = local_e8;
    if (uVar15 < 0x1000) {
LAB_140066e98:
      thunk_FUN_14028af80(lVar8,uVar15);
      goto LAB_140066e9d;
    }
    lVar8 = *(longlong *)(local_e8 + -8);
    if ((local_e8 - lVar8) - 8U < 0x20) {
      uVar15 = local_d0 + 0x28;
      goto LAB_140066e98;
    }
LAB_140067016:
    plVar13 = plVar18;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar16 = auStack_1c0;
  }
  *(undefined8 *)(puVar16 + -8) = 0x140067025;
  thunk_FUN_14028af80(plVar13);
  puVar17 = puVar16;
LAB_140067025:
  *(undefined8 *)(puVar17 + -8) = 0x14006702e;
  FUN_140031b80(&local_58);
  *(undefined8 *)(puVar17 + -8) = 0x140067037;
  FUN_140031170(&uStack_90);
  *(undefined8 *)(puVar17 + -8) = 0x140067040;
  FUN_140031170(&local_a8);
  *(undefined8 *)(puVar17 + -8) = 0x14006704a;
  FUN_140085440(puVar17 + 0x20);
  *(undefined8 *)(puVar17 + -8) = 0x140067052;
  FUN_140085440(param_3);
  return;
}

