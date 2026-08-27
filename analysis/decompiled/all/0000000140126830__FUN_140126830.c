// Function: FUN_140126830
// Addr: 140126830
// Size: 3757 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_140126830(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  BOOL BVar9;
  int iVar10;
  uint uVar11;
  DWORD DVar12;
  HMODULE pHVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  HWND pHVar16;
  HWINEVENTHOOK pHVar17;
  longlong *plVar18;
  byte bVar19;
  LPCWSTR ******lpApplicationName;
  LPWSTR ******pppppppWVar20;
  LPCWSTR ******pppppppWVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong lVar28;
  int iVar29;
  ulonglong unaff_R13;
  ulonglong uVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  longlong local_res8;
  undefined1 auStackY_338 [8];
  undefined1 auStackY_330 [24];
  longlong *local_2d0;
  LPCWSTR ******local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  ulonglong uStack_2b0;
  LPWSTR ******local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  ulonglong local_290;
  LPCWSTR ******local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  ulonglong uStack_270;
  _PROCESS_INFORMATION local_268;
  longlong local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  WNDCLASSW local_228;
  _STARTUPINFOW local_1d8;
  undefined1 local_168 [16];
  undefined1 local_158 [32];
  longlong *local_138;
  longlong *local_130;
  longlong *local_118;
  longlong *local_110;
  uint local_e0;
  undefined1 local_68 [64];
  
  puVar24 = auStackY_338;
  local_res8 = param_1;
  if (0 < DAT_1404e8c98) {
    DAT_1404e8c98 = DAT_1404e8c98 + -1;
    if (DAT_1404e8c98 == 0) {
      UnhookWindowsHookEx(DAT_1404e8df0);
      DAT_1404e8df0 = (HHOOK)0x0;
    }
    BVar9 = IsWindow(*(HWND *)(param_1 + 0x188));
    if (BVar9 != 0) {
      SetWindowLongPtrW(*(HWND *)(param_1 + 0x188),-0x15,0);
      DestroyWindow(*(HWND *)(param_1 + 0x188));
      *(undefined8 *)(param_1 + 0x188) = 0;
    }
  }
  FUN_140127d00(param_1);
  if (((*(byte *)(param_1 + 0xa6) & 2) != 0) &&
     (iVar10 = DAT_1404e8c98 + 1, bVar31 = DAT_1404e8c98 == 0, DAT_1404e8c98 = iVar10, bVar31)) {
    pHVar13 = GetModuleHandleW((LPCWSTR)0x0);
    DAT_1404e8df0 = SetWindowsHookExW(0xe,FUN_140126640,pHVar13,0);
  }
  FUN_14010a520(param_1,param_2,param_3,param_4);
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e92e4) &&
     (FUN_14028b140(&DAT_1404e92e4), DAT_1404e92e4 == -1)) {
    GetCurrentThreadId();
    _Init_thread_footer(&DAT_1404e92e4);
  }
  uVar30 = DAT_1404e8e98;
  plVar18 = DAT_1404e8e88;
  if (DAT_1404e8e90 != 0) {
    if (DAT_1404e8e90 < DAT_1404e8eb8 >> 3) {
      plVar26 = (longlong *)*DAT_1404e8e88;
      if (plVar26 != DAT_1404e8e88) {
        plVar3 = (longlong *)plVar26[1];
        uVar25 = (((((ulonglong)*(byte *)(plVar26 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar26 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar26 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar26 + 0x13)) * 0x100000001b3 & DAT_1404e8eb0;
        local_250 = *(longlong *)(DAT_1404e8e98 + uVar25 * 0x10);
        local_2d0 = *(longlong **)(DAT_1404e8e98 + 8 + uVar25 * 0x10);
        plVar15 = plVar26;
LAB_140126a00:
        plVar27 = (longlong *)*plVar15;
        thunk_FUN_14028af80(plVar15,0x18);
        DAT_1404e8e90 = DAT_1404e8e90 - 1;
        if (plVar15 != local_2d0) goto code_r0x000140126a25;
        plVar15 = plVar3;
        if ((longlong *)local_250 == plVar26) {
          *(longlong **)(uVar30 + uVar25 * 0x10) = plVar18;
          plVar15 = plVar18;
        }
        *(longlong **)(uVar30 + 8 + uVar25 * 0x10) = plVar15;
        while (plVar27 != plVar18) {
          uVar25 = (((((ulonglong)*(byte *)(plVar27 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar27 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar27 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar27 + 0x13)) * 0x100000001b3 & DAT_1404e8eb0;
          plVar26 = *(longlong **)(uVar30 + 8 + uVar25 * 0x10);
          plVar15 = plVar27;
          while( true ) {
            plVar27 = (longlong *)*plVar15;
            thunk_FUN_14028af80(plVar15,0x18);
            DAT_1404e8e90 = DAT_1404e8e90 - 1;
            if (plVar15 == plVar26) break;
            plVar15 = plVar27;
            if (plVar27 == plVar18) goto LAB_140126a30;
          }
          *(longlong **)(uVar30 + uVar25 * 0x10) = plVar18;
          *(longlong **)(uVar30 + 8 + uVar25 * 0x10) = plVar18;
        }
        goto LAB_140126a35;
      }
    }
    else {
      *(undefined8 *)DAT_1404e8e88[1] = 0;
      puVar14 = (undefined8 *)*plVar18;
      while (puVar14 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar14;
        thunk_FUN_14028af80(puVar14,0x18);
        puVar14 = puVar5;
      }
      *DAT_1404e8e88 = (longlong)DAT_1404e8e88;
      DAT_1404e8e88[1] = (longlong)DAT_1404e8e88;
      local_2d0 = DAT_1404e8e88;
      DAT_1404e8e90 = 0;
      FUN_14000f7d0(DAT_1404e8e98,DAT_1404e8ea0,&local_2d0);
    }
  }
LAB_140126a44:
  lVar28 = 0;
  if (DAT_1404e8fe8 == 0) {
    local_228.style = 0;
    local_228._4_4_ = 0;
    local_228.cbClsExtra = 0;
    local_228.cbWndExtra = 0;
    local_228.hInstance = (HINSTANCE)0x0;
    local_228.hIcon = (HICON)0x0;
    local_228.hCursor = (HCURSOR)0x0;
    local_228.hbrBackground = (HBRUSH)0x0;
    local_228.lpszMenuName = (LPCWSTR)0x0;
    local_228.lpfnWndProc = FUN_1401287a0;
    local_228.lpszClassName = (LPCWSTR)0x0;
    local_228.hInstance = GetModuleHandleW((LPCWSTR)0x0);
    local_228.lpszClassName = L"WPEAppIntermediateWorker";
    DAT_1404e8fe8 = RegisterClassW(&local_228);
  }
  FUN_140128490(param_1);
  BVar9 = IsWindow(*(HWND *)(param_1 + 0x188));
  if (BVar9 != 0) {
    DestroyWindow(*(HWND *)(param_1 + 0x188));
  }
  *(undefined1 *)(param_1 + 0x192) = 0;
  puVar14 = (undefined8 *)FUN_140005880(&local_2a8,param_1 + 0x100);
  local_288 = (LPCWSTR ******)*puVar14;
  uStack_280 = puVar14[1];
  local_278 = puVar14[2];
  uStack_270 = puVar14[3];
  puVar14[2] = 0;
  puVar14[3] = 7;
  *(undefined2 *)puVar14 = 0;
  if (local_290 < 8) {
LAB_140126b4e:
    unaff_R13 = 1;
    local_298 = 0;
    iVar29 = 1;
    local_290 = 7;
    local_2a8 = (LPWSTR ******)((ulonglong)local_2a8 & 0xffffffffffff0000);
    LOCK();
    iVar10 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = 1;
    UNLOCK();
    while (iVar10 != 0) {
      iVar10 = *(int *)(param_1 + 0x140);
      while (iVar10 != 0) {
        iVar10 = iVar29;
        if (iVar29 == 0) {
LAB_140126cea:
          iVar29 = iVar29 * 2;
        }
        else {
          do {
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          if (iVar29 < 0x40) goto LAB_140126cea;
          iVar29 = 0x40;
        }
        iVar10 = *(int *)(param_1 + 0x140);
      }
      LOCK();
      iVar10 = *(int *)(param_1 + 0x140);
      *(int *)(param_1 + 0x140) = 1;
      UNLOCK();
    }
    iVar10 = *(int *)(param_1 + 0x144);
    iVar29 = *(int *)(param_1 + 0x148);
    iVar1 = *(int *)(param_1 + 0x14c);
    iVar2 = *(int *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x140) = 0;
    pHVar13 = GetModuleHandleW((LPCWSTR)0x0);
    pHVar16 = CreateWindowExW(0x8080000,(LPCWSTR)(ulonglong)DAT_1404e8fe8,L"",0x40000000,iVar10,
                              iVar29,iVar1 - iVar10,iVar2 - iVar29,*(HWND *)(param_1 + 0x60),
                              (HMENU)0x0,pHVar13,(LPVOID)0x0);
    *(HWND *)(param_1 + 0x188) = pHVar16;
    BVar9 = IsWindow(pHVar16);
    if (BVar9 == 0) {
LAB_140126d99:
      if (uStack_270 < 8) {
        return 0;
      }
      uVar30 = uStack_270 * 2 + 2;
      pppppppWVar21 = local_288;
      if (uVar30 < 0x1000) {
LAB_140126dd8:
        thunk_FUN_14028af80(pppppppWVar21,uVar30);
        return 0;
      }
      pppppppWVar21 = (LPCWSTR ******)local_288[-1];
      if ((ulonglong)((longlong)local_288 + (-8 - (longlong)pppppppWVar21)) < 0x20) {
        uVar30 = uStack_270 * 2 + 0x29;
        goto LAB_140126dd8;
      }
      goto LAB_1401271a9;
    }
    SetWindowLongPtrW(*(HWND *)(param_1 + 0x188),-0x15,param_1);
    lVar28 = 2;
    SetLayeredWindowAttributes(*(HWND *)(param_1 + 0x188),0,0xff,2);
    SetPropW(*(HWND *)(param_1 + 0x188),L"WallpaperEngineWallpaper",(HANDLE)0x1);
    pHVar16 = *(HWND *)(param_1 + 0x188);
    uVar11 = GetWindowLongW(pHVar16,-0x10);
    SetWindowLongW(pHVar16,-0x10,uVar11 & 0xde33ffff);
    ShowWindow(*(HWND *)(param_1 + 0x188),1);
    SetTimer(*(HWND *)(param_1 + 0x188),100,1000,(TIMERPROC)0x0);
    local_1d8.lpReserved = (LPWSTR)0x0;
    local_1d8.cb = 0x68;
    local_1d8._4_4_ = 0;
    local_268.hProcess = (HANDLE)0x0;
    local_268.hThread = (HANDLE)0x0;
    local_268.dwProcessId = 0;
    local_268.dwThreadId = 0;
    local_1d8.lpDesktop = (LPWSTR)0x0;
    local_1d8.lpTitle = (LPWSTR)0x0;
    local_1d8.hStdError = (HANDLE)0x0;
    local_1d8.dwX = 0;
    local_1d8.dwY = 0;
    local_1d8.dwXSize = 0;
    local_1d8.dwYSize = 0;
    local_1d8.dwXCountChars = 0;
    local_1d8.dwYCountChars = 0;
    local_1d8.dwFillAttribute = 0;
    local_1d8.dwFlags = 0;
    local_1d8.wShowWindow = 0;
    local_1d8.cbReserved2 = 0;
    local_1d8._68_4_ = 0;
    local_1d8.lpReserved2 = (LPBYTE)0x0;
    local_1d8.hStdInput = (HANDLE)0x0;
    local_1d8.hStdOutput = (HANDLE)0x0;
    FUN_14011c910(local_68,&DAT_140489930,*(undefined8 *)(param_1 + 0x188));
    FUN_14000df80(local_168);
    FUN_14000d140(local_158,"-WINDOWED -parentHWND ");
    FUN_14000d140(local_158,local_68);
    pHVar17 = SetWinEventHook(0x8000,0x8001,(HMODULE)0x0,FUN_140125440,0,0,2);
    *(HWINEVENTHOOK *)(param_1 + 0x160) = pHVar17;
    puVar14 = (undefined8 *)FUN_140005880(&local_2a8,param_1 + 0x100);
    local_2c8 = (LPCWSTR ******)*puVar14;
    uStack_2c0 = puVar14[1];
    local_2b8 = puVar14[2];
    uStack_2b0 = puVar14[3];
    puVar14[2] = 0;
    puVar14[3] = 7;
    *(undefined2 *)puVar14 = 0;
    if (7 < local_290) {
      uVar30 = local_290 * 2 + 2;
      pppppppWVar20 = local_2a8;
      if (0xfff < uVar30) {
        pppppppWVar20 = (LPWSTR ******)local_2a8[-1];
        if (0x1f < (ulonglong)((longlong)local_2a8 + (-8 - (longlong)pppppppWVar20)))
        goto LAB_1401271a9;
        uVar30 = local_290 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppppWVar20,uVar30);
    }
    FUN_14003fe80(&local_2c8);
    pppppppWVar21 = (LPCWSTR ******)&local_2c8;
    if (7 < uStack_2b0) {
      pppppppWVar21 = local_2c8;
    }
    local_298 = 0;
    local_290 = 7;
    uStack_2a0 = 0;
    local_2a8 = (LPWSTR ******)0x0;
    local_248 = 0;
    uStack_240 = 0;
    if ((((byte)local_e0 & 0x22) == 2) || (*local_110 == 0)) {
      if ((local_e0 & 4) == 0) {
        if (*local_118 == 0) {
          lVar22 = 0;
        }
        else {
          lVar22 = *local_138;
        }
        goto LAB_14012707c;
      }
    }
    else {
      lVar22 = *local_130;
LAB_14012707c:
      if (lVar22 != 0) {
        FUN_140016ae0(&local_2a8,lVar22);
      }
    }
    pppppppWVar20 = (LPWSTR ******)&local_2a8;
    if (7 < local_290) {
      pppppppWVar20 = local_2a8;
    }
    lpApplicationName = (LPCWSTR ******)&local_288;
    if (7 < uStack_270) {
      lpApplicationName = local_288;
    }
    BVar9 = CreateProcessW((LPCWSTR)lpApplicationName,(LPWSTR)pppppppWVar20,
                           (LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0,0x24,(LPVOID)0x0,
                           (LPCWSTR)pppppppWVar21,&local_1d8,&local_268);
    if (7 < local_290) {
      uVar30 = local_290 * 2 + 2;
      pppppppWVar20 = local_2a8;
      if (0xfff < uVar30) {
        pppppppWVar20 = (LPWSTR ******)local_2a8[-1];
        if (0x1f < (ulonglong)((longlong)local_2a8 + (-8 - (longlong)pppppppWVar20)))
        goto LAB_1401271a9;
        uVar30 = local_290 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppppWVar20,uVar30);
    }
    if (BVar9 == 0) {
      *(undefined4 *)(param_1 + 0x168) = 0;
      DVar12 = GetLastError();
      FUN_140098760("Application shell execute failed with: %u\n",DVar12);
      if (7 < uStack_2b0) {
        uVar30 = uStack_2b0 * 2 + 2;
        pppppppWVar21 = local_2c8;
        if (0xfff < uVar30) {
          pppppppWVar21 = (LPCWSTR ******)local_2c8[-1];
          if (0x1f < (ulonglong)((longlong)local_2c8 + (-8 - (longlong)pppppppWVar21)))
          goto LAB_1401271a9;
          uVar30 = uStack_2b0 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pppppppWVar21,uVar30);
      }
      local_2b8 = 0;
      uStack_2b0 = 7;
      local_2c8 = (LPCWSTR ******)((ulonglong)local_2c8 & 0xffffffffffff0000);
      FUN_140005b50(local_168);
      goto LAB_140126d99;
    }
  }
  else {
    uVar30 = local_290 * 2 + 2;
    pppppppWVar20 = local_2a8;
    if (uVar30 < 0x1000) {
LAB_140126b49:
      thunk_FUN_14028af80(pppppppWVar20,uVar30);
      goto LAB_140126b4e;
    }
    pppppppWVar20 = (LPWSTR ******)local_2a8[-1];
    if ((ulonglong)((longlong)local_2a8 + (-8 - (longlong)pppppppWVar20)) < 0x20) {
      uVar30 = local_290 * 2 + 0x29;
      goto LAB_140126b49;
    }
LAB_1401271a9:
    pcVar7 = (code *)swi(0x29);
    (*pcVar7)(5);
    puVar24 = auStackY_330;
  }
  *(undefined8 *)(puVar24 + 0x68) = *(undefined8 *)(param_1 + 0x188);
  *(int *)(param_1 + 0x168) = local_268.dwProcessId;
  uVar30 = ((((local_268._16_8_ & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)local_268._16_8_ >> 8 & 0xff) * 0x100000001b3 ^
            (ulonglong)local_268._16_8_ >> 0x10 & 0xff) * 0x100000001b3 ^
           (ulonglong)local_268._16_8_ >> 0x18 & 0xff) * 0x100000001b3;
  plVar18 = *(longlong **)(DAT_1404e8e18 + 8 + (uVar30 & DAT_1404e8e30) * 0x10);
  plVar26 = DAT_1404e8e08;
  if (plVar18 != DAT_1404e8e08) {
    iVar10 = (int)plVar18[2];
    plVar26 = plVar18;
    while (plVar18 = plVar26, local_268.dwProcessId != iVar10) {
      if (plVar26 == *(longlong **)(DAT_1404e8e18 + (uVar30 & DAT_1404e8e30) * 0x10))
      goto LAB_140127256;
      plVar26 = (longlong *)plVar26[1];
      iVar10 = (int)plVar26[2];
    }
    goto LAB_1401275d4;
  }
LAB_140127256:
  if (DAT_1404e8e10 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar24 + -8) = &UNK_1401276de;
    FUN_14028c2e0("unordered_map/set too long");
  }
  *(undefined8 *)(puVar24 + -8) = 0x140127277;
  plVar18 = (longlong *)FUN_14028af20(0x20);
  *(DWORD *)(plVar18 + 2) = local_268.dwProcessId;
  plVar18[3] = 0;
  uVar8 = DAT_1404e8e38;
  uVar25 = DAT_1404e8e10 + 1;
  if ((longlong)uVar25 < 0) {
    fVar32 = (float)(uVar25 >> 1 | (ulonglong)((uint)uVar25 & (uint)unaff_R13));
    fVar32 = fVar32 + fVar32;
  }
  else {
    fVar32 = (float)(longlong)uVar25;
  }
  if ((longlong)DAT_1404e8e38 < 0) {
    fVar33 = (float)(DAT_1404e8e38 >> 1 | (ulonglong)((uint)DAT_1404e8e38 & (uint)unaff_R13));
    fVar33 = fVar33 + fVar33;
  }
  else {
    fVar33 = (float)(longlong)DAT_1404e8e38;
  }
  if (DAT_1404e8e00 < fVar32 / fVar33) {
    *(undefined8 *)(puVar24 + -8) = 0x140127306;
    fVar32 = (float)FUN_140419fa0(fVar32 / DAT_1404e8e00);
    plVar26 = DAT_1404e8e08;
    lVar22 = 0;
    if ((DAT_140492974 <= fVar32) && (fVar32 = fVar32 - DAT_140492974, fVar32 < DAT_140492974)) {
      lVar22 = -0x8000000000000000;
    }
    uVar25 = 8;
    if (8 < (ulonglong)((longlong)fVar32 + lVar22)) {
      uVar25 = (longlong)fVar32 + lVar22;
    }
    uVar23 = uVar8;
    if ((uVar8 < uVar25) && ((0x1ff < uVar8 || (uVar23 = uVar8 * 8, uVar8 * 8 < uVar25)))) {
      uVar23 = uVar25;
    }
    for (lVar22 = 0x3f; 0xfffffffffffffffU >> lVar22 == 0; lVar22 = lVar22 + -1) {
    }
    if (unaff_R13 << ((byte)lVar22 & 0x3f) < uVar23) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar24 + -8) = &UNK_1401276a1;
      FUN_14028c2e0("invalid hash bucket count");
    }
    uVar25 = uVar23 - 1 | unaff_R13;
    lVar22 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    bVar19 = (char)lVar22 + 1;
    uVar25 = unaff_R13 << (bVar19 & 0x3f);
    *(undefined8 *)(puVar24 + -8) = 0x1401273a6;
    FUN_14003e510(&DAT_1404e8e18,lVar28 << (bVar19 & 0x3f),DAT_1404e8e08);
    DAT_1404e8e30 = uVar25 - 1;
    DAT_1404e8e38 = uVar25;
    plVar3 = (longlong *)*DAT_1404e8e08;
    lVar28 = DAT_1404e8e18;
joined_r0x0001401273c8:
    DAT_1404e8e18 = lVar28;
    if (plVar3 != plVar26) {
      plVar15 = (longlong *)*plVar3;
      uVar25 = (((((ulonglong)*(byte *)(plVar3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar3 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar3 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar3 + 0x13)) * 0x100000001b3 & DAT_1404e8e30;
      plVar27 = *(longlong **)(lVar28 + uVar25 * 0x10);
      param_1 = local_res8;
      if (plVar27 == plVar26) {
        *(longlong **)(lVar28 + uVar25 * 0x10) = plVar3;
        *(longlong **)(lVar28 + 8 + uVar25 * 0x10) = plVar3;
        plVar3 = plVar15;
        lVar28 = DAT_1404e8e18;
      }
      else {
        plVar4 = *(longlong **)(lVar28 + 8 + uVar25 * 0x10);
        if ((int)plVar3[2] == (int)plVar4[2]) {
          plVar4 = (longlong *)*plVar4;
          if (plVar4 != plVar3) {
            puVar14 = (undefined8 *)plVar3[1];
            *puVar14 = plVar15;
            puVar5 = (undefined8 *)plVar15[1];
            *puVar5 = plVar4;
            puVar6 = (undefined8 *)plVar4[1];
            *puVar6 = plVar3;
            plVar4[1] = (longlong)puVar5;
            plVar15[1] = (longlong)puVar14;
            plVar3[1] = (longlong)puVar6;
          }
          *(longlong **)(lVar28 + 8 + uVar25 * 0x10) = plVar3;
          plVar3 = plVar15;
          lVar28 = DAT_1404e8e18;
        }
        else {
          do {
            if (plVar27 == plVar4) {
              puVar14 = (undefined8 *)plVar3[1];
              *puVar14 = plVar15;
              puVar5 = (undefined8 *)plVar15[1];
              *puVar5 = plVar4;
              puVar6 = (undefined8 *)plVar4[1];
              *puVar6 = plVar3;
              plVar4[1] = (longlong)puVar5;
              plVar15[1] = (longlong)puVar14;
              plVar3[1] = (longlong)puVar6;
              *(longlong **)(lVar28 + uVar25 * 0x10) = plVar3;
              plVar3 = plVar15;
              lVar28 = DAT_1404e8e18;
              goto joined_r0x0001401273c8;
            }
            plVar4 = (longlong *)plVar4[1];
          } while ((int)plVar3[2] != (int)plVar4[2]);
          lVar28 = *plVar4;
          puVar14 = (undefined8 *)plVar3[1];
          *puVar14 = plVar15;
          plVar27 = (longlong *)plVar15[1];
          *plVar27 = lVar28;
          puVar5 = *(undefined8 **)(lVar28 + 8);
          *puVar5 = plVar3;
          *(longlong **)(lVar28 + 8) = plVar27;
          plVar15[1] = (longlong)puVar14;
          plVar3[1] = (longlong)puVar5;
          plVar3 = plVar15;
          lVar28 = DAT_1404e8e18;
        }
      }
      goto joined_r0x0001401273c8;
    }
    local_res8 = 0;
    *(undefined8 *)(puVar24 + -8) = 0x140127526;
    FUN_1400500f0(&local_res8);
    plVar3 = *(longlong **)(DAT_1404e8e18 + 8 + (uVar30 & DAT_1404e8e30) * 0x10);
    plVar26 = DAT_1404e8e08;
    if (plVar3 != DAT_1404e8e08) {
      iVar10 = (int)plVar3[2];
      plVar26 = plVar3;
      while ((int)plVar18[2] != iVar10) {
        if (plVar26 == *(longlong **)(DAT_1404e8e18 + (uVar30 & DAT_1404e8e30) * 0x10))
        goto LAB_140127578;
        plVar26 = (longlong *)plVar26[1];
        iVar10 = (int)plVar26[2];
      }
      plVar26 = (longlong *)*plVar26;
    }
  }
LAB_140127578:
  puVar14 = (undefined8 *)plVar26[1];
  DAT_1404e8e10 = DAT_1404e8e10 + 1;
  *plVar18 = (longlong)plVar26;
  plVar18[1] = (longlong)puVar14;
  *puVar14 = plVar18;
  plVar26[1] = (longlong)plVar18;
  lVar28 = DAT_1404e8e18;
  uVar30 = uVar30 & DAT_1404e8e30;
  plVar3 = *(longlong **)(DAT_1404e8e18 + uVar30 * 0x10);
  if (plVar3 == DAT_1404e8e08) {
    *(longlong **)(DAT_1404e8e18 + uVar30 * 0x10) = plVar18;
  }
  else {
    if (plVar3 == plVar26) {
      *(longlong **)(DAT_1404e8e18 + uVar30 * 0x10) = plVar18;
      goto LAB_1401275d4;
    }
    if (*(undefined8 **)(DAT_1404e8e18 + 8 + uVar30 * 0x10) != puVar14) goto LAB_1401275d4;
  }
  *(longlong **)(lVar28 + 8 + uVar30 * 0x10) = plVar18;
LAB_1401275d4:
  plVar18[3] = *(longlong *)(puVar24 + 0x68);
  DVar12 = 0x20;
  if (*(char *)(param_1 + 0x191) != '\0') {
    DVar12 = 0x4000;
  }
  *(HANDLE *)(param_1 + 0x158) = local_268.hProcess;
  *(undefined8 *)(puVar24 + -8) = 0x140127605;
  SetPriorityClass(local_268.hProcess,DVar12);
  *(undefined8 *)(puVar24 + -8) = 0x14012760f;
  ResumeThread(local_268.hThread);
  *(undefined8 *)(puVar24 + -8) = 0x140127619;
  CloseHandle(local_268.hThread);
  if (7 < uStack_2b0) {
    *(undefined8 *)(puVar24 + -8) = 0x140127632;
    FUN_140016a90(puVar24 + 0x70,*(undefined8 *)(puVar24 + 0x70));
  }
  local_2b8 = 0;
  *(undefined2 *)(puVar24 + 0x70) = 0;
  uStack_2b0 = 7;
  *(undefined8 *)(puVar24 + -8) = 0x140127655;
  FUN_140005b50(local_168);
  if (7 < uStack_270) {
    *(undefined8 *)(puVar24 + -8) = 0x14012766c;
    FUN_140016a90(&local_288,local_288);
  }
  return 1;
code_r0x000140126a25:
  plVar15 = plVar27;
  if (plVar27 == plVar18) goto code_r0x000140126a2a;
  goto LAB_140126a00;
code_r0x000140126a2a:
  if ((longlong *)local_250 == plVar26) {
LAB_140126a30:
    *(longlong **)(uVar30 + uVar25 * 0x10) = plVar27;
  }
LAB_140126a35:
  *plVar3 = (longlong)plVar27;
  plVar27[1] = (longlong)plVar3;
  unaff_R13 = uVar30;
  goto LAB_140126a44;
}

