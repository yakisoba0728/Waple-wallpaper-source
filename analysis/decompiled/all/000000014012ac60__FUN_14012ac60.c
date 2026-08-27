// Function: FUN_14012ac60
// Addr: 14012ac60
// Size: 2998 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "enum_690": Some values do not have unique names */
/* WARNING: Enum "enum_689": Some values do not have unique names */

ulonglong FUN_14012ac60(LUID param_1,LUID param_2,LUID param_3,LUID param_4)

{
  LUID *pLVar1;
  undefined4 *puVar2;
  char cVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  UINT32 UVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  int iVar13;
  BOOL BVar14;
  LONG LVar15;
  int iVar16;
  LUID LVar17;
  longlong lVar18;
  LUID LVar19;
  ulonglong uVar20;
  LUID LVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  longlong lVar25;
  LUID LVar26;
  LUID LVar27;
  undefined8 uVar28;
  UINT32 *numModeInfoArrayElements;
  LUID LVar29;
  LUID LVar30;
  longlong lVar31;
  LUID LVar32;
  LUID LVar33;
  HMONITOR__ HVar34;
  float fVar35;
  undefined1 auStackY_398 [8];
  undefined1 auStackY_390 [24];
  UINT32 local_348;
  UINT32 local_344;
  LUID local_340;
  longlong *local_338;
  int local_330;
  int local_32c;
  LUID local_320;
  longlong *local_318;
  LUID local_310;
  LUID local_308;
  longlong *local_300;
  uint local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  LUID local_2e0;
  LUID local_2d8;
  DISPLAYCONFIG_DEVICE_INFO_HEADER local_2d0;
  uint local_2bc;
  undefined8 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  longlong local_288;
  LUID local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268 [20];
  undefined1 auStack_254 [4];
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined8 uStack_21c;
  tagMONITORINFO local_208;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  LUID LStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_e8;
  DWORD DStack_e4;
  LONG LStack_e0;
  UINT32 UStack_dc;
  
  puVar22 = auStackY_398;
  puVar23 = auStackY_398;
  puVar24 = auStackY_398;
  cVar3 = *(char *)((longlong)param_1 + 0x16);
  local_278 = _DAT_140492ca0;
  uStack_270 = _UNK_140492ca8;
  uVar28 = 0x800;
  if (cVar3 == '\0') {
    uVar28 = 1;
  }
  uVar12 = D3D11CreateDevice(0,1,0,uVar28);
  if ((int)uVar12 < 0) {
    if (cVar3 != '\0') {
      FUN_140098930("D3D11_CREATE_DEVICE_VIDEO_SUPPORT failed.\n",1);
      uVar12 = D3D11CreateDevice(0,1,0,cVar3 == '\0');
      if (-1 < (int)uVar12) goto LAB_14012ad7a;
    }
    LVar21.HighPart = 0;
    LVar21.LowPart = uVar12;
    *(int *)param_4 = 0;
    FUN_14012b820(param_3);
    goto LAB_14012b800;
  }
LAB_14012ad7a:
  uVar12 = 0;
  ((HMONITOR)((longlong)param_3 + 0x48))->unused = 0;
  if (local_330 == 0xa100) {
LAB_14012ada1:
    ((HMONITOR)((longlong)param_3 + 0x48))->unused = uVar12 | 1;
  }
  else if ((local_330 - 0xb000U & 0xfffffeff) == 0) {
    uVar12 = 2;
    goto LAB_14012ada1;
  }
  LVar17 = *(LUID *)param_1;
  local_338 = (longlong *)0x0;
  local_2e8 = (longlong *)0x0;
  local_280 = LVar17;
  uVar12 = (**(code **)**(undefined8 **)param_3)(*(undefined8 **)param_3,&DAT_140474258,&local_2e8);
  LVar21.HighPart = 0;
  LVar21.LowPart = uVar12;
  if ((int)uVar12 < 0) {
LAB_14012b7a7:
    if (local_338 != (longlong *)0x0) {
      (**(code **)(*local_338 + 0x10))();
      local_338 = (longlong *)0x0;
    }
    *(int *)param_4 = 1;
  }
  else {
    local_318 = (longlong *)0x0;
    uVar12 = (**(code **)(*local_2e8 + 0x38))(local_2e8,&local_318);
    if (-1 < (int)uVar12) {
      uVar12 = (**(code **)(*local_318 + 0x30))(local_318,&DAT_140477f00,&local_338);
      LVar17 = *(LUID *)((longlong)param_1 + 8);
      local_2f8 = uVar12;
      if (LVar17 == (LUID)0x0) {
        local_2d8 = LVar17;
        LVar17 = (LUID)MonitorFromWindow(*(HWND *)param_1,2);
      }
      local_300 = (longlong *)0x0;
      local_32c = 1;
      numModeInfoArrayElements = (UINT32 *)*local_318;
      local_2d8 = LVar17;
      iVar13 = (**(code **)(numModeInfoArrayElements + 0xe))(local_318,0,&local_300);
      fVar11 = DAT_140492904;
      fVar10 = DAT_1404928e8;
      dVar9 = DAT_140492850;
      dVar8 = DAT_140492838;
      iVar16 = 1;
      while (-1 < iVar13) {
        LVar27.LowPart = 0;
        LVar27.HighPart = 0;
        local_2f0 = (longlong *)0x0;
        iVar13 = (**(code **)*local_300)(local_300,&DAT_14048a798,&local_2f0);
        if (-1 < iVar13) {
          local_198 = 0;
          uStack_190 = 0;
          local_108 = 0;
          local_188 = 0;
          uStack_180 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_158 = 0;
          uStack_150 = 0;
          local_148 = 0;
          LStack_140.LowPart = 0;
          LStack_140.HighPart = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          iVar13 = (**(code **)(*local_2f0 + 0xd8))(local_2f0,&local_198);
          if ((-1 < iVar13) && (LStack_140 == LVar17)) {
            if (local_138._4_4_ == 0xc) {
              fVar35 = uStack_110._4_4_;
              if (uStack_110._4_4_ <= fVar10) {
                fVar35 = fVar10;
              }
              LVar19 = LVar17;
              HVar34.unused = *(int *)((longlong)param_1 + 0x10);
              if ((float)*(int *)((longlong)param_1 + 0x10) < fVar10) {
                local_348 = 0;
                local_344 = 0;
                local_2e0.LowPart = 0;
                local_2e0.HighPart = 0;
                local_208.rcMonitor.top = 0;
                local_208.rcMonitor.right = 0;
                local_208.cbSize = 0x68;
                local_208.rcMonitor.left = 0;
                local_310.LowPart = 0;
                local_310.HighPart = 0;
                local_308.LowPart = 0;
                local_308.HighPart = 0;
                local_320.LowPart = 0;
                local_320.HighPart = 0;
                local_340.LowPart = 0;
                local_340.HighPart = 0;
                local_208.rcWork.bottom = 0;
                local_208.dwFlags = 0;
                local_208.rcMonitor.bottom = 0;
                local_208.rcWork.left = 0;
                local_208.rcWork.top = 0;
                local_208.rcWork.right = 0;
                local_1e0 = 0;
                uStack_1d8 = 0;
                local_1d0 = 0;
                uStack_1c8 = 0;
                local_1c0 = 0;
                uStack_1b8 = 0;
                local_1b0 = 0;
                uStack_1a8 = 0;
                BVar14 = GetMonitorInfoW((HMONITOR)LVar17,&local_208);
                LVar21 = LVar27;
                LVar19 = local_2d8;
                LVar29 = LVar27;
                LVar30 = LVar27;
                LVar32 = param_3;
                LVar26 = LVar27;
                HVar34.unused = (int)fVar11;
                iVar16 = local_32c;
                if (BVar14 != 0) {
                  do {
                    LVar33 = LVar26;
                    LVar15 = GetDisplayConfigBufferSizes(2,&local_348,&local_344);
                    if (LVar15 != 0) {
                      LVar26 = LVar27;
                      if (LVar27 != (LUID)0x0) {
                        LVar32 = (LUID)((longlong)local_340 - (longlong)LVar27 & 0xffffffffffffffc0)
                        ;
                        if (0xfff < (ulonglong)LVar32) {
                          LVar26 = (LUID)(((longlong)LVar27 -
                                          (longlong)*(LUID *)((longlong)LVar27 + -8)) + -8);
                          if (0x1f < (ulonglong)LVar26) goto LAB_14012b6ce;
                          LVar32 = (LUID)((ulonglong)LVar32 | 0x27);
                          LVar27 = *(LUID *)((longlong)LVar27 + -8);
                        }
                        thunk_FUN_14028af80(LVar27,LVar32);
                      }
                      LVar19 = local_2d8;
                      iVar16 = local_32c;
                      if (LVar29 == (LUID)0x0) goto LAB_14012b5ba;
                      lVar31 = (longlong)LVar33 - (longlong)LVar29 >> 3;
                      LVar33 = (LUID)(lVar31 * -0x71c71c71c71c71c7);
                      goto LAB_14012b568;
                    }
                    LVar17.HighPart = 0;
                    LVar17.LowPart = local_348;
                    local_288 = (longlong)LVar21 - (longlong)LVar29;
                    lVar31 = local_288 >> 3;
                    LVar32 = (LUID)(lVar31 * -0x71c71c71c71c71c7);
                    if ((ulonglong)LVar17 < (ulonglong)LVar32) {
                      local_310 = (LUID)((longlong)LVar29 + (longlong)LVar17 * 0x48);
                    }
                    else if ((ulonglong)LVar32 < (ulonglong)LVar17) {
                      lVar25 = (longlong)LVar33 - (longlong)LVar29 >> 3;
                      LVar26 = (LUID)(lVar25 * -0x71c71c71c71c71c7);
                      if ((ulonglong)LVar26 < (ulonglong)LVar17) {
                        LVar27 = (LUID)(0x38e38e38e38e38e - ((ulonglong)LVar26 >> 1));
                        if (((ulonglong)LVar27 <= (ulonglong)LVar26 &&
                             (longlong)LVar26 - (longlong)LVar27 != 0) ||
                           ((LVar27 = (LUID)(((ulonglong)LVar26 >> 1) + (longlong)LVar26),
                            LVar33 = LVar17, (ulonglong)LVar17 <= (ulonglong)LVar27 &&
                            (LVar33 = LVar27, 0x38e38e38e38e38e < (ulonglong)LVar27))))
                        goto LAB_14012b816;
                        LVar33 = (LUID)((longlong)LVar33 * 0x48);
                        if (LVar33 == (LUID)0x0) {
                          LVar21.LowPart = 0;
                          LVar21.HighPart = 0;
                        }
                        else if ((ulonglong)LVar33 < 0x1000) {
                          LVar21 = (LUID)FUN_14028af20(LVar33);
                        }
                        else {
                          if ((ulonglong)((longlong)LVar33 + 0x27) <= (ulonglong)LVar33)
                          goto LAB_14012b816;
                          lVar18 = FUN_14028af20();
                          if (lVar18 == 0) goto LAB_14012b6ce;
                          LVar21 = (LUID)(lVar18 + 0x27U & 0xffffffffffffffe0);
                          *(longlong *)((longlong)LVar21 + -8) = lVar18;
                        }
                        lVar18 = (longlong)LVar17 + lVar31 * 0x71c71c71c71c71c7;
                        if (lVar18 != 0) {
                          FUN_1404217a0((HMONITOR)((longlong)LVar21 + lVar31 * 8),0,lVar18 * 0x48);
                        }
                        FUN_1404210f0(LVar21,LVar29,local_288);
                        if (LVar29 != (LUID)0x0) {
                          uVar20 = lVar25 * 8;
                          if (0xfff < uVar20) {
                            pLVar1 = (LUID *)((longlong)LVar29 + -8);
                            LVar29 = (LUID)(((longlong)LVar29 - (longlong)*pLVar1) + -8);
                            if (0x1f < (ulonglong)LVar29) goto LAB_14012b6ce;
                            uVar20 = uVar20 + 0x27;
                            LVar29 = *pLVar1;
                          }
                          thunk_FUN_14028af80(LVar29,uVar20);
                        }
                        local_308 = (LUID)((longlong)LVar33 + (longlong)LVar21);
                        local_310 = (LUID)((longlong)LVar21 + (longlong)LVar17 * 0x48);
                        LVar27 = local_320;
                        local_2e0 = LVar21;
                      }
                      else {
                        LVar17 = (LUID)((longlong)LVar17 + lVar31 * 0x71c71c71c71c71c7);
                        local_310 = (LUID)FUN_14012bb00(LVar21,LVar17);
                        LVar27 = local_320;
                      }
                    }
                    LVar32.HighPart = 0;
                    LVar32.LowPart = local_344;
                    LVar29 = (LUID)((longlong)LVar30 - (longlong)LVar27);
                    LVar33 = (LUID)((longlong)LVar29 >> 6);
                    if ((ulonglong)LVar32 < (ulonglong)LVar33) {
                      LVar30 = (LUID)((longlong)LVar32 * 0x40 + (longlong)LVar27);
                    }
                    else if ((ulonglong)LVar33 < (ulonglong)LVar32) {
                      LVar21 = (LUID)((longlong)local_340 - (longlong)LVar27 >> 6);
                      if ((ulonglong)LVar21 < (ulonglong)LVar32) {
                        if (0x3ffffffffffffff - ((ulonglong)LVar21 >> 1) < (ulonglong)LVar21) {
                          LVar26.LowPart = 0xffffffc0;
                          LVar26.HighPart = -1;
                          LVar19.LowPart = 0xffffffe7;
                          LVar19.HighPart = -1;
LAB_14012b237:
                          lVar31 = FUN_14028af20(LVar19);
                          if (lVar31 == 0) goto LAB_14012b6ce;
                          LVar27 = (LUID)(lVar31 + 0x27U & 0xffffffffffffffe0);
                          *(longlong *)((longlong)LVar27 + -8) = lVar31;
                        }
                        else {
                          LVar27 = (LUID)(((ulonglong)LVar21 >> 1) + (longlong)LVar21);
                          LVar26 = LVar32;
                          if (((ulonglong)LVar32 <= (ulonglong)LVar27) &&
                             (LVar26 = LVar27, 0x3ffffffffffffff < (ulonglong)LVar27)) {
LAB_14012b816:
                    /* WARNING: Subroutine does not return */
                            FUN_140017370();
                          }
                          LVar26 = (LUID)((longlong)LVar26 * 0x40);
                          if (LVar26 == (LUID)0x0) {
                            LVar27.LowPart = 0;
                            LVar27.HighPart = 0;
                          }
                          else {
                            if (0xfff < (ulonglong)LVar26) {
                              LVar19 = (LUID)((longlong)LVar26 + 0x27);
                              if ((ulonglong)LVar19 <= (ulonglong)LVar26) goto LAB_14012b816;
                              goto LAB_14012b237;
                            }
                            LVar27 = (LUID)FUN_14028af20(LVar26);
                          }
                        }
                        if ((longlong)LVar32 - (longlong)LVar33 != 0) {
                          FUN_1404217a0(((ulonglong)LVar29 & 0xffffffffffffffc0) + (longlong)LVar27,
                                        0,((longlong)LVar32 - (longlong)LVar33) * 0x40);
                        }
                        LVar19 = local_320;
                        FUN_1404210f0(LVar27,local_320,LVar29);
                        LVar33 = LVar19;
                        LVar17 = LVar27;
                        if (LVar19 != (LUID)0x0) {
                          LVar21 = (LUID)((longlong)LVar21 << 6);
                          if (0xfff < (ulonglong)LVar21) {
                            LVar33 = (LUID)(((longlong)LVar19 -
                                            (longlong)*(LUID *)((longlong)LVar19 + -8)) + -8);
                            if (0x1f < (ulonglong)LVar33) goto LAB_14012b6ce;
                            LVar21 = (LUID)((ulonglong)LVar21 | 0x27);
                            LVar19 = *(LUID *)((longlong)LVar19 + -8);
                          }
                          thunk_FUN_14028af80(LVar19,LVar21);
                        }
                        local_340 = (LUID)((longlong)LVar26 + (longlong)LVar27);
                        LVar30 = (LUID)((longlong)LVar32 * 0x40 + (longlong)LVar27);
                        local_320 = LVar27;
                      }
                      else {
                        LVar30 = (LUID)FUN_14012bac0(LVar30,(longlong)LVar32 - (longlong)LVar33);
                      }
                    }
                    LVar29 = local_2e0;
                    LVar32 = local_340;
                    numModeInfoArrayElements = &local_344;
                    LVar15 = QueryDisplayConfig(2,&local_348,(DISPLAYCONFIG_PATH_INFO *)local_2e0,
                                                numModeInfoArrayElements,
                                                (DISPLAYCONFIG_MODE_INFO *)LVar27,
                                                (DISPLAYCONFIG_TOPOLOGY_ID *)0x0);
                    LVar21 = local_310;
                    LVar26 = local_308;
                  } while (LVar15 == 0x7a);
                  LVar26 = LVar27;
                  if ((LVar15 == 0) &&
                     (LVar30.LowPart = 0, LVar30.HighPart = 0, LVar21 = LVar30, local_348 != 0)) {
                    do {
                      local_268._0_4_ = DISPLAYCONFIG_DEVICE_INFO_GET_SOURCE_NAME;
                      local_268._4_4_ = 0x54;
                      local_230 = 0;
                      uStack_228 = 0;
                      local_250 = 0;
                      uStack_248 = 0;
                      local_240 = 0;
                      uStack_238 = 0;
                      LVar17 = (LUID)((longlong)LVar21 * 9);
                      uStack_224 = 0;
                      uStack_220 = 0;
                      uStack_21c = 0;
                      local_268._8_8_ = *(LUID *)((longlong)LVar29 + (longlong)LVar21 * 0x48);
                      stack0xfffffffffffffda8 =
                           (ulonglong)*(uint *)((longlong)LVar29 + 8 + (longlong)LVar21 * 0x48);
                      LVar15 = DisplayConfigGetDeviceInfo
                                         ((DISPLAYCONFIG_DEVICE_INFO_HEADER *)local_268);
                      if ((LVar15 == 0) &&
                         (iVar16 = FUN_1402eb410(&local_1e0,auStack_254), iVar16 == 0)) {
                        puVar2 = (undefined4 *)((longlong)LVar29 + 0x10 + (longlong)LVar21 * 0x48);
                        local_e8 = *puVar2;
                        DStack_e4 = puVar2[1];
                        LStack_e0 = puVar2[2];
                        UVar7 = puVar2[3];
                        UStack_dc = UVar7;
                        if (LVar27 != (LUID)0x0) {
                          LVar32 = (LUID)((longlong)LVar32 - (longlong)LVar27 & 0xffffffffffffffc0);
                          if (0xfff < (ulonglong)LVar32) {
                            LVar26 = (LUID)(((longlong)LVar27 -
                                            (longlong)*(LUID *)((longlong)LVar27 + -8)) + -8);
                            if (0x1f < (ulonglong)LVar26) goto LAB_14012b6ce;
                            LVar32 = (LUID)((ulonglong)LVar32 | 0x27);
                            LVar27 = *(LUID *)((longlong)LVar27 + -8);
                          }
                          thunk_FUN_14028af80(LVar27,LVar32);
                        }
                        if (LVar29 != (LUID)0x0) {
                          uVar20 = ((longlong)local_308 - (longlong)LVar29 >> 3) * 8;
                          if (0xfff < uVar20) {
                            pLVar1 = (LUID *)((longlong)LVar29 + -8);
                            LVar29 = (LUID)(((longlong)LVar29 - (longlong)*pLVar1) + -8);
                            if (0x1f < (ulonglong)LVar29) goto LAB_14012b6ce;
                            uVar20 = uVar20 + 0x27;
                            LVar29 = *pLVar1;
                          }
                          thunk_FUN_14028af80(LVar29,uVar20);
                        }
                        local_2d0.adapterId.HighPart = LStack_e0;
                        local_2d0.adapterId.LowPart = DStack_e4;
                        local_2bc = 0;
                        local_2d0.type = 0xb;
                        local_2d0.size = 0x18;
                        local_2d0.id = UVar7;
                        LVar15 = DisplayConfigGetDeviceInfo(&local_2d0);
                        LVar19 = local_2d8;
                        iVar16 = local_32c;
                        if (LVar15 == 0) {
                          HVar34.unused = (int)(float)(((double)local_2bc * dVar8) / dVar9);
                        }
                        goto LAB_14012b5ba;
                      }
                      LVar21.LowPart = LVar21.LowPart + 1;
                      LVar21.HighPart = 0;
                    } while (LVar21.LowPart < local_348);
                  }
                  if (LVar27 != (LUID)0x0) {
                    LVar32 = (LUID)((longlong)LVar32 - (longlong)LVar27 & 0xffffffffffffffc0);
                    if ((ulonglong)LVar32 < 0x1000) {
LAB_14012b4da:
                      thunk_FUN_14028af80(LVar27,LVar32);
                      goto LAB_14012b4e2;
                    }
                    LVar26 = (LUID)(((longlong)LVar27 - (longlong)*(LUID *)((longlong)LVar27 + -8))
                                   + -8);
                    if ((ulonglong)LVar26 < 0x20) {
                      LVar32 = (LUID)((ulonglong)LVar32 | 0x27);
                      LVar27 = *(LUID *)((longlong)LVar27 + -8);
                      goto LAB_14012b4da;
                    }
LAB_14012b6ce:
                    pcVar5 = (code *)swi(0x29);
                    (*pcVar5)(5);
                    puVar22 = auStackY_390;
                    goto LAB_14012b6d5;
                  }
LAB_14012b4e2:
                  LVar19 = local_2d8;
                  iVar16 = local_32c;
                  if (LVar29 != (LUID)0x0) {
                    lVar31 = (longlong)local_308 - (longlong)LVar29 >> 3;
LAB_14012b568:
                    uVar20 = lVar31 * 8;
                    if (0xfff < uVar20) {
                      pLVar1 = (LUID *)((longlong)LVar29 + -8);
                      LVar29 = (LUID)(((longlong)LVar29 - (longlong)*pLVar1) + -8);
                      if (0x1f < (ulonglong)LVar29) goto LAB_14012b6ce;
                      uVar20 = uVar20 + 0x27;
                      LVar29 = *pLVar1;
                    }
                    thunk_FUN_14028af80(LVar29,uVar20);
                    LVar19 = local_2d8;
                    iVar16 = local_32c;
                  }
                }
              }
LAB_14012b5ba:
              if (fVar35 <= (float)HVar34.unused) {
                HVar34.unused = (int)fVar35;
              }
              if ((float)HVar34.unused < fVar10) {
                HVar34.unused = (int)fVar10;
              }
              ((HMONITOR)((longlong)param_3 + 0x40))->unused = (int)((float)HVar34.unused / fVar10);
              ((HMONITOR)((longlong)param_3 + 0x44))->unused =
                   (int)((fVar35 - (float)HVar34.unused) / fVar10);
              LVar17 = LVar19;
            }
            else {
              *(undefined1 *)((longlong)param_1 + 0x15) = 0;
            }
          }
          (**(code **)(*local_2f0 + 0x10))();
        }
        (**(code **)(*local_300 + 0x10))();
        local_32c = iVar16 + 1;
        iVar13 = (**(code **)(*local_318 + 0x38))(local_318,iVar16,&local_300);
        uVar12 = local_2f8;
        iVar16 = iVar16 + 1;
      }
      (**(code **)(*local_318 + 0x10))();
      LVar17 = local_280;
    }
    LVar26.LowPart = 0;
    LVar26.HighPart = 0;
    LVar21.HighPart = 0;
    LVar21.LowPart = uVar12;
    (**(code **)(*local_2e8 + 0x10))();
    if ((int)uVar12 < 0) goto LAB_14012b7a7;
    HVar34.unused = *(int *)param_2;
    numModeInfoArrayElements =
         (UINT32 *)(ulonglong)(uint)((HMONITOR)((longlong)param_3 + 0x48))->unused;
    uVar12 = 0x1c;
    if ((char)((HMONITOR)((longlong)param_1 + 0x14))->unused != '\0') {
      uVar12 = 10;
    }
    local_2b0 = (ulonglong)uVar12;
    local_29c = 2;
    local_2b8 = 0;
    local_2a0 = 0x20;
    local_294 = 3;
    local_2a8 = 1;
    local_290 = 3;
    local_298 = 0;
    local_28c = 0x800;
    if (HVar34.unused == 1) {
      *(undefined8 *)((longlong)param_3 + 0x38) = 2;
      puVar23 = auStackY_398;
LAB_14012b6fb:
      puVar24 = puVar23;
      if (((ulonglong)numModeInfoArrayElements & 1) != 0) {
        ((HMONITOR)((longlong)param_3 + 0x3c))->unused = -1;
      }
    }
    else {
      if (HVar34.unused == 2) {
        *(undefined8 *)((longlong)param_3 + 0x38) = 4;
        puVar23 = auStackY_398;
        goto LAB_14012b6fb;
      }
      if (HVar34.unused == 3) {
        *(undefined8 *)((longlong)param_3 + 0x38) = 8;
        puVar23 = auStackY_398;
        goto LAB_14012b6fb;
      }
      LVar29 = param_4;
      LVar30 = param_2;
      LVar32 = param_3;
      LVar33 = param_1;
      if (HVar34.unused == 4) {
LAB_14012b6d5:
        *(undefined8 *)((longlong)LVar32 + 0x38) = 0x10;
        puVar23 = puVar22;
        param_4 = LVar29;
        param_2 = LVar30;
        param_3 = LVar32;
        param_1 = LVar33;
        goto LAB_14012b6fb;
      }
      *(undefined8 *)((longlong)param_3 + 0x38) = 1;
      puVar24 = auStackY_398;
      if (HVar34.unused != 0) goto LAB_14012b6fb;
    }
    plVar4 = *(longlong **)param_3;
    *(DWORD *)(puVar24 + 0x70) = LVar26.LowPart;
    pcVar5 = *(code **)(*plVar4 + 0xf0);
    *(undefined8 *)(puVar24 + -8) = 0x14012b722;
    iVar16 = (*pcVar5)();
    if ((iVar16 < 0) || (*(int *)(puVar24 + 0x70) == 0)) {
      *(undefined8 *)((longlong)param_3 + 0x38) = 1;
      *(DWORD *)param_2 = LVar26.LowPart;
    }
    if ((((HMONITOR)((longlong)param_3 + 0x48))->unused & 1) == 0) {
      *(undefined1 *)((longlong)param_2 + 5) = 0;
    }
    if (LVar17 != (LUID)0x0) {
      plVar4 = *(longlong **)(puVar24 + 0x60);
      if (plVar4 != (longlong *)0x0) {
        lVar31 = *plVar4;
        uVar28 = *(undefined8 *)param_1;
        uVar6 = *(undefined8 *)param_3;
        *(HMONITOR *)(puVar24 + 0x30) = (HMONITOR)((longlong)param_3 + 0x10);
        *(LUID *)(puVar24 + 0x28) = LVar26;
        *(LUID *)(puVar24 + 0x20) = LVar26;
        pcVar5 = *(code **)(lVar31 + 0x78);
        *(undefined8 *)(puVar24 + -8) = 0x14012b778;
        uVar12 = (*pcVar5)(plVar4,uVar6,uVar28,&local_2b8);
        LVar21.HighPart = 0;
        LVar21.LowPart = uVar12;
        goto LAB_14012b77a;
      }
LAB_14012b79d:
      *(int *)param_4 = 3;
      goto LAB_14012b800;
    }
LAB_14012b77a:
    if (*(longlong **)(puVar24 + 0x60) != (longlong *)0x0) {
      pcVar5 = *(code **)(**(longlong **)(puVar24 + 0x60) + 0x10);
      *(undefined8 *)(puVar24 + -8) = 0x14012b78a;
      (*pcVar5)();
      *(LUID *)(puVar24 + 0x60) = LVar26;
    }
    if (-1 < (int)LVar21.LowPart) goto LAB_14012b79d;
    *(int *)param_4 = 2;
  }
  *(undefined8 *)(puVar24 + -8) = 0x14012b7cc;
  FUN_14012b820(param_3);
LAB_14012b800:
  return (ulonglong)LVar21 & 0xffffffff;
}

