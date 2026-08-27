// Function: FUN_140040470
// Addr: 140040470
// Size: 3488 bytes


/* WARNING: Removing unreachable block (ram,0x000140040b66) */

void FUN_140040470(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  size_t sVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  char ****_Str;
  undefined8 ****ppppuVar14;
  undefined8 *puVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [24];
  longlong *local_1f8 [2];
  undefined8 local_1e8;
  undefined2 local_1d0;
  undefined2 uStack_1ce;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 **local_1c0;
  undefined8 **ppuStack_1b8;
  undefined8 ***local_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ***local_1a0;
  ulonglong local_198;
  undefined8 ***local_190;
  undefined8 uStack_188;
  longlong local_180;
  ulonglong local_178;
  undefined1 local_170 [32];
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined8 local_140;
  ulonglong local_138;
  undefined1 local_130 [32];
  longlong local_110;
  longlong local_108;
  undefined8 ***local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  char ***local_e0 [3];
  ulonglong local_c8;
  undefined1 local_c0 [16];
  longlong local_b0 [4];
  undefined1 local_90 [40];
  undefined1 local_68 [16];
  longlong local_58;
  
  puVar18 = auStack_218;
  bVar2 = false;
  bVar4 = false;
  FUN_140014f70(param_1 + 8);
  FUN_14000de00(param_1 + 0x28,param_3);
  *(undefined1 *)(param_1 + 0xe0) = param_4;
  FUN_14003f7b0(local_68,param_2);
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = (undefined8 ****)0x0;
  local_e8 = 0xf;
  if (local_58 == 0) {
    local_1e8 = 0;
    FUN_140086ca0(local_1f8,7,0);
    plVar8 = (longlong *)FUN_14028af20(0x10);
    *plVar8 = 0;
    plVar8[1] = 0;
    lVar9 = FUN_14028af20(0x58);
    *(longlong *)lVar9 = lVar9;
    *(longlong *)(lVar9 + 8) = lVar9;
    *(longlong *)(lVar9 + 0x10) = lVar9;
    *(undefined2 *)(lVar9 + 0x18) = 0x101;
    *plVar8 = lVar9;
    local_1f8[0] = plVar8;
    FUN_140085610(param_1 + 0x48,local_1f8);
    FUN_140085440(local_1f8);
  }
  else {
    lVar9 = param_1 + 0x48;
    cVar6 = FUN_14003f220(local_68,lVar9,&local_100);
    if (cVar6 == '\0') {
      local_180 = 0;
      uStack_188 = 0;
      local_190 = (undefined8 ****)0x0;
      local_178 = 0xf;
      uVar11 = FUN_140005ee0(local_1f8);
      uVar11 = FUN_140005d20(uVar11,"config_backups");
      FUN_140016600(local_170,uVar11);
      FUN_140016770(local_1f8);
      cVar6 = FUN_140018e60(local_170);
      if (cVar6 != '\0') {
        local_1a0 = (undefined8 ****)0x0;
        local_1b0 = (undefined8 ****)0x0;
        pppuStack_1a8 = (undefined8 ****)0x0;
        FUN_140016600(local_130,local_170);
        FUN_14003b1c0(local_c0,local_130,local_b0);
        FUN_140016770(local_130);
        plVar8 = (longlong *)FUN_140041220(local_b0,local_c0);
        local_108 = plVar8[1];
        lVar13 = *plVar8;
        *plVar8 = 0;
        plVar8[1] = 0;
        local_110 = lVar13;
        uVar11 = FUN_140041220(&local_1d0,local_c0);
        FUN_1400507f0(local_b0,uVar11);
        do {
          if (lVar13 == local_b0[0]) {
            FUN_14003b3e0(local_b0);
            FUN_14003b3e0(&local_110);
            FUN_14003b3e0(local_c0);
            if (local_1b0 != pppuStack_1a8) {
              FUN_14004d850(local_1b0,pppuStack_1a8,
                            (longlong)pppuStack_1a8 - (longlong)local_1b0 >> 5,0);
              uVar17 = (longlong)pppuStack_1a8 - (longlong)local_1b0 & 0xffffffffffffffe0;
              puVar15 = (undefined8 *)((longlong)local_1b0 + (uVar17 - 0x20));
              if (7 < *(ulonglong *)((uVar17 - 8) + (longlong)local_1b0)) {
                puVar15 = (undefined8 *)*puVar15;
              }
              uVar11 = FUN_14003f7b0(local_1f8,puVar15);
              FUN_14000de40(&local_190,uVar11);
              FUN_140017240(local_1f8);
            }
            FUN_140033540(&local_1b0);
            goto LAB_140040805;
          }
          FUN_140016600(local_130,lVar13 + 0x20);
          uVar11 = FUN_14003fc80(local_130,local_1f8);
          FUN_140018ce0(uVar11,local_e0);
          FUN_140016770(local_1f8);
          _Str = local_e0;
          if (0xf < local_c8) {
            _Str = (char ****)local_e0[0];
          }
          sVar10 = strlen((char *)_Str);
          if ((int)sVar10 == 0x11) {
            FUN_140016600(local_1f8,local_130);
            FUN_140016600(&local_1d0,local_1f8);
            FUN_140005970(&local_1d0,0x2f);
            if (pppuStack_1a8 == local_1a0) {
              FUN_14004d590(&local_1b0,pppuStack_1a8,&local_1d0);
              if ((undefined8 ***)0x7 < ppuStack_1b8) {
                FUN_140016a90(&local_1d0,CONCAT44(uStack_1cc,CONCAT22(uStack_1ce,local_1d0)));
              }
            }
            else {
              *pppuStack_1a8 = (undefined8 ***)0x0;
              pppuStack_1a8[1] = (undefined8 ***)0x0;
              pppuStack_1a8[2] = (undefined8 ***)0x0;
              pppuStack_1a8[3] = (undefined8 ***)0x0;
              *(uint *)pppuStack_1a8 = CONCAT22(uStack_1ce,local_1d0);
              *(undefined4 *)((longlong)pppuStack_1a8 + 4) = uStack_1cc;
              *(undefined4 *)(pppuStack_1a8 + 1) = uStack_1c8;
              *(undefined4 *)((longlong)pppuStack_1a8 + 0xc) = uStack_1c4;
              pppuStack_1a8[2] = local_1c0;
              pppuStack_1a8[3] = ppuStack_1b8;
              pppuStack_1a8 = pppuStack_1a8 + 4;
            }
            local_1c0 = (undefined8 ***)0x0;
            local_1d0 = 0;
            ppuStack_1b8 = (undefined8 ***)0x7;
            FUN_140016770(local_1f8);
          }
          FUN_140017240(local_e0);
          FUN_140016770(local_130);
          iVar7 = FUN_14003b5f0(&local_110);
          lVar13 = local_110;
        } while (iVar7 == 0);
        goto LAB_140041202;
      }
LAB_140040805:
      if ((local_180 == 0) || (cVar6 = FUN_140017840(&local_190,lVar9,&local_100), cVar6 == '\0')) {
        local_1e8 = 0;
        FUN_140086ca0(local_1f8,7,0);
        plVar8 = (longlong *)FUN_14028af20(0x10);
        *plVar8 = 0;
        plVar8[1] = 0;
        lVar13 = FUN_14028af20(0x58);
        *(longlong *)lVar13 = lVar13;
        *(longlong *)(lVar13 + 8) = lVar13;
        *(longlong *)(lVar13 + 0x10) = lVar13;
        *(undefined2 *)(lVar13 + 0x18) = 0x101;
        *plVar8 = lVar13;
        local_1f8[0] = plVar8;
        FUN_140085610(lVar9,local_1f8);
        FUN_140085440(local_1f8);
        ppppuVar14 = &local_100;
        if (0xf < local_e8) {
          ppppuVar14 = (undefined8 ****)local_100;
        }
        FUN_140098760("Config.json error: %s\n",ppppuVar14);
      }
      FUN_140016770(local_170);
      FUN_140017240(&local_190);
    }
  }
  lVar13 = param_1 + 0x48;
  lVar9 = FUN_140086de0(lVar13,"?installdirectory","");
  uVar11 = FUN_1402d6aa0(param_2);
  local_180 = 0;
  local_178 = 0;
  local_190 = (undefined8 ****)0x0;
  uStack_188 = 0;
  FUN_140016170(&local_190,param_2,uVar11);
  uVar11 = FUN_14003fe80(&local_190);
  uVar11 = FUN_140018ce0(uVar11,local_1f8);
  FUN_140016fc0(&local_150,uVar11);
  FUN_1400187b0(&local_150);
  FUN_140017240(local_1f8);
  FUN_140016770(&local_190);
  if (*(char *)(lVar9 + 8) == '\x04') {
    FUN_140085cc0(lVar9,&local_190);
    if (local_180 != 0) {
      puVar19 = &local_150;
      if (0xf < local_138) {
        puVar19 = (undefined1 *)CONCAT71(uStack_14f,local_150);
      }
      ppppuVar14 = &local_190;
      if (0xf < local_178) {
        ppppuVar14 = (undefined8 ****)local_190;
      }
      cVar6 = FUN_140013f70(ppppuVar14,local_180,puVar19,local_140);
      if (cVar6 == '\0') {
        FUN_140018b00(&local_1d0,&local_190);
        FUN_140018b00(&local_1b0,&local_150);
        FUN_14003fbc0(&local_1d0,local_1f8);
        uVar11 = FUN_140018ce0(local_1f8,local_170);
        cVar6 = FUN_14000d010(uVar11,"wallpaper_engine");
        FUN_140017240(local_170);
        FUN_140016770(local_1f8);
        FUN_14003ff90(&local_1d0);
        if (cVar6 == '\0') {
LAB_140040a22:
          bVar5 = false;
        }
        else {
          FUN_14003fbc0(&local_1d0,local_1f8);
          bVar2 = true;
          bVar4 = true;
          uVar11 = FUN_140018ce0(local_1f8,local_170);
          cVar6 = FUN_14000d010(uVar11,"common");
          if (cVar6 == '\0') goto LAB_140040a22;
          bVar5 = true;
        }
        if (bVar2) {
          FUN_140017240(local_170);
        }
        if (bVar4) {
          FUN_140016770(local_1f8);
        }
        bVar4 = false;
        FUN_14003ff90(&local_1d0);
        bVar2 = false;
        if (bVar5) {
          FUN_14003fbc0(&local_1d0,local_1f8);
          bVar5 = true;
          bVar4 = true;
          uVar11 = FUN_140018ce0(local_1f8,local_170);
          cVar6 = FUN_14000d010(uVar11,"steamapps");
          bVar2 = true;
          if (cVar6 == '\0') goto LAB_140040a8e;
          bVar2 = true;
        }
        else {
LAB_140040a8e:
          bVar5 = bVar2;
          bVar2 = false;
        }
        if (bVar5) {
          FUN_140017240(local_170);
        }
        if (bVar4) {
          FUN_140016770(local_1f8);
        }
        bVar4 = false;
        bVar5 = false;
        if (bVar2) {
          FUN_14003fbc0(&local_1b0,local_1f8);
          bVar2 = true;
          bVar4 = true;
          uVar11 = FUN_140018ce0(local_1f8,local_170);
          cVar6 = FUN_14000d010(uVar11,"wallpaper_engine");
          bVar5 = true;
          if (cVar6 == '\0') goto LAB_140040af0;
          bVar5 = true;
        }
        else {
LAB_140040af0:
          bVar2 = bVar5;
          bVar5 = false;
        }
        if (bVar2) {
          FUN_140017240(local_170);
        }
        if (bVar4) {
          FUN_140016770(local_1f8);
        }
        bVar4 = false;
        FUN_14003ff90(&local_1b0);
        if (bVar5) {
          FUN_14003fbc0(&local_1b0,local_1f8);
          bVar4 = true;
          uVar11 = FUN_140018ce0(local_1f8,local_170);
          cVar6 = FUN_14000d010(uVar11,"common");
          if (cVar6 == '\0') goto LAB_140040b5f;
          bVar2 = true;
        }
        else {
LAB_140040b5f:
          bVar2 = false;
        }
        if (bVar4) {
          FUN_140016770(local_1f8);
        }
        FUN_14003ff90(&local_1b0);
        bVar4 = false;
        bVar5 = false;
        if (bVar2) {
          FUN_14003fbc0(&local_1b0,local_1f8);
          bVar3 = true;
          bVar2 = true;
          uVar11 = FUN_140018ce0(local_1f8,local_170);
          cVar6 = FUN_14000d010(uVar11,"steamapps");
          bVar4 = true;
          bVar5 = true;
          if (cVar6 == '\0') goto LAB_140040bce;
          bVar4 = true;
        }
        else {
LAB_140040bce:
          bVar3 = bVar5;
          bVar2 = bVar4;
          bVar4 = false;
        }
        if (bVar2) {
          FUN_140017240(local_170);
        }
        if (bVar3) {
          FUN_140016770(local_1f8);
        }
        if (((bVar4) && (cVar6 = FUN_140018e60(&local_1d0), cVar6 != '\0')) &&
           (cVar6 = FUN_140018e60(&local_1b0), cVar6 != '\0')) {
          FUN_140004d00(local_e0,lVar13,0);
          ppppuVar14 = &local_1b0;
          if (7 < local_198) {
            ppppuVar14 = (undefined8 ****)local_1b0;
          }
          puVar16 = &local_1d0;
          if ((undefined8 ***)0x7 < ppuStack_1b8) {
            puVar16 = (undefined2 *)CONCAT44(uStack_1cc,CONCAT22(uStack_1ce,local_1d0));
          }
          FUN_140098760("Installation path changed. Updating config paths from %S to %S.\n",puVar16,
                        ppppuVar14);
          uVar11 = FUN_140018ce0(&local_1b0,local_b0);
          FUN_140016fc0(local_130,uVar11);
          FUN_1400187b0(local_130);
          uVar11 = FUN_140018ce0(&local_1d0,local_1f8);
          FUN_140016fc0(local_170,uVar11);
          FUN_1400187b0(local_170);
          FUN_14003fb10(local_e0,local_170,local_130);
          FUN_140017240(local_170);
          FUN_140017240(local_1f8);
          FUN_140017240(local_130);
          FUN_140017240(local_b0);
          FUN_140084dd0(local_90,0);
          cVar6 = FUN_140017840(local_e0,local_90,0);
          if (cVar6 != '\0') {
            FUN_140085520(lVar13,local_90);
          }
          FUN_140085440(local_90);
          FUN_140017240(local_e0);
        }
        FUN_140016770(&local_1b0);
        FUN_140016770(&local_1d0);
      }
    }
    FUN_140017240(&local_190);
  }
  if (param_3[2] == 0) {
LAB_140040efe:
    local_1e8 = 0;
    FUN_140086ca0(local_1f8,7,0);
    plVar8 = (longlong *)FUN_14028af20(0x10);
    *plVar8 = 0;
    plVar8[1] = 0;
    lVar9 = FUN_14028af20(0x58);
    *(longlong *)lVar9 = lVar9;
    *(longlong *)(lVar9 + 8) = lVar9;
    *(longlong *)(lVar9 + 0x10) = lVar9;
    *(undefined2 *)(lVar9 + 0x18) = 0x101;
    *plVar8 = lVar9;
    local_1f8[0] = plVar8;
    FUN_140085610(lVar13,local_1f8);
    FUN_140085440(local_1f8);
    local_1e8 = 0;
    FUN_140086ca0(local_1f8,1,0);
    local_1f8[0] = (longlong *)&DAT_00000005;
    uVar11 = FUN_140086de0(lVar13,"version","");
    FUN_140085610(uVar11,local_1f8);
    FUN_140085440(local_1f8);
  }
  else {
    puVar15 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar15 = (undefined8 *)*param_3;
    }
    lVar9 = FUN_140087490(lVar13,puVar15,param_3[2] + (longlong)puVar15);
    if (lVar9 == 0) goto LAB_140040efe;
    puVar15 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar15 = (undefined8 *)*param_3;
    }
    uVar11 = FUN_140086de0(lVar13,puVar15,param_3[2] + (longlong)puVar15);
    FUN_140085520(lVar13,uVar11);
    lVar9 = FUN_140086de0(lVar13,"version","");
    if ((2 < *(byte *)(lVar9 + 8) - 1) || (iVar7 = FUN_140085ee0(lVar9), iVar7 < 5)) {
      cVar6 = FUN_1400886e0(lVar9);
      if (cVar6 != '\0') {
        FUN_140085ee0(lVar9);
      }
      local_1e8 = 0;
      FUN_140086ca0(local_1f8,1,0);
      local_1f8[0] = (longlong *)&DAT_00000005;
      FUN_140085610(lVar9,local_1f8);
      FUN_140085440(local_1f8);
      lVar9 = FUN_140087490(lVar13,"general","");
      if (((lVar9 != 0) &&
          (lVar9 = FUN_140086de0(lVar13,"general",""), *(char *)(lVar9 + 8) == '\a')) &&
         ((lVar12 = FUN_140087490(lVar9,&DAT_1404737fc,&DAT_140473800), lVar12 != 0 &&
          ((lVar9 = FUN_140086de0(lVar9,&DAT_1404737fc,&DAT_140473800), *(char *)(lVar9 + 8) == '\a'
           && (lVar12 = FUN_140087490(lVar9,"videoframework",""), lVar12 == 0)))))) {
        FUN_140084f50(local_90,&DAT_140476d00);
        uVar11 = FUN_140086de0(lVar9,"videoframework","");
        FUN_140085610(uVar11,local_90);
        FUN_140085440(local_90);
      }
      FUN_140041250(param_1);
    }
  }
  lVar9 = FUN_140086de0(lVar13,"general","");
  if (*(char *)(lVar9 + 8) != '\a') {
    local_1e8 = 0;
    FUN_140086ca0(local_1f8,7,0);
    plVar8 = (longlong *)FUN_14028af20(0x10);
    *plVar8 = 0;
    plVar8[1] = 0;
    lVar9 = FUN_14028af20(0x58);
    *(longlong *)lVar9 = lVar9;
    *(longlong *)(lVar9 + 8) = lVar9;
    *(longlong *)(lVar9 + 0x10) = lVar9;
    *(undefined2 *)(lVar9 + 0x18) = 0x101;
    *plVar8 = lVar9;
    local_1f8[0] = plVar8;
    uVar11 = FUN_140086de0(lVar13,"general","");
    FUN_140085610(uVar11,local_1f8);
    FUN_140085440(local_1f8);
  }
  uVar11 = FUN_140086de0(lVar13,"general","");
  lVar9 = FUN_140086de0(uVar11,&DAT_1404737fc,&DAT_140473800);
  if (*(char *)(lVar9 + 8) != '\a') {
    local_1e8 = 0;
    FUN_140086ca0(local_1f8,7,0);
    plVar8 = (longlong *)FUN_14028af20(0x10);
    *plVar8 = 0;
    plVar8[1] = 0;
    lVar12 = FUN_14028af20(0x58);
    *(longlong *)lVar12 = lVar12;
    *(longlong *)(lVar12 + 8) = lVar12;
    *(longlong *)(lVar12 + 0x10) = lVar12;
    *(undefined2 *)(lVar12 + 0x18) = 0x101;
    *plVar8 = lVar12;
    local_1f8[0] = plVar8;
    FUN_140085610(lVar9,local_1f8);
    FUN_140085440(local_1f8);
  }
  FUN_140046f20(lVar9);
  uVar11 = FUN_140086de0(lVar13,"general","");
  lVar9 = FUN_140086de0(uVar11,"editor","");
  if (*(char *)(lVar9 + 8) != '\a') {
    local_1e8 = 0;
    FUN_140086ca0(local_1f8,7,0);
    plVar8 = (longlong *)FUN_14028af20(0x10);
    *plVar8 = 0;
    plVar8[1] = 0;
    lVar13 = FUN_14028af20(0x58);
    *(longlong *)lVar13 = lVar13;
    *(longlong *)(lVar13 + 8) = lVar13;
    *(longlong *)(lVar13 + 0x10) = lVar13;
    *(undefined2 *)(lVar13 + 0x18) = 0x101;
    *plVar8 = lVar13;
    local_1f8[0] = plVar8;
    FUN_140085610(lVar9,local_1f8);
    FUN_140085440(local_1f8);
  }
  FUN_1400483c0(lVar9);
  if (0xf < local_138) {
    lVar13 = CONCAT71(uStack_14f,local_150);
    uVar17 = local_138 + 1;
    lVar9 = lVar13;
    if (0xfff < uVar17) {
      lVar9 = *(longlong *)(lVar13 + -8);
      if (0x1f < (lVar13 - lVar9) - 8U) {
        pcVar1 = (code *)swi(0x29);
        iVar7 = (*pcVar1)(5);
        puVar18 = auStack_210;
LAB_140041202:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar18 + -8) = &UNK_140041210;
        FUN_1400507a0("directory_iterator::operator++",iVar7);
      }
      uVar17 = local_138 + 0x28;
    }
    thunk_FUN_14028af80(lVar9,uVar17);
  }
  local_140 = 0;
  local_138 = 0xf;
  local_150 = 0;
  FUN_140017240(&local_100);
  FUN_140017240(local_68);
  return;
}

