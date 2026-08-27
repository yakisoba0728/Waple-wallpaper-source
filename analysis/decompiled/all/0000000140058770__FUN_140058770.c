// Function: FUN_140058770
// Addr: 140058770
// Size: 8458 bytes


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140058770(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  float *pfVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  HWND pHVar17;
  char cVar18;
  DWORD DVar19;
  DWORD idAttach;
  int iVar20;
  undefined4 uVar21;
  BOOL BVar22;
  undefined8 *puVar23;
  HMODULE hInstance;
  HWND pHVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  char *pcVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  byte bVar32;
  uint uVar33;
  undefined1 *puVar34;
  longlong *plVar35;
  uint uVar36;
  undefined8 **ppuVar37;
  uint uVar38;
  int iVar39;
  bool bVar40;
  float fVar41;
  longlong extraout_XMM0_Qb;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  undefined8 *local_res8;
  undefined8 *local_res10;
  LARGE_INTEGER local_res18;
  longlong *local_res20;
  undefined1 auStackY_378 [8];
  undefined1 auStackY_370 [24];
  longlong *local_318;
  tagRECT local_310;
  ulonglong local_2f8 [2];
  undefined8 local_2e8;
  undefined8 *******pppppppuStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  uint local_2b0;
  undefined4 local_2ac;
  longlong *local_2a8;
  undefined8 *local_2a0;
  ulonglong local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  char *local_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [16];
  float local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  tagMSG local_218;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  float local_1d8;
  int local_1d4;
  undefined8 *local_1d0;
  undefined8 *******local_1c8;
  float local_1c0;
  float local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  ulonglong local_1b0;
  LARGE_INTEGER local_1a8;
  tagMSG local_1a0;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  
  puVar34 = auStackY_378;
  local_res8 = param_1;
  local_res10 = param_2;
  QueryPerformanceCounter(&local_1a8);
  FUN_1402c97cc(local_1a8.s.LowPart);
  puVar23 = (undefined8 *)FUN_14028af20(0x68);
  *puVar23 = 0;
  puVar23[1] = 0;
  puVar25 = puVar23 + 8;
  puVar23[2] = 0;
  puVar23[3] = 0;
  puVar23[4] = 0;
  puVar23[5] = 0;
  puVar23[6] = 0;
  puVar23[7] = 0;
  puVar23[8] = 0;
  puVar23[9] = 0;
  puVar23[10] = 0;
  puVar23[0xb] = 0;
  puVar23[0xc] = 0;
  auVar42._0_8_ = param_2[7];
  puVar23[2] = param_2[6];
  puVar23[3] = auVar42._0_8_;
  auVar42._0_8_ = param_2[9];
  puVar23[4] = param_2[8];
  puVar23[5] = auVar42._0_8_;
  auVar42._0_8_ = param_2[0xb];
  puVar23[6] = param_2[10];
  puVar23[7] = auVar42._0_8_;
  iVar39 = *(int *)(param_2 + 0xb) - *(int *)(param_2 + 10);
  *(int *)(puVar23 + 0xb) = iVar39;
  local_1d4 = *(int *)((longlong)param_2 + 0x5c) - *(int *)((longlong)param_2 + 0x54);
  *(int *)((longlong)puVar23 + 0x5c) = local_1d4;
  auVar42._0_8_ = param_2[0xd];
  local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar39);
  local_2a0 = puVar25;
  FUN_14005ae80(puVar25,(longlong)(local_1d4 * iVar39 * 4));
  FUN_140109ba0(auVar42._0_8_,*puVar25,*(undefined4 *)(param_2 + 0xf),
                *(undefined4 *)((longlong)param_2 + 0x7c));
  plVar35 = (longlong *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar35 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar35 + 1;
    lVar29 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar29 == 1) {
      (**(code **)*plVar35)(plVar35);
      LOCK();
      piVar2 = (int *)((longlong)plVar35 + 0xc);
      iVar20 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*plVar35 + 8))(plVar35);
      }
    }
  }
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  pHVar24 = CreateWindowExW(0x8280020,(LPCWSTR)(ulonglong)DAT_1404e7f48,L"",0x40000000,
                            *(int *)(param_2 + 10),*(int *)((longlong)param_2 + 0x54),
                            *(int *)(param_2 + 0xb) - *(int *)(param_2 + 10),
                            *(int *)((longlong)param_2 + 0x5c) - *(int *)((longlong)param_2 + 0x54),
                            (HWND)param_2[5],(HMENU)0x0,hInstance,puVar23);
  param_1[6] = pHVar24;
  if (pHVar24 == (HWND)0x0) {
    LOCK();
    *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
    UNLOCK();
    iVar39 = FUN_140290d80(param_1 + 10);
    if (iVar39 != 0) goto LAB_14005a865;
    iVar39 = *(int *)((longlong)param_1 + 0x9c);
    puVar34 = auStackY_378;
    if (iVar39 != 0x7fffffff) {
      *(undefined1 *)(param_1 + 7) = 1;
      FUN_140290ea0(param_1 + 10);
      return;
    }
    goto LAB_14005a870;
  }
  DVar19 = GetWindowThreadProcessId((HWND)param_2[5],(LPDWORD)0x0);
  idAttach = GetWindowThreadProcessId((HWND)param_1[6],(LPDWORD)0x0);
  AttachThreadInput(idAttach,DVar19,0);
  EnableWindow((HWND)param_1[6],0);
  SetWindowPos((HWND)param_1[6],(HWND)0x0,0,0,0,0,0x41b);
  auVar42._0_8_ = FUN_14028af20(0x168);
  puVar25 = (undefined8 *)FUN_14005deb0(auVar42._0_8_);
  fVar16 = DAT_140492704;
  fVar46 = DAT_140492654;
  local_1d0 = puVar25;
  if (-1 < *(int *)(puVar25 + 0xe)) {
    bVar40 = DAT_1404e52b0 != (HWND)0x0;
    plVar35 = (longlong *)*param_2;
    pHVar24 = (HWND)param_1[6];
    *(undefined4 *)(puVar25 + 0x22) = *(undefined4 *)((longlong)param_2 + 100);
    local_2a8 = plVar35;
    if ((bVar40) && (puVar25[4] == 0)) {
      iVar20 = FUN_140290d80(&DAT_1404df690);
      if (iVar20 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (DAT_1404df6dc == 0x7fffffff) {
        DAT_1404df6dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      if (*(int *)(puVar25 + 0xe) < 0) {
        puVar25[4] = 0;
        *(undefined4 *)(puVar25 + 0xe) = 0x80004005;
      }
      else {
        local_310.left = 0;
        local_310.top = 0;
        local_310.right = 0;
        local_310.bottom = 0;
        GetClientRect(pHVar24,&local_310);
        puVar23 = (undefined8 *)0x0;
        local_218.hwnd =
             (HWND)CONCAT44(local_310.bottom - local_310.top,local_310.right - local_310.left);
        local_218.message = 0x57;
        local_218._12_4_ = 0;
        local_218.pt.y = 1;
        local_218._44_4_ = 0;
        local_218.lParam = 0x200000020;
        local_218.wParam = 1;
        local_218.time = 0;
        local_218.pt.x = 3;
        local_res18.QuadPart = 0;
        iVar20 = (**(code **)(*(longlong *)puVar25[0x11] + 0xc0))
                           ((longlong *)puVar25[0x11],puVar25[0xf],&local_218,0);
        if ((iVar20 < 0) ||
           (iVar20 = (**(code **)(DAT_1404e52b0 + 0x20))
                               (puVar25[0xf],puVar25[0x10],pHVar24,local_res18.QuadPart), iVar20 < 0
           )) {
          *(int *)(puVar25 + 0xe) = iVar20;
        }
        ((LARGE_INTEGER *)(puVar25 + 4))->QuadPart = (LONGLONG)local_res18;
        if ((longlong *)local_res18.QuadPart == (longlong *)0x0) {
          *(undefined4 *)(puVar25 + 0xe) = 0x80004005;
        }
        else {
          iVar20 = (**(code **)(*(longlong *)local_res18 + 0x48))
                             (local_res18.QuadPart,0,&DAT_140477ef0,&local_318);
          *(int *)(puVar25 + 0xe) = iVar20;
          if (-1 < iVar20) {
            iVar20 = (**(code **)(*(longlong *)puVar25[0xf] + 0x48))
                               ((longlong *)puVar25[0xf],local_318,0,puVar25 + 5);
            *(int *)(puVar25 + 0xe) = iVar20;
            if (-1 < iVar20) {
              (**(code **)(*local_318 + 0x50))(local_318,&local_218);
              auVar44._0_8_ = _UNK_140492ac8;
              auVar42._0_8_ = _DAT_140492ac0;
              *(undefined4 *)(puVar25 + 2) = 0;
              *(undefined4 *)((longlong)puVar25 + 0x14) = 0x3f800000;
              *puVar25 = 0;
              local_2b8 = 0;
              local_2ac = 0x3f800000;
              *(float *)(puVar25 + 1) = (float)((ulonglong)local_218.hwnd & 0xffffffff);
              local_2d8 = (undefined4)auVar42._0_8_;
              uStack_2d4 = (undefined4)((ulonglong)auVar42._0_8_ >> 0x20);
              uStack_2d0 = (undefined4)auVar44._0_8_;
              uStack_2cc = (uint)((ulonglong)auVar44._0_8_ >> 0x20);
              fVar53 = (float)((ulonglong)local_218.hwnd & 0xffffffff) /
                       (float)((ulonglong)local_218.hwnd >> 0x20);
              *(float *)((longlong)puVar25 + 0xc) = (float)((ulonglong)local_218.hwnd >> 0x20);
              local_2e8 = (char *)_DAT_140492a70;
              pppppppuStack_2e0 = _UNK_140492a78;
              local_2c8 = (undefined4)_DAT_140492b40;
              uStack_2c4 = (undefined4)((ulonglong)_DAT_140492b40 >> 0x20);
              uStack_2c0 = (uint)_UNK_140492b48;
              uStack_2bc = (undefined4)((ulonglong)_UNK_140492b48 >> 0x20);
              local_1d8 = fVar53;
              fVar41 = (float)FUN_14041b0d0();
              uVar50 = 0;
              uVar51 = 0;
              uVar52 = 0;
              uVar47 = 0;
              uVar48 = 0;
              uVar49 = 0;
              local_2b0 = (uint)(fVar16 / (fVar41 * DAT_1404926c0)) ^ DAT_140492ff0;
              auVar42 = ZEXT416((uint)fVar53);
              uVar21 = DAT_1404928f8;
              local_258 = (char *)FUN_14005b5b0();
              uStack_250 = extraout_XMM0_Qb;
              auStack_248 = auVar42;
              local_238 = fVar46;
              uStack_234 = uVar47;
              uStack_230 = uVar48;
              uStack_22c = uVar49;
              local_228 = uVar21;
              uStack_224 = uVar50;
              uStack_220 = uVar51;
              uStack_21c = uVar52;
              puVar26 = (undefined8 *)FUN_14005ecb0(&local_168,&local_258,&local_2e8);
              auVar42._0_8_ = puVar26[1];
              puVar25[0x25] = *puVar26;
              puVar25[0x26] = auVar42._0_8_;
              auVar42._0_8_ = puVar26[3];
              puVar25[0x27] = puVar26[2];
              puVar25[0x28] = auVar42._0_8_;
              auVar42._0_8_ = puVar26[5];
              puVar25[0x29] = puVar26[4];
              puVar25[0x2a] = auVar42._0_8_;
              auVar42._0_8_ = puVar26[7];
              puVar25[0x2b] = puVar26[6];
              puVar25[0x2c] = auVar42._0_8_;
              uVar51 = *(undefined4 *)(puVar25 + 0x27);
              uVar21 = *(undefined4 *)(puVar25 + 0x26);
              uVar47 = *(undefined4 *)(puVar25 + 0x28);
              fVar46 = *(float *)(puVar25 + 0x2c);
              uVar48 = *(undefined4 *)((longlong)puVar25 + 0x134);
              uVar49 = *(undefined4 *)((longlong)puVar25 + 0x144);
              uVar50 = *(undefined4 *)((longlong)puVar25 + 0x154);
              *(undefined4 *)(puVar25 + 0x26) = *(undefined4 *)(puVar25 + 0x29);
              *(undefined4 *)((longlong)puVar25 + 0x134) = *(undefined4 *)(puVar25 + 0x2b);
              *(undefined4 *)(puVar25 + 0x27) = *(undefined4 *)((longlong)puVar25 + 300);
              *(undefined4 *)((longlong)puVar25 + 0x13c) =
                   *(undefined4 *)((longlong)puVar25 + 0x13c);
              *(undefined4 *)(puVar25 + 0x28) = *(undefined4 *)((longlong)puVar25 + 0x14c);
              *(undefined4 *)((longlong)puVar25 + 0x144) =
                   *(undefined4 *)((longlong)puVar25 + 0x15c);
              *(undefined4 *)(puVar25 + 0x29) = uVar21;
              *(undefined4 *)((longlong)puVar25 + 0x14c) = uVar47;
              *(undefined4 *)((longlong)puVar25 + 300) = uVar51;
              pHVar17 = DAT_1404e52b0;
              local_res18.s.LowPart = *(undefined4 *)(puVar25 + 0x22);
              local_310._0_8_ = puVar25[0xf];
              *(undefined4 *)(puVar25 + 0x2a) = *(undefined4 *)(puVar25 + 0x2a);
              *(float *)((longlong)puVar25 + 0x154) = fVar46;
              *(undefined4 *)(puVar25 + 0x2b) = uVar48;
              *(undefined4 *)((longlong)puVar25 + 0x15c) = uVar49;
              *(undefined4 *)(puVar25 + 0x2c) = uVar50;
              *(undefined4 *)((longlong)puVar25 + 0x164) =
                   *(undefined4 *)((longlong)puVar25 + 0x164);
              *(undefined4 *)((longlong)puVar25 + 0x114) = 0;
              FUN_14005c320(puVar25 + 0x19);
              uVar31 = ((((local_res18.QuadPart & 0xffU ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)local_res18.QuadPart >> 8 & 0xff) * 0x100000001b3 ^
                        (ulonglong)local_res18.QuadPart >> 0x10 & 0xff) * 0x100000001b3 ^
                       (ulonglong)local_res18.QuadPart >> 0x18 & 0xff) * 0x100000001b3 &
                       *(ulonglong *)(pHVar17 + 0xc);
              lVar29 = *(longlong *)(*(longlong *)(pHVar17 + 6) + 8 + uVar31 * 0x10);
              if (lVar29 == *(longlong *)(pHVar17 + 2)) {
LAB_140058f11:
                lVar29 = 0;
              }
              else {
                DVar19 = *(DWORD *)(lVar29 + 0x10);
                while (local_res18.s.LowPart != DVar19) {
                  if (lVar29 == *(longlong *)(*(longlong *)(pHVar17 + 6) + uVar31 * 0x10))
                  goto LAB_140058f11;
                  lVar29 = *(longlong *)(lVar29 + 8);
                  DVar19 = *(DWORD *)(lVar29 + 0x10);
                }
              }
              if ((lVar29 == 0) || (lVar29 == *(longlong *)(pHVar17 + 2))) {
                if (-1 < *(int *)(puVar25 + 0xe)) {
                  FUN_140053e40(&local_1c8,local_res18.QuadPart & 0xffffffff);
                  local_2e8 = "FADEEFFECT";
                  local_2f8[0] = 0x2f;
                  pppppppuStack_2e0 = &local_1c8;
                  if (0xf < local_1b0) {
                    pppppppuStack_2e0 = local_1c8;
                  }
                  uStack_280 = 0;
                  uStack_27c = 0;
                  uStack_278 = 0;
                  uStack_250 = 0;
                  local_2d8 = 0;
                  uStack_2d4 = 0;
                  uStack_2d0 = 0;
                  uStack_2cc = 0;
                  local_290 = 0;
                  uStack_28c = 0;
                  uStack_288 = 0;
                  uStack_284 = 0;
                  local_258 = (char *)FUN_1400173f0(&local_258,local_2f8);
                  uVar14 = s_assets_shaders_HLSL_dx11playlist_140477c70._16_8_;
                  auVar44._0_8_ = s_assets_shaders_HLSL_dx11playlist_140477c70._8_8_;
                  auVar42._0_8_ =
                       CONCAT62(s_assets_shaders_HLSL_dx11playlist_140477c70._26_6_,
                                s_assets_shaders_HLSL_dx11playlist_140477c70._24_2_);
                  *(undefined8 *)local_258 = s_assets_shaders_HLSL_dx11playlist_140477c70._0_8_;
                  *(undefined8 *)(local_258 + 8) = auVar44._0_8_;
                  uVar15 = s_assets_shaders_HLSL_dx11playlist_140477c70._34_8_;
                  auVar44._0_8_ =
                       CONCAT26(s_assets_shaders_HLSL_dx11playlist_140477c70._32_2_,
                                s_assets_shaders_HLSL_dx11playlist_140477c70._26_6_);
                  *(undefined8 *)(local_258 + 0x10) = uVar14;
                  *(undefined8 *)(local_258 + 0x18) = auVar42._0_8_;
                  auStack_248._8_8_ = local_2f8[0];
                  auStack_248._0_8_ = 0x2a;
                  *(undefined8 *)(local_258 + 0x1a) = auVar44._0_8_;
                  *(undefined8 *)(local_258 + 0x22) = uVar15;
                  local_258[0x2a] = '\0';
                  uVar21 = FUN_14005c390(pHVar17,&local_258,&local_290,&local_2e8);
                  *(undefined4 *)(puVar25 + 0xe) = uVar21;
                  if (0xf < (ulonglong)auStack_248._8_8_) {
                    uVar31 = auStack_248._8_8_ + 1;
                    pcVar28 = local_258;
                    if (0xfff < uVar31) {
                      pcVar28 = *(char **)(local_258 + -8);
                      if ((char *)0x1f < local_258 + (-8 - (longlong)pcVar28)) goto LAB_14005a130;
                      uVar31 = auStack_248._8_8_ + 0x28;
                    }
                    thunk_FUN_14028af80(pcVar28,uVar31);
                  }
                  fVar46 = DAT_140492974;
                  if (-1 < *(int *)(puVar25 + 0xe)) {
                    puVar26 = *(undefined8 **)(pHVar17 + 2);
                    local_2f8[0] = (((((ulonglong)(local_res18.s.LowPart & 0xff) ^
                                      0xcbf29ce484222325) * 0x100000001b3 ^
                                     (ulonglong)local_res18.QuadPart >> 8 & 0xff) * 0x100000001b3 ^
                                    (ulonglong)local_res18.QuadPart >> 0x10 & 0xff) * 0x100000001b3
                                   ^ (ulonglong)local_res18.QuadPart >> 0x18 & 0xff) * 0x100000001b3
                    ;
                    puVar23 = *(undefined8 **)
                               (*(longlong *)(pHVar17 + 6) + 8 +
                               (local_2f8[0] & *(ulonglong *)(pHVar17 + 0xc)) * 0x10);
                    if (puVar23 != puVar26) {
                      uVar33 = *(uint *)(puVar23 + 2);
                      puVar26 = puVar23;
                      while (puVar23 = puVar26, local_res18.s.LowPart != uVar33) {
                        if (puVar26 ==
                            *(undefined8 **)
                             (*(longlong *)(pHVar17 + 6) +
                             (local_2f8[0] & *(ulonglong *)(pHVar17 + 0xc)) * 0x10))
                        goto LAB_1400590d9;
                        puVar26 = (undefined8 *)puVar26[1];
                        uVar33 = *(uint *)(puVar26 + 2);
                      }
                      goto LAB_140059439;
                    }
LAB_1400590d9:
                    if (*(longlong *)(pHVar17 + 4) == 0x492492492492492) goto LAB_14005a82d;
                    puVar23 = (undefined8 *)FUN_14028af20(0x38);
                    *(DWORD *)(puVar23 + 2) = local_res18.s.LowPart;
                    puVar23[6] = 0;
                    puVar23[3] = 0;
                    puVar23[4] = 0;
                    puVar23[5] = 0;
                    uVar31 = *(ulonglong *)(pHVar17 + 0xe);
                    if ((float)pHVar17->unused <
                        (float)(*(longlong *)(pHVar17 + 4) + 1) / (float)uVar31) {
                      auVar42._0_8_ =
                           FUN_140419fa0((float)(*(longlong *)(pHVar17 + 4) + 1) /
                                         (float)pHVar17->unused);
                      auVar42._8_8_ = extraout_XMM0_Qb_00;
                      lVar29 = 0;
                      if ((fVar46 <= (float)auVar42._0_8_) &&
                         (auVar43._4_12_ = auVar42._4_12_,
                         auVar43._0_4_ = (float)auVar42._0_8_ - fVar46,
                         auVar42._0_8_ = auVar43._0_8_, auVar43._0_4_ < fVar46)) {
                        lVar29 = -0x8000000000000000;
                      }
                      uVar27 = (longlong)(float)auVar42._0_8_ + lVar29;
                      uVar30 = 8;
                      if (8 < uVar27) {
                        uVar30 = uVar27;
                      }
                      uVar27 = uVar31;
                      if ((uVar31 < uVar30) &&
                         ((0x1ff < uVar31 || (uVar27 = uVar31 * 8, uVar31 * 8 < uVar30)))) {
                        uVar27 = uVar30;
                      }
                      for (lVar29 = 0x3f; 0xfffffffffffffffU >> lVar29 == 0; lVar29 = lVar29 + -1) {
                      }
                      if ((ulonglong)(1L << ((byte)lVar29 & 0x3f)) < uVar27) goto LAB_14005a83a;
                      plVar35 = *(longlong **)(pHVar17 + 2);
                      uVar31 = uVar27 - 1 | 1;
                      lVar29 = 0x3f;
                      if (uVar31 != 0) {
                        for (; uVar31 >> lVar29 == 0; lVar29 = lVar29 + -1) {
                        }
                      }
                      bVar32 = (char)lVar29 + 1;
                      lVar29 = 1L << (bVar32 & 0x3f);
                      FUN_14004f190(pHVar17 + 6,2L << (bVar32 & 0x3f),plVar35);
                      *(longlong *)(pHVar17 + 0xe) = lVar29;
                      *(longlong *)(pHVar17 + 0xc) = lVar29 + -1;
                      plVar1 = (longlong *)**(undefined8 **)(pHVar17 + 2);
joined_r0x000140059231:
                      if (plVar1 != plVar35) {
                        lVar29 = *(longlong *)(pHVar17 + 6);
                        plVar3 = (longlong *)*plVar1;
                        uVar31 = (((((ulonglong)*(byte *)(plVar1 + 2) ^ 0xcbf29ce484222325) *
                                    0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar1 + 0x11)) *
                                   0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar1 + 0x12)) *
                                  0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar1 + 0x13)) *
                                 0x100000001b3 & *(ulonglong *)(pHVar17 + 0xc);
                        plVar4 = *(longlong **)(lVar29 + uVar31 * 0x10);
                        puVar25 = local_1d0;
                        param_1 = local_res8;
                        if (plVar4 == plVar35) {
                          *(longlong **)(lVar29 + uVar31 * 0x10) = plVar1;
                          *(longlong **)(lVar29 + 8 + uVar31 * 0x10) = plVar1;
                          plVar1 = plVar3;
                        }
                        else {
                          plVar5 = *(longlong **)(lVar29 + 8 + uVar31 * 0x10);
                          if ((int)plVar1[2] == (int)plVar5[2]) {
                            plVar5 = (longlong *)*plVar5;
                            if (plVar5 != plVar1) {
                              plVar4 = (longlong *)plVar1[1];
                              *plVar4 = (longlong)plVar3;
                              puVar26 = (undefined8 *)plVar3[1];
                              *puVar26 = plVar5;
                              puVar6 = (undefined8 *)plVar5[1];
                              *puVar6 = plVar1;
                              plVar5[1] = (longlong)puVar26;
                              plVar3[1] = (longlong)plVar4;
                              plVar1[1] = (longlong)puVar6;
                            }
                            *(longlong **)(lVar29 + 8 + uVar31 * 0x10) = plVar1;
                            plVar1 = plVar3;
                          }
                          else {
                            do {
                              if (plVar4 == plVar5) {
                                plVar4 = (longlong *)plVar1[1];
                                *plVar4 = (longlong)plVar3;
                                puVar26 = (undefined8 *)plVar3[1];
                                *puVar26 = plVar5;
                                puVar6 = (undefined8 *)plVar5[1];
                                *puVar6 = plVar1;
                                plVar5[1] = (longlong)puVar26;
                                plVar3[1] = (longlong)plVar4;
                                plVar1[1] = (longlong)puVar6;
                                *(longlong **)(lVar29 + uVar31 * 0x10) = plVar1;
                                plVar1 = plVar3;
                                goto joined_r0x000140059231;
                              }
                              plVar5 = (longlong *)plVar5[1];
                            } while ((int)plVar1[2] != (int)plVar5[2]);
                            lVar29 = *plVar5;
                            plVar4 = (longlong *)plVar1[1];
                            *plVar4 = (longlong)plVar3;
                            plVar5 = (longlong *)plVar3[1];
                            *plVar5 = lVar29;
                            puVar26 = *(undefined8 **)(lVar29 + 8);
                            *puVar26 = plVar1;
                            *(longlong **)(lVar29 + 8) = plVar5;
                            plVar3[1] = (longlong)plVar4;
                            plVar1[1] = (longlong)puVar26;
                            plVar1 = plVar3;
                          }
                        }
                        goto joined_r0x000140059231;
                      }
                      local_270 = 0;
                      uStack_26c = 0;
                      FUN_140060240(&local_270);
                      puVar26 = *(undefined8 **)(pHVar17 + 2);
                      puVar6 = *(undefined8 **)
                                (*(longlong *)(pHVar17 + 6) + 8 +
                                (local_2f8[0] & *(ulonglong *)(pHVar17 + 0xc)) * 0x10);
                      if (puVar6 != puVar26) {
                        iVar39 = *(int *)(puVar6 + 2);
                        puVar26 = puVar6;
                        while (*(int *)(puVar23 + 2) != iVar39) {
                          if (puVar26 ==
                              *(undefined8 **)
                               (*(longlong *)(pHVar17 + 6) +
                               (local_2f8[0] & *(ulonglong *)(pHVar17 + 0xc)) * 0x10))
                          goto LAB_1400593d9;
                          puVar26 = (undefined8 *)puVar26[1];
                          iVar39 = *(int *)(puVar26 + 2);
                        }
                        puVar26 = (undefined8 *)*puVar26;
                      }
                    }
LAB_1400593d9:
                    puVar6 = (undefined8 *)puVar26[1];
                    *(longlong *)(pHVar17 + 4) = *(longlong *)(pHVar17 + 4) + 1;
                    *puVar23 = puVar26;
                    puVar23[1] = puVar6;
                    *puVar6 = puVar23;
                    puVar26[1] = puVar23;
                    lVar29 = *(longlong *)(pHVar17 + 6);
                    local_2f8[0] = *(ulonglong *)(pHVar17 + 0xc) & local_2f8[0];
                    puVar7 = *(undefined8 **)(lVar29 + local_2f8[0] * 0x10);
                    if (puVar7 == *(undefined8 **)(pHVar17 + 2)) {
                      *(undefined8 **)(lVar29 + local_2f8[0] * 0x10) = puVar23;
LAB_140059420:
                      *(undefined8 **)(lVar29 + 8 + local_2f8[0] * 0x10) = puVar23;
                    }
                    else if (puVar7 == puVar26) {
                      *(undefined8 **)(lVar29 + local_2f8[0] * 0x10) = puVar23;
                    }
                    else if (*(undefined8 **)(lVar29 + 8 + local_2f8[0] * 0x10) == puVar6)
                    goto LAB_140059420;
LAB_140059439:
                    puVar23[3] = CONCAT44(uStack_28c,local_290);
                    puVar23[4] = CONCAT44(uStack_284,uStack_288);
                    puVar23[5] = CONCAT44(uStack_27c,uStack_280);
                    puVar23[6] = CONCAT44(uStack_274,uStack_278);
                    local_2f8[0] = ((((local_res18.QuadPart & 0xffU ^ 0xcbf29ce484222325) *
                                      0x100000001b3 ^ (ulonglong)local_res18.QuadPart >> 8 & 0xff) *
                                     0x100000001b3 ^ (ulonglong)local_res18.QuadPart >> 0x10 & 0xff)
                                    * 0x100000001b3 ^ (ulonglong)local_res18.QuadPart >> 0x18 & 0xff
                                   ) * 0x100000001b3;
                    FUN_140060150(pHVar17,&local_270,&local_res18,local_2f8[0]);
                    puVar23 = (undefined8 *)CONCAT44(uStack_264,uStack_268);
                    if (puVar23 == (undefined8 *)0x0) {
                      if (*(longlong *)(pHVar17 + 4) == 0x492492492492492) {
LAB_14005a82d:
                    /* WARNING: Subroutine does not return */
                        FUN_14028c2e0("unordered_map/set too long");
                      }
                      puVar23 = (undefined8 *)FUN_14028af20(0x38);
                      *(DWORD *)(puVar23 + 2) = local_res18.s.LowPart;
                      puVar23[6] = 0;
                      puVar23[3] = 0;
                      puVar23[4] = 0;
                      puVar23[5] = 0;
                      uVar31 = *(ulonglong *)(pHVar17 + 0xe);
                      if ((float)(*(longlong *)(pHVar17 + 4) + 1) / (float)uVar31 <=
                          (float)pHVar17->unused) {
                        puVar26 = (undefined8 *)CONCAT44(uStack_26c,local_270);
                      }
                      else {
                        auVar44._0_8_ =
                             FUN_140419fa0((float)(*(longlong *)(pHVar17 + 4) + 1) /
                                           (float)pHVar17->unused);
                        auVar44._8_8_ = extraout_XMM0_Qb_01;
                        lVar29 = 0;
                        if ((fVar46 <= (float)auVar44._0_8_) &&
                           (auVar45._4_12_ = auVar44._4_12_,
                           auVar45._0_4_ = (float)auVar44._0_8_ - fVar46,
                           auVar44._0_8_ = auVar45._0_8_, auVar45._0_4_ < fVar46)) {
                          lVar29 = -0x8000000000000000;
                        }
                        uVar27 = (longlong)(float)auVar44._0_8_ + lVar29;
                        uVar30 = 8;
                        if (8 < uVar27) {
                          uVar30 = uVar27;
                        }
                        uVar27 = uVar31;
                        if ((uVar31 < uVar30) &&
                           ((0x1ff < uVar31 || (uVar27 = uVar31 * 8, uVar31 * 8 < uVar30)))) {
                          uVar27 = uVar30;
                        }
                        for (lVar29 = 0x3f; 0xfffffffffffffffU >> lVar29 == 0; lVar29 = lVar29 + -1)
                        {
                        }
                        if ((ulonglong)(1L << ((byte)lVar29 & 0x3f)) < uVar27) {
LAB_14005a83a:
                    /* WARNING: Subroutine does not return */
                          FUN_14028c2e0("invalid hash bucket count");
                        }
                        plVar35 = *(longlong **)(pHVar17 + 2);
                        uVar31 = uVar27 - 1 | 1;
                        lVar29 = 0x3f;
                        if (uVar31 != 0) {
                          for (; uVar31 >> lVar29 == 0; lVar29 = lVar29 + -1) {
                          }
                        }
                        bVar32 = (char)lVar29 + 1;
                        lVar29 = 1L << (bVar32 & 0x3f);
                        FUN_14004f190(pHVar17 + 6,2L << (bVar32 & 0x3f),plVar35);
                        *(longlong *)(pHVar17 + 0xe) = lVar29;
                        *(longlong *)(pHVar17 + 0xc) = lVar29 + -1;
                        plVar1 = (longlong *)**(undefined8 **)(pHVar17 + 2);
joined_r0x000140059610:
                        if (plVar1 != plVar35) {
                          lVar29 = *(longlong *)(pHVar17 + 6);
                          plVar3 = (longlong *)*plVar1;
                          uVar31 = *(ulonglong *)(pHVar17 + 0xc) &
                                   (((((ulonglong)*(byte *)(plVar1 + 2) ^ 0xcbf29ce484222325) *
                                      0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar1 + 0x11))
                                     * 0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar1 + 0x12)
                                    ) * 0x100000001b3 ^
                                   (ulonglong)*(byte *)((longlong)plVar1 + 0x13)) * 0x100000001b3;
                          plVar4 = *(longlong **)(lVar29 + uVar31 * 0x10);
                          puVar25 = local_1d0;
                          param_1 = local_res8;
                          if (plVar4 == plVar35) {
                            *(longlong **)(lVar29 + uVar31 * 0x10) = plVar1;
                            *(longlong **)(lVar29 + 8 + uVar31 * 0x10) = plVar1;
                            plVar1 = plVar3;
                          }
                          else {
                            plVar5 = *(longlong **)(lVar29 + 8 + uVar31 * 0x10);
                            if ((int)plVar1[2] == (int)plVar5[2]) {
                              plVar5 = (longlong *)*plVar5;
                              if (plVar5 != plVar1) {
                                plVar4 = (longlong *)plVar1[1];
                                *plVar4 = (longlong)plVar3;
                                puVar26 = (undefined8 *)plVar3[1];
                                *puVar26 = plVar5;
                                puVar6 = (undefined8 *)plVar5[1];
                                *puVar6 = plVar1;
                                plVar5[1] = (longlong)puVar26;
                                plVar3[1] = (longlong)plVar4;
                                plVar1[1] = (longlong)puVar6;
                              }
                              *(longlong **)(lVar29 + 8 + uVar31 * 0x10) = plVar1;
                              plVar1 = plVar3;
                            }
                            else {
                              do {
                                if (plVar4 == plVar5) {
                                  plVar4 = (longlong *)plVar1[1];
                                  *plVar4 = (longlong)plVar3;
                                  puVar26 = (undefined8 *)plVar3[1];
                                  *puVar26 = plVar5;
                                  puVar6 = (undefined8 *)plVar5[1];
                                  *puVar6 = plVar1;
                                  plVar5[1] = (longlong)puVar26;
                                  plVar3[1] = (longlong)plVar4;
                                  plVar1[1] = (longlong)puVar6;
                                  *(longlong **)(lVar29 + uVar31 * 0x10) = plVar1;
                                  plVar1 = plVar3;
                                  goto joined_r0x000140059610;
                                }
                                plVar5 = (longlong *)plVar5[1];
                              } while ((int)plVar1[2] != (int)plVar5[2]);
                              lVar29 = *plVar5;
                              plVar4 = (longlong *)plVar1[1];
                              *plVar4 = (longlong)plVar3;
                              plVar5 = (longlong *)plVar3[1];
                              *plVar5 = lVar29;
                              puVar26 = *(undefined8 **)(lVar29 + 8);
                              *puVar26 = plVar1;
                              *(longlong **)(lVar29 + 8) = plVar5;
                              plVar3[1] = (longlong)plVar4;
                              plVar1[1] = (longlong)puVar26;
                              plVar1 = plVar3;
                            }
                          }
                          goto joined_r0x000140059610;
                        }
                        local_res8 = (undefined8 *)0x0;
                        FUN_140060240(&local_res8);
                        puVar26 = *(undefined8 **)(pHVar17 + 2);
                        puVar6 = *(undefined8 **)
                                  (*(longlong *)(pHVar17 + 6) + 8 +
                                  (local_2f8[0] & *(ulonglong *)(pHVar17 + 0xc)) * 0x10);
                        if (puVar6 != puVar26) {
                          iVar39 = *(int *)(puVar6 + 2);
                          puVar26 = puVar6;
                          while (*(int *)(puVar23 + 2) != iVar39) {
                            if (puVar26 ==
                                *(undefined8 **)
                                 (*(longlong *)(pHVar17 + 6) +
                                 (local_2f8[0] & *(ulonglong *)(pHVar17 + 0xc)) * 0x10))
                            goto LAB_1400597c0;
                            puVar26 = (undefined8 *)puVar26[1];
                            iVar39 = *(int *)(puVar26 + 2);
                          }
                          puVar26 = (undefined8 *)*puVar26;
                        }
                      }
LAB_1400597c0:
                      puVar6 = (undefined8 *)puVar26[1];
                      *(longlong *)(pHVar17 + 4) = *(longlong *)(pHVar17 + 4) + 1;
                      *puVar23 = puVar26;
                      puVar23[1] = puVar6;
                      *puVar6 = puVar23;
                      puVar26[1] = puVar23;
                      lVar29 = *(longlong *)(pHVar17 + 6);
                      uVar31 = *(ulonglong *)(pHVar17 + 0xc) & local_2f8[0];
                      puVar7 = *(undefined8 **)(lVar29 + uVar31 * 0x10);
                      if (puVar7 == *(undefined8 **)(pHVar17 + 2)) {
                        *(undefined8 **)(lVar29 + uVar31 * 0x10) = puVar23;
LAB_140059808:
                        *(undefined8 **)(lVar29 + 8 + uVar31 * 0x10) = puVar23;
                      }
                      else if (puVar7 == puVar26) {
                        *(undefined8 **)(lVar29 + uVar31 * 0x10) = puVar23;
                      }
                      else if (*(undefined8 **)(lVar29 + 8 + uVar31 * 0x10) == puVar6)
                      goto LAB_140059808;
                    }
                    puVar23 = puVar23 + 3;
                    plVar35 = local_2a8;
                  }
                  FUN_140017240(&local_1c8);
                }
              }
              else {
                puVar23 = (undefined8 *)(lVar29 + 0x18);
              }
              iVar39 = *(int *)(puVar25 + 0xe);
              if (-1 < iVar39) {
                *(undefined4 *)((longlong)puVar25 + 0x114) = *(undefined4 *)(puVar23 + 3);
                iVar39 = FUN_14005cad0(local_310._0_8_,puVar23,puVar25 + 0x19);
              }
              *(int *)(puVar25 + 0xe) = iVar39;
              if ((*(byte *)((longlong)puVar25 + 0x114) & 2) != 0) {
                FUN_14005f3c0(puVar25 + 0x24);
                auVar42._0_8_ = FUN_14005cd80(puVar25[0xf]);
                puVar25[0x24] = auVar42._0_8_;
                local_2e8 = (char *)local_218.hwnd;
                uStack_2d4 = 1;
                uStack_2d0 = 0;
                uStack_2c4 = 0;
                uStack_2c0 = 0;
                local_2d8 = 0x2c;
                pppppppuStack_2e0 = (undefined8 *******)0x100000001;
                uStack_2cc = 0;
                local_2c8 = 0x40;
                iVar39 = (**(code **)(*(longlong *)puVar25[0xf] + 0x28))
                                   ((longlong *)puVar25[0xf],&local_2e8,0,puVar25 + 0xc);
                if (-1 < iVar39) {
                  uStack_250 = 0;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = auStack_248._8_8_;
                  auStack_248 = auVar12 << 0x40;
                  local_258 = (char *)0x30000002d;
                  (**(code **)(*(longlong *)puVar25[0xf] + 0x50))
                            ((longlong *)puVar25[0xf],puVar25[0xc],&local_258,puVar25 + 0xd);
                }
              }
              if ((*(byte *)((longlong)puVar25 + 0x114) & 4) != 0) {
                auVar42._0_8_ = FUN_140005ee0(&local_2e8);
                puVar23 = (undefined8 *)
                          FUN_140005d20(auVar42._0_8_,"assets/materials/util/noise.png");
                if (7 < (ulonglong)puVar23[3]) {
                  puVar23 = (undefined8 *)*puVar23;
                }
                cVar18 = FUN_14005b3c0(puVar23,&local_res18,&local_res8);
                FUN_140016770(&local_2e8);
                if (cVar18 != '\0') {
                  auVar42._0_8_ = thunk_FUN_14028af20(0x40000);
                  cVar18 = (**(code **)*plVar35)
                                     (plVar35,0xd,(ulonglong)local_res8 & 0xffffffff,
                                      local_res18.QuadPart);
                  if (cVar18 != '\0') {
                    uStack_2d4 = 1;
                    uStack_2d0 = 0;
                    uStack_2c4 = 0;
                    uStack_2c0 = 0;
                    local_2d8 = 0x57;
                    pppppppuStack_2e0 = (undefined8 *******)0x100000001;
                    uStack_2cc = 1;
                    local_2c8 = 8;
                    local_2e8 = (char *)0x10000000100;
                    local_310.right = 0x400;
                    local_310.bottom = 0;
                    local_310._0_8_ = auVar42._0_8_;
                    iVar39 = (**(code **)(*(longlong *)puVar25[0xf] + 0x28))
                                       ((longlong *)puVar25[0xf],&local_2e8,&local_310,puVar25 + 8);
                    plVar35 = local_2a8;
                    if (-1 < iVar39) {
                      local_290 = 0x57;
                      uStack_28c = 4;
                      uStack_288 = 0;
                      uStack_284 = 1;
                      (**(code **)(*(longlong *)puVar25[0xf] + 0x38))
                                ((longlong *)puVar25[0xf],puVar25[8],&local_290,puVar25 + 9);
                      plVar35 = local_2a8;
                    }
                  }
                  thunk_FUN_14028af80(auVar42._0_8_);
                  thunk_FUN_14028af80(local_res18.QuadPart);
                }
                auVar42._0_8_ = FUN_140005ee0(&local_2e8);
                puVar23 = (undefined8 *)
                          FUN_140005d20(auVar42._0_8_,"assets/materials/util/clouds_256.png");
                if (7 < (ulonglong)puVar23[3]) {
                  puVar23 = (undefined8 *)*puVar23;
                }
                cVar18 = FUN_14005b3c0(puVar23,&local_res18,&local_res8);
                FUN_140016770(&local_2e8);
                if (cVar18 != '\0') {
                  auVar42._0_8_ = thunk_FUN_14028af20(0x40000);
                  cVar18 = (**(code **)*plVar35)
                                     (plVar35,0xd,(ulonglong)local_res8 & 0xffffffff,
                                      local_res18.QuadPart);
                  if (cVar18 != '\0') {
                    uStack_2d4 = 1;
                    uStack_2d0 = 0;
                    uStack_2c4 = 0;
                    uStack_2c0 = 0;
                    local_2d8 = 0x57;
                    pppppppuStack_2e0 = (undefined8 *******)0x100000001;
                    uStack_2cc = 1;
                    local_2c8 = 8;
                    local_2e8 = (char *)0x10000000100;
                    local_310.right = 0x400;
                    local_310.bottom = 0;
                    local_310._0_8_ = auVar42._0_8_;
                    iVar39 = (**(code **)(*(longlong *)puVar25[0xf] + 0x28))
                                       ((longlong *)puVar25[0xf],&local_2e8,&local_310,puVar25 + 10)
                    ;
                    if (-1 < iVar39) {
                      local_290 = 0x57;
                      uStack_28c = 4;
                      uStack_288 = 0;
                      uStack_284 = 1;
                      (**(code **)(*(longlong *)puVar25[0xf] + 0x38))
                                ((longlong *)puVar25[0xf],puVar25[10],&local_290,puVar25 + 0xb);
                    }
                  }
                  thunk_FUN_14028af80(auVar42._0_8_);
                  thunk_FUN_14028af80(local_res18.QuadPart);
                }
              }
              fVar46 = DAT_140492654;
              iVar39 = (int)local_res20;
            }
          }
          if (local_318 != (longlong *)0x0) {
            (**(code **)(*local_318 + 0x10))();
            local_318 = (longlong *)0x0;
          }
        }
      }
      FUN_140290ea0(&DAT_1404df690);
    }
  }
  puVar34 = auStackY_378;
  if (-1 < *(int *)(puVar25 + 0xe)) {
    uStack_2d4 = 1;
    uStack_2d0 = 0;
    uStack_2c4 = 0;
    local_2d8 = 0x57;
    pppppppuStack_2e0 = (undefined8 *******)0x100000001;
    local_2c8 = 8;
    local_2e8 = (char *)CONCAT44(local_1d4,iVar39);
    bVar32 = *(byte *)((longlong)puVar25 + 0x114) & 1;
    bVar40 = bVar32 == 0;
    if (bVar40) {
      local_298 = (ulonglong)(uint)(iVar39 * 4);
      ppuVar37 = &local_2a0;
      local_2a0 = (undefined8 *)*local_2a0;
    }
    else {
      pppppppuStack_2e0 = (undefined8 *******)0x100000000;
      ppuVar37 = (undefined8 **)0x0;
      local_2c8 = 0x28;
    }
    uStack_2c0 = (uint)!bVar40;
    uStack_2cc = (uint)bVar40;
    iVar39 = (**(code **)(*(longlong *)puVar25[0xf] + 0x28))
                       ((longlong *)puVar25[0xf],&local_2e8,ppuVar37,puVar25 + 6);
    *(int *)(puVar25 + 0xe) = iVar39;
    if (-1 < iVar39) {
      local_270 = 0x57;
      uStack_264 = 1;
      uStack_26c = 4;
      uStack_268 = 0;
      if (bVar32 != 0) {
        uStack_264 = 0xffffffff;
      }
      iVar39 = (**(code **)(*(longlong *)puVar25[0xf] + 0x38))
                         ((longlong *)puVar25[0xf],puVar25[6],&local_270,puVar25 + 7);
      *(int *)(puVar25 + 0xe) = iVar39;
    }
    puVar34 = auStackY_378;
    if ((bVar32 != 0) && (puVar34 = auStackY_378, -1 < iVar39)) {
      (**(code **)(*(longlong *)puVar25[6] + 0x50))((longlong *)puVar25[6],&local_218);
      iVar39 = FUN_140290d80(&DAT_1404df690);
      if (iVar39 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (DAT_1404df6dc == 0x7fffffff) {
        DAT_1404df6dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      (**(code **)(*(longlong *)puVar25[0x10] + 0x180))((longlong *)puVar25[0x10],puVar25[6],0,0);
      pHVar24 = DAT_1404e52b0;
      local_2a0 = &local_168;
      local_168 = _DAT_140492aa0;
      uStack_160 = _UNK_140492aa8;
      local_148 = _DAT_140493040;
      uStack_140 = _UNK_140493048;
      local_158 = _DAT_140492bb0;
      uStack_150 = _UNK_140492bb8;
      local_128 = _DAT_140492b50;
      uStack_120 = _UNK_140492b58;
      local_138 = _DAT_140492e20;
      uStack_130 = _UNK_140492e28;
      local_108 = _DAT_140492b80;
      uStack_100 = _UNK_140492b88;
      local_res18.s.LowPart = 0x14;
      local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffff00000000);
      local_118 = _DAT_140492e10;
      uStack_110 = _UNK_140492e18;
      local_f8 = 0;
      uStack_284 = 0;
      uStack_280 = 0;
      uStack_27c = 0;
      local_298 = 0;
      local_318 = (longlong *)0x0;
      uStack_28c = 1;
      local_290 = 0x78;
      uStack_288 = 1;
      if (puVar25[0x20] == 0) {
        puVar34 = auStackY_378;
        if (-1 < *(int *)(puVar25 + 0xe)) {
          if (*(longlong *)(DAT_1404e52b0 + 0x10) == 0) {
            uStack_250 = 0;
            local_258 = (char *)FUN_14028af20(0x30);
            pHVar17 = DAT_1404e52b0;
            uVar14 = s_assets_shaders_HLSL_dx11playlist_140477ce8._24_8_;
            auVar44._0_8_ = s_assets_shaders_HLSL_dx11playlist_140477ce8._16_8_;
            auVar42._0_8_ = s_assets_shaders_HLSL_dx11playlist_140477ce8._8_8_;
            *(undefined8 *)local_258 = s_assets_shaders_HLSL_dx11playlist_140477ce8._0_8_;
            *(undefined8 *)(local_258 + 8) = auVar42._0_8_;
            auVar42._0_8_ = s_assets_shaders_HLSL_dx11playlist_140477ce8._32_8_;
            *(undefined8 *)(local_258 + 0x10) = auVar44._0_8_;
            *(undefined8 *)(local_258 + 0x18) = uVar14;
            auStack_248._8_8_ = 0x2f;
            auStack_248._0_8_ = 0x28;
            *(undefined8 *)(local_258 + 0x20) = auVar42._0_8_;
            local_258[0x28] = '\0';
            uVar21 = FUN_14005c390(pHVar17,&local_258,pHVar24 + 0x10,0);
            *(undefined4 *)(puVar25 + 0xe) = uVar21;
            if (0xf < (ulonglong)auStack_248._8_8_) {
              uVar31 = auStack_248._8_8_ + 1;
              pcVar28 = local_258;
              if (0xfff < uVar31) {
                pcVar28 = *(char **)(local_258 + -8);
                if ((char *)0x1f < local_258 + (-8 - (longlong)pcVar28)) {
LAB_14005a130:
                  uVar33 = (uint)pHVar24;
                  pcVar8 = (code *)swi(0x29);
                  (*pcVar8)(5);
                  puVar34 = auStackY_370;
                  goto LAB_14005a13a;
                }
                uVar31 = auStack_248._8_8_ + 0x28;
              }
              thunk_FUN_14028af80(pcVar28,uVar31);
            }
          }
          puVar34 = auStackY_378;
          if (-1 < *(int *)(puVar25 + 0xe)) {
            uVar21 = FUN_14005cad0(puVar25[0xf],DAT_1404e52b0 + 0x10,puVar25 + 0x1d);
            *(undefined4 *)(puVar25 + 0xe) = uVar21;
            goto LAB_140059e8d;
          }
        }
      }
      else {
LAB_140059e8d:
        puVar34 = auStackY_378;
        if (((-1 < *(int *)(puVar25 + 0xe)) &&
            (iVar39 = (**(code **)(*(longlong *)puVar25[0xf] + 0x18))
                                ((longlong *)puVar25[0xf],&local_290,&local_2a0,&local_318),
            puVar34 = auStackY_378, -1 < iVar39)) && (puVar34 = auStackY_378, 1 < local_218.message)
           ) {
          uVar33 = 1;
          puVar34 = auStackY_378;
          do {
            local_258 = (char *)CONCAT44(uStack_26c,local_270);
            plVar35 = (longlong *)puVar25[0xf];
            auVar42._0_8_ = puVar25[6];
            uStack_250 = CONCAT44(1,uVar33 - 1);
            local_2a8 = (longlong *)0x0;
            auStack_248._0_8_ = local_260;
            pcVar8 = *(code **)(*plVar35 + 0x38);
            *(undefined8 *)(puVar34 + -8) = 0x140059f06;
            iVar39 = (*pcVar8)(plVar35,auVar42._0_8_,&local_258,&local_2a8);
            plVar35 = (longlong *)puVar25[0xf];
            auVar42._0_8_ = puVar25[6];
            *(undefined4 *)(puVar34 + 0x68) = 0x57;
            *(undefined4 *)(puVar34 + 0x6c) = 4;
            local_res20 = (longlong *)0x0;
            *(undefined8 *)(puVar34 + 0x74) = 0;
            *(uint *)(puVar34 + 0x70) = uVar33;
            pcVar8 = *(code **)(*plVar35 + 0x48);
            *(undefined8 *)(puVar34 + -8) = 0x140059f46;
            iVar20 = (*pcVar8)(plVar35,auVar42._0_8_,puVar34 + 0x68,&local_res20);
            *(int *)(puVar25 + 0xe) = iVar20;
            if ((-1 < iVar20) && (-1 < iVar39)) {
              local_1b8 = 0;
              local_1b4 = 0x3f800000;
              uVar38 = 1 << ((byte)uVar33 & 0x1f);
              uVar36 = (uint)local_218.hwnd / uVar38;
              local_1c8 = (undefined8 *******)0x0;
              uVar31 = ((ulonglong)local_218.hwnd >> 0x20) / (ulonglong)uVar38;
              uVar38 = 1;
              if (uVar36 != 0) {
                uVar38 = uVar36;
              }
              local_1c0 = (float)uVar38;
              uVar30 = 1;
              if ((int)uVar31 != 0) {
                uVar30 = uVar31;
              }
              plVar35 = (longlong *)puVar25[0x10];
              local_1bc = (float)uVar30;
              pcVar8 = *(code **)(*plVar35 + 0x160);
              *(undefined8 *)(puVar34 + -8) = 0x140059fe2;
              (*pcVar8)(plVar35,1,&local_1c8);
              plVar35 = (longlong *)puVar25[0x10];
              pcVar8 = *(code **)(*plVar35 + 0x108);
              *(undefined8 *)(puVar34 + -8) = 0x140059fff;
              (*pcVar8)(plVar35,1,&local_res20,0);
              plVar35 = (longlong *)puVar25[0x10];
              auVar42._0_8_ = puVar25[0x17];
              pcVar8 = *(code **)(*plVar35 + 0x118);
              *(undefined8 *)(puVar34 + -8) = 0x14005a01f;
              (*pcVar8)(plVar35,auVar42._0_8_,0,0xffffffff);
              plVar35 = (longlong *)puVar25[0x10];
              auVar42._0_8_ = puVar25[0x20];
              pcVar8 = *(code **)(*plVar35 + 0x88);
              *(undefined8 *)(puVar34 + -8) = 0x14005a036;
              (*pcVar8)(plVar35,auVar42._0_8_);
              plVar35 = (longlong *)puVar25[0x10];
              auVar42._0_8_ = puVar25[0x1d];
              pcVar8 = *(code **)(*plVar35 + 0x58);
              *(undefined8 *)(puVar34 + -8) = 0x14005a050;
              (*pcVar8)(plVar35,auVar42._0_8_,0,0);
              plVar35 = (longlong *)puVar25[0x10];
              auVar42._0_8_ = puVar25[0x1f];
              pcVar8 = *(code **)(*plVar35 + 0xb8);
              *(undefined8 *)(puVar34 + -8) = 0x14005a06d;
              (*pcVar8)(plVar35,auVar42._0_8_,0,0);
              plVar35 = (longlong *)puVar25[0x10];
              auVar42._0_8_ = puVar25[0x1e];
              pcVar8 = *(code **)(*plVar35 + 0x48);
              *(undefined8 *)(puVar34 + -8) = 0x14005a087;
              (*pcVar8)(plVar35,auVar42._0_8_,0,0);
              plVar35 = (longlong *)puVar25[0x10];
              pcVar8 = *(code **)(*plVar35 + 0x50);
              *(undefined8 *)(puVar34 + -8) = 0x14005a0a0;
              (*pcVar8)(plVar35,0,1,puVar25 + 0x12);
              plVar35 = (longlong *)puVar25[0x10];
              pcVar8 = *(code **)(*plVar35 + 0xc0);
              *(undefined8 *)(puVar34 + -8) = 0x14005a0b5;
              (*pcVar8)(plVar35,4);
              plVar35 = (longlong *)puVar25[0x10];
              *(undefined8 ***)(puVar34 + 0x28) = &local_res8;
              *(LARGE_INTEGER **)(puVar34 + 0x20) = &local_res18;
              pcVar8 = *(code **)(*plVar35 + 0x90);
              *(undefined8 *)(puVar34 + -8) = 0x14005a0e7;
              (*pcVar8)(plVar35,0,1,puVar34 + 0x60);
              plVar35 = (longlong *)puVar25[0x10];
              pcVar8 = *(code **)(*plVar35 + 0x40);
              *(undefined8 *)(puVar34 + -8) = 0x14005a0fd;
              (*pcVar8)(plVar35,0,1,&local_2a8);
              plVar35 = (longlong *)puVar25[0x10];
              pcVar8 = *(code **)(*plVar35 + 0x68);
              *(undefined8 *)(puVar34 + -8) = 0x14005a112;
              (*pcVar8)(plVar35,6,0);
            }
            if (local_res20 != (longlong *)0x0) {
              pcVar8 = *(code **)(*local_res20 + 0x10);
              *(undefined8 *)(puVar34 + -8) = 0x14005a124;
              (*pcVar8)();
              local_res20 = (longlong *)0x0;
            }
LAB_14005a13a:
            if (local_2a8 != (longlong *)0x0) {
              pcVar8 = *(code **)(*local_2a8 + 0x10);
              *(undefined8 *)(puVar34 + -8) = 0x14005a149;
              (*pcVar8)();
            }
            uVar33 = uVar33 + 1;
          } while (uVar33 < local_218.message);
        }
      }
      if (*(longlong **)(puVar34 + 0x60) != (longlong *)0x0) {
        pcVar8 = *(code **)(**(longlong **)(puVar34 + 0x60) + 0x10);
        *(undefined8 *)(puVar34 + -8) = 0x14005a164;
        (*pcVar8)();
        *(undefined8 *)(puVar34 + 0x60) = 0;
      }
      *(undefined8 *)(puVar34 + -8) = 0x14005a175;
      FUN_140290ea0(&DAT_1404df690);
    }
  }
  *(undefined8 *)(puVar34 + -8) = 0x14005a180;
  FUN_14005e6d0(puVar25);
  pHVar24 = (HWND)param_1[6];
  *(undefined8 *)(puVar34 + -8) = 0x14005a18f;
  ShowWindow(pHVar24,4);
  *(undefined4 *)(puVar34 + 0x20) = 1;
  local_1a0.hwnd = (HWND)0x0;
  local_1a0.message = 0;
  local_1a0._12_4_ = 0;
  local_1a0.wParam = 0;
  local_1a0.lParam = 0;
  local_1a0.time = 0;
  local_1a0.pt.x = 0;
  local_1a0.pt.y = 0;
  local_1a0._44_4_ = 0;
  *(undefined8 *)(puVar34 + -8) = 0x14005a1c6;
  iVar39 = PeekMessageW(&local_1a0,(HWND)0x0,0,0,*(UINT *)(puVar34 + 0x20));
  for (uVar33 = 0x32; (iVar39 != 0 && (1 < uVar33)); uVar33 = uVar33 - 1) {
    *(undefined8 *)(puVar34 + -8) = 0x14005a1e4;
    TranslateMessage(&local_1a0);
    *(undefined8 *)(puVar34 + -8) = 0x14005a1f1;
    DispatchMessageW(&local_1a0);
    *(undefined4 *)(puVar34 + 0x20) = 1;
    *(undefined8 *)(puVar34 + -8) = 0x14005a20b;
    iVar39 = PeekMessageW(&local_1a0,(HWND)0x0,0,0,*(UINT *)(puVar34 + 0x20));
  }
  *(undefined8 *)(puVar34 + -8) = 0x14005a21a;
  Sleep(0x20);
  *(undefined8 *)(puVar34 + -8) = 0x14005a223;
  iVar39 = FUN_140290d80(param_1 + 10);
  if (iVar39 != 0) {
LAB_14005a865:
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar34 + -8) = &UNK_14005a86f;
    FUN_140290d30(5);
  }
  iVar39 = *(int *)((longlong)param_1 + 0x9c);
  if (iVar39 != 0x7fffffff) {
    *(undefined1 *)(param_1 + 7) = 1;
    *(undefined8 *)(puVar34 + -8) = 0x14005a24b;
    FUN_140290ea0(param_1 + 10);
    while( true ) {
      *(undefined4 *)(puVar34 + 0x20) = 0x400003;
      local_218.hwnd = (HWND)0x0;
      local_218.message = 0;
      local_218._12_4_ = 0;
      local_218.wParam = 0;
      local_218.lParam = 0;
      local_218.time = 0;
      local_218.pt.x = 0;
      local_218.pt.y = 0;
      local_218._44_4_ = 0;
      *(undefined8 *)(puVar34 + -8) = 0x14005a27c;
      BVar22 = PeekMessageW(&local_218,(HWND)0x0,0,0,*(UINT *)(puVar34 + 0x20));
      if (BVar22 != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x14005a28a;
        TranslateMessage(&local_218);
        *(undefined8 *)(puVar34 + -8) = 0x14005a294;
        DispatchMessageW(&local_218);
      }
      *(undefined8 *)(puVar34 + -8) = 0x14005a29d;
      iVar39 = FUN_140290d80(param_1 + 10);
      if (iVar39 != 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar34 + -8) = &UNK_14005a80e;
        FUN_140290d30(5);
      }
      if (*(int *)((longlong)param_1 + 0x9c) == 0x7fffffff) {
        *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar34 + -8) = &UNK_14005a803;
        FUN_140290d30(6);
      }
      cVar18 = *(char *)((longlong)param_1 + 0x39);
      *(undefined8 *)(puVar34 + -8) = 0x14005a2c4;
      FUN_140290ea0(param_1 + 10);
      fVar53 = DAT_140492960;
      fVar41 = DAT_140492608;
      if (cVar18 != '\0') break;
      *(undefined8 *)(puVar34 + -8) = 0x14005a2d1;
      Sleep(1);
    }
    cVar18 = *(char *)((longlong)param_1 + 0x3a);
    while (cVar18 == '\0') {
      *(undefined4 *)(puVar34 + 0x20) = 1;
      *(undefined8 *)(puVar34 + -8) = 0x14005a30e;
      iVar39 = PeekMessageW(&local_1a0,(HWND)0x0,0,0,*(UINT *)(puVar34 + 0x20));
      while (iVar39 != 0) {
        *(undefined8 *)(puVar34 + -8) = 0x14005a31f;
        TranslateMessage(&local_1a0);
        *(undefined8 *)(puVar34 + -8) = 0x14005a32c;
        DispatchMessageW(&local_1a0);
        *(undefined4 *)(puVar34 + 0x20) = 1;
        *(undefined8 *)(puVar34 + -8) = 0x14005a346;
        iVar39 = PeekMessageW(&local_1a0,(HWND)0x0,0,0,*(UINT *)(puVar34 + 0x20));
      }
      *(undefined8 *)(puVar34 + -8) = 0x14005a357;
      QueryPerformanceCounter(&local_res18);
      lVar29 = param_1[0x17];
      ((LARGE_INTEGER *)(param_1 + 0x17))->QuadPart = (LONGLONG)local_res18;
      fVar54 = (float)(local_res18.QuadPart - lVar29) / (float)(longlong)param_1[0x18] +
               *(float *)(param_1 + 0x19);
      *(float *)(param_1 + 0x19) = fVar54;
      fVar54 = (fVar54 - fVar46) / ((float)*(int *)(local_res10 + 0xc) * fVar41);
      if (fVar16 <= fVar54) {
LAB_14005a3cd:
        fVar54 = fVar16;
      }
      else if (0.0 <= fVar54) {
        if (fVar16 <= fVar54) goto LAB_14005a3cd;
      }
      else {
        fVar54 = 0.0;
      }
      if (-1 < *(int *)(puVar25 + 0xe)) {
        plVar35 = (longlong *)puVar25[0x10];
        *(undefined1 **)(puVar34 + 0x28) = puVar34 + 0x68;
        auVar42._0_8_ = puVar25[0x15];
        *(undefined4 *)(puVar34 + 0x20) = 0;
        pcVar8 = *(code **)(*plVar35 + 0x70);
        *(undefined8 *)(puVar34 + -8) = 0x14005a40a;
        iVar39 = (*pcVar8)(plVar35,auVar42._0_8_,0,4);
        *(int *)(puVar25 + 0xe) = iVar39;
        if (-1 < iVar39) {
          pfVar9 = *(float **)(puVar34 + 0x68);
          *pfVar9 = fVar54;
          pfVar9[1] = *(float *)(puVar25 + 0x21);
          pfVar9[2] = *(float *)((longlong)puVar25 + 0x10c);
          *(undefined8 *)(puVar34 + -8) = 0x14005a435;
          iVar39 = FUN_1402c97a0();
          pfVar9[3] = (float)iVar39 / fVar53;
          fVar11 = fVar16;
          if (0.0 < *(float *)((longlong)puVar25 + 0xc)) {
            fVar11 = *(float *)(puVar25 + 1) / *(float *)((longlong)puVar25 + 0xc);
          }
          pfVar9[4] = fVar11;
          pfVar9[5] = *(float *)(puVar25 + 1);
          pfVar9[6] = *(float *)((longlong)puVar25 + 0xc);
          auVar42._0_8_ = puVar25[0x26];
          *(undefined8 *)(pfVar9 + 8) = puVar25[0x25];
          *(undefined8 *)(pfVar9 + 10) = auVar42._0_8_;
          auVar42._0_8_ = puVar25[0x28];
          *(undefined8 *)(pfVar9 + 0xc) = puVar25[0x27];
          *(undefined8 *)(pfVar9 + 0xe) = auVar42._0_8_;
          auVar42._0_8_ = puVar25[0x2a];
          *(undefined8 *)(pfVar9 + 0x10) = puVar25[0x29];
          *(undefined8 *)(pfVar9 + 0x12) = auVar42._0_8_;
          auVar42._0_8_ = puVar25[0x2c];
          *(undefined8 *)(pfVar9 + 0x14) = puVar25[0x2b];
          *(undefined8 *)(pfVar9 + 0x16) = auVar42._0_8_;
          *(undefined8 *)(puVar34 + -8) = 0x14005a4ac;
          FUN_14005f730(&local_218,puVar25 + 0x25);
          *(HWND *)(pfVar9 + 0x18) = local_218.hwnd;
          pfVar9[0x1a] = (float)local_218.message;
          pfVar9[0x1b] = (float)local_218._12_4_;
          *(WPARAM *)(pfVar9 + 0x1c) = local_218.wParam;
          *(LPARAM *)(pfVar9 + 0x1e) = local_218.lParam;
          pfVar9[0x20] = (float)local_218.time;
          pfVar9[0x21] = (float)local_218.pt.x;
          pfVar9[0x22] = (float)local_218.pt.y;
          pfVar9[0x23] = (float)local_218._44_4_;
          *(undefined8 *)(pfVar9 + 0x24) = local_1e8;
          *(undefined8 *)(pfVar9 + 0x26) = uStack_1e0;
          plVar35 = (longlong *)puVar25[0x10];
          auVar42._0_8_ = puVar25[0x15];
          pcVar8 = *(code **)(*plVar35 + 0x78);
          *(undefined8 *)(puVar34 + -8) = 0x14005a4ef;
          (*pcVar8)(plVar35,auVar42._0_8_,0);
        }
        plVar35 = (longlong *)puVar25[0x10];
        pcVar8 = *(code **)(*plVar35 + 0x160);
        *(undefined8 *)(puVar34 + -8) = 0x14005a505;
        (*pcVar8)(plVar35,1,puVar25);
        plVar35 = (longlong *)puVar25[0x10];
        auVar42._0_8_ = puVar25[5];
        local_270 = 0;
        uStack_26c = 0;
        uStack_268 = 0;
        uStack_264 = 0;
        pcVar8 = *(code **)(*plVar35 + 400);
        *(undefined8 *)(puVar34 + -8) = 0x14005a524;
        (*pcVar8)(plVar35,auVar42._0_8_,&local_270);
        plVar35 = (longlong *)puVar25[0x10];
        lVar29 = puVar25[0xd];
        lVar10 = *plVar35;
        if (lVar29 == 0) {
          pcVar8 = *(code **)(lVar10 + 0x108);
          *(undefined8 *)(puVar34 + -8) = 0x14005a590;
          (*pcVar8)(plVar35,1,puVar25 + 5,0);
        }
        else {
          puVar34[0x20] = 0;
          pcVar8 = *(code **)(lVar10 + 0x1a8);
          *(undefined8 *)(puVar34 + -8) = 0x14005a549;
          (*pcVar8)(plVar35,lVar29,1,fVar16);
          plVar35 = (longlong *)puVar25[0x10];
          auVar42._0_8_ = puVar25[0xd];
          pcVar8 = *(code **)(*plVar35 + 0x108);
          *(undefined8 *)(puVar34 + -8) = 0x14005a564;
          (*pcVar8)(plVar35,1,puVar25 + 5,auVar42._0_8_);
          plVar35 = (longlong *)puVar25[0x10];
          auVar42._0_8_ = puVar25[0x18];
          pcVar8 = *(code **)(*plVar35 + 0x120);
          *(undefined8 *)(puVar34 + -8) = 0x14005a57e;
          (*pcVar8)(plVar35,auVar42._0_8_,0);
        }
        plVar35 = (longlong *)puVar25[0x10];
        auVar42._0_8_ = puVar25[0x14];
        iVar39 = *(int *)(puVar25 + 0x23);
        pcVar8 = *(code **)(*plVar35 + 0x158);
        *(undefined8 *)(puVar34 + -8) = 0x14005a5ad;
        (*pcVar8)(plVar35,auVar42._0_8_);
        plVar35 = (longlong *)puVar25[0x10];
        auVar42._0_8_ = puVar25[0x17];
        pcVar8 = *(code **)(*plVar35 + 0x118);
        *(undefined8 *)(puVar34 + -8) = 0x14005a5cd;
        (*pcVar8)(plVar35,auVar42._0_8_,0,0xffffffff);
        plVar35 = (longlong *)puVar25[0x10];
        auVar42._0_8_ = puVar25[0x1c];
        pcVar8 = *(code **)(*plVar35 + 0x88);
        *(undefined8 *)(puVar34 + -8) = 0x14005a5e4;
        (*pcVar8)(plVar35,auVar42._0_8_);
        plVar35 = (longlong *)puVar25[0x10];
        uVar21 = 1;
        if (1 < iVar39) {
          uVar21 = 4;
        }
        pcVar8 = *(code **)(*plVar35 + 0xc0);
        *(undefined8 *)(puVar34 + -8) = 0x14005a602;
        (*pcVar8)(plVar35,uVar21);
        plVar35 = (longlong *)puVar25[0x10];
        pcVar8 = *(code **)(*plVar35 + 0x38);
        *(undefined8 *)(puVar34 + -8) = 0x14005a61b;
        (*pcVar8)(plVar35,0,1,puVar25 + 0x15);
        plVar35 = (longlong *)puVar25[0x10];
        pcVar8 = *(code **)(*plVar35 + 0xb0);
        *(undefined8 *)(puVar34 + -8) = 0x14005a637;
        (*pcVar8)(plVar35,0,1,puVar25 + 0x15);
        plVar35 = (longlong *)puVar25[0x10];
        pcVar8 = *(code **)(*plVar35 + 0x80);
        *(undefined8 *)(puVar34 + -8) = 0x14005a653;
        (*pcVar8)(plVar35,0,1,puVar25 + 0x15);
        plVar35 = (longlong *)puVar25[0x10];
        auVar42._0_8_ = puVar25[0x19];
        pcVar8 = *(code **)(*plVar35 + 0x58);
        *(undefined8 *)(puVar34 + -8) = 0x14005a66d;
        (*pcVar8)(plVar35,auVar42._0_8_,0,0);
        plVar35 = (longlong *)puVar25[0x10];
        auVar42._0_8_ = puVar25[0x1b];
        pcVar8 = *(code **)(*plVar35 + 0xb8);
        *(undefined8 *)(puVar34 + -8) = 0x14005a68a;
        (*pcVar8)(plVar35,auVar42._0_8_,0,0);
        plVar35 = (longlong *)puVar25[0x10];
        auVar42._0_8_ = puVar25[0x1a];
        pcVar8 = *(code **)(*plVar35 + 0x48);
        *(undefined8 *)(puVar34 + -8) = 0x14005a6a4;
        (*pcVar8)(plVar35,auVar42._0_8_,0,0);
        local_2a0 = (undefined8 *)puVar25[0x12];
        local_298 = puVar25[0x13];
        local_258 = (char *)puVar25[7];
        uStack_250 = 0;
        auVar42._0_8_ = auStack_248._8_8_;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = auStack_248._8_8_;
        auStack_248 = auVar13 << 0x40;
        if (puVar25[9] != 0) {
          auStack_248._0_8_ = puVar25[0xb];
          auStack_248 = CONCAT88(auVar42._0_8_,auStack_248._0_8_);
          uStack_250 = puVar25[9];
        }
        plVar35 = (longlong *)puVar25[0x10];
        pcVar8 = *(code **)(*plVar35 + 0x50);
        *(undefined8 *)(puVar34 + -8) = 0x14005a6f7;
        (*pcVar8)(plVar35,0,2,&local_2a0);
        plVar35 = (longlong *)puVar25[0x10];
        pcVar8 = *(code **)(*plVar35 + 0x40);
        *(undefined8 *)(puVar34 + -8) = 0x14005a710;
        (*pcVar8)(plVar35,0,3,&local_258);
        plVar35 = (longlong *)puVar25[0x10];
        *(undefined8 ***)(puVar34 + 0x28) = &local_res8;
        local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffff00000000);
        lVar29 = *plVar35;
        *(longlong *)(puVar34 + 0x20) = (longlong)puVar25 + 0x11c;
        pcVar8 = *(code **)(lVar29 + 0x90);
        *(undefined8 *)(puVar34 + -8) = 0x14005a762;
        (*pcVar8)(plVar35,0);
        pcVar8 = *(code **)(*(longlong *)puVar25[0x10] + 0x68);
        *(undefined8 *)(puVar34 + -8) = 0x14005a778;
        (*pcVar8)();
        if (-1 < *(int *)(puVar25 + 0xe)) {
          pcVar8 = *(code **)(*(longlong *)puVar25[4] + 0x40);
          *(undefined8 *)(puVar34 + -8) = 0x14005a78d;
          uVar21 = (*pcVar8)();
          *(undefined4 *)(puVar25 + 0xe) = uVar21;
        }
      }
      *(undefined8 *)(puVar34 + -8) = 0x14005a79b;
      Sleep(0xf);
      if (fVar16 <= fVar54) break;
      cVar18 = *(char *)((longlong)param_1 + 0x3a);
    }
    pHVar24 = (HWND)param_1[6];
    *(undefined8 *)(puVar34 + -8) = 0x14005a7ba;
    ShowWindow(pHVar24,0);
    *(undefined8 *)(puVar34 + -8) = 0x14005a7c2;
    FUN_14005e170(puVar25);
    *(undefined8 *)(puVar34 + -8) = 0x14005a7cf;
    thunk_FUN_14028af80(puVar25,0x168);
    pHVar24 = (HWND)param_1[6];
    *(undefined8 *)(puVar34 + -8) = 0x14005a7d9;
    DestroyWindow(pHVar24);
    LOCK();
    *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
    UNLOCK();
    pcVar8 = *(code **)(*(longlong *)*local_res10 + 0x28);
    *(undefined8 *)(puVar34 + -8) = 0x14005a7ed;
    (*pcVar8)();
    return;
  }
LAB_14005a870:
  *(int *)((longlong)param_1 + 0x9c) = iVar39 + -1;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar34 + -8) = &UNK_14005a883;
  FUN_140290d30(6);
}

