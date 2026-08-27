// Function: FUN_14012c970
// Addr: 14012c970
// Size: 5589 bytes


/* WARNING: Enum "enum_690": Some values do not have unique names */
/* WARNING: Enum "enum_689": Some values do not have unique names */

ulonglong FUN_14012c970(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  DISPLAYCONFIG_ROTATION DVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  DISPLAYCONFIG_MODE_INFO *pDVar7;
  int iVar8;
  uint uVar9;
  LONG LVar10;
  uint uVar11;
  undefined8 uVar12;
  DISPLAYCONFIG_MODE_INFO *pDVar13;
  longlong lVar14;
  POINT *pPVar15;
  undefined8 *puVar16;
  POINT PVar17;
  POINT PVar18;
  LPCWSTR ******pppppppWVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  POINT PVar22;
  short *psVar23;
  POINT PVar24;
  undefined1 *puVar25;
  ulonglong uVar26;
  POINT PVar27;
  UINT32 *pUVar28;
  uint uVar29;
  ulonglong uVar30;
  POINT PVar31;
  UINT32 *pUVar32;
  longlong lVar33;
  ulonglong uVar34;
  POINT PVar35;
  POINT PVar36;
  UINT32 local_res10 [2];
  UINT32 local_res18 [2];
  POINT local_res20;
  undefined1 auStackY_5c8 [8];
  undefined1 auStackY_5c0 [24];
  DISPLAYCONFIG_TOPOLOGY_ID *currentTopologyId;
  LPCWSTR *****local_578;
  undefined8 uStack_570;
  longlong local_568;
  ulonglong local_560;
  DISPLAYCONFIG_MODE_INFO *local_558;
  POINT local_550;
  POINT PStack_548;
  POINT local_540;
  POINT PStack_538;
  POINT local_530;
  longlong local_528;
  longlong lStack_520;
  longlong local_518;
  POINT local_510;
  POINT local_508;
  uint local_4f8;
  int local_4f4;
  UINT32 local_4f0;
  UINT32 local_4ec;
  POINT local_4e0;
  POINT PStack_4d8;
  POINT local_4d0;
  POINT local_4c8;
  ulonglong local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  ulonglong local_4a8;
  POINT local_4a0;
  POINT PStack_498;
  POINT local_490;
  POINT local_488;
  HMONITOR local_480;
  float local_478;
  uint local_468 [2];
  POINT local_460;
  POINT PStack_458;
  POINT local_450;
  POINT PStack_448;
  DISPLAYCONFIG_DEVICE_INFO_HEADER local_440;
  uint local_42c;
  POINT local_428;
  POINT PStack_420;
  longlong local_418;
  POINTL *local_410;
  POINT local_408;
  POINT PStack_400;
  POINT local_3f8;
  POINT PStack_3f0;
  DISPLAYCONFIG_TOPOLOGY_ID local_3e8 [4];
  DISPLAYCONFIG_DEVICE_INFO_HEADER local_3d8;
  short local_3c4 [38];
  undefined1 local_378 [8];
  longlong local_370 [2];
  longlong local_360 [3];
  ulonglong local_348;
  DISPLAYCONFIG_DEVICE_INFO_HEADER local_338;
  undefined2 local_324;
  longlong *local_308;
  longlong *local_300;
  longlong *local_2e8;
  ulonglong *local_2e0;
  int *local_2d0;
  ulonglong local_2b8;
  uint local_2b0;
  DISPLAYCONFIG_DEVICE_INFO_HEADER local_218;
  undefined2 local_1f4 [64];
  short local_174 [154];
  
  puVar25 = auStackY_5c8;
  PVar18.x = 0;
  PVar18.y = 0;
  local_408 = (POINT)&local_428;
  local_res20.x = 0;
  local_res20.y = 0;
  local_418 = 0;
  PStack_400.x = 0;
  PStack_400.y = 0;
  local_428.x = 0;
  local_428.y = 0;
  PStack_420.x = 0;
  PStack_420.y = 0;
  FUN_14012bed0(&local_408);
  local_510 = PStack_420;
  PVar22 = local_428;
  PVar27 = PStack_420;
  PVar35 = PVar18;
  PVar17 = PVar18;
  PVar36 = PVar18;
  if (local_428 != PStack_420) {
    do {
      uVar2 = *(undefined4 *)PVar22;
      uVar12 = CONCAT44((int)((ulonglong)*(undefined8 *)((longlong)PVar22 + 8) >> 0x20) +
                        (int)((ulonglong)*(undefined8 *)PVar22 >> 0x20),
                        (int)*(undefined8 *)((longlong)PVar22 + 8) + (int)*(undefined8 *)PVar22);
      uVar29 = *(LONG *)((longlong)PVar22 + 4);
      PVar35.y = 0;
      PVar35.x = uVar29;
      if (PVar18 == PVar17) {
        uVar20 = (longlong)PVar18 - (longlong)local_res20;
        if ((longlong)uVar20 >> 4 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_140133d70();
        }
        PVar36 = (POINT)((longlong)PVar17 - (longlong)local_res20 >> 4);
        local_508 = PVar36;
        if (0xfffffffffffffff - ((ulonglong)PVar36 >> 1) < (ulonglong)PVar36) {
LAB_14012df3b:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar30 = ((longlong)uVar20 >> 4) + 1;
        uVar34 = ((ulonglong)PVar36 >> 1) + (longlong)PVar36;
        uVar26 = uVar30;
        if (uVar30 <= uVar34) {
          uVar26 = uVar34;
        }
        if (0xfffffffffffffff < uVar26) goto LAB_14012df3b;
        PVar27 = (POINT)(uVar26 * 0x10);
        if (PVar27 == (POINT)0x0) {
          PVar36.x = 0;
          PVar36.y = 0;
        }
        else if ((ulonglong)PVar27 < 0x1000) {
          PVar36 = (POINT)FUN_14028af20(PVar27);
        }
        else {
          if ((longlong)PVar27 + 0x27U <= (ulonglong)PVar27) goto LAB_14012df3b;
          lVar14 = FUN_14028af20();
          if (lVar14 == 0) goto LAB_14012dec8;
          PVar36 = (POINT)(lVar14 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)((longlong)PVar36 + -8) = lVar14;
        }
        PVar17 = local_res20;
        uVar34 = uVar20 & 0xfffffffffffffff0;
        *(undefined4 *)((longlong)PVar36 + uVar34) = uVar2;
        *(uint *)((longlong)PVar36 + uVar34 + 4) = uVar29;
        *(undefined8 *)((longlong)PVar36 + uVar34 + 8) = uVar12;
        FUN_1404210f0(PVar36,local_res20,uVar20);
        if (PVar17 != (POINT)0x0) {
          uVar20 = (longlong)local_508 * 0x10;
          if (0xfff < uVar20) {
            if (0x1f < (ulonglong)
                       ((longlong)PVar17 + (-8 - (longlong)*(POINT *)((longlong)PVar17 + -8))))
            goto LAB_14012dec8;
            uVar20 = uVar20 + 0x27;
            PVar17 = *(POINT *)((longlong)PVar17 + -8);
          }
          thunk_FUN_14028af80(PVar17,uVar20);
        }
        PVar18 = (POINT)((longlong)PVar36 + uVar30 * 0x10);
        PVar17 = (POINT)((longlong)PVar36 + uVar26 * 0x10);
        PVar27 = local_510;
        local_res20 = PVar36;
      }
      else {
        *(uint *)((longlong)PVar18 + 4) = uVar29;
        *(undefined4 *)PVar18 = uVar2;
        *(undefined8 *)((longlong)PVar18 + 8) = uVar12;
        PVar18 = (POINT)((longlong)PVar18 + 0x10);
      }
      PVar22 = (POINT)((longlong)PVar22 + 0x88);
      PVar35 = local_res20;
      PVar36 = PVar17;
    } while (PVar22 != PVar27);
  }
  PVar27 = PStack_420;
  uVar29 = 0;
  PVar22 = local_428;
  if (local_428 == (POINT)0x0) {
LAB_14012cc1d:
    local_res18[0] = 0;
    local_res10[0] = 0;
    if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e9330) &&
       (FUN_14028b140(&DAT_1404e9330), DAT_1404e9330 == -1)) {
      FUN_140015180(10,0,0);
      _Init_thread_footer(&DAT_1404e9330);
    }
    uVar11 = 2;
    iVar8 = GetDisplayConfigBufferSizes(2,local_res18,local_res10);
    if (iVar8 == 0x57) {
      uVar11 = 4;
      iVar8 = GetDisplayConfigBufferSizes(4,local_res18,local_res10);
    }
    if (iVar8 != 0) {
      if (DAT_1404e52b8 == 2) {
        FUN_140098b00("QDC GetDisplayConfigBufferSizes failed: %i\n",iVar8);
      }
      local_res18[0] = 0x10;
      local_res10[0] = 0x10;
    }
    uVar9 = local_res18[0] + 0x10;
    local_res18[0] = 1;
    if (1 < uVar9) {
      local_res18[0] = uVar9;
    }
    uVar9 = local_res10[0] + 0x10;
    local_res10[0] = 1;
    if (1 < uVar9) {
      local_res10[0] = uVar9;
    }
    uVar12 = SUB168(ZEXT816(0x48) * ZEXT416(local_res18[0]),0);
    if (SUB168(ZEXT816(0x48) * ZEXT416(local_res18[0]),8) != 0) {
      uVar12 = 0xffffffffffffffff;
    }
    PVar22 = (POINT)thunk_FUN_14028af20(uVar12);
    uVar12 = SUB168(ZEXT816(0x40) * ZEXT416(local_res10[0]),0);
    if (SUB168(ZEXT816(0x40) * ZEXT416(local_res10[0]),8) != 0) {
      uVar12 = 0xffffffffffffffff;
    }
    local_530 = PVar22;
    pDVar13 = (DISPLAYCONFIG_MODE_INFO *)thunk_FUN_14028af20(uVar12);
    if ((uVar11 & 4) == 0) {
      currentTopologyId = (DISPLAYCONFIG_TOPOLOGY_ID *)0x0;
    }
    else {
      currentTopologyId = local_3e8;
    }
    local_558 = pDVar13;
    LVar10 = QueryDisplayConfig(uVar11,local_res18,(DISPLAYCONFIG_PATH_INFO *)PVar22,local_res10,
                                pDVar13,currentTopologyId);
    if (LVar10 == 0) {
      if (DAT_1404e52b8 == 2) {
        FUN_140098b00("QDC paths %i, modes %i, query %u, method %i\n",local_res18[0],local_res10[0],
                      uVar11);
      }
      FUN_1400493a0(local_378);
      dVar6 = DAT_140492850;
      dVar5 = DAT_140492838;
      local_518 = 0;
      local_528 = 0;
      lStack_520 = 0;
      local_508.x = 0xf;
      local_508.y = 0;
      if (local_res18[0] != 0) {
        local_res20 = (POINT)((ulonglong)local_res20 & 0xffffffff00000000);
        do {
          lVar14 = (longlong)(int)uVar29;
          if ((((UINT32 *)((longlong)PVar22 + 0x44))[lVar14 * 0x12] & 1) == 0) {
            if (DAT_1404e52b8 == 2) {
              FUN_140098b00("QDC path %i inactive\n",uVar29);
            }
            goto LAB_14012ce2d;
          }
          local_3d8.adapterId =
               (((DISPLAYCONFIG_PATH_INFO *)((longlong)PVar22 + lVar14 * 0x48))->sourceInfo).
               adapterId;
          local_3d8.id = ((UINT32 *)((longlong)PVar22 + 8))[lVar14 * 0x12];
          local_3c4[0] = 0;
          local_3d8.size = 0x54;
          local_3d8.type = DISPLAYCONFIG_DEVICE_INFO_GET_SOURCE_NAME;
          LVar10 = DisplayConfigGetDeviceInfo(&local_3d8);
          if (LVar10 == 0) {
            DAT_1404e8df8 = DAT_1404e8df8 | 4;
          }
          else {
            local_3c4[0] = 0;
            if (DAT_1404e52b8 == 2) {
              FUN_140098b00("QDC path %i sourceDeviceName failed with %i\n",uVar29,LVar10);
            }
            if ((DAT_1404e8df8 & 4) != 0) {
              DAT_1404e8df8 = DAT_1404e8df8 | 8;
            }
          }
          local_218.adapterId = *(LUID *)((longlong)((longlong)PVar22 + 0x14) + lVar14 * 0x48);
          local_218.id = ((UINT32 *)((longlong)PVar22 + 0x1c))[lVar14 * 0x12];
          local_174[0] = 0;
          local_1f4[0] = 0;
          local_218.size = 0x1a4;
          local_218.type = DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_NAME;
          LVar10 = DisplayConfigGetDeviceInfo(&local_218);
          if (LVar10 == 0) {
            DAT_1404e8df8 = DAT_1404e8df8 | 1;
          }
          else {
            local_174[0] = 0;
            local_1f4[0] = 0;
            if (DAT_1404e52b8 == 2) {
              FUN_140098b00("QDC path %i deviceName failed with %i\n",uVar29,LVar10);
            }
            if ((DAT_1404e8df8 & 1) != 0) {
              DAT_1404e8df8 = DAT_1404e8df8 | 2;
            }
          }
          local_338.adapterId =
               (((DISPLAYCONFIG_PATH_INFO *)((longlong)PVar22 + lVar14 * 0x48))->sourceInfo).
               adapterId;
          local_338.size = 0x114;
          local_338.type = DISPLAYCONFIG_DEVICE_INFO_GET_ADAPTER_NAME;
          local_338.id = 0;
          LVar10 = DisplayConfigGetDeviceInfo(&local_338);
          if (LVar10 == 0) {
LAB_14012d0a3:
            if (DAT_1404e52b8 == 2) {
              FUN_140098b00("QDC Monitor path %i. Source name %S, target name %S, adapter name %S. Source mode %u / %u, target mode %u\n"
                            ,uVar29,local_3c4,local_174);
            }
          }
          else {
            local_324 = 0;
            if (DAT_1404e52b8 == 2) {
              FUN_140098b00("QDC path %i adapterName failed with %i\n",uVar29,LVar10);
              goto LAB_14012d0a3;
            }
          }
          if ((((UINT32 *)((longlong)PVar22 + 0x20))[lVar14 * 0x12] == 0xffff) &&
             (DAT_1404e52b8 == 2)) {
            FUN_140098b00("QDC path %i targetInfo.modeInfoIdx invalid\n",uVar29);
          }
          uVar11 = ((UINT32 *)((longlong)PVar22 + 0xc))[lVar14 * 0x12];
          uVar20 = (ulonglong)uVar11;
          if (uVar11 == 0xffffffff) {
            if (DAT_1404e52b8 == 2) {
              FUN_140098b00("QDC path %i modeInfoIdx && sourceModeInfoIdx invalid (virtual mode %i)\n"
                            ,uVar29,0);
            }
            pDVar13 = local_558;
            if (local_3c4[0] == 0) goto LAB_14012ce2d;
            local_568 = 0;
            local_560 = 0;
            local_578 = (LPCWSTR *****)0x0;
            uStack_570 = 0;
            uVar12 = FUN_1402d6aa0(local_3c4);
            FUN_140016170(&local_578,local_3c4,uVar12);
            if (local_568 == 0) {
LAB_14012d24b:
              local_540.x = 0;
              local_540.y = 0;
              PStack_548.x = 0;
              PStack_548.y = 0;
              local_550.x = 0;
              local_550.y = 0;
              PStack_538.x = 0xf;
              PStack_538.y = 0;
            }
            else {
              pppppppWVar19 = &local_578;
              if (7 < local_560) {
                pppppppWVar19 = (LPCWSTR ******)local_578;
              }
              iVar8 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar19,(int)local_568,(LPSTR)0x0,
                                          0,(LPCSTR)0x0,(LPBOOL)0x0);
              if (iVar8 < 1) goto LAB_14012d24b;
              FUN_140016940(&local_408,(longlong)iVar8,0);
              PVar27 = (POINT)&local_408;
              if (0xf < (ulonglong)PStack_3f0) {
                PVar27 = local_408;
              }
              pppppppWVar19 = &local_578;
              if (7 < local_560) {
                pppppppWVar19 = (LPCWSTR ******)local_578;
              }
              WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar19,(int)local_568,(LPSTR)PVar27,iVar8
                                  ,(LPCSTR)0x0,(LPBOOL)0x0);
              local_550 = local_408;
              PStack_548 = PStack_400;
              local_540 = local_3f8;
              PStack_538 = PStack_3f0;
            }
            FUN_140030470(&local_528,&local_550);
            PVar27 = PVar22;
            if (0xf < (ulonglong)PStack_538) {
              puVar21 = (undefined4 *)((longlong)PStack_538 + 1);
              PVar17 = local_550;
              if ((undefined4 *)0xfff < puVar21) {
                PVar17 = *(POINT *)((longlong)local_550 + -8);
                if (0x1f < (ulonglong)((longlong)local_550 + (-8 - (longlong)PVar17)))
                goto LAB_14012dec8;
                puVar21 = (undefined4 *)((longlong)PStack_538 + 0x28);
              }
              thunk_FUN_14028af80(PVar17,puVar21);
            }
            pDVar13 = local_558;
            if (7 < local_560) {
              uVar20 = local_560 * 2 + 2;
              pppppppWVar19 = (LPCWSTR ******)local_578;
              if (0xfff < uVar20) {
                pppppppWVar19 = (LPCWSTR ******)local_578[-1];
                if (0x1f < (ulonglong)((longlong)local_578 + (-8 - (longlong)pppppppWVar19)))
                goto LAB_14012dec8;
                uVar20 = local_560 * 2 + 0x29;
              }
              thunk_FUN_14028af80(pppppppWVar19,uVar20);
              pDVar13 = local_558;
            }
          }
          else {
            pDVar13 = local_558;
            if (uVar11 < local_res10[0]) {
              PVar27 = (POINT)(uVar20 * 0x40);
              local_410 = &local_558[uVar20].field3_0x10.sourceMode.position;
              local_408 = (POINT)((longlong)&local_558[uVar20].field3_0x10 + 0x10);
              uVar11 = (uint)*(short *)local_408;
              local_468[0] = (int)(short)local_410->x << 0x10 | uVar11;
              uVar34 = local_348 &
                       (((((ulonglong)(uVar11 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)((uVar11 & 0xff00) >> 8)) * 0x100000001b3 ^
                        (ulonglong)(local_468[0] >> 0x10 & 0xff)) * 0x100000001b3 ^
                       (ulonglong)(local_468[0] >> 0x18)) * 0x100000001b3;
              lVar33 = *(longlong *)(local_360[0] + 8 + uVar34 * 0x10);
              if (lVar33 == local_370[0]) {
LAB_14012d3f7:
                lVar33 = 0;
              }
              else {
                uVar11 = *(uint *)(lVar33 + 0x10);
                while (local_468[0] != uVar11) {
                  if (lVar33 == *(longlong *)(local_360[0] + uVar34 * 0x10)) goto LAB_14012d3f7;
                  lVar33 = *(longlong *)(lVar33 + 8);
                  uVar11 = *(uint *)(lVar33 + 0x10);
                }
              }
              if ((lVar33 == 0) || (lVar33 == local_370[0])) {
                FUN_140130b20(local_378,&local_428,local_468);
                PVar22.x = 0;
                PVar22.y = 0;
                local_42c = 0;
                PStack_4d8.x = 0;
                PStack_4d8.y = 0;
                local_4d0.x = 0;
                local_4d0.y = 0;
                local_4c8.x = 0xf;
                local_4c8.y = 0;
                local_4e0.x = 0;
                local_4e0.y = 0;
                uStack_4b8 = 0;
                local_4b0 = 0;
                local_4a8 = 0xf;
                local_4c0 = 0;
                PStack_498.x = 0;
                PStack_498.y = 0;
                local_440.adapterId =
                     *(LUID *)((longlong)((longlong)local_530 + 0x14) + lVar14 * 0x48);
                local_440.id = ((UINT32 *)((longlong)local_530 + 0x1c))[lVar14 * 0x12];
                local_490.x = 0;
                local_490.y = 0;
                local_488.x = 0xf;
                local_488.y = 0;
                local_4a0.x = 0;
                local_4a0.y = 0;
                local_478 = 0.0;
                local_440.type = 0xb;
                local_440.size = 0x18;
                LVar10 = DisplayConfigGetDeviceInfo(&local_440);
                if (LVar10 == 0) {
                  local_478 = (float)(((double)local_42c * dVar5) / dVar6);
                }
                local_568 = 0;
                local_560 = 0;
                local_578 = (LPCWSTR *****)0x0;
                uStack_570 = 0;
                uVar12 = FUN_1402d6aa0(local_1f4);
                FUN_140016170(&local_578,local_1f4,uVar12);
                if (local_568 == 0) {
LAB_14012d5ef:
                  PVar17.x = 0xf;
                  PVar17.y = 0;
                  PStack_458.x = 0;
                  PStack_458.y = 0;
                  local_460.x = 0;
                  local_460.y = 0;
                }
                else {
                  pppppppWVar19 = &local_578;
                  if (7 < local_560) {
                    pppppppWVar19 = (LPCWSTR ******)local_578;
                  }
                  iVar8 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar19,(int)local_568,
                                              (LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
                  if (iVar8 < 1) goto LAB_14012d5ef;
                  FUN_140016940(&local_550,(longlong)iVar8,0);
                  PVar22 = (POINT)&local_550;
                  if (0xf < (ulonglong)PStack_538) {
                    PVar22 = local_550;
                  }
                  pppppppWVar19 = &local_578;
                  if (7 < local_560) {
                    pppppppWVar19 = (LPCWSTR ******)local_578;
                  }
                  WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar19,(int)local_568,(LPSTR)PVar22,
                                      iVar8,(LPCSTR)0x0,(LPBOOL)0x0);
                  local_460 = local_550;
                  PStack_458 = PStack_548;
                  PVar17 = PStack_538;
                  PVar22 = local_540;
                }
                if (0xf < (ulonglong)local_488) {
                  puVar21 = (undefined4 *)((longlong)local_488 + 1);
                  PVar18 = local_4a0;
                  if ((undefined4 *)0xfff < puVar21) {
                    PVar18 = *(POINT *)((longlong)local_4a0 + -8);
                    if (0x1f < (ulonglong)((longlong)local_4a0 + (-8 - (longlong)PVar18)))
                    goto LAB_14012dec8;
                    puVar21 = (undefined4 *)((longlong)local_488 + 0x28);
                  }
                  thunk_FUN_14028af80(PVar18,puVar21);
                }
                local_4a0 = local_460;
                PStack_498 = PStack_458;
                local_490 = PVar22;
                local_488 = PVar17;
                if (7 < local_560) {
                  uVar34 = local_560 * 2 + 2;
                  pppppppWVar19 = (LPCWSTR ******)local_578;
                  if (0xfff < uVar34) {
                    pppppppWVar19 = (LPCWSTR ******)local_578[-1];
                    if (0x1f < (ulonglong)((longlong)local_578 + (-8 - (longlong)pppppppWVar19)))
                    goto LAB_14012dec8;
                    uVar34 = local_560 * 2 + 0x29;
                  }
                  thunk_FUN_14028af80(pppppppWVar19,uVar34);
                }
                local_578 = (LPCWSTR *****)0x0;
                uStack_570 = 0;
                if (DAT_1404df594 == 5) {
                  psVar23 = local_3c4;
                  if (local_3c4[0] == 0) {
                    psVar23 = local_174;
                  }
                  local_568 = 0;
                  local_560 = 0;
                  uVar12 = FUN_1402d6aa0(psVar23);
                  FUN_140016170(&local_578,psVar23,uVar12);
                  pPVar15 = (POINT *)FUN_140005790(&local_550,&local_578);
                  if (&local_4e0 != pPVar15) {
                    if (0xf < (ulonglong)local_4c8) {
                      puVar21 = (undefined4 *)((longlong)local_4c8 + 1);
                      PVar22 = local_4e0;
                      if ((undefined4 *)0xfff < puVar21) {
                        PVar22 = *(POINT *)((longlong)local_4e0 + -8);
                        if (0x1f < (ulonglong)((longlong)local_4e0 + (-8 - (longlong)PVar22)))
                        goto LAB_14012dec8;
                        puVar21 = (undefined4 *)((longlong)local_4c8 + 0x28);
                      }
                      thunk_FUN_14028af80(PVar22,puVar21);
                    }
                    local_4e0 = *pPVar15;
                    PStack_4d8 = pPVar15[1];
                    local_4d0 = pPVar15[2];
                    local_4c8 = pPVar15[3];
                    pPVar15[2].x = 0;
                    pPVar15[2].y = 0;
                    pPVar15[3].x = 0xf;
                    pPVar15[3].y = 0;
                    *(undefined1 *)&pPVar15->x = 0;
                  }
                  if (0xf < (ulonglong)PStack_538) {
                    puVar21 = (undefined4 *)((longlong)PStack_538 + 1);
                    PVar22 = local_550;
                    if ((undefined4 *)0xfff < puVar21) {
                      PVar22 = *(POINT *)((longlong)local_550 + -8);
                      if (0x1f < (ulonglong)((longlong)local_550 + (-8 - (longlong)PVar22)))
                      goto LAB_14012dec8;
                      puVar21 = (undefined4 *)((longlong)PStack_538 + 0x28);
                    }
                    thunk_FUN_14028af80(PVar22,puVar21);
                  }
                  local_540.x = 0;
                  local_540.y = 0;
                  PStack_538.x = 0xf;
                  PStack_538.y = 0;
                  local_550 = (POINT)((ulonglong)local_550 & 0xffffffffffffff00);
                  FUN_140016770(&local_578);
                }
                else {
                  psVar23 = local_174;
                  if (local_174[0] == 0) {
                    psVar23 = local_3c4;
                  }
                  PVar31.x = 0;
                  PVar31.y = 0;
                  local_568 = 0;
                  local_560 = 0;
                  uVar12 = FUN_1402d6aa0(psVar23);
                  FUN_140016170(&local_578,psVar23,uVar12);
                  if (local_568 == 0) {
LAB_14012d8de:
                    PVar24.x = 0xf;
                    PVar24.y = 0;
                    PStack_548.x = 0;
                    PStack_548.y = 0;
                    local_550.x = 0;
                    local_550.y = 0;
                  }
                  else {
                    pppppppWVar19 = &local_578;
                    if (7 < local_560) {
                      pppppppWVar19 = (LPCWSTR ******)local_578;
                    }
                    iVar8 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar19,(int)local_568,
                                                (LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
                    if (iVar8 < 1) goto LAB_14012d8de;
                    FUN_140016940(&local_460,(longlong)iVar8,0);
                    PVar22 = (POINT)&local_460;
                    if (0xf < (ulonglong)PStack_448) {
                      PVar22 = local_460;
                    }
                    pppppppWVar19 = &local_578;
                    if (7 < local_560) {
                      pppppppWVar19 = (LPCWSTR ******)local_578;
                    }
                    WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar19,(int)local_568,(LPSTR)PVar22
                                        ,iVar8,(LPCSTR)0x0,(LPBOOL)0x0);
                    local_540 = local_450;
                    PStack_538 = PStack_448;
                    local_550 = local_460;
                    PStack_548 = PStack_458;
                    PVar24 = PStack_448;
                    PVar31 = local_450;
                  }
                  if (0xf < (ulonglong)local_4c8) {
                    puVar21 = (undefined4 *)((longlong)local_4c8 + 1);
                    PVar22 = local_4e0;
                    if ((undefined4 *)0xfff < puVar21) {
                      PVar22 = *(POINT *)((longlong)local_4e0 + -8);
                      if (0x1f < (ulonglong)((longlong)local_4e0 + (-8 - (longlong)PVar22)))
                      goto LAB_14012dec8;
                      puVar21 = (undefined4 *)((longlong)local_4c8 + 0x28);
                    }
                    thunk_FUN_14028af80(PVar22,puVar21);
                  }
                  local_4e0 = local_550;
                  PStack_4d8 = PStack_548;
                  local_540.x = 0;
                  local_540.y = 0;
                  PStack_538.x = 0xf;
                  PStack_538.y = 0;
                  local_550 = (POINT)((ulonglong)local_550 & 0xffffffffffffff00);
                  local_4d0 = PVar31;
                  local_4c8 = PVar24;
                  FUN_140017240(&local_550);
                  if (7 < local_560) {
                    FUN_140016a90(&local_578,local_578);
                  }
                }
                if (local_4d0 == (POINT)0x0) {
                  FUN_14000f880(&local_4e0,"UnknownDisplayTarget_",0x15);
                  LVar10 = local_res20.x;
                  puVar16 = (undefined8 *)
                            FUN_140053e40(&local_460,(ulonglong)local_res20 & 0xffffffff);
                  puVar1 = puVar16 + 2;
                  if (0xf < (ulonglong)puVar16[3]) {
                    puVar16 = (undefined8 *)*puVar16;
                  }
                  FUN_1400532a0(&local_4e0,puVar16,*puVar1);
                  FUN_140017240(&local_460);
                }
                else {
                  LVar10 = local_res20.x;
                }
                if (local_490 == (POINT)0x0) {
                  FUN_14000f880(&local_4a0,"Unknown Monitor ",0x10);
                  puVar16 = (undefined8 *)FUN_140053e40(&local_460,LVar10);
                  puVar1 = puVar16 + 2;
                  if (0xf < (ulonglong)puVar16[3]) {
                    puVar16 = (undefined8 *)*puVar16;
                  }
                  FUN_1400532a0(&local_4a0,puVar16,*puVar1);
                  FUN_140017240(&local_460);
                }
                pDVar7 = local_558;
                DVar3 = ((DISPLAYCONFIG_ROTATION *)((longlong)local_530 + 0x28))[lVar14 * 0x12];
                if (DAT_1404e52b8 == 2) {
                  pUVar32 = &local_558[uVar20].field3_0x10.sourceMode.height;
                  pUVar28 = (UINT32 *)((longlong)PVar27 + 0x10);
                  FUN_140098b00("QDC path %i DISPLAYCONFIG_SOURCE_MODE flags %i (virtual mode %i, source index %i) position %i %i width %i height %i rotation %i\n"
                                ,(ulonglong)local_res20 & 0xffffffff,
                                ((UINT32 *)((longlong)local_530 + 0x44))[lVar14 * 0x12],0);
                }
                else {
                  pUVar28 = (UINT32 *)((ulonglong)PVar27 | 0x10);
                  pUVar32 = (UINT32 *)((longlong)&local_558->infoType + ((ulonglong)PVar27 | 0x14));
                }
                pDVar13 = local_558;
                if ((DVar3 + DISPLAYCONFIG_ROTATION_FORCE_UINT32 & 0xfffffffdU) == 0) {
                  local_4f0 = *(UINT32 *)((longlong)pUVar28 + (longlong)pDVar7);
                  local_4ec = *pUVar32;
                }
                else {
                  local_4f0 = *pUVar32;
                  local_4ec = *(UINT32 *)((longlong)pUVar28 + (longlong)pDVar7);
                }
                uVar11 = local_410->x;
                PVar27.y = 0;
                PVar27.x = uVar11;
                iVar8 = *(int *)local_408;
                local_510.y = (int)(local_4ec + iVar8 * 2) / 2;
                local_510.x = (int)(local_4f0 + uVar11 * 2) / 2;
                local_4f8 = uVar11;
                local_4f4 = iVar8;
                local_480 = MonitorFromPoint(local_510,2);
                if (local_480 == (HMONITOR)0x0) {
                  uVar29 = local_res20.x;
                  if (DAT_1404e52b8 == 2) {
                    FUN_140098b00("QDC path %i failed to grab HMONITOR from rect ltrb %i, %i, %i, %i\n"
                                  ,(ulonglong)local_res20 & 0xffffffff,uVar11,iVar8);
                  }
                  if (0xf < (ulonglong)local_488) {
                    puVar21 = (undefined4 *)((longlong)local_488 + 1);
                    PVar22 = local_4a0;
                    if ((undefined4 *)0xfff < puVar21) {
                      PVar22 = *(POINT *)((longlong)local_4a0 + -8);
                      if (0x1f < (ulonglong)((longlong)local_4a0 + (-8 - (longlong)PVar22)))
                      goto LAB_14012dec8;
                      puVar21 = (undefined4 *)((longlong)local_488 + 0x28);
                    }
                    thunk_FUN_14028af80(PVar22,puVar21);
                  }
                  local_490.x = 0;
                  local_490.y = 0;
                  local_488.x = 0xf;
                  local_488.y = 0;
                  local_4a0 = (POINT)((ulonglong)local_4a0 & 0xffffffffffffff00);
                  if (0xf < local_4a8) {
                    uVar34 = local_4a8 + 1;
                    uVar20 = local_4c0;
                    if (0xfff < uVar34) {
                      uVar20 = *(ulonglong *)(local_4c0 - 8);
                      if (0x1f < (local_4c0 - uVar20) - 8) goto LAB_14012dec8;
                      uVar34 = local_4a8 + 0x28;
                    }
                    thunk_FUN_14028af80(uVar20,uVar34);
                  }
                  local_4b0 = 0;
                  local_4a8 = 0xf;
                  local_4c0 = local_4c0 & 0xffffffffffffff00;
                  PVar22 = local_530;
                  if (0xf < (ulonglong)local_4c8) {
                    puVar21 = (undefined4 *)((longlong)local_4c8 + 1);
                    PVar22 = local_4e0;
                    if ((undefined4 *)0xfff < puVar21) {
                      PVar22 = *(POINT *)((longlong)local_4e0 + -8);
                      if (0x1f < (ulonglong)((longlong)local_4e0 + (-8 - (longlong)PVar22)))
                      goto LAB_14012dec8;
                      puVar21 = (undefined4 *)((longlong)local_4c8 + 0x28);
                    }
                    thunk_FUN_14028af80(PVar22,puVar21);
                    PVar22 = local_530;
                  }
                }
                else {
                  uVar29 = *(uint *)(param_1 + 1);
                  if ((int)local_4f8 < (int)*(uint *)(param_1 + 1)) {
                    uVar29 = local_4f8;
                  }
                  *(uint *)(param_1 + 1) = uVar29;
                  iVar8 = *(int *)((longlong)param_1 + 0xc);
                  if (local_4f4 < *(int *)((longlong)param_1 + 0xc)) {
                    iVar8 = local_4f4;
                  }
                  *(int *)((longlong)param_1 + 0xc) = iVar8;
                  FUN_140130840(*param_1,&local_4f8);
                  if (0xf < (ulonglong)local_488) {
                    puVar21 = (undefined4 *)((longlong)local_488 + 1);
                    PVar22 = local_4a0;
                    if ((undefined4 *)0xfff < puVar21) {
                      PVar22 = *(POINT *)((longlong)local_4a0 + -8);
                      if (0x1f < (ulonglong)((longlong)local_4a0 + (-8 - (longlong)PVar22)))
                      goto LAB_14012dec8;
                      puVar21 = (undefined4 *)((longlong)local_488 + 0x28);
                    }
                    thunk_FUN_14028af80(PVar22,puVar21);
                  }
                  local_490.x = 0;
                  local_490.y = 0;
                  local_488.x = 0xf;
                  local_488.y = 0;
                  local_4a0 = (POINT)((ulonglong)local_4a0 & 0xffffffffffffff00);
                  if (0xf < local_4a8) {
                    uVar34 = local_4a8 + 1;
                    uVar20 = local_4c0;
                    if (0xfff < uVar34) {
                      uVar20 = *(ulonglong *)(local_4c0 - 8);
                      if (0x1f < (local_4c0 - uVar20) - 8) goto LAB_14012dec8;
                      uVar34 = local_4a8 + 0x28;
                    }
                    thunk_FUN_14028af80(uVar20,uVar34);
                  }
                  local_4b0 = 0;
                  local_4a8 = 0xf;
                  local_4c0 = local_4c0 & 0xffffffffffffff00;
                  if (0xf < (ulonglong)local_4c8) {
                    puVar21 = (undefined4 *)((longlong)local_4c8 + 1);
                    PVar22 = local_4e0;
                    if ((undefined4 *)0xfff < puVar21) {
                      PVar22 = *(POINT *)((longlong)local_4e0 + -8);
                      if (0x1f < (ulonglong)((longlong)local_4e0 + (-8 - (longlong)PVar22)))
                      goto LAB_14012dec8;
                      puVar21 = (undefined4 *)((longlong)local_4c8 + 0x28);
                    }
                    thunk_FUN_14028af80(PVar22,puVar21);
                  }
                  PVar22 = local_530;
                  uVar29 = local_res20.x;
                }
              }
              else {
                PVar22 = local_530;
                if (DAT_1404e52b8 == 2) {
                  FUN_140098b00("QDC path %i is a cloned source (source index %i, x %i, y %i (virtual mode %i)\n"
                                ,uVar29,uVar20,local_410->x);
                  PVar22 = local_530;
                  pDVar13 = local_558;
                }
              }
            }
            else if (DAT_1404e52b8 == 2) {
              FUN_140098b00("QDC path %i sourceModeIndex %u invalid (virtual mode %i)\n",uVar29,
                            uVar20,0);
              pDVar13 = local_558;
            }
          }
LAB_14012ce2d:
          uVar29 = uVar29 + 1;
          local_res20.x = uVar29;
        } while (uVar29 < local_res18[0]);
      }
      iVar8 = 0;
      thunk_FUN_14028af80(PVar22);
      thunk_FUN_14028af80(pDVar13);
      if (local_528 != lStack_520) {
        FUN_14000ef10(&local_338);
        if (lStack_520 - local_528 >> 5 != 0) {
          do {
            uVar12 = FUN_14000c990(&local_338.id,&DAT_1404738a8);
            FUN_14000cbc0(uVar12,(longlong)iVar8 * 0x20 + local_528);
            iVar8 = iVar8 + 1;
          } while ((ulonglong)(longlong)iVar8 < (ulonglong)(lStack_520 - local_528 >> 5));
        }
        if (DAT_1404e52b8 == 2) {
          local_540.x = 0;
          local_540.y = 0;
          PStack_538.x = 0xf;
          PStack_538.y = 0;
          PStack_548.x = 0;
          PStack_548.y = 0;
          local_550.x = 0;
          local_550.y = 0;
          local_440.type = ~DISPLAYCONFIG_DEVICE_INFO_FORCE_UINT32;
          local_440.size = 0;
          local_440.adapterId.LowPart = 0;
          local_440.adapterId.HighPart = 0;
          if ((((byte)local_2b0 & 0x22) == 2) || (uVar20 = *local_2e0, uVar20 == 0)) {
            if ((local_2b0 & 4) == 0) {
              if (*local_2e8 == 0) {
                lVar33 = 0;
                lVar14 = 0;
              }
              else {
                lVar14 = *local_308;
                lVar33 = ((longlong)*local_2d0 + *local_2e8) - lVar14;
              }
              goto LAB_14012dd81;
            }
          }
          else {
            lVar14 = *local_300;
            if (uVar20 < local_2b8) {
              uVar20 = local_2b8;
            }
            lVar33 = uVar20 - lVar14;
LAB_14012dd81:
            if (lVar14 != 0) {
              FUN_14000f880(&local_550,lVar14,lVar33);
              local_508 = PStack_538;
            }
          }
          PVar27 = (POINT)&local_550;
          if (0xf < (ulonglong)local_508) {
            PVar27 = local_550;
          }
          FUN_140098b00("Found missing monitors %s\n",PVar27);
          if (0xf < (ulonglong)PStack_538) {
            puVar21 = (undefined4 *)((longlong)PStack_538 + 1);
            PVar17 = local_550;
            if ((undefined4 *)0xfff < puVar21) {
              PVar17 = *(POINT *)((longlong)local_550 + -8);
              PVar27 = PVar22;
              if (0x1f < (ulonglong)((longlong)local_550 + (-8 - (longlong)PVar17)))
              goto LAB_14012dec8;
              puVar21 = (undefined4 *)((longlong)PStack_538 + 0x28);
            }
            thunk_FUN_14028af80(PVar17,puVar21);
          }
        }
        FUN_1400056d0(&local_338);
      }
      FUN_14012c740(param_1);
      lVar33 = lStack_520;
      PVar27._1_7_ = 0;
      PVar27.x._0_1_ = *(longlong *)*param_1 != ((longlong *)*param_1)[1];
      lVar14 = local_528;
      if (local_528 != 0) {
        for (; lVar14 != lVar33; lVar14 = lVar14 + 0x20) {
          FUN_140017240(lVar14);
        }
        uVar20 = local_518 - local_528 & 0xffffffffffffffe0;
        lVar14 = local_528;
        if (0xfff < uVar20) {
          if (0x1f < (local_528 - *(longlong *)(local_528 + -8)) - 8U) goto LAB_14012dec8;
          uVar20 = uVar20 + 0x27;
          lVar14 = *(longlong *)(local_528 + -8);
        }
        thunk_FUN_14028af80(lVar14,uVar20);
        local_518 = 0;
        local_528 = 0;
        lStack_520 = 0;
      }
      FUN_14000d9e0(local_360);
      FUN_140049340(local_370);
    }
    else {
      if (DAT_1404e52b8 == 2) {
        FUN_140098b00("QDC failed: %i\n",LVar10);
      }
      thunk_FUN_14028af80(PVar22);
      thunk_FUN_14028af80(pDVar13);
      PVar27.x = 0;
      PVar27.y = 0;
    }
    if (PVar35 == (POINT)0x0) goto LAB_14012deda;
    PVar36 = (POINT)((longlong)PVar36 - (longlong)PVar35 & 0xfffffffffffffff0);
    if (0xfff < (ulonglong)PVar36) {
      pPVar15 = (POINT *)((longlong)PVar35 + -8);
      PVar35 = (POINT)((longlong)PVar35 + (-8 - (longlong)*pPVar15));
      if (0x1f < (ulonglong)PVar35) goto LAB_14012dec8;
      PVar36 = (POINT)((longlong)PVar36 + 0x27);
      PVar35 = *pPVar15;
      puVar25 = auStackY_5c8;
    }
  }
  else {
    for (; PVar22 != PVar27; PVar22 = (POINT)((longlong)PVar22 + 0x88)) {
      FUN_140017240((UINT32 *)((longlong)PVar22 + 0x58));
      FUN_140017240((DISPLAYCONFIG_SCANLINE_ORDERING *)((longlong)PVar22 + 0x38));
      FUN_140017240((LONG *)((longlong)PVar22 + 0x18));
    }
    uVar20 = (local_418 - (longlong)local_428 >> 3) * 8;
    PVar22 = local_428;
    if (uVar20 < 0x1000) {
LAB_14012cc18:
      thunk_FUN_14028af80(PVar22,uVar20);
      goto LAB_14012cc1d;
    }
    if (((longlong)local_428 - (longlong)*(POINT *)((longlong)local_428 + -8)) - 8U < 0x20) {
      uVar20 = uVar20 + 0x27;
      PVar22 = *(POINT *)((longlong)local_428 + -8);
      goto LAB_14012cc18;
    }
LAB_14012dec8:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar25 = auStackY_5c0;
  }
  *(undefined8 *)(puVar25 + -8) = 0x14012deda;
  thunk_FUN_14028af80(PVar35,PVar36);
LAB_14012deda:
  return (ulonglong)PVar27 & 0xff;
}

