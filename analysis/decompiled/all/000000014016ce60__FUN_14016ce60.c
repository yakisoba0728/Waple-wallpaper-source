// Function: FUN_14016ce60
// Addr: 14016ce60
// Size: 4645 bytes


/* WARNING: Removing unreachable block (ram,0x00014016d64c) */
/* WARNING: Removing unreachable block (ram,0x00014016d70c) */
/* WARNING: Removing unreachable block (ram,0x00014016d728) */
/* WARNING: Removing unreachable block (ram,0x00014016d924) */
/* WARNING: Removing unreachable block (ram,0x00014016d943) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016ce60(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char *pcVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *plVar14;
  char cVar15;
  int iVar16;
  char *pcVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ulonglong *puVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  undefined8 *******pppppppuVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined8 *******pppppppuVar28;
  ulonglong uVar29;
  undefined8 ******ppppppuVar30;
  char *_Str1;
  longlong *plVar31;
  byte *_Str2;
  undefined1 *puVar32;
  char *pcVar33;
  longlong *plVar34;
  bool bVar35;
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [24];
  undefined4 local_288;
  char *local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  ulonglong local_260;
  uint local_258;
  char cStack_254;
  char cStack_253;
  char cStack_252;
  char acStack_251 [5];
  undefined4 uStack_24c;
  undefined8 local_248;
  ulonglong local_240;
  longlong local_238;
  uint local_230;
  undefined8 *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined4 local_210 [2];
  undefined8 *******local_208;
  undefined8 ******ppppppuStack_200;
  undefined8 ******local_1f8;
  undefined8 ******local_1f0;
  undefined4 local_1e8;
  undefined4 local_1d8 [2];
  ulonglong local_1d0;
  ulonglong uStack_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong uStack_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  ulonglong local_178;
  undefined1 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  longlong lStack_160;
  longlong local_158;
  char *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  local_d8 = 0;
  local_a8 = 0;
  lVar18 = *(longlong *)ThreadLocalStoragePointer;
  local_80 = 0;
  local_78 = 0;
  local_d0 = 0;
  local_c8 = 0;
  lStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_70 = 0;
  if ((*(int *)(lVar18 + 0x130) < DAT_1404e9600) &&
     (FUN_14028b140(&DAT_1404e9600), DAT_1404e9600 == -1)) {
    FUN_1400de280(&DAT_1404e9608,"^uniform[\\s]+(sampler[\\w]*)[\\s]+g_Texture([\\d]+)");
    FUN_14028b410(&LAB_140424df0);
    _Init_thread_footer(&DAT_1404e9600);
  }
  if ((*(int *)(lVar18 + 0x130) < DAT_1404e9630) &&
     (FUN_14028b140(&DAT_1404e9630), DAT_1404e9630 == -1)) {
    FUN_14028b410(FUN_140424d80);
    _Init_thread_footer(&DAT_1404e9630);
  }
  if ((*(int *)(lVar18 + 0x130) < DAT_1404e9634) &&
     (FUN_14028b140(&DAT_1404e9634), DAT_1404e9634 == -1)) {
    FUN_14028b410(FUN_140424d10);
    _Init_thread_footer(&DAT_1404e9634);
  }
  if ((*(int *)(lVar18 + 0x130) < DAT_1404e9638) &&
     (FUN_14028b140(&DAT_1404e9638), DAT_1404e9638 == -1)) {
    FUN_14028b410(FUN_140424ca0);
    _Init_thread_footer(&DAT_1404e9638);
  }
  uVar13 = DAT_1404dfd10;
  pcVar17 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar17 = *(char **)param_1;
  }
  pcVar33 = pcVar17 + *(longlong *)(param_1 + 0x10);
joined_r0x00014016cf67:
  while (pcVar11 = pcVar17, puVar32 = auStack_2a8, pcVar17 = pcVar11, pcVar11 < pcVar33) {
    do {
      if (*pcVar17 == '\n') break;
      pcVar17 = pcVar17 + 1;
    } while (pcVar17 < pcVar33);
    uVar26 = (longlong)pcVar17 - (longlong)pcVar11;
    uVar29 = uVar26;
    if ((uVar26 != 0) && (uVar29 = uVar26 - 1, pcVar17[-1] != '\r')) {
      uVar29 = uVar26;
    }
    local_148 = pcVar33;
    if (pcVar17 < pcVar33) {
      local_148 = pcVar17 + 1;
    }
    cVar15 = *pcVar11;
    pcVar1 = pcVar11 + uVar29;
    _Str1 = pcVar11;
    while ((cVar15 != '\0' && ((*_Str1 == ' ' || (*_Str1 == '\t'))))) {
      _Str1 = _Str1 + 1;
      cVar15 = *_Str1;
    }
    pcVar17 = local_148;
    if (_Str1 < pcVar1) {
      iVar16 = strncmp(_Str1,"uniform",7);
      if (iVar16 == 0) {
        lVar18 = 0;
        local_288 = 0;
        local_280 = _Str1;
        cVar15 = FUN_1400deb10(_Str1,pcVar1,&local_d8,&DAT_1404e9608);
        pcVar17 = local_148;
        if ((cVar15 != '\0') && (2 < (ulonglong)((lStack_c0 - local_c8) / 0x18))) {
          lVar20 = lVar18;
          if (*(char *)(local_c8 + 0x40) != '\0') {
            lVar18 = *(longlong *)(local_c8 + 0x30);
            lVar20 = *(longlong *)(local_c8 + 0x38);
          }
          local_268 = 0;
          local_260 = 0;
          local_278 = (undefined8 *)0x0;
          uStack_270 = 0;
          if (lVar18 == lVar20) {
            local_260 = 0xf;
            local_278 = (undefined8 *)0x0;
            puVar19 = &local_278;
          }
          else {
            FUN_140017480(&local_278,lVar18,lVar20 - lVar18);
            puVar19 = &local_278;
            if (0xf < local_260) {
              puVar19 = local_278;
            }
          }
          local_210[0] = FUN_1402c82c0(puVar19);
          if (0xf < local_260) {
            uVar26 = local_260 + 1;
            puVar19 = local_278;
            if (uVar26 < 0x1000) {
LAB_14016d101:
              thunk_FUN_14028af80(puVar19,uVar26);
              goto LAB_14016d106;
            }
            puVar19 = (undefined8 *)local_278[-1];
            if ((ulonglong)((longlong)local_278 + (-8 - (longlong)puVar19)) < 0x20) {
              uVar26 = local_260 + 0x28;
              goto LAB_14016d101;
            }
            goto LAB_14016df67;
          }
LAB_14016d106:
          if ((uVar29 < 2) ||
             (pcVar17 = (char *)thunk_FUN_14028e750(pcVar11,pcVar1,&DAT_14048ba14,2),
             pcVar17 == pcVar1)) {
            lVar18 = -1;
          }
          else {
            lVar18 = (longlong)pcVar17 - (longlong)pcVar11;
          }
          pcVar17 = local_148;
          if (lVar18 != -1) {
            local_230 = (local_230 >> 8 & 0xfffffe) << 8;
            plVar24 = (longlong *)0x0;
            local_218 = 0;
            local_228 = (undefined8 *)0x0;
            uStack_220 = 0;
            cVar15 = FUN_1401668f0(pcVar11 + lVar18 + 2,pcVar1,&local_238);
            if ((cVar15 != '\0') && ((char)local_230 == '\a')) {
              local_1c0 = 0;
              local_1b8 = 0xf;
              local_278 = (undefined8 *)s_material_14048ba08._0_8_;
              local_268 = 8;
              uStack_1c8 = 0;
              local_1d0 = 0;
              uStack_1a8 = 0;
              local_1a0 = 0;
              uStack_188 = 0;
              local_198 = 0xf;
              local_1b0 = 0;
              local_180 = 0;
              local_178 = 0xf;
              local_190 = 0;
              local_170 = 0;
              local_16c = 0;
              local_168 = 0;
              lStack_160 = 0;
              local_158 = 0;
              local_1d8[0] = local_210[0];
              local_260 = 0xf;
              uStack_270 = 0;
              lVar18 = FUN_140087490(&local_238,&local_278,&uStack_270);
              if (0xf < local_260) {
                uVar29 = local_260 + 1;
                puVar19 = local_278;
                if (0xfff < uVar29) {
                  puVar19 = (undefined8 *)local_278[-1];
                  if (0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)puVar19)))
                  goto LAB_14016df67;
                  uVar29 = local_260 + 0x28;
                }
                thunk_FUN_14028af80(puVar19,uVar29);
              }
              local_268 = 0;
              local_260 = 0xf;
              local_278 = (undefined8 *)((ulonglong)local_278 & 0xffffffffffffff00);
              if ((lVar18 != 0) && (*(char *)(lVar18 + 8) == '\x04')) {
                puVar19 = (undefined8 *)FUN_140085cc0(lVar18,&local_258);
                if (&local_190 != puVar19) {
                  if (0xf < local_178) {
                    FUN_140017200(&local_190,local_190);
                  }
                  local_190 = *puVar19;
                  uStack_188 = puVar19[1];
                  local_180 = puVar19[2];
                  local_178 = puVar19[3];
                  puVar19[2] = 0;
                  puVar19[3] = 0xf;
                  *(undefined1 *)puVar19 = 0;
                }
                FUN_140017240(&local_258);
              }
              local_268 = 7;
              uStack_270 = 0;
              local_260 = 0xf;
              local_278 = (undefined8 *)
                          (ulonglong)
                          CONCAT16(s_default_140476ef8[6],
                                   CONCAT24(s_default_140476ef8._4_2_,s_default_140476ef8._0_4_));
              lVar18 = FUN_140087490(&local_238,&local_278,(longlong)&local_278 + 7);
              FUN_140017240(&local_278);
              local_240 = 0xf;
              local_248 = 5;
              cStack_252 = '\0';
              acStack_251[0] = '\0';
              acStack_251[1] = '\0';
              acStack_251[2] = '\0';
              acStack_251[3] = '\0';
              acStack_251[4] = 0;
              uStack_24c = 0;
              local_258._0_1_ = s_combo_140488bec[0];
              local_258._1_1_ = s_combo_140488bec[1];
              local_258._2_1_ = s_combo_140488bec[2];
              local_258._3_1_ = s_combo_140488bec[3];
              cStack_254 = s_combo_140488bec[4];
              cStack_253 = '\0';
              lVar20 = FUN_140087490(&local_238,&local_258,&cStack_253);
              if (0xf < local_240) {
                lVar4 = CONCAT17(acStack_251[0],
                                 CONCAT16(cStack_252,
                                          CONCAT15(cStack_253,CONCAT14(cStack_254,local_258))));
                uVar29 = local_240 + 1;
                lVar27 = lVar4;
                if (0xfff < uVar29) {
                  lVar27 = *(longlong *)(lVar4 + -8);
                  if (0x1f < (lVar4 - lVar27) - 8U) goto LAB_14016df67;
                  uVar29 = local_240 + 0x28;
                }
                thunk_FUN_14028af80(lVar27,uVar29);
              }
              local_248 = 0;
              local_240 = 0xf;
              local_258 = local_258 & 0xffffff00;
              if ((lVar18 == 0) || (*(char *)(lVar18 + 8) != '\x04')) {
                local_268 = 0;
                uStack_270 = 0;
                local_278 = (undefined8 *)0x0;
                puVar21 = &local_278;
                bVar5 = true;
                local_260 = 0xf;
LAB_14016d485:
                if (0xf < local_1b8) {
                  uVar26 = local_1b8 + 1;
                  uVar29 = local_1d0;
                  if (0xfff < uVar26) {
                    uVar29 = *(ulonglong *)(local_1d0 - 8);
                    if (0x1f < (local_1d0 - uVar29) - 8) goto LAB_14016df67;
                    uVar26 = local_1b8 + 0x28;
                  }
                  thunk_FUN_14028af80(uVar29,uVar26);
                }
                local_1c0 = 0;
                local_1b8 = 0xf;
                local_1d0 = local_1d0 & 0xffffffffffffff00;
                local_1d0 = *puVar21;
                uStack_1c8 = puVar21[1];
                local_1c0 = puVar21[2];
                local_1b8 = puVar21[3];
                puVar21[2] = 0;
                puVar21[3] = 0xf;
                *(undefined1 *)puVar21 = 0;
              }
              else {
                bVar6 = true;
                puVar21 = (ulonglong *)FUN_140085cc0(lVar18,local_f8);
                if (&local_1d0 != puVar21) goto LAB_14016d485;
              }
              if ((bVar5) && (bVar5 = false, 0xf < local_260)) {
                FUN_140017200(&local_278,local_278);
              }
              if (bVar6) {
                bVar6 = false;
                FUN_140017240(local_f8);
              }
              if ((lVar20 == 0) || (*(char *)(lVar20 + 8) != '\x04')) {
                local_268 = 0;
                uStack_270 = 0;
                local_278 = (undefined8 *)0x0;
                puVar21 = &local_278;
                bVar7 = true;
                local_260 = 0xf;
LAB_14016d57a:
                if (0xf < local_198) {
                  uVar26 = local_198 + 1;
                  uVar29 = local_1b0;
                  if (0xfff < uVar26) {
                    uVar29 = *(ulonglong *)(local_1b0 - 8);
                    if (0x1f < (local_1b0 - uVar29) - 8) goto LAB_14016df67;
                    uVar26 = local_198 + 0x28;
                  }
                  thunk_FUN_14028af80(uVar29,uVar26);
                }
                local_1a0 = 0;
                local_198 = 0xf;
                local_1b0 = local_1b0 & 0xffffffffffffff00;
                local_1b0 = *puVar21;
                uStack_1a8 = puVar21[1];
                local_1a0 = puVar21[2];
                local_198 = puVar21[3];
                puVar21[2] = 0;
                puVar21[3] = 0xf;
                *(undefined1 *)puVar21 = 0;
              }
              else {
                bVar8 = true;
                puVar21 = (ulonglong *)FUN_140085cc0(lVar20,local_f8);
                if (&local_1b0 != puVar21) goto LAB_14016d57a;
              }
              if ((bVar7) && (bVar7 = false, 0xf < local_260)) {
                FUN_140017200(&local_278,local_278);
              }
              if (bVar8) {
                bVar8 = false;
                FUN_140017240(local_f8);
              }
              plVar22 = (longlong *)FUN_140086de0(&local_238,"components","");
              if ((*(uint *)(plVar22 + 1) & 0xff) == 6) {
                puVar19 = (undefined8 *)*plVar22;
                plVar31 = plVar24;
                if (puVar19 != (undefined8 *)0x0) {
                  plVar31 = *(longlong **)*puVar19;
                }
                if ((undefined8 *)*plVar22 == (undefined8 *)0x0) {
                  plVar34 = (longlong *)0x1;
                  plVar22 = plVar24;
                }
                else {
                  plVar22 = *(longlong **)*plVar22;
                  plVar34 = plVar24;
                }
                while( true ) {
                  if (puVar19 != (undefined8 *)0x0) {
                    bVar35 = plVar31 == plVar22;
                  }
                  else {
                    bVar35 = SUB81(plVar34,0);
                  }
                  if (bVar35 != false) break;
                  if ((char)plVar31[7] == '\a') {
                    local_120 = 0xf;
                    local_128 = 0;
                    cStack_252 = '\0';
                    acStack_251[0] = '\0';
                    acStack_251[1] = '\0';
                    acStack_251[2] = '\0';
                    acStack_251[3] = '\0';
                    acStack_251[4] = 0;
                    uStack_24c = 0;
                    local_108 = 0;
                    cStack_253 = '\0';
                    local_248 = 5;
                    uStack_130 = 0;
                    local_138 = 0;
                    uStack_110 = 0;
                    local_118 = 0;
                    local_258._0_1_ = s_combo_140488bec[0];
                    local_258._1_1_ = s_combo_140488bec[1];
                    local_258._2_1_ = s_combo_140488bec[2];
                    local_258._3_1_ = s_combo_140488bec[3];
                    cStack_254 = s_combo_140488bec[4];
                    local_100 = 0xf;
                    local_240 = 0xf;
                    lVar18 = FUN_140087490(plVar31 + 6,&local_258,&cStack_253);
                    if (0xf < local_240) {
                      lVar27 = CONCAT17(acStack_251[0],
                                        CONCAT16(cStack_252,
                                                 CONCAT15(cStack_253,CONCAT14(cStack_254,local_258))
                                                ));
                      uVar29 = local_240 + 1;
                      lVar20 = lVar27;
                      if (0xfff < uVar29) {
                        lVar20 = *(longlong *)(lVar27 + -8);
                        if (0x1f < (lVar27 - lVar20) - 8U) goto LAB_14016df67;
                        uVar29 = local_240 + 0x28;
                      }
                      thunk_FUN_14028af80(lVar20,uVar29);
                    }
                    local_248 = 0;
                    local_240 = 0xf;
                    local_258 = local_258 & 0xffffff00;
                    if ((lVar18 == 0) || (*(char *)(lVar18 + 8) != '\x04')) {
                      local_260 = 0xf;
                      uStack_270 = 0;
                      local_278 = (undefined8 *)0x0;
                      puVar23 = &local_278;
                      bVar9 = true;
                      local_268 = 0;
LAB_14016d7d3:
                      local_118 = *puVar23;
                      uStack_110 = puVar23[1];
                      local_108 = puVar23[2];
                      puVar23[2] = 0;
                      local_100 = puVar23[3];
                      puVar23[3] = 0xf;
                      *(undefined1 *)puVar23 = 0;
                    }
                    else {
                      bVar10 = true;
                      puVar23 = (undefined8 *)FUN_140085cc0(lVar18,local_f8);
                      if (&local_118 != puVar23) goto LAB_14016d7d3;
                    }
                    if ((bVar9) && (bVar9 = false, 0xf < local_260)) {
                      FUN_140017200(&local_278,local_278);
                    }
                    if (bVar10) {
                      bVar10 = false;
                      FUN_140017240(local_f8);
                    }
                    lVar18 = lStack_160;
                    if (lStack_160 == local_158) {
                      FUN_14007c720(&local_168,lStack_160,&local_138);
                    }
                    else {
                      FUN_140016fc0(lStack_160,&local_138);
                      FUN_140016fc0(lVar18 + 0x20,&local_118);
                      lStack_160 = lStack_160 + 0x40;
                    }
                    FUN_140017240(&local_118);
                    FUN_140017240(&local_138);
                  }
                  plVar24 = (longlong *)plVar31[2];
                  if (*(char *)((longlong)plVar24 + 0x19) == '\0') {
                    cVar15 = *(char *)(*plVar24 + 0x19);
                    plVar31 = plVar24;
                    while (cVar15 == '\0') {
                      plVar31 = (longlong *)*plVar31;
                      cVar15 = *(char *)(*plVar31 + 0x19);
                    }
                  }
                  else {
                    cVar15 = *(char *)(plVar31[1] + 0x19);
                    plVar14 = (longlong *)plVar31[1];
                    plVar24 = plVar31;
                    while ((plVar31 = plVar14, cVar15 == '\0' && (plVar24 == (longlong *)plVar31[2])
                           )) {
                      cVar15 = *(char *)(plVar31[1] + 0x19);
                      plVar14 = (longlong *)plVar31[1];
                      plVar24 = plVar31;
                    }
                  }
                }
              }
              local_258 = (uint)s_formatcombo_14048d0e0._0_7_;
              cStack_254 = SUB71(s_formatcombo_14048d0e0._0_7_,4);
              cStack_253 = SUB71(s_formatcombo_14048d0e0._0_7_,5);
              cStack_252 = SUB71(s_formatcombo_14048d0e0._0_7_,6);
              local_248 = 0xb;
              acStack_251[0] = s_formatcombo_14048d0e0[7];
              acStack_251[1] = s_formatcombo_14048d0e0[8];
              acStack_251[2] = s_formatcombo_14048d0e0[9];
              acStack_251[3] = s_formatcombo_14048d0e0[10];
              uStack_24c = 0;
              local_240 = 0xf;
              acStack_251[4] = 0;
              lVar18 = FUN_140087490(&local_238,&local_258,acStack_251 + 4);
              if (0xf < local_240) {
                lVar27 = CONCAT17(acStack_251[0],
                                  CONCAT16(cStack_252,
                                           CONCAT15(cStack_253,CONCAT14(cStack_254,local_258))));
                uVar29 = local_240 + 1;
                lVar20 = lVar27;
                if (0xfff < uVar29) {
                  lVar20 = *(longlong *)(lVar27 + -8);
                  if (0x1f < (lVar27 - lVar20) - 8U) goto LAB_14016df67;
                  uVar29 = local_240 + 0x28;
                }
                thunk_FUN_14028af80(lVar20,uVar29);
              }
              local_248 = 0;
              local_240 = 0xf;
              local_258 = local_258 & 0xffffff00;
              if ((lVar18 != 0) && (*(char *)(lVar18 + 8) == '\x05')) {
                local_170 = FUN_140086300(lVar18);
              }
              plVar24 = (longlong *)FUN_14016e840(param_2,local_68,local_210);
              FUN_140164d70(*plVar24 + 0x18,local_1d8);
              FUN_14003a630(&local_168);
              FUN_140017240(&local_190);
              FUN_140017240(&local_1b0);
              FUN_140017240(&local_1d0);
            }
            FUN_140085440(&local_238);
            pcVar17 = local_148;
          }
        }
      }
      else {
        pcVar17 = (char *)&DAT_1404dfd00;
        if (0xf < DAT_1404dfd18) {
          pcVar17 = DAT_1404dfd00;
        }
        iVar16 = strncmp(_Str1,pcVar17,(ulonglong)uVar13);
        uVar26 = DAT_1404dfcd0;
        pcVar17 = local_148;
        if (iVar16 == 0) {
          pcVar17 = s_COMBO__1404dfcc0;
          if (0xf < DAT_1404dfcd8) {
            pcVar17 = _s_COMBO__1404dfcc0;
          }
          iVar16 = strncmp(_Str1 + CONCAT44(uRam00000001404dfd14,DAT_1404dfd10),pcVar17,
                           DAT_1404dfcd0 & 0xffffffff);
          uVar12 = DAT_1404dfcf0;
          if (iVar16 == 0) {
            local_230 = (local_230 >> 8 & 0xfffffe) << 8;
            local_218 = 0;
            local_228 = (undefined8 *)0x0;
            uStack_220 = 0;
            cVar15 = FUN_1401668f0(_Str1 + (longlong)(int)uVar13 + uVar26,pcVar1,&local_238);
            if (cVar15 == '\0') {
              switch((char)local_230) {
              case '\0':
              case '\x01':
              case '\x02':
              case '\x03':
              case '\x05':
                break;
              case '\x04':
switchD_14016dac8_caseD_4:
                if ((local_230 >> 8 & 1) != 0) {
                  thunk_FUN_1402d9040(local_238);
                }
                break;
              case '\x06':
              case '\a':
switchD_14016dac8_caseD_6:
                lVar18 = local_238;
                if (local_238 != 0) {
                  FUN_140088e40(local_238);
                  thunk_FUN_14028af80(lVar18,0x10);
                }
                break;
              default:
switchD_14016dac8_default:
                FID_conflict__assert
                          (L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
              }
switchD_14016dac8_caseD_0:
              puVar19 = local_228;
              local_238 = 0;
              pcVar17 = local_148;
              if (local_228 != (undefined8 *)0x0) {
                FUN_140017240(local_228 + 8);
                FUN_140017240(puVar19 + 4);
                FUN_140017240(puVar19);
                uVar29 = 0x60;
                goto LAB_14016df48;
              }
            }
            else {
              local_268 = 5;
              uStack_270 = 0;
              local_260 = 0xf;
              local_278 = (undefined8 *)
                          (ulonglong)CONCAT14(s_combo_140488bec[4],s_combo_140488bec._0_4_);
              lVar18 = FUN_140087490(&local_238,&local_278,(longlong)&local_278 + 5);
              if (0xf < local_260) {
                uVar29 = local_260 + 1;
                puVar19 = local_278;
                if (0xfff < uVar29) {
                  puVar19 = (undefined8 *)local_278[-1];
                  if (0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)puVar19)))
                  goto LAB_14016df67;
                  uVar29 = local_260 + 0x28;
                }
                thunk_FUN_14028af80(puVar19,uVar29);
              }
              local_268 = 0;
              local_260 = 0xf;
              local_278 = (undefined8 *)((ulonglong)local_278 & 0xffffffffffffff00);
              if ((lVar18 == 0) || (*(char *)(lVar18 + 8) != '\x04')) {
                switch((char)local_230) {
                case '\0':
                case '\x01':
                case '\x02':
                case '\x03':
                case '\x05':
                  goto switchD_14016dac8_caseD_0;
                case '\x04':
                  goto switchD_14016dac8_caseD_4;
                case '\x06':
                case '\a':
                  goto switchD_14016dac8_caseD_6;
                default:
                  goto switchD_14016dac8_default;
                }
              }
              local_258._0_1_ = s_default_140476ef8[0];
              local_258._1_1_ = s_default_140476ef8[1];
              local_258._2_1_ = s_default_140476ef8[2];
              local_258._3_1_ = s_default_140476ef8[3];
              cStack_254 = (char)s_default_140476ef8._4_2_;
              cStack_253 = SUB21(s_default_140476ef8._4_2_,1);
              cStack_252 = s_default_140476ef8[6];
              local_248 = 7;
              acStack_251[4] = 0;
              uStack_24c = 0;
              local_240 = 0xf;
              acStack_251[0] = '\0';
              acStack_251[1] = '\0';
              acStack_251[2] = '\0';
              acStack_251[3] = '\0';
              lVar20 = FUN_140087490(&local_238,&local_258,acStack_251);
              if (0xf < local_240) {
                FUN_140017200(&local_258,
                              CONCAT17(acStack_251[0],
                                       CONCAT16(cStack_252,
                                                CONCAT15(cStack_253,CONCAT14(cStack_254,local_258)))
                                      ));
              }
              local_248 = 0;
              ppppppuStack_200 = (undefined8 ******)0x0;
              local_208 = (undefined8 *******)0x0;
              local_240 = 0xf;
              local_258 = local_258 & 0xffffff00;
              local_1f8 = (undefined8 ******)0x0;
              local_1f0 = (undefined8 ******)0xf;
              local_1e8 = 0;
              pppppppuVar25 = (undefined8 *******)FUN_140085cc0(lVar18,local_f8);
              if (&local_208 != (undefined8 ********)pppppppuVar25) {
                if ((undefined8 ******)0xf < local_1f0) {
                  ppppppuVar30 = (undefined8 ******)((longlong)local_1f0 + 1);
                  pppppppuVar28 = local_208;
                  if ((undefined8 ******)0xfff < ppppppuVar30) {
                    pppppppuVar28 = (undefined8 *******)local_208[-1];
                    if (0x1f < (ulonglong)((longlong)local_208 + (-8 - (longlong)pppppppuVar28)))
                    goto LAB_14016df67;
                    ppppppuVar30 = local_1f0 + 5;
                  }
                  thunk_FUN_14028af80(pppppppuVar28,ppppppuVar30);
                }
                local_208 = (undefined8 *******)*pppppppuVar25;
                ppppppuStack_200 = pppppppuVar25[1];
                local_1f8 = pppppppuVar25[2];
                local_1f0 = pppppppuVar25[3];
                pppppppuVar25[2] = (undefined8 ******)0x0;
                pppppppuVar25[3] = (undefined8 ******)0xf;
                *(undefined1 *)pppppppuVar25 = 0;
              }
              FUN_140017240(local_f8);
              if ((lVar20 == 0) || (cVar15 = FUN_1400886e0(lVar20), cVar15 == '\0')) {
                local_1e8 = 0;
              }
              else {
                local_1e8 = FUN_140085ee0(lVar20);
              }
              plVar24 = (longlong *)FUN_14016e5e0(param_3,local_58,&local_208);
              lVar18 = *plVar24;
              pppppppuVar25 = (undefined8 *******)(lVar18 + 0x30);
              if ((undefined8 ********)pppppppuVar25 != &local_208) {
                pppppppuVar28 = &local_208;
                if ((undefined8 ******)0xf < local_1f0) {
                  pppppppuVar28 = local_208;
                }
                FUN_14000f880(pppppppuVar25,pppppppuVar28,local_1f8);
              }
              *(undefined4 *)(lVar18 + 0x50) = local_1e8;
              if ((undefined8 ******)0xf < local_1f0) {
                ppppppuVar30 = (undefined8 ******)((longlong)local_1f0 + 1);
                pppppppuVar25 = local_208;
                if ((undefined8 ******)0xfff < ppppppuVar30) {
                  pppppppuVar25 = (undefined8 *******)local_208[-1];
                  if (0x1f < (ulonglong)((longlong)local_208 + (-8 - (longlong)pppppppuVar25)))
                  goto LAB_14016df67;
                  ppppppuVar30 = local_1f0 + 5;
                }
                thunk_FUN_14028af80(pppppppuVar25,ppppppuVar30);
              }
              local_1f8 = (undefined8 ******)0x0;
              local_1f0 = (undefined8 ******)0xf;
              local_208 = (undefined8 *******)((ulonglong)local_208 & 0xffffffffffffff00);
              FUN_140085440(&local_238);
              pcVar17 = local_148;
            }
          }
          else {
            pcVar17 = s_PASS__1404dfce0;
            if (0xf < DAT_1404dfcf8) {
              pcVar17 = _s_PASS__1404dfce0;
            }
            iVar16 = strncmp(_Str1 + (int)uVar13,pcVar17,DAT_1404dfcf0 & 0xffffffff);
            pcVar17 = local_148;
            if (iVar16 == 0) {
              _Str2 = (byte *)(_Str1 + (longlong)(int)uVar13 + uVar12);
              bVar2 = *_Str2;
              while ((bVar2 != 0 && ((*_Str2 == 0x20 || (*_Str2 == 9))))) {
                _Str2 = _Str2 + 1;
                bVar2 = *_Str2;
              }
              iVar16 = strncmp("shadow",(char *)_Str2,6);
              pcVar17 = local_148;
              if (iVar16 == 0) {
                bVar2 = *_Str2;
                while (bVar2 != 0) {
                  bVar2 = *_Str2;
                  iVar16 = isalpha((uint)bVar2);
                  if ((((iVar16 == 0) && (bVar2 != 0x5f)) &&
                      (iVar16 = isdigit((uint)*_Str2), iVar16 == 0)) &&
                     (bVar2 = *_Str2, 1 < (byte)(bVar2 - 0x2d))) goto joined_r0x00014016dec6;
                  _Str2 = _Str2 + 1;
                  bVar2 = *_Str2;
                }
                goto LAB_14016dedb;
              }
            }
          }
        }
      }
    }
  }
LAB_14016df6e:
  *(undefined8 *)(puVar32 + -8) = 0x14016df7a;
  FUN_1400dd8f0(&local_c8);
  return;
joined_r0x00014016dec6:
  while ((bVar2 != 0 && ((*_Str2 == 0x20 || (*_Str2 == 9))))) {
    _Str2 = _Str2 + 1;
    bVar2 = *_Str2;
  }
LAB_14016dedb:
  local_268 = 0;
  local_260 = 0;
  local_278 = (undefined8 *)0x0;
  uStack_270 = 0;
  FUN_140017480(&local_278,_Str2,pcVar11 + (uVar29 - (longlong)_Str2));
  FUN_14000de40(param_4,&local_278);
  pcVar17 = local_148;
  if (0xf < local_260) {
    uVar29 = local_260 + 1;
    puVar19 = local_278;
    if (0xfff < uVar29) {
      puVar19 = (undefined8 *)local_278[-1];
      if (0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)puVar19))) {
LAB_14016df67:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar32 = auStack_2a0;
        goto LAB_14016df6e;
      }
      uVar29 = local_260 + 0x28;
    }
LAB_14016df48:
    thunk_FUN_14028af80(puVar19,uVar29);
    pcVar17 = local_148;
  }
  goto joined_r0x00014016cf67;
}

