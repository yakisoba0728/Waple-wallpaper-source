// Function: FUN_14016b0e0
// Addr: 14016b0e0
// Size: 4885 bytes


void FUN_14016b0e0(char *param_1)

{
  char *pcVar1;
  byte *****pppppbVar2;
  byte bVar3;
  byte ****ppppbVar4;
  byte ****_Size;
  size_t _Size_00;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  byte *****pppppbVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  undefined8 *puVar15;
  char *pcVar16;
  byte *pbVar17;
  byte *****pppppbVar18;
  undefined8 *****pppppuVar19;
  undefined8 uVar20;
  byte ****ppppbVar21;
  undefined8 *_Buf1;
  longlong lVar22;
  byte *****pppppbVar23;
  byte *pbVar24;
  undefined8 *****pppppuVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  undefined2 *puVar28;
  undefined8 *puVar29;
  undefined1 *puVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  byte *pbVar34;
  longlong *plVar35;
  ulonglong uVar36;
  char *pcVar37;
  char *pcVar38;
  undefined2 local_res20 [4];
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [24];
  undefined4 local_338;
  char *local_330;
  undefined2 local_328 [2];
  undefined2 local_324 [2];
  byte ****local_320;
  undefined8 uStack_318;
  ulonglong local_310;
  ulonglong local_308;
  char *local_300;
  char *pcStack_2f8;
  longlong local_2f0;
  char *local_2e8;
  undefined8 ****local_2e0;
  undefined8 uStack_2d8;
  longlong local_2d0;
  ulonglong local_2c8;
  char *local_2c0;
  float local_2b8 [2];
  undefined8 *local_2b0;
  longlong local_2a8;
  longlong local_2a0 [5];
  undefined8 ****local_278;
  ulonglong local_270;
  undefined8 ****local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  ulonglong local_250;
  ulonglong local_248 [4];
  byte ***local_228;
  char local_220 [4];
  char local_21c;
  undefined1 local_21b;
  undefined2 local_21a;
  undefined8 local_218;
  undefined8 local_210;
  ulonglong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  byte ****local_1e8;
  ulonglong local_1e0;
  byte ****local_1d8;
  ulonglong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  longlong local_170 [2];
  undefined1 local_160;
  undefined1 local_158 [16];
  char local_148 [264];
  
  local_21a = 0;
  local_220 = (char  [4])s_SHADERVERSION_14048d068._8_4_;
  local_21c = s_SHADERVERSION_14048d068[0xc];
  local_228 = (byte ***)s_SHADERVERSION_14048d068._0_8_;
  uStack_200 = 0;
  local_218 = 0xd;
  local_210 = 0xf;
  local_21b = 0;
  local_1f8 = 2;
  local_1f0 = 0xf;
  local_208 = (ulonglong)DAT_14048d078;
  local_2b8[0] = 0.0;
  local_2b0 = (undefined8 *)0x0;
  local_2a8 = 0;
  local_2b0 = (undefined8 *)FUN_14028af20(0x50);
  *local_2b0 = local_2b0;
  local_2b0[1] = local_2b0;
  local_2a0[0] = 0;
  local_2a0[1] = 0;
  local_2a0[2] = 0;
  local_2a0[3] = 7;
  local_2a0[4] = 8;
  local_2b8[0] = 1.0;
  FUN_140011f50(local_2a0,0x10,local_2b0);
  pppppbVar18 = (byte *****)&local_228;
  do {
    ppppbVar4 = pppppbVar18[3];
    pppppbVar23 = pppppbVar18;
    if ((byte ****)0xf < ppppbVar4) {
      pppppbVar23 = (byte *****)*pppppbVar18;
    }
    _Size = pppppbVar18[2];
    ppppbVar21 = (byte ****)0x0;
    uVar32 = 0xcbf29ce484222325;
    if (_Size != (byte ****)0x0) {
      do {
        pbVar34 = (byte *)((longlong)pppppbVar23 + (longlong)ppppbVar21);
        ppppbVar21 = (byte ****)((longlong)ppppbVar21 + 1);
        uVar32 = (uVar32 ^ *pbVar34) * 0x100000001b3;
      } while (ppppbVar21 < _Size);
    }
    puVar15 = *(undefined8 **)(local_2a0[0] + 8 + (uVar32 & local_2a0[3]) * 0x10);
    puVar26 = local_2b0;
    if (puVar15 != local_2b0) {
      puVar29 = *(undefined8 **)(local_2a0[0] + (uVar32 & local_2a0[3]) * 0x10);
      while( true ) {
        puVar26 = puVar15 + 2;
        if (0xf < (ulonglong)puVar15[5]) {
          puVar26 = (undefined8 *)*puVar26;
        }
        pppppbVar23 = pppppbVar18;
        if ((byte ****)0xf < ppppbVar4) {
          pppppbVar23 = (byte *****)*pppppbVar18;
        }
        if ((_Size == (byte ****)puVar15[4]) &&
           ((_Size == (byte ****)0x0 ||
            (iVar14 = memcmp(pppppbVar23,puVar26,(size_t)_Size), iVar14 == 0)))) goto LAB_14016b410;
        puVar26 = puVar15;
        if (puVar15 == puVar29) break;
        puVar15 = (undefined8 *)puVar15[1];
      }
    }
    if (local_2a8 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("unordered_map/set too long");
    }
    puVar15 = (undefined8 *)FUN_14028af20(0x50);
    FUN_140016fc0(puVar15 + 2,pppppbVar18);
    FUN_140016fc0(puVar15 + 6,pppppbVar18 + 4);
    if (local_2b8[0] < (float)(local_2a8 + 1) / (float)(ulonglong)local_2a0[4]) {
      FUN_140036ea0(local_2b8);
      puVar29 = *(undefined8 **)(local_2a0[0] + 8 + (uVar32 & local_2a0[3]) * 0x10);
      puVar26 = local_2b0;
      if (puVar29 != local_2b0) {
        _Size_00 = puVar15[4];
        puVar5 = *(undefined8 **)(local_2a0[0] + (uVar32 & local_2a0[3]) * 0x10);
        while( true ) {
          puVar26 = puVar29 + 2;
          if (0xf < (ulonglong)puVar29[5]) {
            puVar26 = (undefined8 *)*puVar26;
          }
          if ((ulonglong)puVar15[5] < 0x10) {
            _Buf1 = puVar15 + 2;
          }
          else {
            _Buf1 = (undefined8 *)puVar15[2];
          }
          if ((_Size_00 == puVar29[4]) &&
             ((_Size_00 == 0 || (iVar14 = memcmp(_Buf1,puVar26,_Size_00), iVar14 == 0)))) break;
          puVar26 = puVar29;
          if (puVar29 == puVar5) goto LAB_14016b3b0;
          puVar29 = (undefined8 *)puVar29[1];
        }
        puVar26 = (undefined8 *)*puVar29;
      }
    }
LAB_14016b3b0:
    puVar29 = (undefined8 *)puVar26[1];
    local_2a8 = local_2a8 + 1;
    *puVar15 = puVar26;
    puVar15[1] = puVar29;
    *puVar29 = puVar15;
    puVar26[1] = puVar15;
    uVar32 = uVar32 & local_2a0[3];
    puVar5 = *(undefined8 **)(local_2a0[0] + uVar32 * 0x10);
    if (puVar5 == local_2b0) {
      *(undefined8 **)(local_2a0[0] + uVar32 * 0x10) = puVar15;
LAB_14016b401:
      *(undefined8 **)(local_2a0[0] + 8 + uVar32 * 0x10) = puVar15;
    }
    else if (puVar5 == puVar26) {
      *(undefined8 **)(local_2a0[0] + uVar32 * 0x10) = puVar15;
    }
    else if (*(undefined8 **)(local_2a0[0] + 8 + uVar32 * 0x10) == puVar29) goto LAB_14016b401;
LAB_14016b410:
    pppppbVar18 = pppppbVar18 + 8;
  } while (pppppbVar18 != &local_1e8);
  lVar33 = 1;
  pppppbVar18 = &local_1e8;
  do {
    FUN_140017240(pppppbVar18 + -4);
    FUN_140017240(pppppbVar18 + -8);
    lVar33 = lVar33 + -1;
    pppppbVar18 = pppppbVar18 + -8;
  } while (lVar33 != 0);
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e95d4) &&
     (FUN_14028b140(&DAT_1404e95d4), DAT_1404e95d4 == -1)) {
    FUN_1400de280(&DAT_1404e95d8);
    FUN_14028b410(&LAB_140424c90);
    _Init_thread_footer(&DAT_1404e95d4);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  lStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_170[0] = 0;
  local_170[1] = 0;
  local_160 = 0;
  local_300 = (char *)0x0;
  pcStack_2f8 = (char *)0x0;
  local_2f0 = 0;
  local_2e8 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    local_2e8 = *(char **)param_1;
  }
  if (*local_2e8 == '\0') goto LAB_14016c35d;
  bVar10 = false;
  bVar7 = true;
LAB_14016b540:
  cVar13 = *local_2e8;
  pcVar38 = local_2e8;
  while (((cVar13 != '\0' && (*pcVar38 != '\r')) && (*pcVar38 != '\n'))) {
    pcVar38 = pcVar38 + 1;
    cVar13 = *pcVar38;
  }
  bVar11 = false;
  bVar12 = false;
  bVar9 = bVar10;
  for (pcVar16 = local_2e8; pcVar37 = local_2e8, pcVar16 < pcVar38; pcVar16 = pcVar16 + lVar33) {
    if (bVar9) {
      if (((*pcVar16 != '*') || (pcVar37 = pcVar16 + 1, pcVar38 <= pcVar37)) || (*pcVar37 != '/')) {
        *pcVar16 = ' ';
        goto LAB_14016b5e8;
      }
      *pcVar16 = ' ';
      bVar9 = false;
      *pcVar37 = ' ';
      lVar33 = 2;
      bVar10 = false;
    }
    else {
      if ((*pcVar16 == '/') && (pcVar1 = pcVar16 + 1, pcVar1 < pcVar38)) {
        if (*pcVar1 == '/') break;
        bVar9 = bVar10;
        if (*pcVar1 == '*') {
          *pcVar16 = ' ';
          bVar9 = true;
          *pcVar1 = ' ';
          lVar33 = 2;
          bVar10 = true;
          goto LAB_14016b5ed;
        }
      }
LAB_14016b5e8:
      lVar33 = 1;
    }
LAB_14016b5ed:
  }
  for (; (cVar13 = *pcVar37, cVar13 == ' ' || (cVar13 == '\t')); pcVar37 = pcVar37 + 1) {
  }
  local_2e8 = pcVar38;
  local_2c0 = pcVar37;
  if (cVar13 != '#') goto LAB_14016bc5a;
  local_338 = 0;
  local_330 = pcVar37;
  cVar13 = FUN_1400deb10(pcVar37,pcVar38,&local_1c8,&DAT_1404e95d8);
  if (cVar13 == '\0') goto LAB_14016bc5a;
  plVar35 = local_170;
  if (1 < (ulonglong)((lStack_1b0 - local_1b8) / 0x18)) {
    plVar35 = (longlong *)(local_1b8 + 0x18);
  }
  if ((char)plVar35[2] == '\0') {
    lVar33 = 0;
    lVar22 = 0;
  }
  else {
    lVar33 = *plVar35;
    lVar22 = plVar35[1];
  }
  local_2d0 = 0;
  local_2c8 = 0;
  local_2e0 = (undefined8 *****)0x0;
  uStack_2d8 = 0;
  if (lVar33 == lVar22) {
    local_2e0 = (undefined8 *****)0x0;
    local_2c8 = 0xf;
  }
  else {
    FUN_140017480(&local_2e0,lVar33,lVar22 - lVar33);
  }
  lVar33 = local_2d0;
  local_270 = local_2c8;
  plVar35 = local_170;
  if (2 < (ulonglong)((lStack_1b0 - local_1b8) / 0x18)) {
    plVar35 = (longlong *)(local_1b8 + 0x30);
  }
  if ((char)plVar35[2] == '\0') {
    lVar22 = 0;
    lVar31 = 0;
  }
  else {
    lVar22 = *plVar35;
    lVar31 = plVar35[1];
  }
  local_310 = 0;
  local_308 = 0;
  local_320 = (byte ****)0x0;
  uStack_318 = 0;
  if (lVar22 == lVar31) {
    local_308 = 0xf;
    local_320 = (byte ****)0x0;
  }
  else {
    FUN_140017480(&local_320,lVar22,lVar31 - lVar22);
  }
  pppppbVar18 = &local_320;
  if (0xf < local_308) {
    pppppbVar18 = (byte *****)local_320;
  }
  if (((1 < local_310) &&
      (pbVar34 = (byte *)((longlong)pppppbVar18 + local_310),
      pbVar17 = (byte *)thunk_FUN_14028e750(pppppbVar18,pbVar34,&DAT_14048ba14,2),
      pbVar17 != pbVar34)) &&
     (uVar32 = (longlong)pbVar17 - (longlong)pppppbVar18, uVar32 != 0xffffffffffffffff)) {
    puVar30 = auStack_358;
    if (local_310 < uVar32) goto LAB_14016c396;
    pppppbVar18 = &local_320;
    if (0xf < local_308) {
      pppppbVar18 = (byte *****)local_320;
    }
    local_310 = uVar32;
    *(byte *)((longlong)pppppbVar18 + uVar32) = 0;
  }
  pppppbVar18 = &local_320;
  if (0xf < local_308) {
    pppppbVar18 = (byte *****)local_320;
  }
  if (local_310 == 0) {
LAB_14016b7d8:
    lVar22 = -1;
  }
  else {
    lVar22 = local_310 - 1;
    lVar31 = -1;
    if (lVar22 != -1) {
      lVar31 = lVar22;
    }
    uVar27 = 4;
    uVar32 = 0;
    if (lVar22 != -1) {
      uVar27 = local_310 + 4;
      uVar32 = local_310;
    }
    if (uVar27 < 0x10) {
      FUN_1404217a0(local_148,0,0x100);
      pbVar34 = &DAT_14048d03c;
      do {
        bVar3 = *pbVar34;
        pbVar34 = pbVar34 + 1;
        local_148[bVar3] = '\x01';
      } while (pbVar34 != &DAT_14048d040);
      pppppbVar23 = (byte *****)((longlong)pppppbVar18 + lVar31);
      cVar13 = local_148[*(byte *)((longlong)pppppbVar18 + lVar31)];
      while (cVar13 != '\0') {
        if (pppppbVar23 == pppppbVar18) goto LAB_14016b7d8;
        pbVar34 = (byte *)((longlong)pppppbVar23 + -1);
        pppppbVar23 = (byte *****)((longlong)pppppbVar23 + -1);
        cVar13 = local_148[*pbVar34];
      }
      lVar22 = (longlong)pppppbVar23 - (longlong)pppppbVar18;
    }
    else {
      lVar22 = FUN_14028eda0(pppppbVar18,uVar32,&DAT_14048d03c,4);
    }
  }
  uVar32 = local_270;
  pppppuVar19 = (undefined8 *****)local_2e0;
  puVar30 = auStack_358;
  if (local_310 < lVar22 + 1U) goto LAB_14016c396;
  pppppbVar18 = &local_320;
  if (0xf < local_308) {
    pppppbVar18 = (byte *****)local_320;
  }
  local_278 = local_2e0;
  local_310 = lVar22 + 1U;
  *(byte *)((longlong)pppppbVar18 + lVar22 + 1) = 0;
  pppppuVar25 = &local_2e0;
  if (0xf < uVar32) {
    pppppuVar25 = pppppuVar19;
  }
  bVar11 = bVar12;
  if ((lVar33 == 6) &&
     (iVar14 = memcmp(pppppuVar25,"define",6), uVar27 = local_310,
     pppppbVar18 = (byte *****)local_320, iVar14 == 0)) {
    if (!bVar7) goto LAB_14016bdc3;
    pppppbVar23 = &local_320;
    if (0xf < local_308) {
      pppppbVar23 = (byte *****)local_320;
    }
    if (local_310 == 0) {
LAB_14016b9ba:
      uVar32 = 0xffffffffffffffff;
    }
    else {
      if (local_310 + 2 < 0x10) {
        pppppbVar2 = (byte *****)((longlong)pppppbVar23 + local_310);
        FUN_1404217a0(local_148,0,0x100);
        pbVar34 = &DAT_14048d08c;
        do {
          bVar3 = *pbVar34;
          pbVar34 = pbVar34 + 1;
          local_148[bVar3] = '\x01';
          pppppbVar8 = pppppbVar23;
        } while (pbVar34 != &DAT_14048d08e);
        for (; pppppbVar8 < pppppbVar2; pppppbVar8 = (byte *****)((longlong)pppppbVar8 + 1)) {
          if (local_148[*(byte *)pppppbVar8] != '\0') {
            uVar32 = (longlong)pppppbVar8 - (longlong)pppppbVar23;
            goto LAB_14016b9c1;
          }
        }
        goto LAB_14016b9ba;
      }
      uVar32 = thunk_FUN_14028c6a0(pppppbVar23,local_310,&DAT_14048d08c,2);
      uVar27 = local_310;
      pppppbVar18 = (byte *****)local_320;
    }
LAB_14016b9c1:
    if (uVar32 == 0xffffffffffffffff) {
      uVar20 = FUN_140030830(local_2b8,&local_320);
      FUN_14000f880(uVar20,&DAT_14048b870,1);
      pcVar38 = local_2e8;
      pppppuVar19 = (undefined8 *****)local_278;
    }
    else {
      local_2d0 = 0;
      local_2c8 = 0;
      uVar36 = uVar32;
      if (uVar27 < uVar32) {
        uVar36 = uVar27;
      }
      local_2e0 = (undefined8 *****)0x0;
      uStack_2d8 = 0;
      pppppbVar23 = &local_320;
      if (0xf < local_308) {
        pppppbVar23 = pppppbVar18;
      }
      FUN_140017480(&local_2e0,pppppbVar23,uVar36);
      uVar27 = local_310;
      pppppbVar18 = (byte *****)local_320;
      pppppbVar23 = &local_320;
      if (0xf < local_308) {
        pppppbVar23 = (byte *****)local_320;
      }
      if (uVar32 < local_310) {
        pbVar34 = (byte *)((longlong)pppppbVar23 + uVar32);
        if ((local_310 - uVar32) + 2 < 0x10) {
          pbVar17 = (byte *)((longlong)pppppbVar23 + local_310);
          FUN_1404217a0(local_148,0,0x100);
          pbVar24 = &DAT_14048d08c;
          do {
            bVar3 = *pbVar24;
            pbVar24 = pbVar24 + 1;
            local_148[bVar3] = '\x01';
          } while (pbVar24 != &DAT_14048d08e);
          for (; pbVar34 < pbVar17; pbVar34 = pbVar34 + 1) {
            if (local_148[*pbVar34] == '\0') {
              uVar32 = (longlong)pbVar34 - (longlong)pppppbVar23;
              goto LAB_14016bc8e;
            }
          }
          goto LAB_14016bad9;
        }
        lVar33 = thunk_FUN_14028c530(pbVar34,local_310 - uVar32,&DAT_14048d08c,2);
        uVar32 = lVar33 + uVar32;
        uVar27 = local_310;
        pppppbVar18 = (byte *****)local_320;
        if (lVar33 == -1) {
          uVar32 = 0xffffffffffffffff;
        }
LAB_14016bc8e:
        if (uVar32 == 0xffffffffffffffff) goto LAB_14016bad9;
        local_258 = 0;
        local_250 = 0;
        local_268 = (undefined8 *****)0x0;
        uStack_260 = 0;
        if (uVar27 < uVar32) {
                    /* WARNING: Subroutine does not return */
          FUN_140012940();
        }
        lVar33 = -1;
        if (uVar27 - uVar32 != -1) {
          lVar33 = uVar27 - uVar32;
        }
        pppppbVar23 = &local_320;
        if (0xf < local_308) {
          pppppbVar23 = pppppbVar18;
        }
        FUN_140017480(&local_268,(byte *)((longlong)pppppbVar23 + uVar32),lVar33);
      }
      else {
LAB_14016bad9:
        uStack_260 = 0;
        local_268 = (undefined8 ****)((ulonglong)DAT_14048b870 & 0xffffffffffff00ff);
        local_258 = 1;
        local_250 = 0xf;
      }
      uVar32 = local_250;
      uVar20 = local_258;
      pppppuVar19 = (undefined8 *****)FUN_140030830(local_2b8,&local_2e0);
      if (pppppuVar19 != &local_268) {
        pppppuVar25 = &local_268;
        if (0xf < uVar32) {
          pppppuVar25 = (undefined8 *****)local_268;
        }
        FUN_14000f880(pppppuVar19,pppppuVar25,uVar20);
        uVar32 = local_250;
      }
      if (0xf < uVar32) {
        uVar27 = uVar32 + 1;
        pppppuVar19 = (undefined8 *****)local_268;
        if (0xfff < uVar27) {
          pppppuVar19 = (undefined8 *****)local_268[-1];
          if (0x1f < (ulonglong)((longlong)local_268 + (-8 - (longlong)pppppuVar19)))
          goto LAB_14016c38f;
          uVar27 = uVar32 + 0x28;
        }
        thunk_FUN_14028af80(pppppuVar19,uVar27);
      }
      pcVar38 = local_2e8;
      pppppuVar19 = (undefined8 *****)local_278;
      if (0xf < local_2c8) {
        uVar32 = local_2c8 + 1;
        pppppuVar19 = (undefined8 *****)local_2e0;
        if (0xfff < uVar32) {
          pppppuVar19 = (undefined8 *****)local_2e0[-1];
          if (0x1f < (ulonglong)((longlong)local_2e0 + (-8 - (longlong)pppppuVar19)))
          goto LAB_14016c38f;
          uVar32 = local_2c8 + 0x28;
        }
        thunk_FUN_14028af80(pppppuVar19,uVar32);
        pcVar38 = local_2e8;
        pppppuVar19 = (undefined8 *****)local_278;
      }
    }
  }
  else {
    pppppuVar25 = &local_2e0;
    if (0xf < uVar32) {
      pppppuVar25 = pppppuVar19;
    }
    if ((lVar33 == 5) && (iVar14 = memcmp(pppppuVar25,"ifdef",5), iVar14 == 0)) {
      if (bVar7) {
        local_1e0 = local_310;
        local_1e8 = (byte ****)&local_320;
        if (0xf < local_308) {
          local_1e8 = local_320;
        }
        cVar13 = FUN_1401669a0(local_2b8,&local_1e8);
        if (cVar13 == '\0') goto LAB_14016bd8a;
        local_res20[0] = 0x101;
        FUN_14016e0d0(&local_300,local_res20);
LAB_14016bda9:
        if (pcStack_2f8[-2] == '\0') goto LAB_14016bdc0;
        bVar7 = true;
        bVar11 = true;
        goto LAB_14016bbb7;
      }
LAB_14016bd8a:
      local_res20[0] = 0;
      puVar28 = local_res20;
LAB_14016bd9a:
      FUN_14016e0d0(&local_300,puVar28);
      if (bVar7) goto LAB_14016bda9;
LAB_14016bdc0:
      bVar7 = false;
    }
    else {
      pppppuVar25 = &local_2e0;
      if (0xf < uVar32) {
        pppppuVar25 = pppppuVar19;
      }
      if ((lVar33 == 6) && (iVar14 = memcmp(pppppuVar25,"ifndef",6), iVar14 == 0)) {
        if (bVar7) {
          local_1d0 = local_310;
          local_1d8 = (byte ****)&local_320;
          if (0xf < local_308) {
            local_1d8 = local_320;
          }
          cVar13 = FUN_1401669a0(local_2b8,&local_1d8);
          if (cVar13 == '\0') {
            local_328[0] = 0x101;
            FUN_14016e0d0(&local_300,local_328);
            goto LAB_14016bda9;
          }
        }
        local_328[0] = 0;
        puVar28 = local_328;
        goto LAB_14016bd9a;
      }
      pppppuVar25 = &local_2e0;
      if (0xf < uVar32) {
        pppppuVar25 = pppppuVar19;
      }
      if ((lVar33 != 4) || (iVar14 = memcmp(pppppuVar25,&DAT_14048d0ac,4), iVar14 != 0)) {
        pppppuVar25 = &local_2e0;
        if (0xf < uVar32) {
          pppppuVar25 = pppppuVar19;
        }
        if ((lVar33 == 5) && (iVar14 = memcmp(pppppuVar25,"endif",5), iVar14 == 0)) {
          if (local_300 != pcStack_2f8) {
            pcStack_2f8 = pcStack_2f8 + -2;
          }
          bVar7 = true;
          pcVar16 = local_300;
          if (local_300 == pcStack_2f8) goto LAB_14016bdc3;
          do {
            if ((bVar7) && (*pcVar16 != '\0')) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            pcVar16 = pcVar16 + 2;
          } while (pcVar16 != pcStack_2f8);
          bVar11 = true;
          goto LAB_14016bbb7;
        }
        pppppuVar25 = &local_2e0;
        if (0xf < uVar32) {
          pppppuVar25 = pppppuVar19;
        }
        if ((lVar33 == 2) && (iVar14 = memcmp(pppppuVar25,&DAT_14048d0a0,2), iVar14 == 0)) {
          if ((bVar7) && (iVar14 = FUN_140167e10(local_2b8,&local_320), iVar14 != 0)) {
            local_324[0] = 0x101;
            FUN_14016e0d0(&local_300,local_324);
            goto LAB_14016bda9;
          }
          local_324[0] = 0;
          puVar28 = local_324;
          goto LAB_14016bd9a;
        }
        pppppuVar25 = &local_2e0;
        if (0xf < uVar32) {
          pppppuVar25 = pppppuVar19;
        }
        if ((lVar33 == 4) && (iVar14 = memcmp(pppppuVar25,&DAT_14048d098,4), iVar14 == 0)) {
          if (local_300 == pcStack_2f8) goto LAB_14016bdc3;
          pcVar16 = pcStack_2f8 + -2;
          bVar7 = true;
          uVar32 = 0;
          lVar33 = (longlong)pcStack_2f8 - (longlong)local_300 >> 1;
          if (lVar33 == 1) {
LAB_14016c071:
            if ((pcStack_2f8[-1] != '\0') ||
               (iVar14 = FUN_140167e10(local_2b8,&local_320), iVar14 == 0)) goto LAB_14016c090;
            pcVar16[0] = '\x01';
            pcVar16[1] = '\x01';
          }
          else {
            do {
              if ((bVar7) && (local_300[uVar32 * 2] != '\0')) {
                bVar7 = true;
              }
              else {
                bVar7 = false;
              }
              uVar32 = uVar32 + 1;
            } while (uVar32 < lVar33 - 1U);
            if (bVar7) goto LAB_14016c071;
LAB_14016c090:
            *pcVar16 = '\0';
          }
          bVar7 = true;
          pcVar16 = local_300;
          if (local_300 == pcStack_2f8) goto LAB_14016bdc3;
          do {
            if ((bVar7) && (*pcVar16 != '\0')) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            pcVar16 = pcVar16 + 2;
          } while (pcVar16 != pcStack_2f8);
          bVar11 = true;
        }
        else {
          pppppuVar25 = &local_2e0;
          if (0xf < uVar32) {
            pppppuVar25 = pppppuVar19;
          }
          if ((lVar33 == 7) && (iVar14 = memcmp(pppppuVar25,"require",7), iVar14 == 0)) {
            local_248[2] = 0;
            local_248[1] = 0;
            local_248[0] = 0;
            local_248[3] = 0xf;
            FUN_140169140(&local_320,local_2b8,local_248);
            if (local_248[2] != 0) {
              if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
                iVar14 = (int)param_1;
              }
              else {
                iVar14 = (int)*(undefined8 *)param_1;
              }
              uVar32 = (ulonglong)(uint)((int)pcVar37 - iVar14);
              FUN_1400f9070(param_1,uVar32,local_248);
              pcVar16 = param_1;
              local_2c0 = param_1;
              if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                pcVar16 = *(char **)param_1;
                local_2c0 = *(char **)param_1;
              }
              local_2c0 = local_2c0 + uVar32 + local_248[2];
              pcVar38 = pcVar16 + (uint)((int)pcVar38 - iVar14) + local_248[2];
              local_2e8 = pcVar38;
            }
            if (0xf < local_248[3]) {
              uVar27 = local_248[3] + 1;
              uVar32 = local_248[0];
              if (0xfff < uVar27) {
                uVar32 = *(ulonglong *)(local_248[0] - 8);
                if (0x1f < (local_248[0] - uVar32) - 8) goto LAB_14016c38f;
                uVar27 = local_248[3] + 0x28;
              }
              thunk_FUN_14028af80(uVar32,uVar27);
            }
            local_248[2] = 0;
            local_248[3] = 0xf;
            local_248[0] = local_248[0] & 0xffffffffffffff00;
            bVar11 = true;
            goto LAB_14016bbb7;
          }
          pppppuVar25 = &local_2e0;
          if (0xf < uVar32) {
            pppppuVar25 = pppppuVar19;
          }
          if ((lVar33 == 5) && (iVar14 = memcmp(pppppuVar25,"undef",5), iVar14 == 0)) {
            if (!bVar7) goto LAB_14016bdc3;
            uVar32 = 0xcbf29ce484222325;
            pppppbVar18 = &local_320;
            if (0xf < local_308) {
              pppppbVar18 = (byte *****)local_320;
            }
            uVar27 = 0;
            if (local_310 != 0) {
              do {
                pbVar34 = (byte *)((longlong)pppppbVar18 + uVar27);
                uVar27 = uVar27 + 1;
                uVar32 = (uVar32 ^ *pbVar34) * 0x100000001b3;
                pcVar38 = local_2e8;
              } while (uVar27 < local_310);
            }
            lVar33 = FUN_1400110a0(local_2b8,local_158,&local_320,uVar32);
            puVar15 = *(undefined8 **)(lVar33 + 8);
            if (puVar15 != (undefined8 *)0x0) {
              uVar32 = local_2a0[3] & uVar32;
              puVar26 = *(undefined8 **)(local_2a0[0] + uVar32 * 0x10);
              if (*(undefined8 **)(local_2a0[0] + 8 + uVar32 * 0x10) == puVar15) {
                if (puVar26 == puVar15) {
                  *(undefined8 **)(local_2a0[0] + uVar32 * 0x10) = local_2b0;
                  *(undefined8 **)(local_2a0[0] + 8 + uVar32 * 0x10) = local_2b0;
                  FUN_1400385b0(&local_2b0);
                }
                else {
                  *(undefined8 *)(local_2a0[0] + 8 + uVar32 * 0x10) = puVar15[1];
                  FUN_1400385b0(&local_2b0);
                }
              }
              else {
                if (puVar26 == puVar15) {
                  *(undefined8 *)(local_2a0[0] + uVar32 * 0x10) = *puVar15;
                }
                FUN_1400385b0(&local_2b0);
              }
            }
          }
        }
        goto LAB_14016bbb7;
      }
      if (local_300 != pcStack_2f8) {
        bVar7 = true;
        uVar32 = 0;
        lVar33 = (longlong)pcStack_2f8 - (longlong)local_300 >> 1;
        if (lVar33 == 1) {
LAB_14016bed2:
          if (pcStack_2f8[-1] != '\0') goto LAB_14016bedd;
          cVar13 = '\x01';
        }
        else {
          do {
            if ((bVar7) && (local_300[uVar32 * 2] != '\0')) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            uVar32 = uVar32 + 1;
          } while (uVar32 < lVar33 - 1U);
          if (bVar7) goto LAB_14016bed2;
LAB_14016bedd:
          cVar13 = '\0';
        }
        pcStack_2f8[-2] = cVar13;
        bVar7 = true;
        pcVar16 = local_300;
        if (local_300 != pcStack_2f8) {
          do {
            if ((bVar7) && (*pcVar16 != '\0')) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            pcVar16 = pcVar16 + 2;
          } while (pcVar16 != pcStack_2f8);
          bVar11 = true;
          goto LAB_14016bbb7;
        }
      }
    }
LAB_14016bdc3:
    bVar11 = true;
  }
LAB_14016bbb7:
  if (0xf < local_308) {
    uVar32 = local_308 + 1;
    pppppbVar18 = (byte *****)local_320;
    if (0xfff < uVar32) {
      pppppbVar18 = (byte *****)local_320[-1];
      if ((byte *)0x1f < (byte *)((longlong)local_320 + (-8 - (longlong)pppppbVar18)))
      goto LAB_14016c38f;
      uVar32 = local_308 + 0x28;
    }
    thunk_FUN_14028af80(pppppbVar18,uVar32);
  }
  local_310 = 0;
  local_308 = 0xf;
  local_320 = (byte ****)((ulonglong)local_320 & 0xffffffffffffff00);
  pcVar37 = local_2c0;
  if (0xf < local_270) {
    uVar32 = local_270 + 1;
    pppppuVar25 = pppppuVar19;
    if (0xfff < uVar32) {
      pppppuVar25 = (undefined8 *****)pppppuVar19[-1];
      if (0x1f < (ulonglong)((longlong)pppppuVar19 + (-8 - (longlong)pppppuVar25)))
      goto LAB_14016c38f;
      uVar32 = local_270 + 0x28;
    }
    thunk_FUN_14028af80(pppppuVar25,uVar32);
    pcVar37 = local_2c0;
  }
LAB_14016bc5a:
  if ((!bVar7) || (bVar11)) {
    FUN_1404217a0(pcVar37,0x20,(longlong)pcVar38 - (longlong)pcVar37);
  }
  for (; (cVar13 = *pcVar38, cVar13 == '\r' || (cVar13 == '\n')); pcVar38 = pcVar38 + 1) {
  }
  local_2e8 = pcVar38;
  if (cVar13 == '\0') goto LAB_14016c30c;
  goto LAB_14016b540;
LAB_14016c30c:
  if (local_300 != (char *)0x0) {
    uVar32 = (local_2f0 - (longlong)local_300 >> 1) * 2;
    pcVar38 = local_300;
    if (0xfff < uVar32) {
      pcVar38 = *(char **)(local_300 + -8);
      if ((char *)0x1f < local_300 + (-8 - (longlong)pcVar38)) {
LAB_14016c38f:
        pcVar6 = (code *)swi(0x29);
        (*pcVar6)(5);
        puVar30 = auStack_350;
LAB_14016c396:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar30 + -8) = &UNK_14016c39b;
        FUN_140012940();
      }
      uVar32 = uVar32 + 0x27;
    }
    thunk_FUN_14028af80(pcVar38,uVar32);
    local_2f0 = 0;
    local_300 = (char *)0x0;
    pcStack_2f8 = (char *)0x0;
  }
LAB_14016c35d:
  FUN_1400dd8f0(&local_1b8);
  FUN_14000d9e0(local_2a0);
  FUN_14000da50(&local_2b0);
  return;
}

