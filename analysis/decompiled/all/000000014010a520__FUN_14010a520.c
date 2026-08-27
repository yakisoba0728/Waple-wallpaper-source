// Function: FUN_14010a520
// Addr: 14010a520
// Size: 4898 bytes


undefined8 FUN_14010a520(longlong *param_1,char *param_2,char *param_3,undefined8 param_4)

{
  short *psVar1;
  short *psVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  char ***pppcVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  size_t sVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  short *psVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong ****pppplVar18;
  undefined8 uVar19;
  ulonglong *puVar20;
  undefined8 ****ppppuVar21;
  char ****ppppcVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  char ****ppppcVar26;
  longlong *plVar27;
  undefined8 *puVar28;
  undefined1 *puVar29;
  uint uVar30;
  ulonglong uVar31;
  short *psVar32;
  longlong *plVar33;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [24];
  char ***local_2a8;
  char ***pppcStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  longlong local_288;
  uint local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  char ***local_258;
  char ***pppcStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  ulonglong local_238;
  undefined8 local_230;
  uint local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined7 uStack_207;
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  uint local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 ***local_1c0 [2];
  longlong local_1b0;
  ulonglong local_1a8;
  undefined1 local_1a0 [32];
  undefined8 ***local_180 [3];
  ulonglong local_168;
  longlong ***local_160 [2];
  ulonglong local_150;
  ulonglong local_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined8 local_130;
  ulonglong local_128;
  undefined1 local_120 [32];
  longlong local_100 [3];
  ulonglong local_e8;
  undefined1 local_e0 [16];
  longlong local_d0;
  undefined1 local_c0 [40];
  undefined1 local_98;
  char local_97;
  undefined1 local_90 [40];
  undefined1 local_68 [48];
  
  puVar29 = auStack_2c8;
  uVar31 = 0;
  local_238 = local_238 & 0xffffffff00000000;
  sVar10 = strlen(param_2);
  FUN_14000f880(param_1 + 0x1c,param_2,sVar10);
  sVar10 = strlen(param_3);
  FUN_14000f880(param_1 + 0x20,param_3,sVar10);
  FUN_1400187b0(param_1 + 0x20);
  local_238 = FUN_140086de0(param_4,"wproperties","");
  FUN_140060990(local_180,param_3);
  uVar11 = FUN_140053f80(local_180,local_1a0);
  puVar12 = (undefined8 *)FUN_140018ce0(uVar11,&local_208);
  iVar9 = (**(code **)(*param_1 + 0x20))(param_1);
  if (iVar9 == 2) {
    plVar33 = puVar12 + 2;
    if (0xf < (ulonglong)puVar12[3]) {
      puVar12 = (undefined8 *)*puVar12;
    }
    if (*plVar33 == 5) {
      iVar9 = memcmp(puVar12,&DAT_140488af8,5);
      uVar11 = 0x43;
      if (iVar9 == 0) goto LAB_14010a62e;
    }
    uVar11 = 0x170;
LAB_14010a62e:
    bVar5 = true;
  }
  else {
    if (iVar9 == 4) {
      uVar11 = 0xd5;
      goto LAB_14010a62e;
    }
    uVar11 = 0;
    bVar5 = false;
  }
  if (local_1f0 < 0x10) {
LAB_14010a66b:
    local_1f8 = 0;
    local_1f0 = 0xf;
    local_208 = 0;
    FUN_140016770(local_1a0);
    if (bVar5) {
      FUN_140104b60(local_238,uVar11);
    }
    FUN_14003fe80(local_180);
    FUN_140005d20(local_180,"project.json");
    cVar8 = FUN_140018f30(local_180);
    if (cVar8 != '\0') {
      ppppuVar21 = local_180;
      if (7 < local_168) {
        ppppuVar21 = (undefined8 ****)local_180[0];
      }
      FUN_14003f7b0(local_100,ppppuVar21);
      plVar33 = param_1 + 2;
      FUN_140017840(local_100,plVar33,0);
      lVar13 = FUN_140086de0(plVar33,"general","");
      if (*(char *)(lVar13 + 8) == '\a') {
        puVar12 = (undefined8 *)FUN_140086de0(lVar13,"properties","");
        pppcStack_2a0 = (char ***)0x9;
        local_2a8 = (char ***)0x140488490;
        FUN_1400878f0(puVar12,&local_2a8);
        pppcStack_2a0 = (char ***)0x6;
        local_2a8 = (char ***)0x14048849c;
        FUN_1400878f0(puVar12,&local_2a8);
        pppcStack_2a0 = (char ***)0x4;
        local_2a8 = (char ***)&DAT_1404884a4;
        FUN_1400878f0(puVar12,&local_2a8);
        pppcStack_2a0 = (char ***)0xe;
        local_2a8 = (char ***)0x140488ae0;
        FUN_1400878f0(puVar12,&local_2a8);
        plVar16 = *(longlong **)*puVar12;
        plVar27 = (longlong *)*plVar16;
        while (plVar27 != plVar16) {
          iVar9 = FUN_1402c10d0(plVar27[4],"schemecolor");
          if ((((iVar9 != 0) && ((char)plVar27[7] == '\a')) &&
              (lVar13 = FUN_140086de0(plVar27 + 6,"order",""), *(byte *)(lVar13 + 8) - 1 < 3)) &&
             (iVar9 = FUN_140085ee0(lVar13), iVar9 < 100)) {
            local_280 = CONCAT31(local_280._1_3_,1);
            local_280 = local_280 & 0xfffffeff;
            local_288 = (longlong)(iVar9 + 100);
            local_278 = 0;
            uStack_270 = 0;
            local_268 = 0;
            FUN_140085610(lVar13,&local_288);
            FUN_140085440(&local_288);
          }
          plVar17 = (longlong *)plVar27[2];
          if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
            cVar8 = *(char *)(*plVar17 + 0x19);
            plVar27 = plVar17;
            while (cVar8 == '\0') {
              plVar27 = (longlong *)*plVar27;
              cVar8 = *(char *)(*plVar27 + 0x19);
            }
          }
          else {
            cVar8 = *(char *)(plVar27[1] + 0x19);
            plVar7 = (longlong *)plVar27[1];
            plVar17 = plVar27;
            while ((plVar27 = plVar7, cVar8 == '\0' && (plVar17 == (longlong *)plVar27[2]))) {
              cVar8 = *(char *)(plVar27[1] + 0x19);
              plVar7 = (longlong *)plVar27[1];
              plVar17 = plVar27;
            }
          }
        }
      }
      FUN_140016600(local_1c0,local_180);
      FUN_14003fe80(local_1c0);
      ppppuVar21 = local_1c0;
      if (7 < local_1a8) {
        ppppuVar21 = (undefined8 ****)local_1c0[0];
      }
      psVar2 = (short *)((longlong)ppppuVar21 + local_1b0 * 2);
      psVar32 = psVar2;
      for (psVar14 = (short *)FUN_140015e90(ppppuVar21,psVar2); psVar14 != psVar2;
          psVar14 = psVar14 + 1) {
        if ((*psVar14 != 0x5c) && (*psVar14 != 0x2f)) goto LAB_14010a8f0;
      }
LAB_14010a90d:
      local_248 = 0;
      local_258 = (char ***)0x0;
      pppcStack_250 = (char ***)0x0;
      uStack_240 = 0;
      FUN_140016170(&local_258,psVar32,(longlong)psVar2 - (longlong)psVar32 >> 1);
      local_2a8 = local_258;
      pppcStack_2a0 = pppcStack_250;
      local_298 = (undefined4)local_248;
      uStack_294 = local_248._4_4_;
      uStack_290 = (undefined4)uStack_240;
      uStack_28c = uStack_240._4_4_;
      FUN_140018ce0(&local_2a8,&local_208);
      uVar24 = CONCAT44(uStack_28c,uStack_290);
      if (7 < uVar24) {
        uVar25 = uVar24 * 2 + 2;
        ppppcVar22 = (char ****)local_2a8;
        if (0xfff < uVar25) {
          ppppcVar22 = (char ****)local_2a8[-1];
          if ((char *)0x1f < (char *)((longlong)local_2a8 + (-8 - (longlong)ppppcVar22)))
          goto LAB_14010b531;
          uVar25 = uVar24 * 2 + 0x29;
        }
        thunk_FUN_14028af80(ppppcVar22,uVar25);
      }
      FUN_14003ff90(local_1c0);
      ppppuVar21 = local_1c0;
      if (7 < local_1a8) {
        ppppuVar21 = (undefined8 ****)local_1c0[0];
      }
      psVar2 = (short *)((longlong)ppppuVar21 + local_1b0 * 2);
      psVar32 = psVar2;
      for (psVar14 = (short *)FUN_140015e90(ppppuVar21,psVar2); psVar14 != psVar2;
          psVar14 = psVar14 + 1) {
        if ((*psVar14 != 0x5c) && (*psVar14 != 0x2f)) goto LAB_14010a9f0;
      }
LAB_14010aa0d:
      local_248 = 0;
      uStack_240 = 0;
      local_258 = (char ***)0x0;
      pppcStack_250 = (char ***)0x0;
      FUN_140016170(&local_258,psVar32,(longlong)psVar2 - (longlong)psVar32 >> 1);
      local_2a8 = local_258;
      pppcStack_2a0 = pppcStack_250;
      local_298 = (undefined4)local_248;
      uStack_294 = local_248._4_4_;
      uStack_290 = (undefined4)uStack_240;
      uStack_28c = uStack_240._4_4_;
      FUN_140018ce0(&local_2a8,&local_140);
      uVar24 = CONCAT44(uStack_28c,uStack_290);
      if (7 < uVar24) {
        uVar25 = uVar24 * 2 + 2;
        ppppcVar22 = (char ****)local_2a8;
        if (0xfff < uVar25) {
          ppppcVar22 = (char ****)local_2a8[-1];
          if ((char *)0x1f < (char *)((longlong)local_2a8 + (-8 - (longlong)ppppcVar22)))
          goto LAB_14010b531;
          uVar25 = uVar24 * 2 + 0x29;
        }
        thunk_FUN_14028af80(ppppcVar22,uVar25);
      }
      puVar23 = &local_140;
      if (0xf < local_128) {
        puVar23 = (undefined1 *)CONCAT71(uStack_13f,local_140);
      }
      lVar13 = FUN_1402c0e80(puVar23,0,10);
      if (lVar13 == 0x69758) {
        puVar23 = &local_208;
        if (0xf < local_1f0) {
          puVar23 = (undefined1 *)CONCAT71(uStack_207,local_208);
        }
        lVar13 = FUN_1402c0e80(puVar23,0,10);
        if (lVar13 != 0) {
          local_280 = CONCAT31(local_280._1_3_,2);
          local_280 = local_280 & 0xfffffeff;
          local_268 = 0;
          local_278 = 0;
          uStack_270 = 0;
          local_288 = lVar13;
          uVar11 = FUN_140086de0(plVar33,"workshopid","");
          FUN_140085610(uVar11,&local_288);
          FUN_140085440(&local_288);
        }
      }
      if ((param_2 == (char *)0x0) || (iVar9 = FUN_1402c10d0(param_2,param_3), iVar9 == 0)) {
LAB_14010ab6d:
        bVar5 = false;
      }
      else {
        uVar31 = 1;
        uVar11 = FUN_140060990(local_1a0,param_2);
        cVar8 = FUN_140060f20(uVar11);
        if (cVar8 == '\0') goto LAB_14010ab6d;
        bVar5 = true;
      }
      if (uVar31 != 0) {
        FUN_140016770(local_1a0);
      }
      uVar31 = 0;
      if (bVar5) {
        puVar12 = (undefined8 *)FUN_140060990(local_1a0,param_2);
        if (7 < (ulonglong)puVar12[3]) {
          puVar12 = (undefined8 *)*puVar12;
        }
        local_248 = 0;
        uStack_240 = 0;
        local_258 = (char ***)0x0;
        pppcStack_250 = (char ***)0x0;
        uVar11 = FUN_1402d6aa0(puVar12);
        FUN_140016170(&local_258,puVar12,uVar11);
        FUN_14011d7d0(&local_98,&local_258);
        if (7 < uStack_240) {
          FUN_140016a90(&local_258,local_258);
        }
        local_248 = 0;
        uStack_240 = 7;
        local_258 = (char ***)((ulonglong)local_258 & 0xffffffffffff0000);
        FUN_140016770(local_1a0);
        if (local_97 != '\0') {
          param_3 = (char *)FUN_140086de0(plVar33,"presetproperties","");
          lVar13 = FUN_140087490(local_68,"general","");
          if (lVar13 == 0) {
            lVar13 = FUN_140084ac0();
          }
          if (*(char *)(lVar13 + 8) == '\a') {
            lVar13 = FUN_140087490(local_68,"general","");
            if (lVar13 == 0) {
              lVar13 = FUN_140084ac0();
            }
            lVar13 = FUN_140087490(lVar13,"properties","");
            if (lVar13 == 0) {
              lVar13 = FUN_140084ac0();
            }
            if (*(char *)(lVar13 + 8) == '\a') {
              lVar13 = FUN_140087490(local_68,"general","");
              if (lVar13 == 0) {
                lVar13 = FUN_140084ac0();
              }
              lVar13 = FUN_140087490(lVar13,"properties","");
              if (lVar13 == 0) {
                lVar13 = FUN_140084ac0();
              }
              lVar15 = FUN_140087490(local_90,"preset","");
              if (lVar15 == 0) {
                lVar15 = FUN_140084ac0();
              }
              FUN_140085520(param_3,lVar15);
              lVar15 = FUN_140087490(local_90,&DAT_140473b68,&DAT_140473b6c);
              if (lVar15 == 0) {
                lVar15 = FUN_140084ac0();
              }
              uVar11 = FUN_140085cc0(lVar15,&local_1e8);
              uVar11 = FUN_140018b00(local_120,uVar11);
              uVar11 = FUN_14003fe80(uVar11);
              FUN_140016600(local_1a0,uVar11);
              FUN_140016770(local_120);
              FUN_140017240(&local_1e8);
              FUN_140088360(param_3,&local_258);
              pppcVar6 = pppcStack_250;
              for (ppppcVar22 = (char ****)local_258; ppppcVar22 != (char ****)pppcVar6;
                  ppppcVar22 = ppppcVar22 + 4) {
                FUN_140016fc0(&local_2a8,ppppcVar22);
                ppppcVar26 = &local_2a8;
                if (0xf < CONCAT44(uStack_28c,uStack_290)) {
                  ppppcVar26 = (char ****)local_2a8;
                }
                lVar15 = FUN_140087490(lVar13,ppppcVar26,
                                       (char *)((longlong)ppppcVar26 +
                                               CONCAT44(uStack_294,local_298)));
                if (lVar15 != 0) {
                  ppppcVar26 = &local_2a8;
                  if (0xf < CONCAT44(uStack_28c,uStack_290)) {
                    ppppcVar26 = (char ****)local_2a8;
                  }
                  lVar15 = FUN_140087490(lVar13,ppppcVar26,
                                         (char *)((longlong)ppppcVar26 +
                                                 CONCAT44(uStack_294,local_298)));
                  if (lVar15 == 0) {
                    lVar15 = FUN_140084ac0();
                  }
                  lVar15 = FUN_140087490(lVar15,&DAT_140474874,&DAT_140474878);
                  if (lVar15 == 0) {
                    lVar15 = FUN_140084ac0();
                  }
                  if (*(char *)(lVar15 + 8) == '\x04') {
                    FUN_140085cc0(lVar15,local_c0);
                    local_228 = CONCAT31(local_228._1_3_,4);
                    local_228 = local_228 | 0x100;
                    local_210 = 0;
                    local_220 = 0;
                    uStack_218 = 0;
                    local_230 = FUN_140084b30("directory",9);
                    cVar8 = FUN_140085a30(lVar15,&local_230);
                    if (cVar8 == '\0') {
LAB_14010af28:
                      bVar5 = false;
                    }
                    else {
                      local_1e0 = CONCAT31(local_1e0._1_3_,4);
                      local_1e0 = local_1e0 | 0x100;
                      local_1c8 = 0;
                      local_1d8 = 0;
                      uStack_1d0 = 0;
                      local_1e8 = FUN_140084b30(&DAT_140473b68,4);
                      cVar8 = FUN_140085a30(lVar15,&local_1e8);
                      if (cVar8 == '\0') {
                        uVar31 = (ulonglong)((uint)uVar31 | 4);
                        goto LAB_14010af28;
                      }
                      local_280 = CONCAT31(local_280._1_3_,4);
                      local_280 = local_280 | 0x100;
                      local_268 = 0;
                      local_278 = 0;
                      uStack_270 = 0;
                      local_288 = FUN_140084b30("scenetexture",0xc);
                      uVar31 = 0xc;
                      cVar8 = FUN_140085a30(lVar15,&local_288);
                      if (cVar8 == '\0') goto LAB_14010af28;
                      bVar5 = true;
                    }
                    if ((uVar31 & 8) != 0) {
                      uVar31 = (ulonglong)((uint)uVar31 & 0xfffffff7);
                      FUN_140085440(&local_288);
                    }
                    uVar30 = (uint)uVar31;
                    if ((uVar31 & 4) != 0) {
                      uVar30 = uVar30 & 0xfffffffb;
                      FUN_140085440(&local_1e8);
                    }
                    uVar31 = (ulonglong)uVar30;
                    FUN_140085440(&local_230);
                    if (!bVar5) {
                      ppppcVar26 = &local_2a8;
                      if (0xf < CONCAT44(uStack_28c,uStack_290)) {
                        ppppcVar26 = (char ****)local_2a8;
                      }
                      lVar15 = FUN_140086de0(param_3,ppppcVar26,
                                             (char *)((longlong)ppppcVar26 +
                                                     CONCAT44(uStack_294,local_298)));
                      if (*(char *)(lVar15 + 8) == '\x04') {
                        FUN_140085cc0(lVar15,local_e0);
                        if (local_d0 != 0) {
                          FUN_140016600(&local_1e8,local_1a0);
                          uVar11 = FUN_140018c60(&local_1e8,local_e0);
                          FUN_140016600(local_120,uVar11);
                          FUN_140016770(&local_1e8);
                          cVar8 = FUN_140060f20(local_120);
                          if (cVar8 != '\0') {
                            uVar11 = FUN_140018ce0(local_120,&local_288);
                            FUN_140016fc0(&local_1e8,uVar11);
                            FUN_1400187b0(&local_1e8);
                            FUN_140084fe0(&local_230,&local_1e8);
                            FUN_140085610(lVar15,&local_230);
                            FUN_140085440(&local_230);
                            FUN_140017240(&local_1e8);
                            FUN_140017240(&local_288);
                          }
                          FUN_140016770(local_120);
                        }
                        FUN_140017240(local_e0);
                      }
                    }
                    FUN_140017240(local_c0);
                  }
                }
                FUN_140017240(&local_2a8);
              }
              FUN_14000dcc0(&local_258);
              FUN_140016770(local_1a0);
            }
          }
          lVar13 = 0;
          plVar16 = (longlong *)FUN_140087490(local_90,"title","");
          if (plVar16 == (longlong *)0x0) {
            plVar16 = (longlong *)FUN_140084ac0();
          }
          lVar15 = *plVar16;
          if ((lVar15 != 0) && (lVar13 = lVar15, (*(uint *)(plVar16 + 1) >> 8 & 1) != 0)) {
            lVar13 = lVar15 + 4;
          }
          FUN_140084f50(&local_230,lVar13);
          uVar11 = FUN_140086de0(plVar33,"title","");
          FUN_140085610(uVar11,&local_230);
          FUN_140085440(&local_230);
          lVar13 = FUN_140086de0(plVar33,"general","");
          if (*(char *)(lVar13 + 8) == '\a') {
            puVar12 = (undefined8 *)FUN_140086de0(lVar13,"properties","");
            plVar16 = *(longlong **)*puVar12;
            plVar27 = (longlong *)*plVar16;
            if (plVar27 != plVar16) {
              param_3 = (char *)0x726f746365726964;
              do {
                if ((char)plVar27[7] == '\a') {
                  lVar13 = FUN_140087490(plVar27 + 6,&DAT_140474874,&DAT_140474878);
                  if (lVar13 != 0) {
                    plVar17 = (longlong *)FUN_140086de0(plVar27 + 6,&DAT_140474874,&DAT_140474878);
                    if ((char)*(uint *)(plVar17 + 1) == '\x04') {
                      lVar13 = *plVar17;
                      if ((lVar13 != 0) && ((*(uint *)(plVar17 + 1) >> 8 & 1) != 0)) {
                        lVar13 = lVar13 + 4;
                      }
                      iVar9 = FUN_1402c10d0(lVar13,"usershortcut");
                      if (iVar9 == 0) {
                        uVar11 = FUN_140086de0(plVar33,"presetproperties","");
                        ppppcVar22 = (char ****)plVar27[4];
                        pppcStack_2a0 = (char ***)strlen((char *)ppppcVar22);
                        local_2a8 = (char ***)ppppcVar22;
                        FUN_1400878f0(uVar11,&local_2a8);
                      }
                    }
                  }
                  lVar13 = FUN_140087490(plVar27 + 6,"value","");
                  if ((lVar13 != 0) &&
                     (lVar13 = FUN_140086de0(plVar27 + 6,"value",""),
                     *(char *)(lVar13 + 8) == '\x04')) {
                    FUN_140085cc0(lVar13,local_160);
                    pppplVar18 = local_160;
                    if (0xf < local_148) {
                      pppplVar18 = (longlong ****)local_160[0];
                    }
                    if (local_150 < 5) {
LAB_14010b2aa:
                      pppplVar18 = local_160;
                      if (0xf < local_148) {
                        pppplVar18 = (longlong ****)local_160[0];
                      }
                      if ((3 < local_150) && (*(int *)pppplVar18 == 0x3a626577)) goto LAB_14010b307;
                      pppplVar18 = local_160;
                      if (0xf < local_148) {
                        pppplVar18 = (longlong ****)local_160[0];
                      }
                      if ((3 < local_150) && (*(int *)pppplVar18 == 0x3a646d63)) goto LAB_14010b307;
                      pppplVar18 = local_160;
                      if (0xf < local_148) {
                        pppplVar18 = (longlong ****)local_160[0];
                      }
                      if (9 < local_150) {
                        lVar13 = (longlong)*pppplVar18 + -0x726f746365726964;
                        if (lVar13 == 0) {
                          lVar13 = (ulonglong)*(ushort *)(pppplVar18 + 1) - 0x3a79;
                        }
                        if (lVar13 == 0) goto LAB_14010b307;
                      }
                    }
                    else {
                      iVar9 = *(int *)pppplVar18 + -0x656c6966;
                      if (iVar9 == 0) {
                        iVar9 = *(byte *)((longlong)pppplVar18 + 4) - 0x3a;
                      }
                      if (iVar9 != 0) goto LAB_14010b2aa;
LAB_14010b307:
                      uVar11 = FUN_140086de0(plVar33,"presetproperties","");
                      ppppcVar22 = (char ****)plVar27[4];
                      pppcStack_250 = (char ***)strlen((char *)ppppcVar22);
                      local_258 = (char ***)ppppcVar22;
                      FUN_1400878f0(uVar11,&local_258);
                    }
                    FUN_140017240(local_160);
                  }
                }
                plVar17 = (longlong *)plVar27[2];
                if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
                  cVar8 = *(char *)(*plVar17 + 0x19);
                  plVar27 = plVar17;
                  while (cVar8 == '\0') {
                    plVar27 = (longlong *)*plVar27;
                    cVar8 = *(char *)(*plVar27 + 0x19);
                  }
                }
                else {
                  cVar8 = *(char *)(plVar27[1] + 0x19);
                  plVar7 = (longlong *)plVar27[1];
                  plVar17 = plVar27;
                  while ((plVar27 = plVar7, cVar8 == '\0' && (plVar17 == (longlong *)plVar27[2]))) {
                    cVar8 = *(char *)(plVar27[1] + 0x19);
                    plVar7 = (longlong *)plVar27[1];
                    plVar17 = plVar27;
                  }
                }
                uVar31 = 0x3a79;
              } while (plVar27 != plVar16);
            }
          }
        }
        FUN_140085440(local_68);
        FUN_140085440(local_90);
      }
      if (0xf < local_128) {
        lVar15 = CONCAT71(uStack_13f,local_140);
        uVar24 = local_128 + 1;
        lVar13 = lVar15;
        if (0xfff < uVar24) {
          lVar13 = *(longlong *)(lVar15 + -8);
          if (0x1f < (lVar15 - lVar13) - 8U) goto LAB_14010b531;
          uVar24 = local_128 + 0x28;
        }
        thunk_FUN_14028af80(lVar13,uVar24);
      }
      local_130 = 0;
      local_128 = 0xf;
      local_140 = 0;
      if (0xf < local_1f0) {
        lVar15 = CONCAT71(uStack_207,local_208);
        uVar24 = local_1f0 + 1;
        lVar13 = lVar15;
        if (0xfff < uVar24) {
          lVar13 = *(longlong *)(lVar15 + -8);
          if (0x1f < (lVar15 - lVar13) - 8U) goto LAB_14010b531;
          uVar24 = local_1f0 + 0x28;
        }
        thunk_FUN_14028af80(lVar13,uVar24);
      }
      local_1f8 = 0;
      local_1f0 = 0xf;
      local_208 = 0;
      FUN_140016770(local_1c0);
      puVar23 = auStack_2c8;
      if (local_e8 < 0x10) goto LAB_14010b4b4;
      uVar24 = local_e8 + 1;
      lVar13 = local_100[0];
      if (0xfff < uVar24) {
        lVar13 = *(longlong *)(local_100[0] + -8);
        if (0x1f < (local_100[0] - lVar13) - 8U) goto LAB_14010b531;
        uVar24 = local_e8 + 0x28;
      }
      thunk_FUN_14028af80(lVar13,uVar24);
      puVar23 = auStack_2c8;
      goto LAB_14010b4b4;
    }
  }
  else {
    lVar15 = CONCAT71(uStack_207,local_208);
    uVar24 = local_1f0 + 1;
    lVar13 = lVar15;
    if (uVar24 < 0x1000) {
LAB_14010a666:
      thunk_FUN_14028af80(lVar13,uVar24);
      goto LAB_14010a66b;
    }
    lVar13 = *(longlong *)(lVar15 + -8);
    plVar33 = param_1;
    if ((lVar15 - lVar13) - 8U < 0x20) {
      uVar24 = local_1f0 + 0x28;
      goto LAB_14010a666;
    }
LAB_14010b531:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar29 = auStack_2c0;
    param_1 = plVar33;
  }
  *(undefined8 *)(puVar29 + -8) = 0x14010b540;
  sVar10 = strlen(param_3);
  *(undefined8 *)(puVar29 + -8) = 0x14010b552;
  FUN_14000f880(param_1 + 0x20,param_3,sVar10);
  puVar29[0x48] = 7;
  *(uint *)(puVar29 + 0x48) = *(uint *)(puVar29 + 0x48) & 0xfffffeff;
  *(undefined8 *)(puVar29 + 0x50) = 0;
  *(undefined8 *)(puVar29 + 0x58) = 0;
  *(ulonglong *)(puVar29 + 0x60) = uVar31;
  *(undefined8 *)(puVar29 + -8) = 0x14010b577;
  puVar20 = (ulonglong *)FUN_14028af20(0x10);
  *puVar20 = uVar31;
  puVar20[1] = uVar31;
  *(undefined8 *)(puVar29 + -8) = 0x14010b58b;
  uVar24 = FUN_14028af20(0x58);
  *(ulonglong **)(puVar29 + 0x40) = puVar20;
  *(ulonglong *)uVar24 = uVar24;
  *(ulonglong *)(uVar24 + 8) = uVar24;
  *(ulonglong *)(uVar24 + 0x10) = uVar24;
  *(undefined2 *)(uVar24 + 0x18) = 0x101;
  *puVar20 = uVar24;
  *(undefined8 *)(puVar29 + -8) = 0x14010b5b2;
  FUN_140085610(param_1 + 2,puVar29 + 0x40);
  switch(puVar29[0x48]) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((*(uint *)(puVar29 + 0x48) >> 8 & 1) != 0) {
      *(undefined8 *)(puVar29 + -8) = 0x14010b5e4;
      thunk_FUN_1402d9040(*(undefined8 *)(puVar29 + 0x40));
    }
    break;
  case 6:
  case 7:
    lVar13 = *(longlong *)(puVar29 + 0x40);
    if (lVar13 != 0) {
      *(undefined8 *)(puVar29 + -8) = 0x14010b5f8;
      FUN_140088e40(lVar13);
      *(undefined8 *)(puVar29 + -8) = 0x14010b605;
      thunk_FUN_14028af80(lVar13,0x10);
    }
    break;
  default:
    *(undefined8 *)(puVar29 + -8) = 0x14010b620;
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  lVar13 = *(longlong *)(puVar29 + 0x50);
  if (lVar13 != 0) {
    *(undefined8 *)(puVar29 + -8) = 0x14010b633;
    FUN_140017240(lVar13 + 0x40);
    *(undefined8 *)(puVar29 + -8) = 0x14010b63c;
    FUN_140017240(lVar13 + 0x20);
    *(undefined8 *)(puVar29 + -8) = 0x14010b644;
    FUN_140017240(lVar13);
    *(undefined8 *)(puVar29 + -8) = 0x14010b651;
    thunk_FUN_14028af80(lVar13,0x60);
  }
  puVar29[0x48] = 5;
  uVar30 = *(uint *)(puVar29 + 0x48);
  puVar29[0x40] = 1;
  *(undefined8 *)(puVar29 + -8) = 0x14010b67a;
  puVar12 = (undefined8 *)FUN_140086de0(param_1 + 2,"local","");
  uVar3 = *(undefined4 *)(puVar12 + 1);
  *(uint *)(puVar12 + 1) = uVar30 & 0xfffffeff;
  uVar11 = *puVar12;
  *(undefined4 *)(puVar29 + 0x48) = uVar3;
  *puVar12 = *(undefined8 *)(puVar29 + 0x40);
  uVar19 = puVar12[2];
  puVar12[2] = uVar31;
  *(undefined8 *)(puVar29 + 0x50) = uVar19;
  *(undefined8 *)(puVar29 + 0x58) = puVar12[3];
  *(undefined8 *)(puVar29 + 0x60) = puVar12[4];
  *(undefined8 *)(puVar29 + 0x40) = uVar11;
  puVar12[3] = uVar31;
  puVar12[4] = uVar31;
  *(undefined8 *)(puVar29 + -8) = 0x14010b6c5;
  FUN_140085440(puVar29 + 0x40);
  pcVar4 = *(code **)(*param_1 + 0x20);
  *(undefined8 *)(puVar29 + -8) = 0x14010b6cf;
  iVar9 = (*pcVar4)(param_1);
  puVar23 = puVar29;
  if (iVar9 == 2) {
    *(undefined8 *)(puVar29 + -8) = 0x14010b6e0;
    FUN_140084f50(&local_230);
    *(undefined8 *)(puVar29 + -8) = 0x14010b6f7;
    uVar11 = FUN_140086de0(param_1 + 2,"title","");
    *(undefined8 *)(puVar29 + -8) = 0x14010b703;
    FUN_140085610(uVar11,&local_230);
    *(undefined8 *)(puVar29 + -8) = 0x14010b70c;
    FUN_140085440(&local_230);
  }
  else {
    *(undefined8 *)(puVar29 + -8) = 0x14010b71d;
    uVar11 = FUN_140060990(local_100,param_3);
    *(undefined8 *)(puVar29 + -8) = 0x14010b729;
    uVar11 = FUN_14003fbc0(uVar11,local_1a0);
    *(undefined8 *)(puVar29 + -8) = 0x14010b736;
    uVar11 = FUN_140018ce0(uVar11,puVar29 + 0x40);
    *(undefined8 *)(puVar29 + -8) = 0x14010b742;
    FUN_140084fe0(&local_230,uVar11);
    *(undefined8 *)(puVar29 + -8) = 0x14010b759;
    uVar11 = FUN_140086de0(param_1 + 2,"title","");
    *(undefined8 *)(puVar29 + -8) = 0x14010b765;
    FUN_140085610(uVar11,&local_230);
    *(undefined8 *)(puVar29 + -8) = 0x14010b76e;
    FUN_140085440(&local_230);
    *(undefined8 *)(puVar29 + -8) = 0x14010b778;
    FUN_140017240(puVar29 + 0x40);
    *(undefined8 *)(puVar29 + -8) = 0x14010b781;
    FUN_140016770(local_1a0);
    *(undefined8 *)(puVar29 + -8) = 0x14010b78d;
    FUN_140016770(local_100);
  }
LAB_14010b4b4:
  pcVar4 = *(code **)(*param_1 + 0x90);
  *(undefined8 *)(puVar23 + -8) = 0x14010b4c5;
  uVar11 = (*pcVar4)(param_1,&local_230);
  *(undefined8 *)(puVar23 + -8) = 0x14010b4df;
  uVar19 = FUN_140086de0(param_1 + 7,"wproperties","");
  *(undefined8 *)(puVar23 + -8) = 0x14010b4ea;
  FUN_140085610(uVar19,uVar11);
  *(undefined8 *)(puVar23 + -8) = 0x14010b4f3;
  FUN_140085440(&local_230);
  pcVar4 = *(code **)(*param_1 + 0x20);
  *(undefined8 *)(puVar23 + -8) = 0x14010b4fd;
  iVar9 = (*pcVar4)(param_1);
  if (iVar9 == 1) {
    *(undefined8 *)(puVar23 + -8) = 0x14010b51d;
    uVar11 = FUN_140086de0(param_1 + 7,"initalwproperties","");
    uVar31 = local_238;
    *(undefined8 *)(puVar23 + -8) = 0x14010b52c;
    FUN_140085520(uVar11,local_238);
  }
  else {
    *(undefined8 *)(puVar23 + -8) = 0x14010b7a5;
    uVar11 = FUN_140086de0(param_1 + 7,"wproperties","");
    uVar31 = local_238;
    *(undefined8 *)(puVar23 + -8) = 0x14010b7b4;
    FUN_140109f80(uVar11,local_238);
  }
  puVar12 = (undefined8 *)param_1[0x16];
  for (puVar28 = (undefined8 *)param_1[0x15]; puVar28 != puVar12; puVar28 = puVar28 + 1) {
    uVar11 = *puVar28;
    *(undefined8 *)(puVar23 + -8) = 0x14010b7db;
    FUN_14011cf10(uVar11,uVar31);
  }
  *(undefined8 *)(puVar23 + -8) = 0x14010b7fe;
  uVar11 = FUN_140086de0(param_4,"general","");
  *(undefined8 *)(puVar23 + -8) = 0x14010b818;
  uVar19 = FUN_140086de0(param_1 + 7,"general","");
  *(undefined8 *)(puVar23 + -8) = 0x14010b823;
  FUN_140085520(uVar19,uVar11);
  *(undefined8 *)(puVar23 + -8) = 0x14010b82c;
  FUN_140016770(local_180);
  return 1;
LAB_14010a8f0:
  psVar1 = psVar32 + -1;
  if (psVar32[-1] == 0x5c) goto LAB_14010a90d;
  if ((psVar32[-1] == 0x2f) || (psVar32 = psVar1, psVar14 == psVar1)) goto LAB_14010a90d;
  goto LAB_14010a8f0;
LAB_14010a9f0:
  psVar1 = psVar32 + -1;
  if (psVar32[-1] == 0x5c) goto LAB_14010aa0d;
  if ((psVar32[-1] == 0x2f) || (psVar32 = psVar1, psVar14 == psVar1)) goto LAB_14010aa0d;
  goto LAB_14010a9f0;
}

