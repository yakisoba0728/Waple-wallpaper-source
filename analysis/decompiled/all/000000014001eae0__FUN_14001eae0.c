// Function: FUN_14001eae0
// Addr: 14001eae0
// Size: 4662 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001eae0(void)

{
  code *pcVar1;
  bool bVar2;
  undefined *_Str;
  char cVar3;
  byte bVar4;
  ATOM AVar5;
  int iVar6;
  int iVar7;
  UINT UVar8;
  BOOL BVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  size_t sVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  LPCGUID PowerSettingGuid;
  ulonglong uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  UINT uElapse;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined4 uVar24;
  undefined1 auStackY_2a8 [8];
  undefined1 auStackY_2a0 [24];
  longlong local_248 [3];
  ulonglong local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  char cStack_220;
  undefined2 uStack_21f;
  char cStack_21d;
  char cStack_21c;
  undefined1 uStack_21b;
  undefined2 uStack_21a;
  ulonglong local_218;
  ulonglong local_210;
  longlong *local_208;
  uint local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [8];
  uint local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [8];
  uint local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  uint local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  tagMSG local_168;
  tagRECT local_138;
  undefined1 local_128 [40];
  undefined **local_100;
  code *local_f8;
  undefined ***local_c8;
  WNDCLASSW local_b8;
  longlong local_68 [7];
  longlong *local_30;
  
  uVar18 = 0;
  DAT_1404e80f8 = RegisterWindowMessageW(L"TaskbarCreated");
  ChangeWindowMessageFilter(DAT_1404e80f8,1);
  local_218 = 8;
  uStack_21f = 0;
  cStack_21d = 0;
  cStack_21c = 0;
  uStack_21b = 0;
  uStack_21a = 0;
  local_228 = (undefined4)s__service_1404749e0._0_8_;
  uStack_224 = SUB84(s__service_1404749e0._0_8_,4);
  cStack_220 = 0;
  local_210 = 0xf;
  cVar3 = FUN_14000dc20(0,&local_228);
  cStack_220 = (char)s__nowallpapers_140473f58._8_4_;
  uStack_21f = SUB42(s__nowallpapers_140473f58._8_4_,1);
  cStack_21d = SUB41(s__nowallpapers_140473f58._8_4_,3);
  cStack_21c = s__nowallpapers_140473f58[0xc];
  uStack_21a = 0;
  local_218 = 0xd;
  local_210 = 0xf;
  local_228 = (undefined4)s__nowallpapers_140473f58._0_8_;
  uStack_224 = SUB84(s__nowallpapers_140473f58._0_8_,4);
  uStack_21b = 0;
  bVar4 = FUN_14000dc20(s__nowallpapers_140473f58[0xc],&local_228);
  local_c8 = &local_100;
  local_100 = &PTR_FUN_1404753b8;
  local_f8 = FUN_14001e4f0;
  local_30 = (longlong *)0x0;
  if (local_c8 != (undefined ***)0x0) {
    local_30 = (longlong *)(*(code *)PTR_FUN_1404753b8)(local_c8,local_68);
  }
  uVar24 = FUN_140033a00(local_68,&DAT_1404e6430);
  if (local_30 != (longlong *)0x0) {
    uVar24 = (**(code **)(*local_30 + 0x20))
                       (local_30,CONCAT71((int7)((ulonglong)local_68 >> 8),local_30 != local_68));
  }
  if (local_c8 != (undefined ***)0x0) {
    uVar24 = (*(code *)(*local_c8)[4])
                       (local_c8,CONCAT71((int7)((ulonglong)&local_100 >> 8),local_c8 != &local_100)
                       );
  }
  if ((cVar3 == '\0' && bVar4 == 0) && ((DAT_1404df540 & 0x2000) == 0)) {
    FUN_140065110(uVar24,1);
LAB_14001ec5d:
    DAT_1404df540 = DAT_1404df540 & 0xfffff7ff;
  }
  else {
    FUN_140065110(uVar24,0);
    if ((cVar3 == '\0') || (bVar4 != 0)) goto LAB_14001ec5d;
    DAT_1404df540 = DAT_1404df540 | 0x800;
  }
  DAT_1404e8b80 = GetModuleHandleW((LPCWSTR)0x0);
  local_b8.style = 0;
  local_b8._4_4_ = 0;
  local_b8.lpszClassName = L"WPEEventWindowSC";
  local_b8.cbClsExtra = 0;
  local_b8.cbWndExtra = 0;
  local_b8.hInstance = (HINSTANCE)0x0;
  if ((DAT_1404df540 & 0x1000) == 0) {
    local_b8.lpszClassName = L"WPEEventWindow";
  }
  local_b8.hIcon = (HICON)0x0;
  local_b8.hCursor = (HCURSOR)0x0;
  local_b8.hbrBackground = (HBRUSH)0x0;
  local_b8.lpszMenuName = (LPCWSTR)0x0;
  local_b8.lpfnWndProc = FUN_140021e50;
  AVar5 = RegisterClassW(&local_b8);
  DAT_1404df540 = DAT_1404df540 | 8;
  uVar20 = uVar18;
  while (((DAT_1404e5280 == (HWND)0x0 && ((int)uVar20 < 18000)) &&
         (DAT_1404e5280 =
               CreateWindowExW(0,(LPCWSTR)(ulonglong)AVar5,L"",0,0,0,0,0,(HWND)0x0,(HMENU)0x0,
                               DAT_1404e8b80,(LPVOID)0x0), DAT_1404e5280 == (HWND)0x0))) {
    uVar20 = (ulonglong)((int)uVar20 + 1);
    Sleep(100);
  }
  DAT_1404df540 = DAT_1404df540 & 0xfffffff7;
  if (DAT_1404e5280 == (HWND)0x0) {
    FUN_140098760("Unable to create window\n");
    return;
  }
  WTSRegisterSessionNotification(DAT_1404e5280,0);
  PowerSettingGuid = (LPCGUID)&DAT_140426e98;
  if (7 < DAT_1404e5290) {
    PowerSettingGuid = (LPCGUID)&DAT_140426eb8;
  }
  DAT_1404e8b88 = RegisterPowerSettingNotification(DAT_1404e5280,PowerSettingGuid,0);
  DAT_1404e8b90 = RegisterPowerSettingNotification(DAT_1404e5280,(LPCGUID)&DAT_140426ea8,0);
  DAT_1404e8b98 = SetWinEventHook(0x8002,0x800b,(HMODULE)0x0,FUN_14002faa0,0,0,2);
  DAT_1404e8ba0 = SetWinEventHook(0x21,0x22,(HMODULE)0x0,FUN_14002fb70,0,0,2);
  _DAT_1404e62e0 = DAT_1404e5280;
  _DAT_1404e6558 = DAT_1404e5280;
  _DAT_1404e6af8 = DAT_1404e5280;
  _DAT_1404e6828 = DAT_1404e5280;
  iVar6 = GetSystemMetrics(0x1000);
  uVar19 = DAT_1404df540 | 0x20;
  local_1c0 = 0;
  DAT_1404df540 = DAT_1404df540 & 0xffffffdf;
  if (iVar6 != 0) {
    DAT_1404df540 = uVar19;
  }
  local_1d8 = (local_1d8 >> 8 & 0xfffffe) << 8;
  local_1d0 = 0;
  uStack_1c8 = 0;
  uVar10 = FUN_140086de0(&DAT_1404df5e8,"general","");
  lVar11 = FUN_140087490(uVar10,&DAT_1404737fc,&DAT_140473800);
  if (lVar11 != 0) {
    uVar10 = FUN_140086de0(uVar10,&DAT_1404737fc,&DAT_140473800);
    FUN_140085520(local_1e0,uVar10);
  }
  local_188 = (local_188 >> 8 & 0xfffffe) << 8;
  local_170 = 0;
  local_180 = 0;
  uStack_178 = 0;
  uVar10 = FUN_140086de0(&DAT_1404df5e8,"general","");
  lVar11 = FUN_140087490(uVar10,"defaultproperties","");
  if (lVar11 != 0) {
    uVar10 = FUN_140086de0(uVar10,"defaultproperties","");
    FUN_140085520(local_190,uVar10);
    FUN_140085520(&DAT_1404e7ed0,local_190);
  }
  uVar10 = FUN_140086de0(local_1e0,"monitormap","");
  uVar12 = FUN_140086de0(local_1e0,"monitordetection","");
  uVar12 = FUN_140085cc0(uVar12,local_248);
  FUN_14012e370(uVar12,uVar10);
  if (local_230 < 0x10) {
LAB_14001f03f:
    if ((DAT_1404df540 & 0x2000) != 0) {
      DAT_1404e8ec0 = DAT_1404e5288;
    }
    FUN_14012e710();
    FUN_14001d110();
    FUN_140065580();
    FUN_14003cc00();
    FUN_140019220(&DAT_140474a34);
    uVar10 = FUN_140086de0(local_1e0,"vdesktopenabled","");
    cVar3 = FUN_140086300(uVar10);
    puVar22 = auStackY_2a8;
    if (cVar3 != '\0') {
      puVar22 = auStackY_2a8;
      if (bVar4 == 0) goto LAB_14001f141;
      local_200 = CONCAT31(local_200._1_3_,5);
      local_200 = local_200 & 0xfffffeff;
      local_1e8 = 0;
      local_208 = (longlong *)((ulonglong)local_208 & 0xffffffffffffff00);
      local_1f8 = 0;
      uStack_1f0 = 0;
      uVar10 = FUN_140086de0(local_1e0,"vdesktopenabled","");
      FUN_140085610(uVar10,&local_208);
      FUN_140085440(&local_208);
      uVar10 = FUN_140086de0(&DAT_1404df5e8,"general","");
      uVar10 = FUN_140086de0(uVar10,&DAT_1404737fc,&DAT_140473800);
      FUN_140085520(uVar10,local_1e0);
      FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
      puVar22 = auStackY_2a8;
    }
  }
  else {
    uVar20 = local_230 + 1;
    lVar11 = local_248[0];
    if (uVar20 < 0x1000) {
LAB_14001f03a:
      thunk_FUN_14028af80(lVar11,uVar20);
      goto LAB_14001f03f;
    }
    lVar11 = *(longlong *)(local_248[0] + -8);
    if ((local_248[0] - lVar11) - 8U < 0x20) {
      uVar20 = local_230 + 0x28;
      goto LAB_14001f03a;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar22 = auStackY_2a0;
LAB_14001f141:
    DAT_1404df540 = DAT_1404df540 | 0x10000;
    *(undefined8 *)(puVar22 + -8) = 0x14001f152;
    iVar6 = FUN_14001e530(1);
    if (iVar6 == 1) {
      *(undefined8 *)(puVar22 + -8) = 0x14001f172;
      SetTimer(DAT_1404e5280,0x78,0x96,(TIMERPROC)0x0);
    }
    else if (iVar6 == 2) {
      DAT_1404df540 = DAT_1404df540 & 0xfffeffff;
    }
  }
  *(undefined8 *)(puVar22 + -8) = 0x14001f188;
  FUN_14003c840();
  if ((DAT_1404df540 & 0x1000) != 0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001f1a3;
    FUN_140084dd0(&local_208,0);
    *(undefined8 *)(puVar22 + -8) = 0x14001f1bd;
    uVar10 = FUN_140086de0(&DAT_1404df5e8,"general","");
    *(undefined8 *)(puVar22 + -8) = 0x14001f1d9;
    lVar11 = FUN_140087490(uVar10,"wallpaperconfigscreensaver","");
    if (lVar11 != 0) {
      *(undefined8 *)(puVar22 + -8) = 0x14001f1f0;
      uVar10 = FUN_140086de0(uVar10,"wallpaperconfigscreensaver","");
      *(undefined8 *)(puVar22 + -8) = 0x14001f1fc;
      FUN_140085520(&local_208,uVar10);
    }
    if ((char)local_200 == '\a') {
      PTR_s_wallpaperconfig_1404df5a0 = s_wallpaperconfigscreensaver_1404745f8;
      *(undefined8 *)(puVar22 + -8) = 0x14001f220;
      lVar11 = FUN_140086de0(&local_208,"sameaswallpaper","");
      if (*(char *)(lVar11 + 8) == '\x05') {
        *(undefined8 *)(puVar22 + -8) = 0x14001f22e;
        cVar3 = FUN_140086300(lVar11);
        if (cVar3 != '\0') {
          *(undefined8 *)(puVar22 + -8) = 0x14001f23e;
          FUN_140042790(&PTR_s_wallpaperconfig_1404df5a0);
        }
      }
    }
    if ((DAT_1404df540 & 0x2000) == 0) {
      DAT_1404e52e4 = DAT_1404e52e4 | 0x4000;
    }
    else {
      DAT_1404e52e4 = DAT_1404e52e4 | 0xc000;
    }
    _DAT_1404e6100 = _DAT_1404e6100 | 2;
    *(undefined8 *)(puVar22 + -8) = 0x14001f270;
    FUN_140085440(&local_208);
  }
  _Str = PTR_s_wallpaperconfig_1404df5a0;
  local_1b0 = (local_1b0 >> 8 & 0xfffffe) << 8;
  local_198 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  *(undefined8 *)(puVar22 + -8) = 0x14001f2a8;
  uVar10 = FUN_140086de0(&DAT_1404df5e8,"general","");
  *(undefined8 *)(puVar22 + -8) = 0x14001f2b3;
  sVar13 = strlen(_Str);
  *(undefined8 *)(puVar22 + -8) = 0x14001f2c2;
  lVar11 = FUN_140087490(uVar10,_Str,_Str + sVar13);
  if (lVar11 != 0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001f2cf;
    sVar13 = strlen(_Str);
    *(undefined8 *)(puVar22 + -8) = 0x14001f2de;
    uVar10 = FUN_140086de0(uVar10,_Str,_Str + sVar13);
    *(undefined8 *)(puVar22 + -8) = 0x14001f2ea;
    FUN_140085520(local_1b8,uVar10);
  }
  if ((DAT_1404df540 & 0x1000) != 0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001f311;
    lVar11 = FUN_140087490(local_1e0,"apprules","");
    if (lVar11 != 0) {
      *(undefined8 *)(puVar22 + 0x2c0) = unaff_R15;
      *(undefined8 *)(puVar22 + -8) = 0x14001f339;
      lVar11 = FUN_140086de0(local_1e0,"apprules","");
      if (*(char *)(lVar11 + 8) == '\x06') {
        *(undefined8 *)(puVar22 + -8) = 0x14001f351;
        iVar6 = FUN_1400863a0(lVar11);
        if (iVar6 != 0) {
          *(undefined8 *)(puVar22 + 0x2b8) = unaff_R14;
          uVar20 = uVar18;
          uVar23 = uVar18;
          do {
            iVar6 = (int)uVar20;
            *(undefined8 *)(puVar22 + -8) = 0x14001f36b;
            lVar14 = FUN_140086540(lVar11,uVar20);
            if (*(char *)(lVar14 + 8) == '\a') {
              *(undefined8 *)(puVar22 + -8) = 0x14001f38e;
              lVar15 = FUN_140086de0(lVar14,"action","");
              *(undefined8 *)(puVar22 + -8) = 0x14001f3a7;
              lVar14 = FUN_140086de0(lVar14,"condition","");
              if (*(char *)(lVar15 + 8) == '\x04') {
                uVar23 = (ulonglong)((uint)uVar23 | 1);
                *(undefined8 *)(puVar22 + -8) = 0x14001f3c0;
                puVar16 = (undefined8 *)FUN_140085cc0(lVar15,&local_228);
                plVar17 = puVar16 + 2;
                if (0xf < (ulonglong)puVar16[3]) {
                  puVar16 = (undefined8 *)*puVar16;
                }
                if (*plVar17 != 3) goto LAB_14001f429;
                *(undefined8 *)(puVar22 + -8) = 0x14001f3e3;
                iVar7 = memcmp(puVar16,&DAT_140474a6c,3);
                if ((iVar7 != 0) || (*(char *)(lVar14 + 8) != '\x04')) goto LAB_14001f429;
                uVar23 = 3;
                *(undefined8 *)(puVar22 + -8) = 0x14001f3fd;
                puVar16 = (undefined8 *)FUN_140085cc0(lVar14,puVar22 + 0x60);
                plVar17 = puVar16 + 2;
                if (0xf < (ulonglong)puVar16[3]) {
                  puVar16 = (undefined8 *)*puVar16;
                }
                if (*plVar17 != 0xc) goto LAB_14001f429;
                *(undefined8 *)(puVar22 + -8) = 0x14001f420;
                iVar7 = memcmp(puVar16,"playingaudio",0xc);
                if (iVar7 != 0) goto LAB_14001f429;
                bVar2 = false;
              }
              else {
LAB_14001f429:
                bVar2 = true;
              }
              if ((uVar23 & 2) != 0) {
                uVar23 = (ulonglong)((uint)uVar23 & 0xfffffffd);
                *(undefined8 *)(puVar22 + -8) = 0x14001f43f;
                FUN_140017240(puVar22 + 0x60);
              }
              if ((uVar23 & 1) != 0) {
                uVar23 = (ulonglong)((uint)uVar23 & 0xfffffffe);
                *(undefined8 *)(puVar22 + -8) = 0x14001f451;
                FUN_140017240(&local_228);
              }
              if (bVar2) {
                *(undefined8 *)(puVar22 + -8) = 0x14001f463;
                FUN_140087f40(lVar11,uVar20,0);
                iVar6 = iVar6 + -1;
              }
            }
            uVar20 = (ulonglong)(iVar6 + 1U);
            *(undefined8 *)(puVar22 + -8) = 0x14001f46f;
            uVar19 = FUN_1400863a0(lVar11);
          } while (iVar6 + 1U < uVar19);
        }
      }
    }
  }
  *(undefined8 *)(puVar22 + -8) = 0x14001f497;
  FUN_14006c280(&DAT_1404e52e0,local_1e0);
  if ((DAT_1404df540 & 0x20) == 0 && bVar4 == 0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001f4b7;
    FUN_14006a490(&DAT_1404e52e0,local_1b8);
  }
  *(undefined8 *)(puVar22 + -8) = 0x14001f4ce;
  uVar10 = FUN_140086de0(local_1e0,"iconopacity","");
  *(undefined8 *)(puVar22 + -8) = 0x14001f4d6;
  DAT_1404df54c = FUN_140085ee0(uVar10);
  *(undefined8 *)(puVar22 + -8) = 0x14001f4f3;
  uVar10 = FUN_140086de0(local_1e0,"windowupdaterate","");
  *(undefined8 *)(puVar22 + -8) = 0x14001f4fb;
  UVar8 = FUN_140085ee0(uVar10);
  uElapse = 5000;
  if ((int)UVar8 < 5000) {
    uElapse = UVar8;
  }
  if ((int)uElapse < 0x32) {
    uElapse = 0x32;
  }
  *(undefined8 *)(puVar22 + -8) = 0x14001f529;
  SetTimer(DAT_1404e5280,0x68,uElapse,(TIMERPROC)0x0);
  *(undefined8 *)(puVar22 + -8) = 0x14001f540;
  uVar10 = FUN_140086de0(local_1e0,"hasshownwelcomedialog","");
  *(undefined8 *)(puVar22 + -8) = 0x14001f548;
  cVar3 = FUN_140086300(uVar10);
  if ((cVar3 == '\0') && (DAT_1404e67a0 == -1)) {
    _DAT_1404e6828 = DAT_1404e5280;
    _DAT_1404e6a28 = 0x401;
    *(undefined8 *)(puVar22 + 0x70) = 0;
    *(undefined8 *)(puVar22 + 0x60) = 0;
    *(undefined8 *)(puVar22 + 0x68) = 0;
    *(undefined8 *)(puVar22 + 0x78) = 0;
    *(undefined8 *)(puVar22 + -8) = 0x14001f59f;
    FUN_140017480(puVar22 + 0x60,"-window welcome",0xf);
    *(undefined8 *)(puVar22 + -8) = 0x14001f5ad;
    puVar16 = (undefined8 *)FUN_14001b9c0(&local_228,puVar22 + 0x60);
    if (0xf < (ulonglong)puVar16[3]) {
      puVar16 = (undefined8 *)*puVar16;
    }
    *(undefined8 *)(puVar22 + -8) = 0x14001f5d4;
    FUN_1400832c0(&DAT_1404e67a0,"bin/wallpaperui.exe",puVar16,"WPEhandlerWelcomeDialog");
    *(undefined8 *)(puVar22 + -8) = 0x14001f5dd;
    FUN_140017240(&local_228);
    *(undefined8 *)(puVar22 + -8) = 0x14001f5eb;
    FUN_140084dd0(local_128,0);
    *(undefined8 *)(puVar22 + -8) = 0x14001f605;
    uVar10 = FUN_140086de0(local_128,&DAT_1404737fc,&DAT_140473800);
    *(undefined8 *)(puVar22 + -8) = 0x14001f611;
    FUN_140085520(uVar10,local_1e0);
    local_200 = CONCAT31(local_200._1_3_,6);
    local_200 = local_200 & 0xfffffeff;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    *(undefined8 *)(puVar22 + -8) = 0x14001f632;
    plVar17 = (longlong *)FUN_14028af20(0x10);
    *plVar17 = 0;
    plVar17[1] = 0;
    *(undefined8 *)(puVar22 + -8) = 0x14001f646;
    lVar11 = FUN_14028af20(0x58);
    *(longlong *)lVar11 = lVar11;
    *(longlong *)(lVar11 + 8) = lVar11;
    *(longlong *)(lVar11 + 0x10) = lVar11;
    *(undefined2 *)(lVar11 + 0x18) = 0x101;
    *plVar17 = lVar11;
    *(undefined8 *)(puVar22 + -8) = 0x14001f66e;
    local_208 = plVar17;
    FUN_140056220(&DAT_1404e6268,&local_208);
    *(undefined8 *)(puVar22 + -8) = 0x14001f688;
    uVar10 = FUN_140086de0(local_128,"discoveredplugins","");
    *(undefined8 *)(puVar22 + -8) = 0x14001f694;
    FUN_140085520(uVar10,&local_208);
    *(undefined8 *)(puVar22 + -8) = 0x14001f6a8;
    FUN_140004d00(puVar22 + 0x60,local_128,0);
    uVar20 = *(ulonglong *)(puVar22 + 0x70);
    local_228 = 200;
    uStack_224 = 0;
    cStack_220 = '\0';
    uStack_21f = 0;
    cStack_21d = 0;
    cStack_21c = 0;
    uStack_21b = 0;
    uStack_21a = 0;
    uVar23 = local_218 >> 0x20;
    local_218 = local_218 & 0xffffffff00000000;
    local_210 = 0;
    if (uVar20 != 0) {
      local_218 = CONCAT44((int)uVar23,(int)uVar20);
      *(undefined8 *)(puVar22 + -8) = 0x14001f6d3;
      uVar18 = thunk_FUN_14028af20(uVar20 & 0xffffffff);
      puVar21 = puVar22 + 0x60;
      if (0xf < *(ulonglong *)(puVar22 + 0x78)) {
        puVar21 = *(undefined1 **)(puVar22 + 0x60);
      }
      *(undefined8 *)(puVar22 + -8) = 0x14001f6f6;
      local_210 = uVar18;
      FUN_1404210f0(uVar18,puVar21,uVar20 & 0xffffffff);
      cStack_220 = (char)uVar18;
      uStack_21f = (undefined2)(uVar18 >> 8);
      cStack_21d = (char)(uVar18 >> 0x18);
      cStack_21c = (char)(uVar18 >> 0x20);
      uStack_21b = (undefined1)(uVar18 >> 0x28);
      uStack_21a = (undefined2)(uVar18 >> 0x30);
      uStack_224 = (int)uVar20;
    }
    *(undefined8 *)(puVar22 + -8) = 0x14001f70d;
    FUN_1400182d0(&DAT_1404e67a0,&local_228);
    *(undefined8 *)(puVar22 + -8) = 0x14001f715;
    thunk_FUN_14028af80(uVar18);
    *(undefined8 *)(puVar22 + -8) = 0x14001f71f;
    FUN_140017240(puVar22 + 0x60);
    *(undefined8 *)(puVar22 + -8) = 0x14001f728;
    FUN_140085440(&local_208);
    *(undefined8 *)(puVar22 + -8) = 0x14001f734;
    FUN_140085440(local_128);
  }
  else {
    local_228 = (undefined4)s__showbrowse_140473f68._0_7_;
    uStack_224._3_1_ = (char)s__showbrowse_140473f68._7_4_;
    uStack_224 = CONCAT13(uStack_224._3_1_,SUB73(s__showbrowse_140473f68._0_7_,4));
    cStack_220 = SUB41(s__showbrowse_140473f68._7_4_,1);
    uStack_21f = SUB42(s__showbrowse_140473f68._7_4_,2);
    cStack_21c = 0;
    uStack_21b = 0;
    uStack_21a = 0;
    local_218 = 0xb;
    local_210 = 0xf;
    cStack_21d = 0;
    *(undefined8 *)(puVar22 + -8) = 0x14001f770;
    cVar3 = FUN_14000dc20(local_228,&local_228);
    if (cVar3 == '\0') {
      *(undefined8 *)(puVar22 + 0x70) = 0;
      *(undefined8 *)(puVar22 + 0x78) = 0;
      *(undefined8 *)(puVar22 + 0x60) = 0;
      *(undefined8 *)(puVar22 + 0x68) = 0;
      *(undefined8 *)(puVar22 + -8) = 0x14001f7dc;
      uVar24 = FUN_140017480(puVar22 + 0x60,"-showscreensaver",0x10);
      *(undefined8 *)(puVar22 + -8) = 0x14001f7e6;
      cVar3 = FUN_14000dc20(uVar24,puVar22 + 0x60);
      if (cVar3 == '\0') goto LAB_14001f83b;
      *(undefined8 *)(puVar22 + 0x70) = 0;
      *(undefined8 *)(puVar22 + 0x78) = 0;
      *(undefined8 *)(puVar22 + 0x60) = 0;
      *(undefined8 *)(puVar22 + 0x68) = 0;
      *(undefined8 *)(puVar22 + -8) = 0x14001f813;
      uVar24 = FUN_140017480(puVar22 + 0x60,"-showscreensaver",0x10);
      *(undefined8 *)(puVar22 + -8) = 0x14001f81d;
      FUN_140031a60(uVar24,puVar22 + 0x60);
      lVar11 = 4;
    }
    else {
      local_228 = (undefined4)s__showbrowse_140473f68._0_7_;
      uStack_224._3_1_ = (char)s__showbrowse_140473f68._7_4_;
      uStack_224 = CONCAT13(uStack_224._3_1_,SUB73(s__showbrowse_140473f68._0_7_,4));
      cStack_220 = SUB41(s__showbrowse_140473f68._7_4_,1);
      uStack_21f = SUB42(s__showbrowse_140473f68._7_4_,2);
      cStack_21c = 0;
      uStack_21b = 0;
      uStack_21a = 0;
      local_218 = 0xb;
      local_210 = 0xf;
      cStack_21d = 0;
      *(undefined8 *)(puVar22 + -8) = 0x14001f7ab;
      FUN_140031a60(local_228,&local_228);
      lVar11 = (ulonglong)bVar4 * 2;
    }
    *(undefined8 *)(puVar22 + -8) = 0x14001f83b;
    PostMessageW(DAT_1404e5280,0x111,0x9c59,lVar11);
  }
LAB_14001f83b:
  if (DAT_1404e52a0 != (HWND)0x0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001f851;
    BVar9 = GetWindowRect(DAT_1404e52a0,&local_138);
    if (BVar9 != 0) {
      _DAT_1404e8bb8 = local_138.left;
      LRam00000001404e8bbc = local_138.top;
      LRam00000001404e8bc0 = local_138.right;
      LRam00000001404e8bc4 = local_138.bottom;
    }
  }
  *(undefined8 *)(puVar22 + -8) = 0x14001f869;
  FUN_14001a1f0(local_1e0);
  local_200 = (local_200 >> 8 & 0xfffffe) << 8;
  local_1e8 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  *(undefined8 *)(puVar22 + -8) = 0x14001f89a;
  uVar10 = FUN_140086de0(&DAT_1404df5e8,"general","");
  *(undefined8 *)(puVar22 + -8) = 0x14001f8b3;
  lVar11 = FUN_140087490(uVar10,"shared","");
  if (lVar11 != 0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001f8ce;
    uVar10 = FUN_140086de0(uVar10,"shared","");
    *(undefined8 *)(puVar22 + -8) = 0x14001f8da;
    FUN_140085520(&local_208,uVar10);
  }
  *(undefined8 *)(puVar22 + -8) = 0x14001f8e3;
  FUN_14001a630(&local_208);
  *(undefined8 *)(puVar22 + -8) = 0x14001f8f0;
  BVar9 = IsWindow(DAT_1404e5280);
  if (BVar9 != 0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001f906;
    KillTimer(DAT_1404e5280,0x73);
    *(undefined8 *)(puVar22 + -8) = 0x14001f921;
    SetTimer(DAT_1404e5280,0x73,60000,(TIMERPROC)0x0);
  }
  *(undefined8 *)(puVar22 + 0x70) = 8;
  *(undefined8 *)(puVar22 + 0x60) = 0;
  *(undefined8 *)(puVar22 + 0x68) = 0;
  *(undefined8 *)(puVar22 + 0x60) = s__service_1404749e0._0_8_;
  puVar22[0x68] = 0;
  *(undefined8 *)(puVar22 + 0x78) = 0xf;
  *(undefined8 *)(puVar22 + -8) = 0x14001f956;
  bVar4 = FUN_14000dc20(0,puVar22 + 0x60);
  *(undefined8 *)(puVar22 + -8) = 0x14001f971;
  PostMessageW(DAT_1404e5280,0x411,(ulonglong)(bVar4 ^ 1),0);
  *(undefined8 *)(puVar22 + 0x70) = 8;
  *(undefined8 *)(puVar22 + 0x60) = 0;
  *(undefined8 *)(puVar22 + 0x68) = 0;
  *(undefined8 *)(puVar22 + 0x60) = s__control_140473b20._0_8_;
  puVar22[0x68] = 0;
  *(undefined8 *)(puVar22 + 0x78) = 0xf;
  *(undefined8 *)(puVar22 + -8) = 0x14001f9a6;
  cVar3 = FUN_14000dc20(0,puVar22 + 0x60);
  if (cVar3 != '\0') {
    *(undefined8 *)(puVar22 + -8) = 0x14001f9b6;
    FUN_140008270(DAT_1404e5280);
    *(undefined8 *)(puVar22 + 0x70) = 8;
    *(undefined8 *)(puVar22 + 0x60) = 0;
    *(undefined8 *)(puVar22 + 0x68) = 0;
    *(undefined8 *)(puVar22 + 0x60) = s__control_140473b20._0_8_;
    puVar22[0x68] = 0;
    *(undefined8 *)(puVar22 + 0x78) = 0xf;
    *(undefined8 *)(puVar22 + -8) = 0x14001f9eb;
    FUN_140031a60(0,puVar22 + 0x60);
  }
  if ((DAT_1404df540 & 0x3000) == 0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001fa12;
    SetTimer(DAT_1404e5280,0x77,3000,(TIMERPROC)0x0);
  }
  *(undefined8 *)(puVar22 + -8) = 0x14001fa1b;
  FUN_140085440(&local_208);
  *(undefined8 *)(puVar22 + -8) = 0x14001fa24;
  FUN_140085440(local_1b8);
  *(undefined8 *)(puVar22 + -8) = 0x14001fa2d;
  FUN_140085440(local_190);
  *(undefined8 *)(puVar22 + -8) = 0x14001fa36;
  FUN_140085440(local_1e0);
  local_168.hwnd = (HWND)0x0;
  local_168.message = 0;
  local_168._12_4_ = 0;
  local_168.wParam = 0;
  local_168.lParam = 0;
  local_168.time = 0;
  local_168.pt.x = 0;
  local_168.pt.y = 0;
  local_168._44_4_ = 0;
  *(undefined8 *)(puVar22 + -8) = 0x14001fa57;
  iVar6 = GetMessageW(&local_168,(HWND)0x0,0,0);
  while (iVar6 != 0) {
    if (local_168.message == 0x414) {
      *(undefined8 *)(puVar22 + -8) = 0x14001fa89;
      DestroyWindow((HWND)local_168.lParam);
    }
    else {
      *(undefined8 *)(puVar22 + -8) = 0x14001fa73;
      TranslateMessage(&local_168);
      *(undefined8 *)(puVar22 + -8) = 0x14001fa7d;
      DispatchMessageW(&local_168);
    }
    *(undefined8 *)(puVar22 + -8) = 0x14001fa9b;
    iVar6 = GetMessageW(&local_168,(HWND)0x0,0,0);
  }
  *(undefined8 *)(puVar22 + -8) = 0x14001faa9;
  FUN_14003d930(100);
  if (DAT_1404e8b60 != (HANDLE)0x0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001fabb;
    ReleaseMutex(DAT_1404e8b60);
    *(undefined8 *)(puVar22 + -8) = 0x14001fac8;
    CloseHandle(DAT_1404e8b60);
    DAT_1404e8b60 = (HANDLE)0x0;
  }
  *(undefined8 *)(puVar22 + -8) = 0x14001fae1;
  KillTimer(DAT_1404e5280,0x68);
  *(undefined8 *)(puVar22 + -8) = 0x14001faf3;
  KillTimer(DAT_1404e5280,0x69);
  *(undefined8 *)(puVar22 + -8) = 0x14001fb05;
  KillTimer(DAT_1404e5280,0x6c);
  *(undefined8 *)(puVar22 + -8) = 0x14001fb17;
  KillTimer(DAT_1404e5280,0x6f);
  *(undefined8 *)(puVar22 + -8) = 0x14001fb29;
  KillTimer(DAT_1404e5280,0x6d);
  *(undefined8 *)(puVar22 + -8) = 0x14001fb3b;
  KillTimer(DAT_1404e5280,0x74);
  *(undefined8 *)(puVar22 + -8) = 0x14001fb4d;
  KillTimer(DAT_1404e5280,0x75);
  *(undefined8 *)(puVar22 + -8) = 0x14001fb5f;
  KillTimer(DAT_1404e5280,0x77);
  puVar16 = DAT_1404e8bb0;
  if (DAT_1404e8bb0 != (undefined8 *)0x0) {
    if (DAT_1404e8bb0[0xe] != DAT_1404e8bb0[0xf]) {
      *(undefined8 *)(puVar22 + -8) = 0x14001fb7d;
      FUN_140035680();
      puVar16[0xf] = puVar16[0xe];
    }
    *(undefined8 *)(puVar22 + -8) = 0x14001fb91;
    FUN_140141030(puVar16 + 0x11);
    *(undefined8 *)(puVar22 + -8) = 0x14001fb9d;
    FUN_140141030(puVar16 + 0x14);
    if (puVar16[0x17] != puVar16[0x18]) {
      *(undefined8 *)(puVar22 + -8) = 0x14001fbb5;
      FUN_140035680();
      puVar16[0x18] = puVar16[0x17];
    }
    if (DAT_1404e8bb0 != (undefined8 *)0x0) {
      pcVar1 = *(code **)*DAT_1404e8bb0;
      *(undefined8 *)(puVar22 + -8) = 0x14001fbdc;
      (*pcVar1)(DAT_1404e8bb0,1);
    }
  }
  DAT_1404e8bb0 = (undefined8 *)0x0;
  _DAT_1404e62e0 = (HWND)0x0;
  if (DAT_1404e8b88 != (HPOWERNOTIFY)0x0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001fbfc;
    UnregisterPowerSettingNotification(DAT_1404e8b88);
    DAT_1404e8b88 = (HPOWERNOTIFY)0x0;
  }
  if (DAT_1404e8b90 != (HPOWERNOTIFY)0x0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001fc15;
    UnregisterPowerSettingNotification(DAT_1404e8b90);
    DAT_1404e8b90 = (HPOWERNOTIFY)0x0;
  }
  *(undefined8 *)(puVar22 + -8) = 0x14001fc29;
  WTSUnRegisterSessionNotification(DAT_1404e5280);
  if (DAT_1404e8b98 != (HWINEVENTHOOK)0x0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001fc3b;
    UnhookWinEvent(DAT_1404e8b98);
    DAT_1404e8b98 = (HWINEVENTHOOK)0x0;
  }
  if (DAT_1404e8ba0 != (HWINEVENTHOOK)0x0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001fc54;
    UnhookWinEvent(DAT_1404e8ba0);
    DAT_1404e8ba0 = (HWINEVENTHOOK)0x0;
  }
  if (DAT_1404e8ba8 != (HWINEVENTHOOK)0x0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001fc6d;
    UnhookWinEvent(DAT_1404e8ba8);
    DAT_1404e8ba8 = (HWINEVENTHOOK)0x0;
  }
  DAT_1404e52e4 = DAT_1404e52e4 & 0xfffffffd;
  DAT_1404df540 = DAT_1404df540 | 8;
  *(undefined8 *)(puVar22 + -8) = 0x14001fc87;
  FUN_14001a4f0();
  if (DAT_1404e5278 != (HWND)0x0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001fc99;
    BVar9 = IsWindow(DAT_1404e5278);
    if (BVar9 != 0) {
      *(undefined8 *)(puVar22 + -8) = 0x14001fcaa;
      DestroyWindow(DAT_1404e5278);
    }
  }
  DAT_1404e5278 = (HWND)0x0;
  *(undefined8 *)(puVar22 + -8) = 0x14001fcbe;
  BVar9 = IsWindow(DAT_1404e5280);
  if (BVar9 != 0) {
    *(undefined8 *)(puVar22 + -8) = 0x14001fccf;
    DestroyWindow(DAT_1404e5280);
  }
  DAT_1404df540 = DAT_1404df540 & 0xfffffff7;
  *(undefined8 *)(puVar22 + -8) = 0x14001fce2;
  FUN_140084130(&DAT_1404e64d0);
  *(undefined8 *)(puVar22 + -8) = 0x14001fcee;
  FUN_140084130(&DAT_1404e6a70);
  *(undefined8 *)(puVar22 + -8) = 0x14001fcfa;
  FUN_140084130(&DAT_1404e67a0);
  *(undefined8 *)(puVar22 + -8) = 0x14001fcff;
  FUN_140065190();
  return;
}

