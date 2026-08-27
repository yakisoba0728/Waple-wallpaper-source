// Function: FUN_1401731d0
// Addr: 1401731d0
// Size: 5436 bytes


void FUN_1401731d0(char *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  size_t sVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  longlong *plVar19;
  undefined8 ****ppppuVar20;
  undefined8 ****ppppuVar21;
  bool bVar22;
  uint uVar23;
  undefined8 ***pppuVar24;
  undefined8 ***pppuVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong *plVar28;
  undefined1 *puVar29;
  longlong *plVar30;
  ulonglong uVar31;
  char *pcVar32;
  undefined1 *puVar33;
  char *pcVar34;
  bool bVar35;
  bool bVar36;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar37;
  longlong *local_res20;
  undefined1 auStack_398 [8];
  undefined1 auStack_390 [24];
  undefined8 ***local_378;
  undefined8 local_370;
  int local_368 [2];
  ulonglong local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  ulonglong uStack_348;
  undefined8 local_340;
  longlong *local_338;
  uint local_330;
  char *local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  longlong local_310;
  undefined8 ***local_308;
  undefined8 **ppuStack_300;
  undefined8 **local_2f8;
  undefined8 **ppuStack_2f0;
  char *local_2e8;
  undefined8 ***local_2d8;
  undefined8 uStack_2d0;
  longlong local_2c8;
  ulonglong local_2c0;
  ulonglong local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  ulonglong local_2a0;
  undefined8 ***local_298;
  undefined8 uStack_290;
  ulonglong local_288;
  ulonglong local_280;
  ulonglong local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  ulonglong local_260;
  longlong *local_258;
  uint local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  char *local_230;
  longlong local_228;
  undefined1 local_220;
  longlong *local_218;
  longlong *local_208;
  uint local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1d8 [2];
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90 [7];
  longlong *local_58;
  
  puVar29 = auStack_398;
  plVar26 = (longlong *)0x0;
  uVar23 = *(uint *)(param_1 + 0x40) & 0xff;
  if (((uVar23 == 6) || (uVar23 == 7)) && (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0)) {
    bVar6 = false;
    plVar26 = *(longlong **)**(undefined8 **)(param_1 + 0x38);
  }
  else {
    bVar6 = true;
  }
  if (((uVar23 == 6) || (uVar23 == 7)) && (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0)) {
    local_res20 = (longlong *)**(undefined8 **)(param_1 + 0x38);
    bVar22 = false;
  }
  else {
    local_res20 = (longlong *)0x0;
    bVar22 = true;
  }
  while( true ) {
    bVar35 = bVar22;
    if (!bVar6) {
      bVar35 = plVar26 == local_res20;
    }
    if (bVar35) break;
    if (((char)plVar26[7] == '\a') && (lVar11 = FUN_140087490(plVar26 + 6,"value"), lVar11 != 0)) {
      puVar33 = &DAT_140474480;
      if ((undefined1 *)plVar26[4] != (undefined1 *)0x0) {
        puVar33 = (undefined1 *)plVar26[4];
      }
      uVar12 = FUN_14014ff20(extraout_XMM0_Da,puVar33);
      lVar11 = *(longlong *)
                (*(longlong *)(param_1 + 0xb0) + 8 + (uVar12 & *(ulonglong *)(param_1 + 200)) * 0x10
                );
      lVar13 = *(longlong *)(param_1 + 0xa0);
      if (lVar11 == lVar13) {
LAB_14017331b:
        lVar11 = 0;
      }
      else {
        lVar2 = *(longlong *)
                 (*(longlong *)(param_1 + 0xb0) + (uVar12 & *(ulonglong *)(param_1 + 200)) * 0x10);
        cVar8 = FUN_14000d010(lVar11 + 0x10,puVar33);
        while (cVar8 == '\0') {
          if (lVar11 == lVar2) goto LAB_14017331b;
          lVar11 = *(longlong *)(lVar11 + 8);
          cVar8 = FUN_14000d010(lVar11 + 0x10,puVar33);
        }
      }
      if ((lVar11 != 0) && (lVar11 != lVar13)) {
        lVar13 = FUN_140086de0(plVar26 + 6,"value");
        plVar27 = *(longlong **)(lVar11 + 0x38);
        for (plVar30 = *(longlong **)(lVar11 + 0x30); plVar30 != plVar27; plVar30 = plVar30 + 1) {
          lVar11 = *plVar30;
          local_220 = 0;
          local_228 = *(longlong *)(lVar11 + 8);
          local_230 = param_1;
          if (*(longlong *)(lVar11 + 0x50) == 0) {
            (**(code **)(*(longlong *)(lVar11 + 0x10) + 8))(&local_230,*(longlong *)(lVar11 + 0x10))
            ;
          }
          else if (*(byte *)(lVar13 + 8) < 6) {
            uVar14 = FUN_140085cc0(lVar13,&local_360);
            uVar9 = FUN_14000d0f0(lVar11 + 0x40,uVar14);
            FUN_140017240(&local_360);
            local_250 = CONCAT31(local_250._1_3_,5);
            local_250 = local_250 & 0xfffffeff;
            local_248 = 0;
            uStack_240 = 0;
            local_238 = 0;
            local_258 = (longlong *)CONCAT71(local_258._1_7_,uVar9);
            (**(code **)(*(longlong *)(lVar11 + 0x10) + 8))(&local_230);
            FUN_140085440(&local_258);
          }
        }
      }
    }
    plVar30 = (longlong *)plVar26[2];
    if (*(char *)((longlong)plVar30 + 0x19) == '\0') {
      cVar8 = *(char *)(*plVar30 + 0x19);
      plVar26 = plVar30;
      while (cVar8 == '\0') {
        plVar26 = (longlong *)*plVar26;
        cVar8 = *(char *)(*plVar26 + 0x19);
      }
    }
    else {
      cVar8 = *(char *)(plVar26[1] + 0x19);
      plVar27 = (longlong *)plVar26[1];
      plVar30 = plVar26;
      while ((plVar26 = plVar27, cVar8 == '\0' && (plVar30 == (longlong *)plVar26[2]))) {
        cVar8 = *(char *)(plVar26[1] + 0x19);
        plVar27 = (longlong *)plVar26[1];
        plVar30 = plVar26;
      }
    }
  }
  pcVar34 = param_1;
  if (*(longlong **)(param_1 + 0x128) != (longlong *)0x0) {
    bVar6 = false;
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x50))();
    plVar26 = *(longlong **)(param_1 + 0xd8);
    local_2f8 = (undefined8 ***)0x0;
    ppuStack_300 = (undefined8 ***)0x0;
    pppuVar24 = (undefined8 ***)0xf;
    local_308 = (undefined8 ****)0x0;
    ppuStack_2f0 = (undefined8 ***)0xf;
    plVar30 = (longlong *)*plVar26;
    bVar22 = false;
    if (plVar30 != plVar26) {
      do {
        lVar11 = plVar30[2];
        local_310 = lVar11;
        if ((lVar11 != 0) && (*(int *)(lVar11 + 0x44) == 2)) {
          local_250 = CONCAT31(local_250._1_3_,7);
          local_250 = local_250 & 0xfffffeff;
          plVar27 = (longlong *)0x0;
          local_238 = 0;
          local_248 = 0;
          uStack_240 = 0;
          local_368[0] = 0;
          plVar15 = (longlong *)FUN_14028af20(0x10);
          *plVar15 = 0;
          plVar15[1] = 0;
          lVar13 = FUN_14028af20(0x58);
          *(longlong *)lVar13 = lVar13;
          *(longlong *)(lVar13 + 8) = lVar13;
          *(longlong *)(lVar13 + 0x10) = lVar13;
          *(undefined2 *)(lVar13 + 0x18) = 0x101;
          *plVar15 = lVar13;
          uVar23 = *(uint *)(param_1 + 0x40) & 0xff;
          if (((uVar23 == 6) || (uVar23 == 7)) &&
             (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0)) {
            bVar22 = false;
            plVar27 = *(longlong **)**(undefined8 **)(param_1 + 0x38);
          }
          else {
            bVar22 = true;
          }
          local_258 = plVar15;
          iVar10 = 0;
          if (((uVar23 == 6) || (uVar23 == 7)) &&
             (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0)) {
            plVar15 = (longlong *)**(undefined8 **)(param_1 + 0x38);
            bVar35 = false;
          }
          else {
            plVar15 = (longlong *)0x0;
            bVar35 = true;
          }
          while( true ) {
            bVar36 = bVar35;
            if (!bVar22) {
              bVar36 = plVar27 == plVar15;
            }
            if (bVar36) break;
            pcVar34 = "";
            if ((char *)plVar27[4] != (char *)0x0) {
              pcVar34 = (char *)plVar27[4];
            }
            sVar16 = strlen(pcVar34);
            uVar31 = 0;
            uVar12 = 0xcbf29ce484222325;
            if (sVar16 != 0) {
              do {
                pbVar1 = (byte *)(pcVar34 + uVar31);
                uVar31 = uVar31 + 1;
                uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
                lVar11 = local_310;
              } while (uVar31 < sVar16);
            }
            uVar12 = uVar12 & *(ulonglong *)(lVar11 + 0xd0);
            pcVar32 = *(char **)(*(longlong *)(lVar11 + 0xb8) + 8 + uVar12 * 0x10);
            local_2e8 = *(char **)(local_310 + 0xa8);
            if (pcVar32 == local_2e8) {
              pcVar32 = (char *)0x0;
            }
            else {
              pcVar3 = *(char **)(*(longlong *)(lVar11 + 0xb8) + uVar12 * 0x10);
              cVar8 = FUN_14000d010(pcVar32 + 0x10,pcVar34);
              while (cVar8 == '\0') {
                if (pcVar32 == pcVar3) {
                  pcVar32 = (char *)0x0;
                  break;
                }
                pcVar32 = *(char **)(pcVar32 + 8);
                cVar8 = FUN_14000d010(pcVar32 + 0x10,pcVar34);
              }
            }
            if (((pcVar32 != (char *)0x0) && (pcVar32 != local_2e8)) &&
               (lVar11 = FUN_140087490(plVar27 + 6,"value"), lVar11 != 0)) {
              local_2e8 = *(char **)(pcVar32 + 0x38);
              pcVar34 = *(char **)(pcVar32 + 0x30);
              if (pcVar34 != local_2e8) {
                do {
                  iVar10 = local_368[0];
                  if ((*(longlong *)(pcVar34 + 0x30) == 0) ||
                     (lVar11 = FUN_140086de0(plVar27 + 6,"value",""), 5 < *(byte *)(lVar11 + 8))) {
                    uVar14 = FUN_140086de0(plVar27 + 6,"value","");
                    uVar18 = FUN_140086de0(&local_258);
                    FUN_140085520(uVar18,uVar14);
                    local_368[0] = iVar10;
                  }
                  else {
                    pcVar32 = pcVar34 + 0x20;
                    uVar14 = FUN_140086de0(plVar27 + 6,"value","");
                    puVar17 = (undefined8 *)FUN_140085cc0(uVar14,&local_360);
                    if (0xf < *(ulonglong *)(pcVar34 + 0x38)) {
                      pcVar32 = *(char **)pcVar32;
                    }
                    sVar16 = puVar17[2];
                    if (0xf < (ulonglong)puVar17[3]) {
                      puVar17 = (undefined8 *)*puVar17;
                    }
                    if (sVar16 == *(size_t *)(pcVar34 + 0x30)) {
                      if (sVar16 == 0) {
                        bVar36 = true;
                      }
                      else {
                        iVar10 = memcmp(puVar17,pcVar32,sVar16);
                        bVar36 = iVar10 == 0;
                      }
                    }
                    else {
                      bVar36 = false;
                    }
                    local_330 = CONCAT31(local_330._1_3_,5);
                    uVar23 = local_330 & 0xfffffeff;
                    local_338 = (longlong *)CONCAT71(local_338._1_7_,bVar36);
                    puVar17 = (undefined8 *)FUN_140086de0(&local_258);
                    local_330 = *(uint *)(puVar17 + 1);
                    *(uint *)(puVar17 + 1) = uVar23;
                    plVar28 = (longlong *)*puVar17;
                    *puVar17 = local_338;
                    pcVar32 = (char *)puVar17[2];
                    puVar17[2] = 0;
                    uStack_320 = puVar17[3];
                    local_318 = puVar17[4];
                    puVar17[3] = 0;
                    puVar17[4] = 0;
                    local_338 = plVar28;
                    local_328 = pcVar32;
                    FUN_140086d30(&local_338);
                    if (pcVar32 != (char *)0x0) {
                      FUN_140017240(pcVar32 + 0x40);
                      FUN_140017240(pcVar32 + 0x20);
                      FUN_140017240(pcVar32);
                      thunk_FUN_14028af80(pcVar32,0x60);
                    }
                    if (0xf < uStack_348) {
                      uVar31 = uStack_348 + 1;
                      uVar12 = local_360;
                      if (0xfff < uVar31) {
                        uVar12 = *(ulonglong *)(local_360 - 8);
                        if (0x1f < (local_360 - uVar12) - 8) goto LAB_14017435c;
                        uVar31 = uStack_348 + 0x28;
                      }
                      thunk_FUN_14028af80(uVar12,uVar31);
                    }
                  }
                  local_368[0] = local_368[0] + 1;
                  pcVar34 = pcVar34 + 0x40;
                } while (pcVar34 != local_2e8);
              }
            }
            plVar28 = (longlong *)plVar27[2];
            lVar11 = local_310;
            iVar10 = local_368[0];
            if (*(char *)((longlong)plVar28 + 0x19) == '\0') {
              cVar8 = *(char *)(*plVar28 + 0x19);
              plVar27 = plVar28;
              while (cVar8 == '\0') {
                plVar27 = (longlong *)*plVar27;
                cVar8 = *(char *)(*plVar27 + 0x19);
              }
            }
            else {
              cVar8 = *(char *)(plVar27[1] + 0x19);
              plVar19 = (longlong *)plVar27[1];
              plVar28 = plVar27;
              while ((plVar27 = plVar19, cVar8 == '\0' && (plVar28 == (longlong *)plVar27[2]))) {
                cVar8 = *(char *)(plVar27[1] + 0x19);
                plVar19 = (longlong *)plVar27[1];
                plVar28 = plVar27;
              }
            }
          }
          if (0 < iVar10) {
            if (!bVar6) {
              local_218 = *(longlong **)(param_1 + 0x128);
              (**(code **)(*local_218 + 0x20))();
              bVar6 = true;
            }
            plVar27 = *(longlong **)(param_1 + 0x128);
            pcVar5 = *(code **)(*plVar27 + 0xb8);
            FUN_140004d00(&local_360,&local_258,0);
            (*pcVar5)(plVar27,*(undefined8 *)(lVar11 + 0x38));
            if (0xf < uStack_348) {
              uVar31 = uStack_348 + 1;
              uVar12 = local_360;
              if (0xfff < uVar31) {
                uVar12 = *(ulonglong *)(local_360 - 8);
                pcVar34 = param_1;
                if (0x1f < (local_360 - uVar12) - 8) goto LAB_14017435c;
                uVar31 = uStack_348 + 0x28;
              }
              thunk_FUN_14028af80(uVar12,uVar31);
            }
          }
          plVar27 = (longlong *)0x0;
          if ((*(byte *)(lVar11 + 0x40) & 0x10) != 0) {
            if ((undefined8 ***)local_2f8 == (undefined8 ***)0x0) {
              local_200 = CONCAT31(local_200._1_3_,7);
              local_200 = local_200 & 0xfffffeff;
              local_1f8 = 0;
              uStack_1f0 = 0;
              local_1e8 = 0;
              plVar15 = (longlong *)FUN_14028af20(0x10);
              *plVar15 = 0;
              plVar15[1] = 0;
              lVar11 = FUN_14028af20(0x58);
              *(longlong *)lVar11 = lVar11;
              *(longlong *)(lVar11 + 8) = lVar11;
              *(longlong *)(lVar11 + 0x10) = lVar11;
              *(undefined2 *)(lVar11 + 0x18) = 0x101;
              *plVar15 = lVar11;
              uVar23 = *(uint *)(param_1 + 0x40) & 0xff;
              if (((uVar23 == 6) || (uVar23 == 7)) &&
                 (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0)) {
                bVar22 = false;
                plVar28 = *(longlong **)**(undefined8 **)(param_1 + 0x38);
              }
              else {
                bVar22 = true;
                plVar28 = plVar27;
              }
              local_208 = plVar15;
              if (((uVar23 == 6) || (uVar23 == 7)) &&
                 (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0)) {
                plVar27 = (longlong *)**(undefined8 **)(param_1 + 0x38);
                bVar35 = false;
                pcVar34 = param_1;
              }
              else {
                bVar35 = true;
                pcVar34 = param_1;
              }
              while( true ) {
                bVar36 = bVar35;
                if (!bVar22) {
                  bVar36 = plVar28 == plVar27;
                }
                if (bVar36) break;
                lVar11 = FUN_140087490(plVar28 + 6,"value");
                if ((lVar11 != 0) &&
                   (lVar11 = FUN_140087490(plVar28 + 6,&DAT_140474874), lVar11 != 0)) {
                  plVar15 = (longlong *)FUN_140086de0(plVar28 + 6,&DAT_140474874,&DAT_140474878);
                  if ((char)*(uint *)(plVar15 + 1) == '\x04') {
                    lVar11 = *plVar15;
                    if ((lVar11 != 0) && ((*(uint *)(plVar15 + 1) >> 8 & 1) != 0)) {
                      lVar11 = lVar11 + 4;
                    }
                    iVar10 = FUN_1402c10d0(lVar11,"usershortcut");
                    if (iVar10 == 0) {
                      uVar14 = FUN_140086de0(plVar28 + 6,"value","");
                      local_330 = CONCAT31(local_330._1_3_,7);
                      local_330 = local_330 & 0xfffffeff;
                      local_328 = (char *)0x0;
                      uStack_320 = 0;
                      local_318 = 0;
                      plVar19 = (longlong *)FUN_14028af20(0x10);
                      *plVar19 = 0;
                      plVar19[1] = 0;
                      lVar11 = FUN_14028af20(0x58);
                      *(longlong *)lVar11 = lVar11;
                      *(longlong *)(lVar11 + 8) = lVar11;
                      *(longlong *)(lVar11 + 0x10) = lVar11;
                      *(undefined2 *)(lVar11 + 0x18) = 0x101;
                      *plVar19 = lVar11;
                      local_338 = plVar19;
                      uVar18 = FUN_140086de0(&local_338,&DAT_140474874,&DAT_140474878);
                      FUN_140085520(uVar18,plVar15);
                      local_2c0 = 0xf;
                      local_2c8 = 0;
                      uStack_2d0 = 0;
                      uStack_2b0 = 0;
                      local_2d8 = (undefined8 ****)0x0;
                      uStack_290 = 0;
                      local_2b8 = 0;
                      uStack_270 = 0;
                      local_298 = (undefined8 ****)0x0;
                      local_278 = 0;
                      local_2a8 = 0;
                      local_2a0 = 0xf;
                      local_288 = 0;
                      local_280 = 0xf;
                      local_268 = 0;
                      local_260 = 0xf;
                      uVar14 = FUN_140085cc0(uVar14,&local_360);
                      cVar8 = FUN_1401708c0(uVar14,&local_2d8);
                      FUN_140017240(&local_360);
                      if (cVar8 == '\0') {
                        local_350 = 0;
                        FUN_140086ca0(&local_360,5,0);
                        local_360 = local_360 & 0xffffffffffffff00;
                        uVar14 = FUN_140086de0(&local_338,"isbound","");
                        FUN_140085610(uVar14,&local_360);
                        FUN_140085440(&local_360);
                      }
                      else {
                        if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) <
                             DAT_1404e9680) && (FUN_14028b140(&DAT_1404e9680), DAT_1404e9680 == -1))
                        {
                          local_188 = 0;
                          local_180 = 0;
                          local_198 = 0;
                          uStack_190 = 0;
                          FUN_140017480(&local_198,&DAT_140473b68,4);
                          local_178 = 0;
                          uStack_170 = 0;
                          local_168 = 0;
                          local_160 = 0;
                          FUN_140017480(&local_178,&DAT_140473b68,4);
                          local_148 = 0;
                          local_140 = 0;
                          local_158 = 0;
                          uStack_150 = 0;
                          FUN_140017480(&local_158,"directory",9);
                          local_138 = 0;
                          uStack_130 = 0;
                          local_128 = 0;
                          local_120 = 0;
                          FUN_140017480(&local_138,"directory",9);
                          local_108 = 0;
                          local_100 = 0;
                          local_118 = 0;
                          uStack_110 = 0;
                          FUN_140017480(&local_118,&DAT_14048ddf8,3);
                          local_f8 = 0;
                          uStack_f0 = 0;
                          local_e8 = 0;
                          local_e0 = 0;
                          FUN_140017480(&local_f8,"website",7);
                          local_c8 = 0;
                          local_c0 = 0;
                          local_d8 = 0;
                          uStack_d0 = 0;
                          FUN_140017480(&local_d8,&DAT_14048ddfc,3);
                          local_b8 = 0;
                          uStack_b0 = 0;
                          local_a8 = 0;
                          local_a0 = 0;
                          FUN_140017480(&local_b8,"command",7);
                          local_368[0] = 0;
                          uVar37 = FUN_14000fc10(&DAT_1404e9690,local_368);
                          FUN_14017a2e0(uVar37,&local_198,&local_98);
                          FUN_140017240(&local_b8);
                          FUN_140017240(&local_d8);
                          FUN_140017240(&local_f8);
                          FUN_140017240(&local_118);
                          FUN_140017240(&local_138);
                          FUN_140017240(&local_158);
                          FUN_140017240(&local_178);
                          FUN_140017240(&local_198);
                          FUN_14028b410(FUN_140424e50);
                          _Init_thread_footer(&DAT_1404e9680);
                        }
                        uVar12 = uStack_358;
                        uStack_358 = CONCAT71(uStack_358._1_7_,5);
                        uStack_358._4_4_ = SUB84(uVar12,4);
                        uStack_358 = CONCAT44(uStack_358._4_4_,(undefined4)uStack_358) &
                                     0xfffffffffffffeff;
                        local_340 = 0;
                        local_360 = CONCAT71(local_360._1_7_,1);
                        local_350 = 0;
                        uStack_348 = 0;
                        uVar14 = FUN_140086de0(&local_338,"isbound","");
                        FUN_140085610(uVar14,&local_360);
                        FUN_140085440(&local_360);
                        ppppuVar20 = &local_2d8;
                        if (0xf < local_2c0) {
                          ppppuVar20 = (undefined8 ****)local_2d8;
                        }
                        uVar14 = FUN_1400138d0(ppppuVar20,local_2c8);
                        FUN_1400110a0(&DAT_1404e9690,&local_230,&local_2d8,uVar14);
                        if (local_228 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_14028c310("invalid unordered_map<K, T> key");
                        }
                        FUN_140084fe0(&local_360,local_228 + 0x30);
                        uVar14 = FUN_140086de0(&local_338,"commandtype","");
                        FUN_140085610(uVar14,&local_360);
                        FUN_140085440(&local_360);
                        uVar12 = local_2c0;
                        lVar11 = local_2c8;
                        pppuVar24 = local_2d8;
                        ppppuVar20 = &local_2d8;
                        if (0xf < local_2c0) {
                          ppppuVar20 = (undefined8 ****)local_2d8;
                        }
                        if ((local_2c8 != 3) ||
                           (iVar10 = memcmp(ppppuVar20,&DAT_14048ddfc,3), iVar10 != 0)) {
                          ppppuVar20 = &local_2d8;
                          if (0xf < uVar12) {
                            ppppuVar20 = (undefined8 ****)pppuVar24;
                          }
                          if ((lVar11 != 3) ||
                             (iVar10 = memcmp(ppppuVar20,&DAT_14048ddf8,3), iVar10 != 0)) {
                            FUN_1400187b0(&local_298);
                            ppppuVar20 = &local_298;
                            if (0xf < local_280) {
                              ppppuVar20 = (undefined8 ****)local_298;
                            }
                            if (local_288 == 0) {
LAB_140173e74:
                              FUN_140016fc0(&local_360,&local_298);
                            }
                            else {
                              lVar11 = -1;
                              if (local_288 - 1 != -1) {
                                lVar11 = local_288 - 1;
                              }
                              lVar13 = lVar11 + 1 + (longlong)ppppuVar20;
                              lVar11 = thunk_FUN_14028d330(ppppuVar20,lVar13,0x2f);
                              if (((lVar11 == lVar13) || (lVar11 - (longlong)ppppuVar20 == -1)) ||
                                 (uVar12 = (lVar11 - (longlong)ppppuVar20) + 1, local_288 <= uVar12)
                                 ) goto LAB_140173e74;
                              local_350 = 0;
                              uStack_348 = 0;
                              local_360 = 0;
                              uStack_358 = 0;
                              if (local_288 < uVar12) {
                    /* WARNING: Subroutine does not return */
                                FUN_140012940();
                              }
                              lVar11 = -1;
                              if (local_288 - uVar12 != -1) {
                                lVar11 = local_288 - uVar12;
                              }
                              ppppuVar20 = &local_298;
                              if (0xf < local_280) {
                                ppppuVar20 = (undefined8 ****)local_298;
                              }
                              FUN_140017480(&local_360,(longlong)ppppuVar20 + uVar12,lVar11);
                            }
                            FUN_140084fe0(local_1d8,&local_360);
                            uVar14 = FUN_140086de0(&local_338,&DAT_140473b68,&DAT_140473b6c);
                            FUN_140085610(uVar14,local_1d8);
                            FUN_140085440(local_1d8);
                            if (0xf < uStack_348) {
                              FUN_140017200(&local_360,local_360);
                            }
                            goto LAB_140173f30;
                          }
                        }
                        FUN_140084fe0(&local_360,&local_298);
                        uVar14 = FUN_140086de0(&local_338,&DAT_140473b68,&DAT_140473b6c);
                        FUN_140085610(uVar14,&local_360);
                        FUN_140085440(&local_360);
                      }
LAB_140173f30:
                      pcVar34 = "";
                      if ((char *)plVar28[4] != (char *)0x0) {
                        pcVar34 = (char *)plVar28[4];
                      }
                      sVar16 = strlen(pcVar34);
                      uVar14 = FUN_140086de0(&local_208,pcVar34,pcVar34 + sVar16);
                      FUN_140085520(uVar14,&local_338);
                      if (0xf < local_260) {
                        FUN_140017200(&local_278,local_278);
                      }
                      local_268 = 0;
                      local_260 = 0xf;
                      local_278 = local_278 & 0xffffffffffffff00;
                      if (0xf < local_280) {
                        FUN_140017200(&local_298,local_298);
                      }
                      local_288 = 0;
                      local_280 = 0xf;
                      local_298 = (undefined8 ***)((ulonglong)local_298 & 0xffffffffffffff00);
                      if (0xf < local_2a0) {
                        FUN_140017200(&local_2b8,local_2b8);
                      }
                      local_2a8 = 0;
                      local_2a0 = 0xf;
                      local_2b8 = local_2b8 & 0xffffffffffffff00;
                      if (0xf < local_2c0) {
                        FUN_140017200(&local_2d8,local_2d8);
                      }
                      local_2c8 = 0;
                      local_2c0 = 0xf;
                      local_2d8 = (undefined8 ***)((ulonglong)local_2d8 & 0xffffffffffffff00);
                      FUN_140085440(&local_338);
                      goto LAB_140174144;
                    }
                  }
                  local_330 = CONCAT31(local_330._1_3_,7);
                  local_330 = local_330 & 0xfffffeff;
                  local_328 = (char *)0x0;
                  uStack_320 = 0;
                  local_318 = 0;
                  plVar19 = (longlong *)FUN_14028af20(0x10);
                  *plVar19 = 0;
                  plVar19[1] = 0;
                  lVar11 = FUN_14028af20(0x58);
                  *(longlong *)lVar11 = lVar11;
                  *(longlong *)(lVar11 + 8) = lVar11;
                  *(longlong *)(lVar11 + 0x10) = lVar11;
                  *(undefined2 *)(lVar11 + 0x18) = 0x101;
                  *plVar19 = lVar11;
                  local_338 = plVar19;
                  uVar14 = FUN_140086de0(plVar28 + 6,"value","");
                  uVar18 = FUN_140086de0(&local_338,"value","");
                  FUN_140085520(uVar18,uVar14);
                  uVar14 = FUN_140086de0(&local_338,&DAT_140474874,&DAT_140474878);
                  FUN_140085520(uVar14,plVar15);
                  pcVar34 = "";
                  if ((char *)plVar28[4] != (char *)0x0) {
                    pcVar34 = (char *)plVar28[4];
                  }
                  strlen(pcVar34);
                  uVar14 = FUN_140086de0(&local_208,pcVar34);
                  FUN_140085520(uVar14,&local_338);
                  FUN_140086d30(&local_338);
                  pcVar34 = local_328;
                  if (local_328 != (char *)0x0) {
                    FUN_140017240(local_328 + 0x40);
                    FUN_140017240(pcVar34 + 0x20);
                    FUN_140017240(pcVar34);
                    thunk_FUN_14028af80(pcVar34,0x60);
                  }
                }
LAB_140174144:
                plVar15 = (longlong *)plVar28[2];
                if (*(char *)((longlong)plVar15 + 0x19) == '\0') {
                  cVar8 = *(char *)(*plVar15 + 0x19);
                  plVar28 = plVar15;
                  while (cVar8 == '\0') {
                    plVar28 = (longlong *)*plVar28;
                    cVar8 = *(char *)(*plVar28 + 0x19);
                  }
                }
                else {
                  cVar8 = *(char *)(plVar28[1] + 0x19);
                  plVar19 = (longlong *)plVar28[1];
                  plVar15 = plVar28;
                  while ((plVar28 = plVar19, cVar8 == '\0' && (plVar15 == (longlong *)plVar28[2])))
                  {
                    cVar8 = *(char *)(plVar28[1] + 0x19);
                    plVar19 = (longlong *)plVar28[1];
                    plVar15 = plVar28;
                  }
                }
              }
              ppppuVar20 = (undefined8 ****)FUN_140004d00(&local_360,&local_208,0);
              if (&local_308 != ppppuVar20) {
                if ((undefined8 ***)0xf < ppuStack_2f0) {
                  pppuVar24 = (undefined8 ***)((longlong)ppuStack_2f0 + 1);
                  ppppuVar21 = (undefined8 ****)local_308;
                  if ((undefined8 ***)0xfff < pppuVar24) {
                    ppppuVar21 = (undefined8 ****)local_308[-1];
                    if (0x1f < (ulonglong)((longlong)local_308 + (-8 - (longlong)ppppuVar21)))
                    goto LAB_14017435c;
                    pppuVar24 = (undefined8 ***)(ppuStack_2f0 + 5);
                  }
                  thunk_FUN_14028af80(ppppuVar21,pppuVar24);
                }
                local_308 = *ppppuVar20;
                ppuStack_300 = ppppuVar20[1];
                local_2f8 = ppppuVar20[2];
                ppuStack_2f0 = ppppuVar20[3];
                ppppuVar20[2] = (undefined8 ***)0x0;
                ppppuVar20[3] = (undefined8 ***)0xf;
                *(undefined1 *)ppppuVar20 = 0;
              }
              if (0xf < uStack_348) {
                uVar31 = uStack_348 + 1;
                uVar12 = local_360;
                if (0xfff < uVar31) {
                  uVar12 = *(ulonglong *)(local_360 - 8);
                  if (0x1f < (local_360 - uVar12) - 8) goto LAB_14017435c;
                  uVar31 = uStack_348 + 0x28;
                }
                thunk_FUN_14028af80(uVar12,uVar31);
              }
              FUN_140085440(&local_208);
              lVar11 = local_310;
            }
            if (!bVar6) {
              local_218 = *(longlong **)(param_1 + 0x128);
              (**(code **)(*local_218 + 0x20))();
              bVar6 = true;
            }
            local_378 = &local_308;
            if ((undefined8 ***)0xf < ppuStack_2f0) {
              local_378 = local_308;
            }
            local_370 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x128) + 0x40))
                      (*(longlong **)(param_1 + 0x128),*(undefined8 *)(lVar11 + 0x38),
                       *(undefined8 *)(lVar11 + 0x48),4);
          }
          FUN_140085440(&local_258);
          pppuVar24 = (undefined8 ***)ppuStack_2f0;
        }
        plVar30 = (longlong *)*plVar30;
      } while (plVar30 != plVar26);
      bVar22 = bVar6;
      if ((undefined8 ***)0xf < pppuVar24) {
        pppuVar25 = (undefined8 ***)((longlong)pppuVar24 + 1);
        ppppuVar20 = (undefined8 ****)local_308;
        if ((undefined8 ***)0xfff < pppuVar25) {
          ppppuVar20 = (undefined8 ****)local_308[-1];
          pcVar34 = param_1;
          if (0x1f < (ulonglong)((longlong)local_308 + (-8 - (longlong)ppppuVar20))) {
LAB_14017435c:
            pcVar5 = (code *)swi(0x29);
            (*pcVar5)(5);
            puVar29 = auStack_390;
            goto LAB_140174366;
          }
          pppuVar25 = pppuVar24 + 5;
        }
        thunk_FUN_14028af80(ppppuVar20,pppuVar25);
      }
    }
    local_2f8 = (undefined8 ***)0x0;
    ppuStack_2f0 = (undefined8 ***)0xf;
    local_308 = (undefined8 ***)((ulonglong)local_308 & 0xffffffffffffff00);
    puVar29 = auStack_398;
    pcVar34 = param_1;
    if (bVar22) {
      (**(code **)(*local_218 + 0x28))();
      puVar29 = auStack_398;
    }
  }
LAB_140174366:
  if (*(longlong *)(pcVar34 + 0x160) != 0) {
    local_1d8[0] = *(undefined4 *)(pcVar34 + 0x150);
    local_1d0 = (undefined8 *)0x0;
    local_1c8 = 0;
    *(undefined8 *)(puVar29 + -8) = 0x140174399;
    local_1d0 = (undefined8 *)FUN_14028af20(0x58);
    *local_1d0 = local_1d0;
    local_1d0[1] = local_1d0;
    local_1a8 = *(undefined8 *)(pcVar34 + 0x180);
    lVar11 = *(longlong *)(pcVar34 + 0x170);
    lVar13 = *(longlong *)(pcVar34 + 0x168);
    local_1a0 = *(undefined8 *)(pcVar34 + 0x188);
    local_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    *(undefined8 *)(puVar29 + -8) = 0x1401743f6;
    FUN_140037600(&local_1c0,lVar11 - lVar13 >> 3,local_1d0);
    puVar17 = *(undefined8 **)(pcVar34 + 0x158);
    uVar14 = *puVar17;
    *(undefined8 *)(puVar29 + -8) = 0x14017440f;
    FUN_14017a070(local_1d8,uVar14,puVar17);
    puVar7 = local_1d0;
    for (puVar17 = (undefined8 *)*local_1d0; puVar17 != puVar7; puVar17 = (undefined8 *)*puVar17) {
      puVar4 = (undefined8 *)puVar17[10];
      local_98 = puVar17[2];
      local_58 = (longlong *)0x0;
      if (puVar4 == (undefined8 *)0x0) {
LAB_1401744c0:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar29 + -8) = &UNK_1401744c5;
        FUN_14028c2c0();
      }
      pcVar5 = *(code **)*puVar4;
      *(undefined8 *)(puVar29 + -8) = 0x14017444b;
      local_58 = (longlong *)(*pcVar5)(puVar4,local_90);
      if (local_58 == (longlong *)0x0) goto LAB_1401744c0;
      pcVar5 = *(code **)(*local_58 + 0x10);
      *(undefined8 *)(puVar29 + -8) = 0x140174460;
      (*pcVar5)(local_58);
      if (local_58 != (longlong *)0x0) {
        pcVar5 = *(code **)(*local_58 + 0x20);
        *(undefined8 *)(puVar29 + -8) = 0x14017447f;
        (*pcVar5)(local_58,local_58 != local_90);
      }
    }
    *(undefined8 *)(puVar29 + -8) = 0x140174493;
    FUN_14000d9e0(&local_1c0);
    *(undefined8 *)(puVar29 + -8) = 0x14017449f;
    FUN_1400d2120(&local_1d0);
  }
  return;
}

