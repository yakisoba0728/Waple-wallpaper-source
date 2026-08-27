// Function: FUN_14001fd20
// Addr: 14001fd20
// Size: 8363 bytes


/* WARNING: Type propagation algorithm not settling */

LRESULT FUN_14001fd20(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  LPWSTR pWVar11;
  char cVar12;
  BOOL BVar13;
  int iVar14;
  LSTATUS LVar15;
  DWORD DVar16;
  LRESULT LVar17;
  HMENU pHVar18;
  undefined8 uVar19;
  LPCWSTR lpFile;
  undefined8 *puVar20;
  HICON pHVar21;
  longlong lVar22;
  HMENU hmenu;
  HMENU pHVar23;
  longlong lVar24;
  longlong *plVar25;
  ulonglong *puVar26;
  undefined8 *******pppppppuVar27;
  LPWSTR ******pppppppWVar28;
  HMODULE hModule;
  FARPROC pFVar29;
  HICON hIcon;
  HBITMAP h;
  HMENU pHVar30;
  ulonglong uVar31;
  ICONINFO *pIVar32;
  ushort uVar33;
  undefined2 *puVar34;
  ulonglong uVar35;
  byte bVar36;
  undefined1 *puVar37;
  HMENU pHVar38;
  UINT UVar39;
  uint uVar40;
  HMENU pHVar41;
  char *pcVar42;
  DWORD local_res10 [2];
  WPARAM local_res18;
  undefined1 auStackY_7a8 [8];
  undefined1 auStackY_7a0 [24];
  HKEY local_768;
  char local_760;
  uint local_758 [2];
  undefined8 *******local_750;
  undefined8 uStack_748;
  undefined8 local_740;
  ulonglong local_738;
  undefined8 *******local_730;
  undefined8 uStack_728;
  undefined8 local_720;
  ulonglong local_718;
  HMENU local_710;
  HMENU pHStack_708;
  longlong local_700;
  HMENU local_6f8;
  HMENU pHStack_6f0;
  longlong local_6e8;
  ulonglong local_6e0;
  MENUITEMINFOW local_6d8;
  undefined4 uStack_688;
  undefined8 local_684;
  undefined8 uStack_67c;
  undefined4 local_674;
  tagPOINT local_668;
  undefined2 local_660;
  undefined6 uStack_65e;
  longlong local_650;
  ulonglong local_648;
  ICONINFO local_640;
  LPWSTR ******local_620 [3];
  ulonglong local_608;
  int local_600 [2];
  MENUITEMINFOW local_5f8;
  ulonglong local_5a8;
  ulonglong uStack_5a0;
  ulonglong local_598;
  ulonglong uStack_590;
  longlong local_588 [3];
  ulonglong local_570;
  undefined1 local_568 [48];
  tagMENUITEMINFOW local_538;
  HMENU local_4e8;
  HMENU local_4e0;
  undefined8 *local_4d8;
  uint local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  longlong local_4b0;
  longlong lStack_4a8;
  longlong local_4a0;
  ulonglong uStack_498;
  LPWSTR ******local_490 [3];
  ulonglong local_478;
  undefined1 local_470 [8];
  char local_468;
  longlong local_448 [3];
  ulonglong local_430;
  undefined1 local_428 [56];
  longlong *local_3f0;
  longlong *local_3d8;
  ulonglong *local_3d0;
  int *local_3c0;
  ulonglong local_3a8;
  uint local_3a0;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  
  puVar37 = auStackY_7a8;
  pHVar30 = (HMENU)0x0;
  local_res10[0] = 0;
  pHVar38 = (HMENU)0x0;
  local_res18 = param_3;
  if (param_2 == 1) {
    local_428._4_4_ = 0;
    FUN_1404217a0(local_428 + 0x1c,0);
    local_428._0_4_ = 0x3d0;
    local_74 = 0;
    uStack_6c = 0;
    local_428._16_4_ = 1000;
    local_428._20_4_ = 0x87;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    local_428._24_4_ = 0x400;
    local_f4 = 0;
    uStack_ec = 0;
    local_f8 = 4;
    local_e4 = 0;
    uStack_dc = 0;
    local_d4 = 0;
    uStack_cc = 0;
    local_c4 = 0;
    uStack_bc = 0;
    local_b4 = 0;
    uStack_ac = 0;
    local_a4 = 0;
    uStack_9c = 0;
    local_94 = 0;
    uStack_8c = 0;
    local_84 = 0;
    uStack_7c = 0;
    local_428._8_8_ = param_1;
    cVar12 = FUN_140015180(10,0);
    if ((cVar12 != '\0') &&
       (LVar15 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                               L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
                               0,0xf003f,&local_768), LVar15 == 0)) {
      local_res10[0] = 4;
      LVar15 = RegQueryValueExW(local_768,L"SystemUsesLightTheme",(LPDWORD)0x0,(LPDWORD)0x0,
                                (LPBYTE)local_758,local_res10);
      if ((LVar15 == 0) && (local_758[0] != 0)) {
        RegCloseKey(local_768);
        DAT_1404df540 = DAT_1404df540 | 0x400;
        bVar3 = true;
        goto LAB_140021b94;
      }
      RegCloseKey(local_768);
    }
    DAT_1404df540 = DAT_1404df540 & 0xfffffbff;
    bVar3 = false;
LAB_140021b94:
    iVar14 = GetSystemMetrics(0x31);
    if (0x10 < iVar14) {
      iVar14 = 0x20;
    }
    hIcon = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x95,1,iVar14,iVar14,0x8000);
    pHVar21 = hIcon;
    if (bVar3) {
      local_6d8.cbSize = 0;
      local_640._0_8_ = (ICONINFO *)0x0;
      local_640.yHotspot = 0;
      local_640._12_4_ = 0;
      local_674 = 0;
      local_640.hbmMask = (HBITMAP)0x0;
      local_640.hbmColor = (HBITMAP)0x0;
      local_6d8.fMask = 0;
      local_6d8.fType = 0;
      local_6d8.fState = 0;
      local_6d8.wID._0_2_ = 0;
      local_6d8.wID._2_2_ = 0;
      local_6d8._20_4_ = 0;
      local_6d8.hSubMenu._0_4_ = 0;
      local_6d8.hSubMenu._4_4_ = 0;
      local_6d8.hbmpChecked._0_4_ = 0;
      local_6d8.hbmpChecked._4_4_ = 0;
      local_6d8.hbmpUnchecked._0_4_ = 0;
      local_6d8.hbmpUnchecked._4_4_ = 0;
      local_6d8.dwItemData._0_4_ = 0;
      local_6d8.dwItemData._4_4_ = 0;
      local_6d8.dwTypeData._0_4_ = 0;
      local_6d8.dwTypeData._4_4_ = 0;
      local_6d8.cch = 0;
      local_6d8._68_4_ = 0;
      local_6d8.hbmpItem._0_4_ = 0;
      local_6d8.hbmpItem._4_4_ = 0;
      uStack_688 = 0;
      local_684 = 0;
      uStack_67c = 0;
      GetIconInfo(hIcon,&local_640);
      h = CopyImage(local_640.hbmColor,0,0,0,0x2000);
      GetObjectW(h,0x68,&local_6d8);
      fVar10 = DAT_14049290c;
      if ((local_6d8.wID._2_2_ == 0x20) && (0 < (int)(local_6d8.fType * local_6d8.fMask))) {
        do {
          lVar22 = CONCAT44(local_6d8.hSubMenu._4_4_,local_6d8.hSubMenu._0_4_);
          lVar24 = (longlong)(int)pHVar30;
          uVar40 = (int)pHVar30 + 1;
          pHVar30 = (HMENU)(ulonglong)uVar40;
          *(int *)(lVar22 + lVar24 * 4) =
               (int)(((float)*(byte *)(lVar22 + 3 + lVar24 * 4) / fVar10) *
                    (float)*(byte *)(lVar22 + lVar24 * 4)) << 0x18;
        } while ((int)uVar40 < (int)(local_6d8.fType * local_6d8.fMask));
      }
      if (local_640.hbmColor != (HBITMAP)0x0) {
        DeleteObject(local_640.hbmColor);
      }
      local_640.hbmColor = h;
      pHVar21 = CreateIconIndirect(&local_640);
      if (local_640.hbmMask != (HBITMAP)0x0) {
        DeleteObject(local_640.hbmMask);
      }
      DeleteObject(h);
      DestroyIcon(hIcon);
    }
    local_428._32_8_ = pHVar21;
    Shell_NotifyIconW(2,(PNOTIFYICONDATAW)local_428);
    uVar40 = LoadStringW(DAT_1404e8b80,0x66,(LPWSTR)(local_428 + 0x28),0x80);
    uVar35 = (ulonglong)uVar40;
    if (0x7f < uVar40) {
      uVar35 = 0x7f;
    }
    *(undefined2 *)(local_428 + uVar35 * 2 + 0x28) = 0;
    BVar13 = Shell_NotifyIconW(0,(PNOTIFYICONDATAW)local_428);
    if (BVar13 == 0) {
      DVar16 = GetLastError();
      DestroyIcon((HICON)local_428._32_8_);
      FUN_140098760("icon create err: %i.\n",DVar16);
      return -1;
    }
    Shell_NotifyIconW(4,(PNOTIFYICONDATAW)local_428);
    DestroyIcon((HICON)local_428._32_8_);
    return 0;
  }
  pHVar23 = (HMENU)param_1;
  if (param_2 == 2) goto LAB_1400219eb;
  if (param_2 != 0x400) {
                    /* WARNING: Could not recover jumptable at 0x00014001fd7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LVar17 = DefWindowProcW(param_1,param_2,param_3,param_4);
    return LVar17;
  }
  if ((DAT_1404df540 & 0x200) != 0) {
    if ((DAT_1404dfbe7 != '\0') && (BVar13 = IsDebuggerPresent(), BVar13 != 0)) {
      DebugBreak();
    }
    DAT_1404dfbe7 = '\0';
    return 0;
  }
  local_758[0] = (uint)param_4 & 0xffff;
  uVar33 = (ushort)param_4;
  if (uVar33 < 0x204) {
    if (uVar33 == 0x203) {
      PostMessageW(DAT_1404e5280,0x111,0x9c59,0);
      return 0;
    }
    if (local_758[0] != 0x7b) {
      if (local_758[0] == 0x201) {
        DAT_1404e8f18 = '\x01';
        return 0;
      }
      if (local_758[0] != 0x202) {
        return 0;
      }
    }
  }
  else if (local_758[0] != 0x401) {
    if (local_758[0] == 0x405) {
      if (DAT_1404e8248 == 1) {
        lpFile = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,local_588,"var_url_faqvideo");
        if (7 < *(ulonglong *)(lpFile + 0xc)) {
          lpFile = *(LPCWSTR *)lpFile;
        }
        ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,lpFile,(LPCWSTR)0x0,(LPCWSTR)0x0,5);
        FUN_140016770(local_588);
      }
      DAT_1404e8248 = 0;
      return 0;
    }
    return 0;
  }
  if ((DAT_1404e8f18 == '\0') && (uVar33 == 0x202)) {
    DAT_1404e8f18 = '\0';
    return 0;
  }
  local_4e0 = LoadMenuW(DAT_1404e8b80,(LPCWSTR)0x67);
  if (local_4e0 == (HMENU)0x0) {
    DAT_1404e8f18 = '\0';
    return 0;
  }
  pHVar18 = GetSubMenu(local_4e0,0);
  local_4e8 = pHVar18;
  if (pHVar18 == (HMENU)0x0) goto LAB_14002199e;
  iVar14 = GetMenuItemCount(pHVar18);
  pHVar23 = pHVar30;
  if (0 < iVar14) {
    do {
      local_538.fType = 0;
      local_538.fState = 0;
      local_538.wID = 0;
      local_538._20_4_ = 0;
      local_538.hSubMenu = (HMENU)0x0;
      local_538.hbmpChecked = (HBITMAP)0x0;
      local_538.hbmpUnchecked = (HBITMAP)0x0;
      local_538.dwItemData = 0;
      local_538.dwTypeData = (LPWSTR)0x0;
      UVar39 = (UINT)pHVar23;
      local_538._64_8_ = 0;
      local_538.hbmpItem = (HBITMAP)0x0;
      local_538.cbSize = 0x50;
      local_538.fMask = 0x10;
      BVar13 = GetMenuItemInfoW(pHVar18,UVar39,1,&local_538);
      if (((BVar13 != 0) && (local_538.fType == 0)) && (local_538.cch != 0)) {
        auVar2 = ZEXT816(2) * ZEXT416(local_538.cch + 1);
        uVar19 = auVar2._0_8_;
        if (auVar2._8_8_ != 0) {
          uVar19 = 0xffffffffffffffff;
        }
        local_538.dwTypeData = (LPWSTR)thunk_FUN_14028af20(uVar19);
        local_538.cch = local_538.cch + 1;
        BVar13 = GetMenuItemInfoW(pHVar18,UVar39,1,&local_538);
        pWVar11 = local_538.dwTypeData;
        if (BVar13 == 0) {
          thunk_FUN_14028af80(local_538.dwTypeData);
        }
        else {
          local_740 = 0;
          local_750 = (undefined8 *******)0x0;
          uStack_748 = 0;
          local_738 = 0;
          uVar19 = FUN_1402d6aa0(local_538.dwTypeData);
          FUN_140016170(&local_750,pWVar11,uVar19);
          puVar20 = (undefined8 *)FUN_140005790(local_588,&local_750);
          if (0xf < (ulonglong)puVar20[3]) {
            puVar20 = (undefined8 *)*puVar20;
          }
          FUN_140097640(&DAT_1404e6d80,local_620,puVar20);
          FUN_140017240(local_588);
          FUN_140016770(&local_750);
          thunk_FUN_14028af80(local_538.dwTypeData);
          local_538._64_8_ = local_538._64_8_ & 0xffffffff00000000;
          local_538.dwTypeData = (LPWSTR)local_620;
          if (7 < local_608) {
            local_538.dwTypeData = (LPWSTR)local_620[0];
          }
          local_538.fMask = 0x40;
          SetMenuItemInfoW(pHVar18,UVar39,1,&local_538);
          FUN_140016770(local_620);
        }
      }
      pHVar23 = (HMENU)(ulonglong)(UVar39 + 1);
    } while ((int)(UVar39 + 1) < iVar14);
  }
  SetMenuDefaultItem(pHVar18,0x9c59,0);
  pcVar42 = "core_tray_pause";
  uVar40 = DAT_1404e52e4 >> 6;
  bVar36 = (byte)DAT_1404e52e4;
  if ((DAT_1404e52e4 & 1) != 0) {
    pcVar42 = "core_tray_unpause";
  }
  FUN_140097640(&DAT_1404e6d80,local_490,pcVar42);
  FUN_140097640(&DAT_1404e6d80,&local_640);
  local_700 = 0;
  local_5f8.wID = 0;
  local_5f8._20_4_ = 0;
  local_5f8.hSubMenu = (HMENU)0x0;
  local_5f8.hbmpChecked = (HBITMAP)0x0;
  local_5f8.hbmpUnchecked = (HBITMAP)0x0;
  local_5f8.dwItemData = 0;
  local_5f8.dwTypeData = (LPWSTR)0x0;
  local_5f8.cch = 0;
  local_5f8._68_4_ = 0;
  local_5f8.hbmpItem = (HBITMAP)0x0;
  local_710 = (HMENU)0x0;
  pHStack_708 = (HMENU)0x0;
  local_5f8.fType = 0;
  local_5f8.fState = 0;
  local_5f8.cbSize = 0x50;
  local_5f8.fMask = 0xc0;
  cVar12 = FUN_140015180(10,0);
  if ((cVar12 == '\0') ||
     (LVar15 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                             L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",0,
                             0xf003f,&local_768), LVar15 != 0)) {
LAB_140020244:
    uVar19 = 0xcc;
  }
  else {
    local_res10[0] = 4;
    LVar15 = RegQueryValueExW(local_768,L"SystemUsesLightTheme",(LPDWORD)0x0,(LPDWORD)0x0,
                              (LPBYTE)local_600,local_res10);
    if ((LVar15 != 0) || (local_600[0] == 0)) {
      RegCloseKey(local_768);
      goto LAB_140020244;
    }
    uVar19 = 0x33;
    RegCloseKey(local_768);
  }
  pHVar21 = LoadImageW(DAT_1404e8b80,(LPCWSTR)((ulonglong)(bVar36 & 1) | 0x96),1,0x10,0x10,0);
  local_5f8.hbmpItem = (HBITMAP)FUN_14001cb20(pHVar21,uVar19);
  FUN_1400302d0(&local_710,&local_5f8.hbmpItem);
  local_5f8.dwTypeData = (LPWSTR)local_490;
  if (7 < local_478) {
    local_5f8.dwTypeData = (LPWSTR)local_490[0];
  }
  SetMenuItemInfoW(pHVar18,0x9c56,0,&local_5f8);
  DestroyIcon(pHVar21);
  pHVar21 = LoadImageW(DAT_1404e8b80,(LPCWSTR)((ulonglong)((byte)uVar40 & 1) | 0x9a),1,0x10,0x10,0);
  local_5f8.hbmpItem = (HBITMAP)FUN_14001cb20(pHVar21,uVar19);
  FUN_1400302d0(&local_710,&local_5f8.hbmpItem);
  local_5f8.dwTypeData = (LPWSTR)&local_640;
  if ((HBITMAP)0x7 < local_640.hbmColor) {
    local_5f8.dwTypeData = (LPWSTR)local_640._0_8_;
  }
  SetMenuItemInfoW(pHVar18,0x9c5f,0,&local_5f8);
  DestroyIcon(pHVar21);
  local_5f8.fMask = 0x80;
  pHVar21 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x98,1,0x10,0x10,0);
  local_5f8.hbmpItem = (HBITMAP)FUN_14001cb20(pHVar21,uVar19);
  FUN_1400302d0(&local_710,&local_5f8.hbmpItem);
  SetMenuItemInfoW(pHVar18,0x9c4d,0,&local_5f8);
  DestroyIcon(pHVar21);
  pHVar21 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x99,1,0x10,0x10,0);
  local_5f8.hbmpItem = (HBITMAP)FUN_14001cb20(pHVar21,uVar19);
  FUN_1400302d0(&local_710,&local_5f8.hbmpItem);
  SetMenuItemInfoW(pHVar18,0x9c5c,0,&local_5f8);
  DestroyIcon(pHVar21);
  pHVar21 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x9c,1,0x10,0x10,0);
  local_5f8.hbmpItem = (HBITMAP)FUN_14001cb20(pHVar21,uVar19);
  FUN_1400302d0(&local_710,&local_5f8.hbmpItem);
  SetMenuItemInfoW(pHVar18,0x9c59,0,&local_5f8);
  DestroyIcon(pHVar21);
  pHVar21 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x9d,1,0x10,0x10,0);
  local_5f8.hbmpItem = (HBITMAP)FUN_14001cb20(pHVar21,uVar19);
  FUN_1400302d0(&local_710,&local_5f8.hbmpItem);
  SetMenuItemInfoW(pHVar18,0x9c61,0,&local_5f8);
  DestroyIcon(pHVar21);
  pHVar21 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x9f,1,0x10,0x10,0);
  local_5f8.hbmpItem = (HBITMAP)FUN_14001cb20(pHVar21,uVar19);
  FUN_1400302d0(&local_710,&local_5f8.hbmpItem);
  SetMenuItemInfoW(pHVar18,0x9c4a,0,&local_5f8);
  DestroyIcon(pHVar21);
  pHVar21 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0x9e,1,0x10,0x10,0);
  local_5f8.hbmpItem = (HBITMAP)FUN_14001cb20(pHVar21,uVar19);
  FUN_1400302d0(&local_710,&local_5f8.hbmpItem);
  SetMenuItemInfoW(pHVar18,0x9c52,0,&local_5f8);
  DestroyIcon(pHVar21);
  pHVar21 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0xa0,1,0x10,0x10,0);
  local_5f8.hbmpItem = (HBITMAP)FUN_14001cb20(pHVar21,uVar19);
  FUN_1400302d0(&local_710,&local_5f8.hbmpItem);
  SetMenuItemInfoW(pHVar18,0x9c5b,0,&local_5f8);
  DestroyIcon(pHVar21);
  pHVar21 = LoadImageW(DAT_1404e8b80,(LPCWSTR)0xa1,1,0x10,0x10,0);
  local_5f8.hbmpItem = (HBITMAP)FUN_14001cb20(pHVar21,uVar19);
  FUN_1400302d0(&local_710,&local_5f8.hbmpItem);
  SetMenuItemInfoW(pHVar18,0x9c53,0,&local_5f8);
  DestroyIcon(pHVar21);
  FUN_140084dd0(local_470,0);
  FUN_140084dd0(&local_538,0);
  uVar40 = (local_4d0 >> 8 & 0xfffffe) << 8;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b8 = 0;
  local_4d0 = uVar40;
  uVar19 = FUN_140086de0(&DAT_1404df5e8,"general","");
  lVar22 = FUN_140087490(uVar19,"wallpaperconfigrecent","");
  if (lVar22 != 0) {
    uVar19 = FUN_140086de0(uVar19,"wallpaperconfigrecent","");
    FUN_140085520(local_470,uVar19);
  }
  uVar19 = FUN_140086de0(&DAT_1404df5e8,"general","");
  lVar22 = FUN_140087490(uVar19,"playlists","");
  if (lVar22 != 0) {
    uVar19 = FUN_140086de0(uVar19,"playlists","");
    FUN_140085520(&local_538,uVar19);
  }
  uVar19 = FUN_140086de0(&DAT_1404df5e8,"general","");
  lVar22 = FUN_140087490(uVar19,"profiles","");
  if (lVar22 != 0) {
    uVar19 = FUN_140086de0(uVar19,"profiles","");
    FUN_140085520(&local_4d8,uVar19);
    uVar40 = local_4d0;
  }
  if ((char)uVar40 != '\x06') {
LAB_140020ad5:
    bVar3 = false;
    UVar39 = local_538.fType;
    pHVar23 = (HMENU)(local_538._8_8_ & 0xffffffff);
    if ((char)local_538.fType == '\x06') {
      iVar14 = FUN_1400863a0(&local_538);
      if (iVar14 != 0) {
        pHVar38 = CreatePopupMenu();
        puVar20 = (undefined8 *)CONCAT44(local_538.fMask,local_538.cbSize);
        uVar40 = UVar39 & 0xff;
        iVar14 = 0;
        local_6d8.fMask = 0;
        local_6d8.fType = 0;
        local_6d8.fState = 0;
        local_6d8.cbSize = 0x50;
        local_6d8.wID = 0;
        local_6d8._20_4_ = 0;
        local_6d8.hSubMenu._0_4_ = 0;
        local_6d8.hSubMenu._4_4_ = 0;
        local_6d8.hbmpChecked._0_4_ = 0;
        local_6d8.hbmpChecked._4_4_ = 0;
        local_6d8.hbmpUnchecked._0_4_ = 0;
        local_6d8.hbmpUnchecked._4_4_ = 0;
        local_6d8.dwItemData._0_4_ = 0;
        local_6d8.dwItemData._4_4_ = 0;
        local_6d8.dwTypeData._0_4_ = 0;
        local_6d8.dwTypeData._4_4_ = 0;
        local_6d8.cch = 0;
        local_6d8._68_4_ = 0;
        local_6d8.hbmpItem._0_4_ = 0;
        local_6d8.hbmpItem._4_4_ = 0;
        if (((uVar40 == 6) || (uVar40 == 7)) && (puVar20 != (undefined8 *)0x0)) {
          bVar7 = false;
          pHVar23 = *(HMENU *)*puVar20;
        }
        else {
          pHVar23 = (HMENU)0x0;
          bVar7 = true;
        }
        if (((uVar40 == 6) || (uVar40 == 7)) && (puVar20 != (undefined8 *)0x0)) {
          pHVar30 = (HMENU)*puVar20;
          bVar9 = false;
          iVar14 = 0;
          local_6d8.wID = 0;
        }
        else {
          pHVar30 = (HMENU)0x0;
          bVar9 = true;
        }
        while( true ) {
          bVar8 = bVar9;
          if (!bVar7) {
            bVar8 = pHVar23 == pHVar30;
          }
          if (bVar8) goto LAB_140020d94;
          FUN_140085090(local_568,pHVar23 + 0xc);
          lVar22 = FUN_140086de0(local_568,&DAT_1404748b8,&DAT_1404748bc);
          if (*(char *)(lVar22 + 8) == '\x04') {
            bVar3 = true;
            FUN_140085cc0(lVar22,&local_4b0);
            FUN_140005880(&local_6f8);
          }
          else {
            local_6e8 = 0;
            local_6e0 = 0;
            local_6f8 = (HMENU)0x0;
            pHStack_6f0 = (HMENU)0x0;
            FUN_140016170(&local_6f8,&DAT_140474bc4,2);
          }
          if ((bVar3) && (bVar3 = false, 0xf < uStack_498)) {
            lVar22 = local_4b0;
            if ((0xfff < uStack_498 + 1) &&
               (lVar22 = *(longlong *)(local_4b0 + -8), 0x1f < (local_4b0 - lVar22) - 8U))
            goto LAB_1400219e4;
            thunk_FUN_14028af80(lVar22);
          }
          local_6d8.fMask = 0x42;
          pHVar18 = (HMENU)&local_6f8;
          if (7 < local_6e0) {
            pHVar18 = local_6f8;
          }
          local_6d8.dwTypeData._0_4_ = SUB84(pHVar18,0);
          local_6d8.dwTypeData._4_4_ = (undefined4)((ulonglong)pHVar18 >> 0x20);
          local_6d8.wID = iVar14 + 0x88c6;
          InsertMenuItemW(pHVar38,0,1,&local_6d8);
          iVar14 = iVar14 + 1;
          if (0x3e6 < iVar14) break;
          if (7 < local_6e0) {
            uVar35 = local_6e0 * 2 + 2;
            pHVar18 = local_6f8;
            if (0xfff < uVar35) {
              pHVar18 = *(HMENU *)(local_6f8 + -2);
              if (0x1f < (ulonglong)((longlong)local_6f8 + (-8 - (longlong)pHVar18)))
              goto LAB_1400219e4;
              uVar35 = local_6e0 * 2 + 0x29;
            }
            thunk_FUN_14028af80(pHVar18,uVar35);
          }
          FUN_140085440(local_568);
          pHVar18 = *(HMENU *)(pHVar23 + 4);
          if (*(char *)((longlong)&pHVar18[6].unused + 1) == '\0') {
            cVar12 = *(char *)(*(longlong *)pHVar18 + 0x19);
            pHVar23 = pHVar18;
            while (cVar12 == '\0') {
              pHVar23 = *(HMENU *)pHVar23;
              cVar12 = *(char *)(*(longlong *)pHVar23 + 0x19);
            }
          }
          else {
            cVar12 = *(char *)((longlong)&(*(HMENU *)(pHVar23 + 2))[6].unused + 1);
            pHVar41 = *(HMENU *)(pHVar23 + 2);
            pHVar18 = pHVar23;
            while ((pHVar23 = pHVar41, cVar12 == '\0' && (pHVar18 == *(HMENU *)(pHVar23 + 4)))) {
              cVar12 = *(char *)((longlong)&(*(HMENU *)(pHVar23 + 2))[6].unused + 1);
              pHVar41 = *(HMENU *)(pHVar23 + 2);
              pHVar18 = pHVar23;
            }
          }
        }
        if (7 < local_6e0) {
          uVar35 = local_6e0 * 2 + 2;
          pHVar30 = local_6f8;
          if (0xfff < uVar35) {
            pHVar30 = *(HMENU *)(local_6f8 + -2);
            if (0x1f < (ulonglong)((longlong)local_6f8 + (-8 - (longlong)pHVar30)))
            goto LAB_1400219e4;
            uVar35 = local_6e0 * 2 + 0x29;
          }
          thunk_FUN_14028af80(pHVar30,uVar35);
        }
        local_6e8 = 0;
        local_6f8 = (HMENU)((ulonglong)local_6f8 & 0xffffffffffff0000);
        local_6e0 = 7;
        FUN_140085440(local_568);
LAB_140020d94:
        FUN_140097640(&DAT_1404e6d80,&local_750,"core_tray_saved_playlists");
        pHVar18 = local_4e8;
        pppppppuVar27 = &local_750;
        if (7 < local_738) {
          pppppppuVar27 = local_750;
        }
        local_6d8.dwTypeData._0_4_ = SUB84(pppppppuVar27,0);
        local_6d8.dwTypeData._4_4_ = (undefined4)((ulonglong)pppppppuVar27 >> 0x20);
        local_6d8.fMask = 0x46;
        local_6d8.hSubMenu._0_4_ = SUB84(pHVar38,0);
        local_6d8.hSubMenu._4_4_ = (undefined4)((ulonglong)pHVar38 >> 0x20);
        InsertMenuItemW(local_4e8,1,1,&local_6d8);
        if (7 < local_738) {
          uVar35 = local_738 * 2 + 2;
          pppppppuVar27 = local_750;
          if (0xfff < uVar35) {
            pppppppuVar27 = (undefined8 *******)local_750[-1];
            if (0x1f < (ulonglong)((longlong)local_750 + (-8 - (longlong)pppppppuVar27)))
            goto LAB_1400219e4;
            uVar35 = local_738 * 2 + 0x29;
          }
          thunk_FUN_14028af80(pppppppuVar27,uVar35);
        }
      }
    }
    if (local_468 == '\x06') {
      iVar14 = FUN_1400863a0(local_470);
      if (iVar14 != 0) {
        pHVar23 = CreatePopupMenu();
        local_6d8.fMask = 0;
        local_6d8.fType = 0;
        local_6d8.fState = 0;
        local_6d8.cbSize = 0x50;
        local_6d8.wID._0_2_ = 0;
        local_6d8.wID._2_2_ = 0;
        local_6d8._20_4_ = 0;
        local_6d8.hSubMenu._0_4_ = 0;
        local_6d8.hSubMenu._4_4_ = 0;
        local_6d8.hbmpChecked._0_4_ = 0;
        local_6d8.hbmpChecked._4_4_ = 0;
        local_6d8.hbmpUnchecked._0_4_ = 0;
        local_6d8.hbmpUnchecked._4_4_ = 0;
        local_6d8.dwItemData._0_4_ = 0;
        local_6d8.dwItemData._4_4_ = 0;
        local_6d8.dwTypeData._0_4_ = 0;
        local_6d8.dwTypeData._4_4_ = 0;
        local_6d8.cch = 0;
        local_6d8._68_4_ = 0;
        local_6d8.hbmpItem._0_4_ = 0;
        local_6d8.hbmpItem._4_4_ = 0;
        local_768 = (HKEY)pHVar23;
        iVar14 = FUN_1400863a0(local_470);
        iVar14 = iVar14 + -1;
        if (-1 < iVar14) {
          local_res10[0] = 1;
          do {
            uVar19 = FUN_140086540(local_470,iVar14);
            FUN_140085090(local_568,uVar19);
            lVar22 = FUN_140086de0(local_568,"title","");
            if (*(char *)(lVar22 + 8) == '\x04') {
              lVar22 = FUN_140086de0(local_568,"config","");
              if (*(char *)(lVar22 + 8) == '\a') {
                lVar22 = FUN_140086de0(lVar22,"selectedwallpapers","");
                if (*(char *)(lVar22 + 8) == '\a') {
                  bVar3 = false;
                  FUN_140088360(lVar22,&local_6f8);
                  pHVar30 = pHStack_6f0;
                  pHVar38 = local_6f8;
                  for (pHVar23 = local_6f8; pHVar23 != pHVar30; pHVar23 = pHVar23 + 8) {
                    FUN_140016fc0(&local_660,pHVar23);
                    puVar34 = &local_660;
                    if (0xf < local_648) {
                      puVar34 = (undefined2 *)CONCAT62(uStack_65e,local_660);
                    }
                    lVar24 = FUN_140086de0(lVar22,puVar34,local_650 + (longlong)puVar34);
                    if (*(char *)(lVar24 + 8) == '\a') {
                      lVar24 = FUN_140086de0(lVar24,&DAT_140473b68,&DAT_140473b6c);
                      if (*(char *)(lVar24 + 8) == '\x04') {
                        uVar19 = FUN_140085cc0(lVar24,local_588);
                        plVar25 = (longlong *)FUN_140005880(local_448,uVar19);
                        local_4b0 = *plVar25;
                        lStack_4a8 = plVar25[1];
                        local_4a0 = plVar25[2];
                        uStack_498 = plVar25[3];
                        plVar25[2] = 0;
                        plVar25[3] = 7;
                        *(undefined2 *)plVar25 = 0;
                        if (7 < local_430) {
                          uVar35 = local_430 * 2 + 2;
                          lVar24 = local_448[0];
                          if (0xfff < uVar35) {
                            lVar24 = *(longlong *)(local_448[0] + -8);
                            if (0x1f < (local_448[0] - lVar24) - 8U) goto LAB_1400219e4;
                            uVar35 = local_430 * 2 + 0x29;
                          }
                          thunk_FUN_14028af80(lVar24,uVar35);
                        }
                        if (0xf < local_570) {
                          uVar35 = local_570 + 1;
                          lVar24 = local_588[0];
                          if (0xfff < uVar35) {
                            lVar24 = *(longlong *)(local_588[0] + -8);
                            if (0x1f < (local_588[0] - lVar24) - 8U) goto LAB_1400219e4;
                            uVar35 = local_570 + 0x28;
                          }
                          thunk_FUN_14028af80(lVar24,uVar35);
                        }
                        if (bVar3) {
LAB_14002108b:
                          bVar3 = true;
                        }
                        else {
                          cVar12 = FUN_140018f30(&local_4b0);
                          if (cVar12 != '\0') goto LAB_14002108b;
                        }
                        FUN_140016770(&local_4b0);
                      }
                    }
                    if (0xf < local_648) {
                      lVar6 = CONCAT62(uStack_65e,local_660);
                      uVar35 = local_648 + 1;
                      lVar24 = lVar6;
                      if (0xfff < uVar35) {
                        lVar24 = *(longlong *)(lVar6 + -8);
                        if (0x1f < (lVar6 - lVar24) - 8U) goto LAB_1400219e4;
                        uVar35 = local_648 + 0x28;
                      }
                      thunk_FUN_14028af80(lVar24,uVar35);
                    }
                  }
                  pHVar41 = pHVar38;
                  if (pHVar38 != (HMENU)0x0) {
                    while (pHVar41 != pHVar30) {
                      FUN_140017240(pHVar41);
                      pHVar23 = pHVar41 + 8;
                      pHVar41 = pHVar23;
                    }
                    uVar35 = local_6e8 - (longlong)pHVar38 & 0xffffffffffffffe0;
                    if (0xfff < uVar35) {
                      if (0x1f < (ulonglong)
                                 ((longlong)pHVar38 + (-8 - (longlong)*(HMENU *)(pHVar38 + -2))))
                      goto LAB_1400219e4;
                      uVar35 = uVar35 + 0x27;
                      pHVar38 = *(HMENU *)(pHVar38 + -2);
                    }
                    thunk_FUN_14028af80(pHVar38,uVar35);
                  }
                  pHVar23 = (HMENU)local_768;
                  if (bVar3) {
                    lVar22 = FUN_140086de0(local_568,"playlist","");
                    uStack_590 = 7;
                    local_598 = 0;
                    uStack_5a0 = 0;
                    local_5a8 = 0;
                    if (*(char *)(lVar22 + 8) == '\x05') {
                      cVar12 = FUN_140086300(lVar22);
                      if (cVar12 != '\0') {
                        uVar19 = FUN_140097640(&DAT_1404e6d80,local_588,"core_tray_playlist_prefix")
                        ;
                        puVar26 = (ulonglong *)FUN_1400164d0(uVar19,&DAT_140474c1c,1);
                        uVar35 = *puVar26;
                        uVar31 = puVar26[1];
                        uVar4 = puVar26[2];
                        uVar5 = puVar26[3];
                        puVar26[2] = 0;
                        puVar26[3] = 7;
                        *(undefined2 *)puVar26 = 0;
                        if (7 < uStack_590) {
                          FUN_140016a90(&local_5a8,local_5a8);
                        }
                        local_5a8 = uVar35;
                        uStack_5a0 = uVar31;
                        local_598 = uVar4;
                        uStack_590 = uVar5;
                        FUN_140016770(local_588);
                      }
                    }
                    FUN_14000df80(local_428);
                    uVar19 = FUN_140086de0(local_568,"title","");
                    uVar19 = FUN_140085cc0(uVar19,local_588);
                    pHVar23 = (HMENU)FUN_140005880(&local_660,uVar19);
                    DVar16 = local_res10[0];
                    uVar19 = FUN_14000ea80(local_428 + 0x10,local_res10[0]);
                    uVar19 = FUN_1400300a0(uVar19,&DAT_140474c3c);
                    uVar19 = FUN_14000d440(uVar19,&local_5a8);
                    FUN_14000d440(uVar19,pHVar23);
                    if (7 < local_648) {
                      lVar24 = CONCAT62(uStack_65e,local_660);
                      uVar35 = local_648 * 2 + 2;
                      lVar22 = lVar24;
                      if (0xfff < uVar35) {
                        lVar22 = *(longlong *)(lVar24 + -8);
                        if (0x1f < (lVar24 - lVar22) - 8U) goto LAB_1400219e4;
                        uVar35 = local_648 * 2 + 0x29;
                      }
                      thunk_FUN_14028af80(lVar22,uVar35);
                    }
                    local_650 = 0;
                    local_648 = 7;
                    local_660 = 0;
                    if (0xf < local_570) {
                      uVar35 = local_570 + 1;
                      lVar22 = local_588[0];
                      if (0xfff < uVar35) {
                        lVar22 = *(longlong *)(local_588[0] + -8);
                        if (0x1f < (local_588[0] - lVar22) - 8U) goto LAB_1400219e4;
                        uVar35 = local_570 + 0x28;
                      }
                      thunk_FUN_14028af80(lVar22,uVar35);
                    }
                    local_6e8 = 0;
                    local_720 = 0;
                    local_718 = 7;
                    uStack_728 = 0;
                    local_730 = (undefined8 *******)0x0;
                    local_6f8 = (HMENU)0x0;
                    pHStack_6f0 = (HMENU)0x0;
                    if ((((byte)local_3a0 & 0x22) == 2) || (uVar35 = *local_3d0, uVar35 == 0)) {
                      if ((local_3a0 & 4) == 0) {
                        if (*local_3d8 == 0) {
                          lVar24 = 0;
                          lVar22 = 0;
                        }
                        else {
                          lVar22 = *(longlong *)local_428._48_8_;
                          lVar24 = (*local_3d8 + (longlong)*local_3c0 * 2) - lVar22 >> 1;
                        }
                        goto LAB_1400213d2;
                      }
                    }
                    else {
                      lVar22 = *local_3f0;
                      if (uVar35 < local_3a8) {
                        uVar35 = local_3a8;
                      }
                      lVar24 = (longlong)(uVar35 - lVar22) >> 1;
LAB_1400213d2:
                      if (lVar22 != 0) {
                        FUN_140016ae0(&local_730,lVar22,lVar24);
                      }
                    }
                    pHVar23 = (HMENU)local_768;
                    local_6d8.fMask = 0x42;
                    pppppppuVar27 = &local_730;
                    if (7 < local_718) {
                      pppppppuVar27 = local_730;
                    }
                    local_6d8.dwTypeData._0_4_ = SUB84(pppppppuVar27,0);
                    local_6d8.dwTypeData._4_4_ = (undefined4)((ulonglong)pppppppuVar27 >> 0x20);
                    local_6d8.wID = iVar14 + 0x88bb;
                    InsertMenuItemW((HMENU)local_768,10,1,&local_6d8);
                    if (7 < local_718) {
                      uVar35 = local_718 * 2 + 2;
                      pppppppuVar27 = local_730;
                      if (0xfff < uVar35) {
                        pppppppuVar27 = (undefined8 *******)local_730[-1];
                        if (0x1f < (ulonglong)((longlong)local_730 + (-8 - (longlong)pppppppuVar27))
                           ) goto LAB_1400219e4;
                        uVar35 = local_718 * 2 + 0x29;
                      }
                      thunk_FUN_14028af80(pppppppuVar27,uVar35);
                    }
                    local_720 = 0;
                    local_718 = 7;
                    local_730 = (undefined8 *******)((ulonglong)local_730 & 0xffffffffffff0000);
                    FUN_140005b50(local_428);
                    if (7 < uStack_590) {
                      uVar35 = uStack_590 * 2 + 2;
                      uVar31 = local_5a8;
                      if (0xfff < uVar35) {
                        uVar31 = *(ulonglong *)(local_5a8 - 8);
                        if (0x1f < (local_5a8 - uVar31) - 8) goto LAB_1400219e4;
                        uVar35 = uStack_590 * 2 + 0x29;
                      }
                      thunk_FUN_14028af80(uVar31,uVar35);
                    }
                    local_res10[0] = DVar16 + 1;
                    local_598 = 0;
                    uStack_590 = 7;
                    local_5a8 = local_5a8 & 0xffffffffffff0000;
                  }
                }
              }
            }
            FUN_140085440(local_568);
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
        }
        InsertMenuW(pHVar23,0xb,0xc00,0,(LPCWSTR)0x0);
        FUN_140097640(&DAT_1404e6d80,local_620,"core_tray_recent_wallpapers_clear");
        local_6d8.fMask = 0x42;
        pppppppWVar28 = (LPWSTR ******)local_620;
        if (7 < local_608) {
          pppppppWVar28 = local_620[0];
        }
        local_6d8.dwTypeData._0_4_ = SUB84(pppppppWVar28,0);
        local_6d8.dwTypeData._4_4_ = (undefined4)((ulonglong)pppppppWVar28 >> 0x20);
        local_6d8.wID._0_2_ = 0x88c5;
        local_6d8.wID._2_2_ = 0;
        InsertMenuItemW(pHVar23,0xc,1,&local_6d8);
        FUN_140097640(&DAT_1404e6d80,&local_750,"core_tray_recent_wallpapers");
        local_6d8.fMask = 0x46;
        pppppppuVar27 = &local_750;
        if (7 < local_738) {
          pppppppuVar27 = local_750;
        }
        local_6d8.dwTypeData._0_4_ = SUB84(pppppppuVar27,0);
        local_6d8.dwTypeData._4_4_ = (undefined4)((ulonglong)pppppppuVar27 >> 0x20);
        local_6d8.hSubMenu._0_4_ = SUB84(pHVar23,0);
        local_6d8.hSubMenu._4_4_ = (undefined4)((ulonglong)pHVar23 >> 0x20);
        InsertMenuItemW(pHVar18,1,1,&local_6d8);
        if (7 < local_738) {
          uVar35 = local_738 * 2 + 2;
          pppppppuVar27 = local_750;
          if (0xfff < uVar35) {
            pppppppuVar27 = (undefined8 *******)local_750[-1];
            if (0x1f < (ulonglong)((longlong)local_750 + (-8 - (longlong)pppppppuVar27)))
            goto LAB_1400219e4;
            uVar35 = local_738 * 2 + 0x29;
          }
          thunk_FUN_14028af80(pppppppuVar27,uVar35);
        }
        local_740 = 0;
        local_738 = 7;
        local_750 = (undefined8 *******)((ulonglong)local_750 & 0xffffffffffff0000);
        if (7 < local_608) {
          uVar35 = local_608 * 2 + 2;
          pppppppWVar28 = local_620[0];
          if (0xfff < uVar35) {
            pppppppWVar28 = (LPWSTR ******)local_620[0][-1];
            if (0x1f < (ulonglong)((longlong)local_620[0] + (-8 - (longlong)pppppppWVar28)))
            goto LAB_1400219e4;
            uVar35 = local_608 * 2 + 0x29;
          }
          thunk_FUN_14028af80(pppppppWVar28,uVar35);
        }
      }
    }
    for (puVar20 = (undefined8 *)*DAT_1404e5330; puVar20 != DAT_1404e5330;
        puVar20 = (undefined8 *)*puVar20) {
      if ((puVar20[7] != puVar20[8]) && (1 < *(int *)(puVar20 + 0xe) - 2U)) {
        local_6d8.fMask = 0;
        local_6d8.fType = 0;
        local_6d8.fState = 0;
        local_6d8.cbSize = 0x50;
        local_6d8.wID._0_2_ = 0;
        local_6d8.wID._2_2_ = 0;
        local_6d8._20_4_ = 0;
        local_6d8.hSubMenu._0_4_ = 0;
        local_6d8.hSubMenu._4_4_ = 0;
        local_6d8.hbmpChecked._0_4_ = 0;
        local_6d8.hbmpChecked._4_4_ = 0;
        local_6d8.hbmpUnchecked._0_4_ = 0;
        local_6d8.hbmpUnchecked._4_4_ = 0;
        local_6d8.dwItemData._0_4_ = 0;
        local_6d8.dwItemData._4_4_ = 0;
        local_6d8.dwTypeData._0_4_ = 0;
        local_6d8.dwTypeData._4_4_ = 0;
        local_6d8.cch = 0;
        local_6d8._68_4_ = 0;
        local_6d8.hbmpItem._0_4_ = 0;
        local_6d8.hbmpItem._4_4_ = 0;
        FUN_140097640(&DAT_1404e6d80,local_620,"core_tray_next_wallpaper");
        local_6d8.fMask = 0x42;
        pppppppWVar28 = (LPWSTR ******)local_620;
        if (7 < local_608) {
          pppppppWVar28 = local_620[0];
        }
        local_6d8.dwTypeData._0_4_ = SUB84(pppppppWVar28,0);
        local_6d8.dwTypeData._4_4_ = (undefined4)((ulonglong)pppppppWVar28 >> 0x20);
        local_6d8.wID._0_2_ = 0x9c5d;
        local_6d8.wID._2_2_ = 0;
        InsertMenuItemW(pHVar18,1,1,&local_6d8);
        if (7 < local_608) {
          uVar35 = local_608 * 2 + 2;
          pppppppWVar28 = local_620[0];
          if (0xfff < uVar35) {
            pppppppWVar28 = (LPWSTR ******)local_620[0][-1];
            if (0x1f < (ulonglong)((longlong)local_620[0] + (-8 - (longlong)pppppppWVar28)))
            goto LAB_1400219e4;
            uVar35 = local_608 * 2 + 0x29;
          }
          thunk_FUN_14028af80(pppppppWVar28,uVar35);
        }
        break;
      }
    }
    if (((short)local_758[0] == 0x7b) || ((short)local_758[0] == 0x401)) {
      local_668.x = (LONG)(short)local_res18;
      local_668.y = (LONG)(short)(local_res18 >> 0x10);
    }
    else {
      GetCursorPos(&local_668);
    }
    if (param_1 != DAT_1404e8f10) {
      cVar12 = FUN_140015180(10,0,0);
      if (cVar12 != '\0') {
        DVar16 = GetVersion();
        if (DVar16 + 0xb8460000 < 0x38460000) {
          DAT_1404e8f10 = param_1;
          hModule = LoadLibraryW(L"uxtheme.dll");
          pFVar29 = GetProcAddress(hModule,(LPCSTR)0x87);
          (*pFVar29)(1);
          FreeLibrary(hModule);
        }
      }
    }
    SetForegroundWindow(param_1);
    TrackPopupMenu(pHVar18,0x22,local_668.x + 1,local_668.y,0,DAT_1404e5280,(RECT *)0x0);
    PostMessageW(param_1,0,0,0);
    pHVar38 = pHStack_708;
    for (pHVar23 = local_710; pHVar23 != pHVar38; pHVar23 = pHVar23 + 2) {
      DeleteObject(*(HGDIOBJ *)pHVar23);
    }
    FUN_140085440(&local_4d8);
    FUN_140085440(&local_538);
    FUN_140085440(local_470);
    if (local_710 != (HMENU)0x0) {
      uVar35 = (local_700 - (longlong)local_710 >> 3) * 8;
      pHVar38 = local_710;
      if (0xfff < uVar35) {
        if (0x1f < (ulonglong)((longlong)local_710 + (-8 - (longlong)*(HMENU *)(local_710 + -2))))
        goto LAB_1400219e4;
        uVar35 = uVar35 + 0x27;
        pHVar38 = *(HMENU *)(local_710 + -2);
      }
      thunk_FUN_14028af80(pHVar38,uVar35);
      local_700 = 0;
      local_710 = (HMENU)0x0;
      pHStack_708 = (HMENU)0x0;
    }
    if ((HBITMAP)0x7 < local_640.hbmColor) {
      uVar35 = (longlong)local_640.hbmColor * 2 + 2;
      pIVar32 = (ICONINFO *)local_640._0_8_;
      if (0xfff < uVar35) {
        pIVar32 = (ICONINFO *)((ICONINFO *)(local_640._0_8_ + -0x20))->hbmColor;
        if (0x1f < (ulonglong)(local_640._0_8_ + (-8 - (longlong)pIVar32))) goto LAB_1400219e4;
        uVar35 = (longlong)local_640.hbmColor * 2 + 0x29;
      }
      thunk_FUN_14028af80(pIVar32,uVar35);
    }
    local_640.hbmMask = (HBITMAP)0x0;
    local_640.hbmColor = (HBITMAP)0x7;
    local_640._0_8_ = local_640._0_8_ & 0xffffffffffff0000;
    if (local_478 < 8) goto LAB_14002199e;
    uVar35 = local_478 * 2 + 2;
    pppppppWVar28 = local_490[0];
    if (0xfff < uVar35) {
      pppppppWVar28 = (LPWSTR ******)local_490[0][-1];
      if (0x1f < (ulonglong)((longlong)local_490[0] + (-8 - (longlong)pppppppWVar28)))
      goto LAB_1400219e4;
      uVar35 = local_478 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pppppppWVar28,uVar35);
LAB_14002199e:
    DestroyMenu(local_4e0);
    DAT_1404e8f18 = '\0';
    return 0;
  }
  iVar14 = FUN_1400863a0();
  if (iVar14 == 0) goto LAB_140020ad5;
  hmenu = CreatePopupMenu();
  uVar40 = uVar40 & 0xff;
  pHVar41 = (HMENU)0x0;
  local_6d8.fMask = 0;
  local_6d8.fType = 0;
  local_6d8.fState = 0;
  local_6d8.cbSize = 0x50;
  local_6d8.wID = 0;
  local_6d8._20_4_ = 0;
  local_6d8.hSubMenu._0_4_ = 0;
  local_6d8.hSubMenu._4_4_ = 0;
  local_6d8.hbmpChecked._0_4_ = 0;
  local_6d8.hbmpChecked._4_4_ = 0;
  local_6d8.hbmpUnchecked._0_4_ = 0;
  local_6d8.hbmpUnchecked._4_4_ = 0;
  local_6d8.dwItemData._0_4_ = 0;
  local_6d8.dwItemData._4_4_ = 0;
  local_6d8.dwTypeData._0_4_ = 0;
  local_6d8.dwTypeData._4_4_ = 0;
  local_6d8.cch = 0;
  local_6d8._68_4_ = 0;
  local_6d8.hbmpItem._0_4_ = 0;
  local_6d8.hbmpItem._4_4_ = 0;
  if (((uVar40 == 6) || (uVar40 == 7)) && (local_4d8 != (undefined8 *)0x0)) {
    local_760 = '\0';
    local_768 = (HKEY)*(HMENU *)*local_4d8;
  }
  else {
    local_760 = '\x01';
    local_768 = (HKEY)pHVar30;
  }
  if (((uVar40 == 6) || (uVar40 == 7)) && (local_4d8 != (undefined8 *)0x0)) {
    bVar3 = false;
    pHVar23 = (HMENU)*local_4d8;
    pHVar38 = pHVar30;
    pHVar41 = pHVar30;
    local_6d8.wID = 0;
  }
  else {
    bVar3 = true;
    pHVar23 = pHVar30;
  }
  while( true ) {
    bVar7 = bVar3;
    if (local_760 == '\0') {
      bVar7 = local_768 == (HKEY)pHVar23;
    }
    if (bVar7) goto LAB_140020a42;
    FUN_140085090(local_568,(HMENU)(local_768 + 0xc));
    lVar22 = FUN_140086de0(local_568,&DAT_1404748b8,&DAT_1404748bc);
    if (*(char *)(lVar22 + 8) == '\x04') {
      pHVar38 = (HMENU)0x1;
      FUN_140085cc0(lVar22,local_588);
      FUN_140005880(&local_730);
    }
    else {
      local_720 = 0;
      local_718 = 0;
      local_730 = (undefined8 *******)0x0;
      uStack_728 = 0;
      FUN_140016170(&local_730,&DAT_140474bc4,2);
    }
    if (pHVar38 != (HMENU)0x0) {
      pHVar38 = (HMENU)0x0;
      FUN_140017240(local_588);
    }
    local_6d8.fMask = 0x42;
    pppppppuVar27 = &local_730;
    if (7 < local_718) {
      pppppppuVar27 = local_730;
    }
    local_6d8.dwTypeData._0_4_ = SUB84(pppppppuVar27,0);
    local_6d8.dwTypeData._4_4_ = (undefined4)((ulonglong)pppppppuVar27 >> 0x20);
    local_6d8.wID = (int)pHVar41 + 0x8cae;
    InsertMenuItemW(hmenu,0,1,&local_6d8);
    uVar40 = (int)pHVar41 + 1;
    pHVar41 = (HMENU)(ulonglong)uVar40;
    if (0x3e6 < (int)uVar40) break;
    if (7 < local_718) {
      FUN_140016a90(&local_730,local_730);
    }
    FUN_140085440(local_568);
    FUN_1400175a0(&local_768);
  }
  FUN_140016770(&local_730);
  FUN_140085440(local_568);
LAB_140020a42:
  FUN_140097640(&DAT_1404e6d80,&local_750,"core_tray_saved_profiles");
  local_6d8.fMask = 0x46;
  pppppppuVar27 = &local_750;
  if (7 < local_738) {
    pppppppuVar27 = local_750;
  }
  local_6d8.dwTypeData._0_4_ = SUB84(pppppppuVar27,0);
  local_6d8.dwTypeData._4_4_ = (undefined4)((ulonglong)pppppppuVar27 >> 0x20);
  local_6d8.hSubMenu._0_4_ = SUB84(hmenu,0);
  local_6d8.hSubMenu._4_4_ = (undefined4)((ulonglong)hmenu >> 0x20);
  InsertMenuItemW(pHVar18,1,1,&local_6d8);
  if (local_738 < 8) goto LAB_140020ad5;
  uVar35 = local_738 * 2 + 2;
  pppppppuVar27 = local_750;
  if (uVar35 < 0x1000) {
LAB_140020ad0:
    thunk_FUN_14028af80(pppppppuVar27,uVar35);
    goto LAB_140020ad5;
  }
  pppppppuVar27 = (undefined8 *******)local_750[-1];
  if ((ulonglong)((longlong)local_750 + (-8 - (longlong)pppppppuVar27)) < 0x20) {
    uVar35 = local_738 * 2 + 0x29;
    goto LAB_140020ad0;
  }
LAB_1400219e4:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar37 = auStackY_7a0;
LAB_1400219eb:
  local_428._4_4_ = 0;
  *(undefined8 *)(puVar37 + -8) = 0x140021a07;
  FUN_1404217a0(local_428 + 0x14,0,0x3bc);
  local_428._16_4_ = 1000;
  local_428._0_4_ = 0x3d0;
  *(undefined8 *)(puVar37 + -8) = 0x140021a34;
  local_428._8_8_ = pHVar23;
  Shell_NotifyIconW(2,(PNOTIFYICONDATAW)local_428);
  return 0;
}

