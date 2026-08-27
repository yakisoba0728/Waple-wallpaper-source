// Function: FUN_14011d7d0
// Addr: 14011d7d0
// Size: 3405 bytes


/* WARNING: Removing unreachable block (ram,0x00014011e49b) */

undefined2 * FUN_14011d7d0(undefined2 *param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  size_t sVar12;
  undefined2 *puVar13;
  char *pcVar14;
  char *******pppppppcVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  char *pcVar18;
  char *pcVar19;
  char ******local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_110;
  longlong local_108;
  uint local_100;
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  longlong local_e0 [4];
  longlong *local_c0;
  uint local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  longlong local_40;
  ulonglong local_38;
  
  pcVar18 = (char *)0x0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffeff;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar6 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  FUN_14003f7b0(&local_50,puVar6);
  if ((local_40 == 0) || (cVar4 = FUN_140017840(&local_50,param_1 + 4,0), cVar4 == '\0')) {
LAB_14011e4af:
    if (local_38 < 0x10) {
      return param_1;
    }
    lVar3 = CONCAT71(uStack_4f,local_50);
    uVar16 = local_38 + 1;
    lVar10 = lVar3;
    if (uVar16 < 0x1000) {
LAB_14011e4e1:
      thunk_FUN_14028af80(lVar10,uVar16);
      return param_1;
    }
    lVar10 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar10) - 8U < 0x20) {
      uVar16 = local_38 + 0x28;
      goto LAB_14011e4e1;
    }
    goto LAB_14011e515;
  }
  puVar6 = (undefined8 *)FUN_140086de0(param_1 + 4,&DAT_140473b68,&DAT_140473b6c);
  if ((char)*(uint *)(puVar6 + 1) == '\x04') {
    pcVar19 = (char *)*puVar6;
    pcVar14 = pcVar18;
    if ((pcVar19 != (char *)0x0) && (pcVar14 = pcVar19, (*(uint *)(puVar6 + 1) >> 8 & 1) != 0)) {
      pcVar14 = pcVar19 + 4;
    }
    if (*pcVar14 == '\0') goto LAB_14011d8dd;
    uStack_120 = 10;
    local_128 = (char ******)0x140489c98;
    FUN_1400878f0(param_1 + 4,&local_128);
  }
  else {
LAB_14011d8dd:
    lVar10 = FUN_140086de0(param_1 + 4,"preset","");
    if ((*(char *)(lVar10 + 8) != '\a') ||
       (lVar10 = FUN_140086de0(param_1 + 4,"dependency",""), *(char *)(lVar10 + 8) != '\x04'))
    goto LAB_14011e4af;
    puVar8 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      puVar8 = (undefined8 *)*param_2;
    }
    local_118 = 0;
    local_128 = (char ******)0x0;
    uStack_120 = 0;
    local_110 = 0;
    FUN_140016170(&local_128,puVar8,param_2[2]);
    uVar9 = FUN_14003fe80(&local_128);
    uVar9 = FUN_14003ff90(uVar9);
    uVar7 = FUN_140086de0(param_1 + 4,"dependency","");
    uVar7 = FUN_140085cc0(uVar7,&local_c0);
    uVar9 = FUN_140018c60(uVar9,uVar7);
    FUN_140005d20(uVar9,"project.json");
    FUN_140017240(&local_c0);
    pppppppcVar15 = &local_128;
    if (7 < local_110) {
      pppppppcVar15 = (char *******)local_128;
    }
    FUN_14003f7b0(&local_108,pppppppcVar15);
    cVar4 = FUN_140017840(&local_108,param_1 + 0x18,0);
    if ((cVar4 == '\0') ||
       (lVar10 = FUN_140086de0(param_1 + 0x18,&DAT_140473b68,&DAT_140473b6c),
       *(char *)(lVar10 + 8) != '\x04')) {
      local_b8 = CONCAT31(local_b8._1_3_,4);
      local_b8 = local_b8 | 0x100;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      local_c0 = (longlong *)FUN_140084b30(&DAT_140474480,0);
      uVar9 = FUN_140086de0(param_1 + 4,"dependency","");
      FUN_140085610(uVar9,&local_c0);
      FUN_140085440(&local_c0);
      local_b8 = CONCAT31(local_b8._1_3_,7);
      local_b8 = local_b8 & 0xfffffeff;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      plVar11 = (longlong *)FUN_14028af20(0x10);
      *plVar11 = 0;
      plVar11[1] = 0;
      lVar10 = FUN_14028af20(0x58);
      *(longlong *)lVar10 = lVar10;
      *(longlong *)(lVar10 + 8) = lVar10;
      *(longlong *)(lVar10 + 0x10) = lVar10;
      *(undefined2 *)(lVar10 + 0x18) = 0x101;
      *plVar11 = lVar10;
      local_c0 = plVar11;
      uVar9 = FUN_140086de0(param_1 + 4,"general","");
      FUN_140085610(uVar9,&local_c0);
      FUN_140085440(&local_c0);
    }
    else {
      FUN_140016600(&local_c0,&local_128);
      uVar9 = FUN_14003fe80(&local_c0);
      plVar11 = (longlong *)FUN_140086de0(param_1 + 0x18,&DAT_140473b68,&DAT_140473b6c);
      lVar10 = *plVar11;
      if ((lVar10 != 0) && ((*(uint *)(plVar11 + 1) >> 8 & 1) != 0)) {
        lVar10 = lVar10 + 4;
      }
      uVar9 = FUN_140005d20(uVar9,lVar10);
      uVar9 = FUN_140018ce0(uVar9,local_e0);
      FUN_140084fe0(local_98,uVar9);
      uVar9 = FUN_140086de0(param_1 + 4,"dependency","");
      FUN_140085610(uVar9,local_98);
      FUN_140085440(local_98);
      FUN_140017240(local_e0);
      FUN_140016770(&local_c0);
      uVar9 = FUN_140086de0(param_1 + 0x18,"general","");
      uVar7 = FUN_140086de0(param_1 + 4,"general","");
      FUN_140085520(uVar7,uVar9);
    }
    pcVar18 = (char *)0x1;
    FUN_140016600(local_e0,param_2);
    FUN_140005970(local_e0,0x2f);
    uVar9 = FUN_140005790(&local_c0,local_e0);
    FUN_140084fe0(local_98,uVar9);
    FUN_140085610(puVar6,local_98);
    FUN_140085440(local_98);
    FUN_140017240(&local_c0);
    FUN_140016770(local_e0);
    FUN_140017240(&local_108);
    FUN_140016770(&local_128);
  }
  puVar8 = (undefined8 *)FUN_140005790(&local_108,param_2);
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  FUN_140084f50(local_98,puVar8);
  uVar9 = FUN_140086de0(param_1 + 4,"project","");
  FUN_140085610(uVar9,local_98);
  FUN_140085440(local_98);
  if (0xf < uStack_f0) {
    uVar16 = uStack_f0 + 1;
    lVar10 = local_108;
    if (0xfff < uVar16) {
      lVar10 = *(longlong *)(local_108 + -8);
      if (0x1f < (local_108 - lVar10) - 8U) goto LAB_14011e515;
      uVar16 = uStack_f0 + 0x28;
    }
    thunk_FUN_14028af80(lVar10,uVar16);
  }
  puVar8 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar8 = (undefined8 *)*param_2;
  }
  local_128 = (char ******)0x0;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0;
  FUN_140016170(&local_128,puVar8,param_2[2]);
  uVar9 = FUN_14003ff90(&local_128);
  FUN_140016600(&local_c0,uVar9);
  if (7 < local_110) {
    uVar16 = local_110 * 2 + 2;
    pppppppcVar15 = (char *******)local_128;
    if (0xfff < uVar16) {
      pppppppcVar15 = (char *******)local_128[-1];
      if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppppcVar15)))
      goto LAB_14011e515;
      uVar16 = local_110 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pppppppcVar15,uVar16);
  }
  pcVar19 = (char *)0x0;
  uStack_58 = 7;
  local_60 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if ((char)pcVar18 == '\0') {
    FUN_140016600(&local_108,&local_c0);
    uVar9 = FUN_140085cc0(puVar6,&local_128);
    puVar8 = (undefined8 *)FUN_140018c60(&local_108,uVar9);
    if (&local_70 != puVar8) {
      puVar17 = puVar8;
      if (7 < (ulonglong)puVar8[3]) {
        puVar17 = (undefined8 *)*puVar8;
      }
      FUN_140016ae0(&local_70,puVar17,puVar8[2]);
    }
    if (0xf < local_110) {
      uVar16 = local_110 + 1;
      pppppppcVar15 = (char *******)local_128;
      if (0xfff < uVar16) {
        pppppppcVar15 = (char *******)local_128[-1];
        if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppppcVar15)))
        goto LAB_14011e515;
        uVar16 = local_110 + 0x28;
      }
      thunk_FUN_14028af80(pppppppcVar15,uVar16);
    }
    local_118 = 0;
    local_110 = 0xf;
    local_128 = (char ******)((ulonglong)local_128 & 0xffffffffffffff00);
    FUN_140016770(&local_108);
  }
  else {
    uVar9 = FUN_140085cc0(puVar6,&local_108);
    puVar8 = (undefined8 *)FUN_140005880(local_e0,uVar9);
    if (&local_70 != puVar8) {
      local_70 = *puVar8;
      uStack_68 = puVar8[1];
      local_60 = puVar8[2];
      uStack_58 = puVar8[3];
      puVar8[2] = 0;
      puVar8[3] = 7;
      *(undefined2 *)puVar8 = 0;
    }
    FUN_140016770(local_e0);
    if (0xf < uStack_f0) {
      uVar16 = uStack_f0 + 1;
      lVar10 = local_108;
      if (0xfff < uVar16) {
        lVar10 = *(longlong *)(local_108 + -8);
        if (0x1f < (local_108 - lVar10) - 8U) goto LAB_14011e515;
        uVar16 = uStack_f0 + 0x28;
      }
      thunk_FUN_14028af80(lVar10,uVar16);
    }
  }
  uVar9 = FUN_140018ce0(&local_70,&local_108);
  FUN_140084fe0(local_98,uVar9);
  uVar9 = FUN_140086de0(param_1 + 4,&DAT_140473b68,&DAT_140473b6c);
  FUN_140085610(uVar9,local_98);
  FUN_140085440(local_98);
  if (0xf < uStack_f0) {
    uVar16 = uStack_f0 + 1;
    lVar10 = local_108;
    if (0xfff < uVar16) {
      lVar10 = *(longlong *)(local_108 + -8);
      if (0x1f < (local_108 - lVar10) - 8U) goto LAB_14011e515;
      uVar16 = uStack_f0 + 0x28;
    }
    thunk_FUN_14028af80(lVar10,uVar16);
  }
  lVar10 = FUN_140086de0(param_1 + 4,"preview","");
  if (*(char *)(lVar10 + 8) == '\x04') {
    FUN_140016600(&local_108,&local_c0);
    uVar9 = FUN_140086de0(param_1 + 4,"preview","");
    uVar9 = FUN_140085cc0(uVar9,local_e0);
    uVar9 = FUN_140018c60(&local_108,uVar9);
    FUN_140016600(&local_128,uVar9);
    FUN_140017240(local_e0);
    FUN_140016770(&local_108);
    cVar4 = FUN_140018f30(&local_128);
    if (cVar4 != '\0') {
      pppppppcVar15 = &local_128;
      if (7 < local_110) {
        pppppppcVar15 = (char *******)local_128;
      }
      FUN_14000dd70(&local_108,pppppppcVar15);
      uVar9 = FUN_140005790(local_e0,&local_108);
      FUN_140084fe0(local_98,uVar9);
      uVar9 = FUN_140086de0(param_1 + 4,"preview","");
      FUN_140085610(uVar9,local_98);
      FUN_140085440(local_98);
      FUN_140017240(local_e0);
      FUN_140016770(&local_108);
    }
    FUN_140016770(&local_128);
  }
  else {
    local_100 = CONCAT31(local_100._1_3_,4);
    local_100 = local_100 | 0x100;
    local_e8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = FUN_140084b30(&DAT_140474480,0);
    uVar9 = FUN_140086de0(param_1 + 4,"preview","");
    FUN_140085610(uVar9,&local_108);
    FUN_140085440(&local_108);
  }
  lVar10 = FUN_140086de0(param_1 + 4,"title","");
  if (*(char *)(lVar10 + 8) != '\x04') {
    uVar9 = FUN_140085cc0(puVar6,local_e0);
    FUN_140018b00(&local_108,uVar9);
    FUN_140017240(local_e0);
    uVar9 = FUN_14003fc80(&local_108,&local_128);
    uVar9 = FUN_140018ce0(uVar9,local_e0);
    FUN_140084fe0(local_98,uVar9);
    uVar9 = FUN_140086de0(param_1 + 4,"title","");
    FUN_140085610(uVar9,local_98);
    FUN_140085440(local_98);
    FUN_140017240(local_e0);
    FUN_140016770(&local_128);
    FUN_140016770(&local_108);
  }
  FUN_14011d3b0(param_1 + 4);
  if ((char)pcVar18 == '\0') {
    pcVar18 = (char *)FUN_140018ce0(&local_70,&local_108);
    if (0xf < *(ulonglong *)(pcVar18 + 0x18)) {
      pcVar18 = *(char **)pcVar18;
    }
    local_118 = 0;
    local_110 = 0;
    local_128 = (char ******)0x0;
    uStack_120 = 0;
    sVar12 = strlen(pcVar18);
    FUN_140017480(&local_128,pcVar18,sVar12);
    uVar5 = FUN_14011e520(&local_128);
    *(undefined4 *)(param_1 + 2) = uVar5;
    if (0xf < local_110) {
      uVar16 = local_110 + 1;
      pppppppcVar15 = (char *******)local_128;
      if (0xfff < uVar16) {
        pppppppcVar15 = (char *******)local_128[-1];
        if (0x1f < (ulonglong)((longlong)local_128 + (-8 - (longlong)pppppppcVar15)))
        goto LAB_14011e515;
        uVar16 = local_110 + 0x28;
      }
      thunk_FUN_14028af80(pppppppcVar15,uVar16);
    }
    local_118 = 0;
    local_110 = 0xf;
    local_128 = (char ******)((ulonglong)local_128 & 0xffffffffffffff00);
    FUN_140017240(&local_108);
  }
  else {
    plVar11 = (longlong *)FUN_140086de0(param_1 + 4,"dependency","");
    pcVar18 = (char *)*plVar11;
    if ((pcVar18 != (char *)0x0) && (pcVar19 = pcVar18, (*(uint *)(plVar11 + 1) >> 8 & 1) != 0)) {
      pcVar19 = pcVar18 + 4;
    }
    local_e0[2] = 0;
    local_e0[3] = 0;
    local_e0[0] = 0;
    local_e0[1] = 0;
    sVar12 = strlen(pcVar19);
    FUN_140017480(local_e0,pcVar19,sVar12);
    uVar5 = FUN_14011e520(local_e0);
    *(undefined4 *)(param_1 + 2) = uVar5;
    if (0xf < (ulonglong)local_e0[3]) {
      uVar16 = local_e0[3] + 1;
      lVar10 = local_e0[0];
      if (0xfff < uVar16) {
        lVar10 = *(longlong *)(local_e0[0] + -8);
        if (0x1f < (local_e0[0] - lVar10) - 8U) goto LAB_14011e515;
        uVar16 = local_e0[3] + 0x28;
      }
      thunk_FUN_14028af80(lVar10,uVar16);
    }
  }
  iVar1 = *(int *)(param_1 + 2);
  if (iVar1 == 0) {
LAB_14011e2e9:
    pcVar18 = "Unknown";
  }
  else if (iVar1 == 1) {
    pcVar18 = "Scene";
  }
  else if (iVar1 == 2) {
    pcVar18 = "Web";
  }
  else if (iVar1 == 3) {
    pcVar18 = "Application";
  }
  else {
    if (iVar1 != 4) goto LAB_14011e2e9;
    pcVar18 = "Video";
  }
  FUN_140084f50(local_98,pcVar18);
  uVar9 = FUN_140086de0(param_1 + 4,&DAT_140474874,&DAT_140474878);
  FUN_140085610(uVar9,local_98);
  FUN_140085440(local_98);
  *(bool *)((longlong)param_1 + 1) = *(int *)(param_1 + 2) != 0;
  if (((*(int *)(param_1 + 2) == 1) && (cVar4 = FUN_14011e880(param_1), cVar4 == '\0')) &&
     (cVar4 = FUN_140018f30(&local_70), cVar4 == '\0')) {
    FUN_140016600(local_e0,&local_70);
    FUN_140060990(&local_108,&DAT_140489cd8);
    uVar9 = FUN_140060d90(local_e0,&local_108);
    FUN_140016600(&local_128,uVar9);
    FUN_140016770(&local_108);
    FUN_140016770(local_e0);
    cVar4 = FUN_140018f30(&local_128);
    if (cVar4 != '\0') {
      uVar9 = FUN_140018ce0(&local_128,&local_108);
      FUN_140016fc0(local_e0,uVar9);
      FUN_1400187b0(local_e0);
      FUN_140084fe0(local_98,local_e0);
      uVar9 = FUN_140086de0(param_1 + 4,&DAT_140473b68,&DAT_140473b6c);
      FUN_140085610(uVar9,local_98);
      FUN_140085440(local_98);
      FUN_140017240(local_e0);
      FUN_140017240(&local_108);
    }
    FUN_140016770(&local_128);
  }
  FUN_140016770(&local_70);
  FUN_140016770(&local_c0);
  if (0xf < local_38) {
    lVar3 = CONCAT71(uStack_4f,local_50);
    uVar16 = local_38 + 1;
    lVar10 = lVar3;
    if (0xfff < uVar16) {
      lVar10 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar10) - 8U) {
LAB_14011e515:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        puVar13 = (undefined2 *)(*pcVar2)();
        return puVar13;
      }
      uVar16 = local_38 + 0x28;
    }
    thunk_FUN_14028af80(lVar10,uVar16);
  }
  return param_1;
}

