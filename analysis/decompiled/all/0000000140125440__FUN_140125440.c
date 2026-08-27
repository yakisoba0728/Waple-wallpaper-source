// Function: FUN_140125440
// Addr: 140125440
// Size: 4424 bytes


void FUN_140125440(undefined8 param_1,int param_2,HWND param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  uint uVar7;
  float fVar8;
  int iVar9;
  HANDLE hObject;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  HWND pHVar13;
  byte bVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  float fVar27;
  HWND local_res18;
  undefined4 local_408;
  uint local_404;
  longlong local_400 [2];
  undefined8 local_3f0;
  HANDLE local_3e8;
  longlong local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  ulonglong local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined4 local_270;
  uint local_258;
  
  if (param_3 == (HWND)0x0) {
    return;
  }
  local_res18 = param_3;
  if (param_2 != 0x8000) {
    if (param_2 != 0x8001) {
      return;
    }
    if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e92e0) &&
       (FUN_14028b140(&DAT_1404e92e0), DAT_1404e92e0 == -1)) {
      GetCurrentThreadId();
      _Init_thread_footer(&DAT_1404e92e0);
    }
    local_res18 = (HWND)((ulonglong)local_res18 & 0xffffffff00000000);
    GetWindowThreadProcessId(param_3,(LPDWORD)&local_res18);
    lVar22 = DAT_1404e8e58;
    plVar12 = DAT_1404e8e48;
    uVar18 = (((((ulonglong)local_res18 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)local_res18 >> 8 & 0xff) * 0x100000001b3 ^
              (ulonglong)local_res18 >> 0x10 & 0xff) * 0x100000001b3 ^
             (ulonglong)local_res18 >> 0x18 & 0xff) * 0x100000001b3;
    uVar15 = uVar18 & DAT_1404e8e30;
    lVar19 = *(longlong *)(DAT_1404e8e18 + 8 + uVar15 * 0x10);
    if (lVar19 == DAT_1404e8e08) {
LAB_140125551:
      lVar19 = 0;
    }
    else {
      iVar9 = *(int *)(lVar19 + 0x10);
      while ((int)local_res18 != iVar9) {
        if (lVar19 == *(longlong *)(DAT_1404e8e18 + uVar15 * 0x10)) goto LAB_140125551;
        lVar19 = *(longlong *)(lVar19 + 8);
        iVar9 = *(int *)(lVar19 + 0x10);
      }
    }
    if (lVar19 == 0) {
      return;
    }
    if (lVar19 == DAT_1404e8e08) {
      return;
    }
    uVar18 = uVar18 & DAT_1404e8e70;
    plVar10 = *(longlong **)(DAT_1404e8e58 + 8 + uVar18 * 0x10);
    if (plVar10 == DAT_1404e8e48) {
LAB_1401255a6:
      plVar17 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar10[2];
      plVar17 = plVar10;
      while ((int)local_res18 != iVar9) {
        if (plVar17 == *(longlong **)(DAT_1404e8e58 + uVar18 * 0x10)) goto LAB_1401255a6;
        plVar17 = (longlong *)plVar17[1];
        iVar9 = (int)plVar17[2];
      }
    }
    plVar16 = DAT_1404e8e48;
    if (plVar17 != (longlong *)0x0) {
      plVar16 = plVar17;
    }
    if (plVar16 == DAT_1404e8e48) {
      return;
    }
    if ((HWND)plVar16[3] != param_3) {
      return;
    }
    if (plVar10 == DAT_1404e8e48) {
LAB_1401255e9:
      plVar17 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar10[2];
      plVar17 = plVar10;
      while ((int)local_res18 != iVar9) {
        if (plVar17 == *(longlong **)(DAT_1404e8e58 + uVar18 * 0x10)) goto LAB_1401255e9;
        plVar17 = (longlong *)plVar17[1];
        iVar9 = (int)plVar17[2];
      }
    }
    if (plVar17 != (longlong *)0x0) {
      plVar16 = *(longlong **)(DAT_1404e8e58 + uVar18 * 0x10);
      if (plVar10 == plVar17) {
        if (plVar16 == plVar17) {
          *(longlong **)(DAT_1404e8e58 + uVar18 * 0x10) = DAT_1404e8e48;
          *(longlong **)(lVar22 + 8 + uVar18 * 0x10) = plVar12;
        }
        else {
          *(longlong *)(DAT_1404e8e58 + 8 + uVar18 * 0x10) = plVar17[1];
        }
      }
      else if (plVar16 == plVar17) {
        *(longlong *)(DAT_1404e8e58 + uVar18 * 0x10) = *plVar17;
      }
      lVar22 = *plVar17;
      DAT_1404e8e50 = DAT_1404e8e50 + -1;
      *(longlong *)plVar17[1] = lVar22;
      *(longlong *)(lVar22 + 8) = plVar17[1];
      thunk_FUN_14028af80(plVar17,0x20);
    }
    PostMessageW(*(HWND *)(lVar19 + 0x18),0x413,0,(LPARAM)param_3);
    return;
  }
  local_400[0] = *(longlong *)ThreadLocalStoragePointer;
  local_3e0 = 0x130;
  if ((*(int *)(local_400[0] + 0x130) < DAT_1404e9290) &&
     (FUN_14028b140(&DAT_1404e9290), DAT_1404e9290 == -1)) {
    GetCurrentThreadId();
    _Init_thread_footer(&DAT_1404e9290);
  }
  local_408 = 0;
  GetWindowThreadProcessId(param_3,&local_408);
  fVar8 = DAT_140492974;
  uVar18 = (ulonglong)local_408._1_1_;
  uVar20 = (ulonglong)local_408._2_1_;
  uVar26 = (ulonglong)local_408._3_1_;
  local_404 = local_408;
  uVar23 = ((ulonglong)(local_408 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3;
  uVar15 = (((uVar23 ^ uVar18) * 0x100000001b3 ^ uVar20) * 0x100000001b3 ^ uVar26) * 0x100000001b3 &
           DAT_1404e8e30;
  lVar19 = *(longlong *)(DAT_1404e8e18 + 8 + uVar15 * 0x10);
  if (lVar19 == DAT_1404e8e08) {
LAB_140125752:
    lVar19 = 0;
  }
  else {
    uVar24 = *(uint *)(lVar19 + 0x10);
    while (local_408 != uVar24) {
      if (lVar19 == *(longlong *)(DAT_1404e8e18 + uVar15 * 0x10)) goto LAB_140125752;
      lVar19 = *(longlong *)(lVar19 + 8);
      uVar24 = *(uint *)(lVar19 + 0x10);
    }
  }
  lVar22 = DAT_1404e8e08;
  if (lVar19 != 0) {
    lVar22 = lVar19;
  }
  if (lVar22 == DAT_1404e8e08) {
    uVar15 = (((uVar23 ^ local_408 >> 8 & 0xff) * 0x100000001b3 ^
              (ulonglong)(local_408 >> 0x10 & 0xff)) * 0x100000001b3 ^
             (ulonglong)(local_408 >> 0x18)) * 0x100000001b3 & DAT_1404e8eb0;
    plVar12 = *(longlong **)(DAT_1404e8e98 + 8 + uVar15 * 0x10);
    if (plVar12 == DAT_1404e8e88) {
LAB_1401257e1:
      plVar12 = (longlong *)0x0;
    }
    else {
      uVar24 = *(uint *)(plVar12 + 2);
      while (local_408 != uVar24) {
        if (plVar12 == *(longlong **)(DAT_1404e8e98 + uVar15 * 0x10)) goto LAB_1401257e1;
        plVar12 = (longlong *)plVar12[1];
        uVar24 = *(uint *)(plVar12 + 2);
      }
    }
    plVar10 = DAT_1404e8e88;
    if (plVar12 != (longlong *)0x0) {
      plVar10 = plVar12;
    }
    if (plVar10 == DAT_1404e8e88) {
      hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
      local_3e8 = hObject;
      FUN_1404217a0((longlong)&local_278 + 4,0,0x234);
      local_278._0_4_ = 0x238;
      uVar24 = 0xffffffff;
      iVar9 = Process32FirstW(hObject,&local_278);
      uVar25 = local_404;
      uVar7 = local_270;
      while (iVar9 != 0) {
        local_270._0_1_ = (byte)uVar7;
        local_270._1_1_ = (byte)(uVar7 >> 8);
        local_270._2_1_ = (byte)(uVar7 >> 0x10);
        local_270._3_1_ = (byte)(uVar7 >> 0x18);
        uVar15 = (((((ulonglong)(byte)local_270 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)local_270._1_1_) * 0x100000001b3 ^ (ulonglong)local_270._2_1_) *
                  0x100000001b3 ^ (ulonglong)local_270._3_1_) * 0x100000001b3;
        plVar12 = *(longlong **)(DAT_1404e8e98 + 8 + (uVar15 & DAT_1404e8eb0) * 0x10);
        plVar10 = DAT_1404e8e88;
        local_270 = uVar7;
        if (plVar12 == DAT_1404e8e88) {
LAB_1401258f6:
          if (DAT_1404e8e90 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
            FUN_14028c2e0("unordered_map/set too long");
          }
          plVar12 = (longlong *)FUN_14028af20(0x18);
          *(uint *)(plVar12 + 2) = local_270;
          *(undefined4 *)((longlong)plVar12 + 0x14) = 0;
          uVar18 = DAT_1404e8eb8;
          if (DAT_1404e8e80 < (float)(DAT_1404e8e90 + 1) / (float)DAT_1404e8eb8) {
            fVar27 = (float)FUN_140419fa0((float)(DAT_1404e8e90 + 1) / DAT_1404e8e80);
            plVar10 = DAT_1404e8e88;
            lVar19 = 0;
            if ((fVar8 <= fVar27) && (fVar27 = fVar27 - fVar8, fVar27 < fVar8)) {
              lVar19 = -0x8000000000000000;
            }
            uVar23 = 8;
            if (8 < (ulonglong)((longlong)fVar27 + lVar19)) {
              uVar23 = (longlong)fVar27 + lVar19;
            }
            uVar20 = uVar18;
            if ((uVar18 < uVar23) &&
               ((0x1ff < uVar18 || (uVar20 = uVar18 * 8, uVar18 * 8 < uVar23)))) {
              uVar20 = uVar23;
            }
            for (lVar19 = 0x3f; 0xfffffffffffffffU >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
            if ((ulonglong)(1L << ((byte)lVar19 & 0x3f)) < uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_14028c2e0("invalid hash bucket count");
            }
            uVar18 = uVar20 - 1 | 1;
            lVar19 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            bVar14 = (char)lVar19 + 1;
            uVar18 = 1L << (bVar14 & 0x3f);
            FUN_14003e510(&DAT_1404e8e98,2L << (bVar14 & 0x3f),DAT_1404e8e88);
            DAT_1404e8eb0 = uVar18 - 1;
            DAT_1404e8eb8 = uVar18;
            plVar17 = (longlong *)*DAT_1404e8e88;
            lVar19 = DAT_1404e8e98;
joined_r0x000140125a60:
            DAT_1404e8e98 = lVar19;
            if (plVar17 != plVar10) {
              plVar16 = (longlong *)*plVar17;
              uVar18 = (((((ulonglong)*(byte *)(plVar17 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar17 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar17 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar17 + 0x13)) * 0x100000001b3 &
                       DAT_1404e8eb0;
              plVar2 = *(longlong **)(lVar19 + uVar18 * 0x10);
              uVar25 = local_404;
              if (plVar2 == plVar10) {
                *(longlong **)(lVar19 + uVar18 * 0x10) = plVar17;
                *(longlong **)(lVar19 + 8 + uVar18 * 0x10) = plVar17;
                plVar17 = plVar16;
                lVar19 = DAT_1404e8e98;
              }
              else {
                plVar3 = *(longlong **)(lVar19 + 8 + uVar18 * 0x10);
                if ((int)plVar17[2] == (int)plVar3[2]) {
                  plVar3 = (longlong *)*plVar3;
                  if (plVar3 != plVar17) {
                    puVar21 = (undefined8 *)plVar17[1];
                    *puVar21 = plVar16;
                    puVar4 = (undefined8 *)plVar16[1];
                    *puVar4 = plVar3;
                    puVar5 = (undefined8 *)plVar3[1];
                    *puVar5 = plVar17;
                    plVar3[1] = (longlong)puVar4;
                    plVar16[1] = (longlong)puVar21;
                    plVar17[1] = (longlong)puVar5;
                  }
                  *(longlong **)(lVar19 + 8 + uVar18 * 0x10) = plVar17;
                  plVar17 = plVar16;
                  lVar19 = DAT_1404e8e98;
                }
                else {
                  do {
                    if (plVar2 == plVar3) {
                      puVar21 = (undefined8 *)plVar17[1];
                      *puVar21 = plVar16;
                      puVar4 = (undefined8 *)plVar16[1];
                      *puVar4 = plVar3;
                      puVar5 = (undefined8 *)plVar3[1];
                      *puVar5 = plVar17;
                      plVar3[1] = (longlong)puVar4;
                      plVar16[1] = (longlong)puVar21;
                      plVar17[1] = (longlong)puVar5;
                      *(longlong **)(lVar19 + uVar18 * 0x10) = plVar17;
                      plVar17 = plVar16;
                      lVar19 = DAT_1404e8e98;
                      goto joined_r0x000140125a60;
                    }
                    plVar3 = (longlong *)plVar3[1];
                  } while ((int)plVar17[2] != (int)plVar3[2]);
                  lVar19 = *plVar3;
                  puVar21 = (undefined8 *)plVar17[1];
                  *puVar21 = plVar16;
                  plVar2 = (longlong *)plVar16[1];
                  *plVar2 = lVar19;
                  puVar4 = *(undefined8 **)(lVar19 + 8);
                  *puVar4 = plVar17;
                  *(longlong **)(lVar19 + 8) = plVar2;
                  plVar16[1] = (longlong)puVar21;
                  plVar17[1] = (longlong)puVar4;
                  plVar17 = plVar16;
                  lVar19 = DAT_1404e8e98;
                }
              }
              goto joined_r0x000140125a60;
            }
            local_3f0 = 0;
            FUN_140050350(&local_3f0);
            plVar17 = *(longlong **)(DAT_1404e8e98 + 8 + (uVar15 & DAT_1404e8eb0) * 0x10);
            plVar10 = DAT_1404e8e88;
            if (plVar17 != DAT_1404e8e88) {
              iVar9 = (int)plVar17[2];
              plVar10 = plVar17;
              while ((int)plVar12[2] != iVar9) {
                if (plVar10 == *(longlong **)(DAT_1404e8e98 + (uVar15 & DAT_1404e8eb0) * 0x10))
                goto LAB_140125bda;
                plVar10 = (longlong *)plVar10[1];
                iVar9 = (int)plVar10[2];
              }
              plVar10 = (longlong *)*plVar10;
            }
          }
LAB_140125bda:
          puVar21 = (undefined8 *)plVar10[1];
          DAT_1404e8e90 = DAT_1404e8e90 + 1;
          *plVar12 = (longlong)plVar10;
          plVar12[1] = (longlong)puVar21;
          *puVar21 = plVar12;
          plVar10[1] = (longlong)plVar12;
          lVar19 = DAT_1404e8e98;
          uVar15 = uVar15 & DAT_1404e8eb0;
          plVar17 = *(longlong **)(DAT_1404e8e98 + uVar15 * 0x10);
          if (plVar17 == DAT_1404e8e88) {
            *(longlong **)(DAT_1404e8e98 + uVar15 * 0x10) = plVar12;
LAB_140125c3a:
            *(longlong **)(lVar19 + 8 + uVar15 * 0x10) = plVar12;
          }
          else if (plVar17 == plVar10) {
            *(longlong **)(DAT_1404e8e98 + uVar15 * 0x10) = plVar12;
          }
          else if (*(undefined8 **)(DAT_1404e8e98 + 8 + uVar15 * 0x10) == puVar21)
          goto LAB_140125c3a;
        }
        else {
          uVar1 = *(uint *)(plVar12 + 2);
          while (uVar7 != uVar1) {
            plVar10 = plVar12;
            if (plVar12 == *(longlong **)(DAT_1404e8e98 + (uVar15 & DAT_1404e8eb0) * 0x10))
            goto LAB_1401258f6;
            plVar12 = (longlong *)plVar12[1];
            uVar1 = *(uint *)(plVar12 + 2);
          }
        }
        hObject = local_3e8;
        *(uint *)((longlong)plVar12 + 0x14) = local_258;
        if (local_270 == uVar25) {
          uVar24 = local_258;
        }
        iVar9 = Process32NextW(local_3e8,&local_278);
        uVar7 = local_270;
      }
      CloseHandle(hObject);
      uVar20 = (ulonglong)local_408._2_1_;
      uVar18 = (ulonglong)local_408._1_1_;
      uVar26 = (ulonglong)local_408._3_1_;
    }
    else {
      uVar24 = *(uint *)((longlong)plVar10 + 0x14);
    }
    uVar15 = (((((ulonglong)(uVar24 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)(uVar24 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar24 >> 0x10 & 0xff)
              ) * 0x100000001b3 ^ (ulonglong)(uVar24 >> 0x18)) * 0x100000001b3 & DAT_1404e8e30;
    lVar19 = *(longlong *)(DAT_1404e8e18 + 8 + uVar15 * 0x10);
    if (lVar19 == DAT_1404e8e08) {
LAB_140125d21:
      lVar19 = 0;
    }
    else {
      uVar25 = *(uint *)(lVar19 + 0x10);
      while (uVar24 != uVar25) {
        if (lVar19 == *(longlong *)(DAT_1404e8e18 + uVar15 * 0x10)) goto LAB_140125d21;
        lVar19 = *(longlong *)(lVar19 + 8);
        uVar25 = *(uint *)(lVar19 + 0x10);
      }
    }
    lVar22 = DAT_1404e8e08;
    if (lVar19 != 0) {
      lVar22 = lVar19;
    }
    local_404 = local_408;
    if (lVar22 == DAT_1404e8e08) {
      return;
    }
  }
  pHVar13 = local_res18;
  uVar15 = (((((ulonglong)(local_404 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar18) *
             0x100000001b3 ^ uVar20) * 0x100000001b3 ^ uVar26) * 0x100000001b3 & DAT_1404e8e70;
  plVar12 = *(longlong **)(DAT_1404e8e58 + 8 + uVar15 * 0x10);
  if (plVar12 == DAT_1404e8e48) {
LAB_140125d96:
    plVar12 = (longlong *)0x0;
  }
  else {
    uVar24 = *(uint *)(plVar12 + 2);
    while (local_404 != uVar24) {
      if (plVar12 == *(longlong **)(DAT_1404e8e58 + uVar15 * 0x10)) goto LAB_140125d96;
      plVar12 = (longlong *)plVar12[1];
      uVar24 = *(uint *)(plVar12 + 2);
    }
  }
  plVar10 = DAT_1404e8e48;
  if (plVar12 != (longlong *)0x0) {
    plVar10 = plVar12;
  }
  if ((plVar10 != DAT_1404e8e48) && ((HWND)plVar10[3] == local_res18)) {
    return;
  }
  local_408 = local_404;
  if ((*(int *)(local_3e0 + local_400[0]) < DAT_1404e9294) &&
     (FUN_14028b140(&DAT_1404e9294), DAT_1404e9294 == -1)) {
    local_3a8 = 0;
    local_3a0 = 0;
    local_3b8 = 0;
    uStack_3b0 = 0;
    FUN_140016170(&local_3b8,&DAT_14048a3c0,3);
    local_388 = 0;
    local_380 = 0;
    local_398 = 0;
    uStack_390 = 0;
    FUN_140016170(&local_398,L"OleMainThreadWndClass",0x15);
    local_368 = 0;
    local_360 = 0;
    local_378 = 0;
    uStack_370 = 0;
    FUN_140016170(&local_378,L"CicMarshalWndClass",0x12);
    local_348 = 0;
    local_340 = 0;
    local_358 = 0;
    uStack_350 = 0;
    FUN_140016170(&local_358,L"MSCTFIME UI",0xb);
    local_328 = 0;
    local_320 = 0;
    local_338 = 0;
    uStack_330 = 0;
    FUN_140016170(&local_338,L"UserAdapterWindowClass",0x16);
    local_308 = 0;
    local_300 = 0;
    local_318 = 0;
    uStack_310 = 0;
    FUN_140016170(&local_318,L"Chrome_MessageWindow",0x14);
    local_2e8 = 0;
    local_2e0 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    FUN_140016170(&local_2f8,L"Base_PowerMessageWindow",0x17);
    local_2c8 = 0;
    local_2c0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    FUN_140016170(&local_2d8,L"Chrome_SystemMessageWindow",0x1a);
    local_2a8 = 0;
    local_2a0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    FUN_140016170(&local_2b8,L"NVOpenGLPbuffer",0xf);
    local_288 = 0;
    local_280 = 0;
    local_298 = 0;
    uStack_290 = 0;
    FUN_140016170(&local_298,L"MMDEVAPI",8);
    local_404 = 0;
    FUN_14007c250(&DAT_1404e92a0,&local_404);
    puVar21 = &local_3b8;
    do {
      FUN_14007d6b0(&DAT_1404e92a0,local_400,puVar21);
      puVar21 = puVar21 + 4;
    } while (puVar21 != &local_278);
    lVar19 = 10;
    puVar21 = &local_278;
    do {
      puVar21 = puVar21 + -4;
      FUN_140016770(puVar21);
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    FUN_14028b410(FUN_140424a10);
    _Init_thread_footer(&DAT_1404e9294);
  }
  FUN_1404217a0(&local_278,0,0x100);
  GetClassNameW(pHVar13,(LPWSTR)&local_278,0x80);
  local_3c8 = 0;
  local_3c0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  uVar11 = FUN_1402d6aa0(&local_278);
  FUN_140016170(&local_3d8,&local_278,uVar11);
  plVar12 = (longlong *)FUN_140128e80(&DAT_1404e92a0,local_400,&local_3d8);
  if ((*plVar12 == DAT_1404e92a8) &&
     (pHVar13 = GetParent(pHVar13), pHVar13 != (HWND)0xfffffffffffffffd)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (7 < local_3c0) {
    FUN_140016a90(&local_3d8,local_3d8);
  }
  if (!bVar6) {
    return;
  }
  uVar15 = (((((ulonglong)(local_408 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)local_408._1_1_) * 0x100000001b3 ^ (ulonglong)local_408._2_1_) *
            0x100000001b3 ^ (ulonglong)local_408._3_1_) * 0x100000001b3;
  plVar12 = *(longlong **)(DAT_1404e8e58 + 8 + (uVar15 & DAT_1404e8e70) * 0x10);
  plVar10 = DAT_1404e8e48;
  if (plVar12 != DAT_1404e8e48) {
    uVar24 = *(uint *)(plVar12 + 2);
    while (local_408 != uVar24) {
      plVar10 = plVar12;
      if (plVar12 == *(longlong **)(DAT_1404e8e58 + (uVar15 & DAT_1404e8e70) * 0x10))
      goto LAB_140125f3b;
      plVar12 = (longlong *)plVar12[1];
      uVar24 = *(uint *)(plVar12 + 2);
    }
    goto LAB_140126284;
  }
LAB_140125f3b:
  if (DAT_1404e8e50 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  plVar12 = (longlong *)FUN_14028af20(0x20);
  *(uint *)(plVar12 + 2) = local_408;
  plVar12[3] = 0;
  uVar18 = DAT_1404e8e78;
  if (DAT_1404e8e40 < (float)(DAT_1404e8e50 + 1) / (float)DAT_1404e8e78) {
    fVar27 = (float)FUN_140419fa0((float)(DAT_1404e8e50 + 1) / DAT_1404e8e40);
    plVar10 = DAT_1404e8e48;
    lVar19 = 0;
    if ((fVar8 <= fVar27) && (fVar27 = fVar27 - fVar8, fVar27 < fVar8)) {
      lVar19 = -0x8000000000000000;
    }
    uVar23 = 8;
    if (8 < (ulonglong)((longlong)fVar27 + lVar19)) {
      uVar23 = (longlong)fVar27 + lVar19;
    }
    uVar20 = uVar18;
    if ((uVar18 < uVar23) && ((0x1ff < uVar18 || (uVar20 = uVar18 * 8, uVar18 * 8 < uVar23)))) {
      uVar20 = uVar23;
    }
    for (lVar19 = 0x3f; 0xfffffffffffffffU >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar19 & 0x3f)) < uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("invalid hash bucket count");
    }
    uVar18 = uVar20 - 1 | 1;
    lVar19 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    bVar14 = (char)lVar19 + 1;
    uVar18 = 1L << (bVar14 & 0x3f);
    FUN_14003e510(&DAT_1404e8e58,2L << (bVar14 & 0x3f),DAT_1404e8e48);
    DAT_1404e8e70 = uVar18 - 1;
    DAT_1404e8e78 = uVar18;
    plVar17 = (longlong *)*DAT_1404e8e48;
    lVar19 = DAT_1404e8e58;
joined_r0x0001401260af:
    DAT_1404e8e58 = lVar19;
    if (plVar17 != plVar10) {
      plVar16 = (longlong *)*plVar17;
      uVar18 = (((((ulonglong)*(byte *)(plVar17 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar17 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar17 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar17 + 0x13)) * 0x100000001b3 & DAT_1404e8e70;
      plVar2 = *(longlong **)(lVar19 + uVar18 * 0x10);
      if (plVar2 == plVar10) {
        *(longlong **)(lVar19 + uVar18 * 0x10) = plVar17;
        *(longlong **)(lVar19 + 8 + uVar18 * 0x10) = plVar17;
        plVar17 = plVar16;
        lVar19 = DAT_1404e8e58;
      }
      else {
        plVar3 = *(longlong **)(lVar19 + 8 + uVar18 * 0x10);
        if ((int)plVar17[2] == (int)plVar3[2]) {
          plVar3 = (longlong *)*plVar3;
          if (plVar3 != plVar17) {
            puVar21 = (undefined8 *)plVar17[1];
            *puVar21 = plVar16;
            puVar4 = (undefined8 *)plVar16[1];
            *puVar4 = plVar3;
            puVar5 = (undefined8 *)plVar3[1];
            *puVar5 = plVar17;
            plVar3[1] = (longlong)puVar4;
            plVar16[1] = (longlong)puVar21;
            plVar17[1] = (longlong)puVar5;
          }
          *(longlong **)(lVar19 + 8 + uVar18 * 0x10) = plVar17;
          plVar17 = plVar16;
          lVar19 = DAT_1404e8e58;
        }
        else {
          do {
            if (plVar2 == plVar3) {
              puVar21 = (undefined8 *)plVar17[1];
              *puVar21 = plVar16;
              puVar4 = (undefined8 *)plVar16[1];
              *puVar4 = plVar3;
              puVar5 = (undefined8 *)plVar3[1];
              *puVar5 = plVar17;
              plVar3[1] = (longlong)puVar4;
              plVar16[1] = (longlong)puVar21;
              plVar17[1] = (longlong)puVar5;
              *(longlong **)(lVar19 + uVar18 * 0x10) = plVar17;
              plVar17 = plVar16;
              lVar19 = DAT_1404e8e58;
              goto joined_r0x0001401260af;
            }
            plVar3 = (longlong *)plVar3[1];
          } while ((int)plVar17[2] != (int)plVar3[2]);
          lVar19 = *plVar3;
          puVar21 = (undefined8 *)plVar17[1];
          *puVar21 = plVar16;
          plVar2 = (longlong *)plVar16[1];
          *plVar2 = lVar19;
          puVar4 = *(undefined8 **)(lVar19 + 8);
          *puVar4 = plVar17;
          *(longlong **)(lVar19 + 8) = plVar2;
          plVar16[1] = (longlong)puVar21;
          plVar17[1] = (longlong)puVar4;
          plVar17 = plVar16;
          lVar19 = DAT_1404e8e58;
        }
      }
      goto joined_r0x0001401260af;
    }
    local_400[0] = 0;
    FUN_1400500f0(local_400);
    plVar17 = *(longlong **)(DAT_1404e8e58 + 8 + (uVar15 & DAT_1404e8e70) * 0x10);
    plVar10 = DAT_1404e8e48;
    if (plVar17 != DAT_1404e8e48) {
      iVar9 = (int)plVar17[2];
      plVar10 = plVar17;
      while ((int)plVar12[2] != iVar9) {
        if (plVar10 == *(longlong **)(DAT_1404e8e58 + (uVar15 & DAT_1404e8e70) * 0x10))
        goto LAB_140126228;
        plVar10 = (longlong *)plVar10[1];
        iVar9 = (int)plVar10[2];
      }
      plVar10 = (longlong *)*plVar10;
    }
  }
LAB_140126228:
  puVar21 = (undefined8 *)plVar10[1];
  DAT_1404e8e50 = DAT_1404e8e50 + 1;
  *plVar12 = (longlong)plVar10;
  plVar12[1] = (longlong)puVar21;
  *puVar21 = plVar12;
  plVar10[1] = (longlong)plVar12;
  lVar19 = DAT_1404e8e58;
  uVar15 = uVar15 & DAT_1404e8e70;
  plVar17 = *(longlong **)(DAT_1404e8e58 + uVar15 * 0x10);
  if (plVar17 == DAT_1404e8e48) {
    *(longlong **)(DAT_1404e8e58 + uVar15 * 0x10) = plVar12;
  }
  else {
    if (plVar17 == plVar10) {
      *(longlong **)(DAT_1404e8e58 + uVar15 * 0x10) = plVar12;
      goto LAB_140126284;
    }
    if (*(undefined8 **)(DAT_1404e8e58 + 8 + uVar15 * 0x10) != puVar21) goto LAB_140126284;
  }
  *(longlong **)(lVar19 + 8 + uVar15 * 0x10) = plVar12;
LAB_140126284:
  plVar12[3] = (longlong)local_res18;
  PostMessageW(*(HWND *)(lVar22 + 0x18),0x404,0,(LPARAM)local_res18);
  return;
}

