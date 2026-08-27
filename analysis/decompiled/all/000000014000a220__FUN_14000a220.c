// Function: FUN_14000a220
// Addr: 14000a220
// Size: 10090 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00014000c628) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14000a220(undefined8 param_1,undefined8 param_2,wchar_t *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  BOOL BVar8;
  errno_t eVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  LSTATUS LVar13;
  HRESULT HVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  undefined8 uVar17;
  DWORDLONG dwlConditionMask;
  undefined8 *puVar18;
  longlong lVar19;
  longlong *plVar20;
  size_t sVar21;
  char *******pppppppcVar22;
  HANDLE pvVar23;
  HWND pHVar24;
  wchar_t *pwVar25;
  wchar_t *pwVar26;
  LRESULT LVar27;
  LPCWSTR pWVar28;
  LPCWSTR pWVar29;
  longlong lVar30;
  undefined8 *puVar31;
  char *******pppppppcVar32;
  LPWSTR ******pppppppWVar33;
  undefined **ppuVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  char ******ppppppcVar37;
  wchar_t *pwVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  ulonglong _Size;
  char *pcVar42;
  UINT uType;
  wchar_t *pwVar43;
  bool bVar44;
  undefined4 uVar45;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  LARGE_INTEGER local_res18 [2];
  undefined1 auStackY_11f8 [8];
  undefined1 auStackY_11f0 [24];
  undefined1 local_11a8 [16];
  wchar_t *local_1198;
  ulonglong uStack_1190;
  LPWSTR ******local_1188;
  longlong lStack_1180;
  ulonglong local_1178;
  ulonglong uStack_1170;
  DWORD local_1168 [2];
  longlong *local_1160;
  undefined8 uStack_1158;
  undefined8 local_1150;
  undefined8 uStack_1148;
  undefined8 local_1140;
  undefined4 local_1138 [2];
  undefined1 local_1130 [40];
  char *******local_1108;
  char ******ppppppcStack_1100;
  char ******local_10f8;
  char ******ppppppcStack_10f0;
  undefined4 local_10e8;
  undefined8 local_10e4;
  undefined1 local_10d8 [88];
  HANDLE pvStack_1080;
  _union_1230 local_1078;
  HANDLE pvStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  _OSVERSIONINFOEXW local_1048 [7];
  wchar_t local_848 [1024];
  undefined8 uStack_48;
  
  uStack_48 = 0x14000a23f;
  puVar39 = auStackY_11f8;
  puVar40 = auStackY_11f8;
  pwVar43 = (wchar_t *)0x0;
  bVar44 = false;
  local_res18[0].s.LowPart = 0;
  bVar2 = false;
  local_1198 = (wchar_t *)0x0;
  uVar45 = 0;
  local_11a8._0_8_ = (wchar_t *)0x0;
  local_11a8._8_8_ = (wchar_t *)0x0;
  pwVar25 = pwVar43;
  if (param_3 == (wchar_t *)0x0) {
LAB_14000a4a7:
    pwVar15 = (wchar_t *)local_11a8._0_8_;
    pwVar16 = pwVar43;
    if ((longlong)(local_11a8._8_8_ - local_11a8._0_8_) >> 5 != 0) {
      do {
        pwVar25 = pwVar15 + (longlong)pwVar16 * 0x10;
        pwVar26 = pwVar16;
        if (*(longlong *)(pwVar25 + 8) != 0) {
          pwVar26 = pwVar25;
          if (0xf < *(ulonglong *)(pwVar25 + 0xc)) {
            pwVar26 = *(wchar_t **)pwVar25;
          }
          if (((char)*pwVar26 == '-') &&
             (pwVar26 = (wchar_t *)((longlong)pwVar16 + 1),
             pwVar26 < (wchar_t *)(local_11a8._8_8_ - (longlong)pwVar15 >> 5))) {
            pwVar38 = pwVar25 + 0x10;
            pwVar15 = pwVar38;
            if (0xf < *(ulonglong *)(pwVar25 + 0x1c)) {
              pwVar15 = *(wchar_t **)pwVar38;
            }
            if ((char)*pwVar15 != '-') {
              pwVar16 = (wchar_t *)FUN_14000fc90(uVar45,pwVar25);
              pwVar15 = (wchar_t *)local_11a8._0_8_;
              uVar45 = extraout_XMM0_Da_01;
              if (pwVar16 != pwVar38) {
                if (0xf < *(ulonglong *)(pwVar25 + 0x1c)) {
                  pwVar38 = *(wchar_t **)pwVar38;
                }
                uVar45 = FUN_14000f880(pwVar16,pwVar38,*(undefined8 *)(pwVar25 + 0x18));
                pwVar15 = (wchar_t *)local_11a8._0_8_;
              }
              goto LAB_14000a5e5;
            }
          }
          local_1058 = 0;
          uStack_1060 = 0;
          local_1068 = 0;
          uStack_1050 = 0xf;
          plVar20 = (longlong *)FUN_14000fc90(0,pwVar25);
          pwVar15 = (wchar_t *)local_11a8._0_8_;
          pwVar26 = pwVar16;
          uVar45 = extraout_XMM0_Da_02;
          if (plVar20 != &local_1068) {
            uVar35 = plVar20[3];
            if (0xf < uVar35) {
              lVar19 = *plVar20;
              uVar36 = uVar35 + 1;
              if (0xfff < uVar36) {
                if (0x1f < (lVar19 - *(longlong *)(lVar19 + -8)) - 8U) goto LAB_14000b610;
                uVar36 = uVar35 + 0x28;
                lVar19 = *(longlong *)(lVar19 + -8);
              }
              thunk_FUN_14028af80(lVar19,uVar36);
            }
            *(undefined4 *)plVar20 = (undefined4)local_1068;
            *(undefined4 *)((longlong)plVar20 + 4) = local_1068._4_4_;
            *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_1060;
            *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_1060._4_4_;
            *(undefined4 *)(plVar20 + 2) = (undefined4)local_1058;
            *(undefined4 *)((longlong)plVar20 + 0x14) = local_1058._4_4_;
            *(undefined4 *)(plVar20 + 3) = (undefined4)uStack_1050;
            *(undefined4 *)((longlong)plVar20 + 0x1c) = uStack_1050._4_4_;
            pwVar15 = (wchar_t *)local_11a8._0_8_;
            uVar45 = (undefined4)local_1068;
          }
        }
LAB_14000a5e5:
        pwVar16 = (wchar_t *)((longlong)pwVar26 + 1);
      } while ((wchar_t *)((longlong)pwVar26 + 1) <
               (wchar_t *)(local_11a8._8_8_ - (longlong)pwVar15 >> 5));
    }
    uVar17 = local_11a8._8_8_;
    pwVar26 = pwVar25;
    pwVar16 = pwVar15;
    if (pwVar15 != (wchar_t *)0x0) {
      for (; pwVar15 != (wchar_t *)uVar17; pwVar15 = pwVar15 + 0x10) {
        FUN_140017240(pwVar15);
        pwVar16 = (wchar_t *)local_11a8._0_8_;
      }
      uVar35 = (longlong)local_1198 - (longlong)pwVar16 & 0xffffffffffffffe0;
      if (0xfff < uVar35) {
        pwVar25 = (wchar_t *)uVar17;
        if ((char *)0x1f <
            (char *)((longlong)pwVar16 + (-8 - (longlong)*(wchar_t **)(pwVar16 + -4))))
        goto LAB_14000b610;
        uVar35 = uVar35 + 0x27;
        pwVar16 = *(wchar_t **)(pwVar16 + -4);
      }
      thunk_FUN_14028af80(pwVar16,uVar35);
      pwVar26 = (wchar_t *)uVar17;
    }
    local_1048[0].dwOSVersionInfoSize = 0x11c;
    local_1048[0].dwMajorVersion = 10;
    local_1048[0].dwMinorVersion = 0;
    local_1048[0].dwBuildNumber = 22000;
    local_1048[0].dwPlatformId = 0;
    FUN_1404217a0(local_1048[0].szCSDVersion,0,0x100);
    local_1048[0].wServicePackMajor = 0;
    local_1048[0].wServicePackMinor = 0;
    local_1048[0].wSuiteMask = 0;
    local_1048[0].wProductType = '\0';
    local_1048[0].wReserved = '\0';
    uVar17 = VerSetConditionMask(0,2,3);
    uVar17 = VerSetConditionMask(uVar17,1,3);
    dwlConditionMask = VerSetConditionMask(uVar17,4,3);
    BVar8 = VerifyVersionInfoW(local_1048,7,dwlConditionMask);
    if (BVar8 == 0) {
      cVar5 = FUN_140015180(10,0,0);
      if (cVar5 == '\0') {
        cVar5 = FUN_140015180(6,2,0);
        if (cVar5 == '\0') {
          cVar5 = FUN_140015180(6,1,0);
          DAT_1404e5290 = -(uint)(cVar5 != '\0') & 7;
        }
        else {
          DAT_1404e5290 = 8;
        }
      }
      else {
        DAT_1404e5290 = 10;
      }
    }
    else {
      DAT_1404e5290 = 0xb;
    }
    SetUnhandledExceptionFilter(FUN_140007610);
    FUN_1404217a0(local_1048,0,0x800);
    GetModuleFileNameW((HMODULE)0x0,(LPWSTR)local_1048,0x400);
    local_1198 = (wchar_t *)0x0;
    uStack_1190 = 0;
    local_11a8._0_8_ = (wchar_t *)0x0;
    local_11a8._8_8_ = (wchar_t *)0x0;
    uVar17 = FUN_1402d6aa0(local_1048);
    FUN_140016170(local_11a8,local_1048,uVar17);
    pwVar25 = (wchar_t *)local_11a8;
    if (7 < uStack_1190) {
      pwVar25 = (wchar_t *)local_11a8._0_8_;
    }
    FUN_1404217a0(local_848,0,0x800);
    eVar9 = FID_conflict__wsplitpath_s
                      (pwVar25,(wchar_t *)local_1048,0x400,local_848,0x400,(wchar_t *)0x0,0,
                       (wchar_t *)0x0,0);
    if (eVar9 == 0) {
      FUN_1402bfe60(local_1048,0x400,local_848);
    }
    iVar10 = FUN_1402d6aa0(local_1048);
    iVar7 = 0;
    if (-1 < iVar10 + -1) {
      iVar7 = iVar10 + -1;
    }
    local_1048[0].szCSDVersion[(longlong)iVar7 + -10] = L'\0';
    SetCurrentDirectoryW((LPCWSTR)local_1048);
    if (7 < uStack_1190) {
      uVar35 = uStack_1190 * 2 + 2;
      pwVar15 = (wchar_t *)local_11a8._0_8_;
      if (0xfff < uVar35) {
        pwVar15 = *(wchar_t **)(local_11a8._0_8_ + -8);
        pwVar25 = pwVar26;
        if ((char *)0x1f < (char *)(local_11a8._0_8_ + (-8 - (longlong)pwVar15)))
        goto LAB_14000b610;
        uVar35 = uStack_1190 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pwVar15,uVar35);
    }
    DAT_1404e52b8 = 1;
    local_11a8._8_8_ = (HANDLE)0x0;
    local_11a8[4] = DAT_140473db4;
    local_11a8._0_4_ = DAT_140473db0;
    DAT_1404e5294 = 1;
    local_1198 = (wchar_t *)0x5;
    uStack_1190 = 0xf;
    local_11a8._5_3_ = 0;
    cVar5 = FUN_14000dc20(0,local_11a8);
    if (cVar5 != '\0') {
      FUN_140007e40();
    }
    local_1198 = (wchar_t *)0x0;
    uStack_1190 = 0;
    local_11a8._0_8_ = (HANDLE)0x0;
    local_11a8._8_8_ = (HANDLE)0x0;
    uVar45 = FUN_140017480(local_11a8,"-screensaver",0xc);
    cVar5 = FUN_14000dc20(uVar45,local_11a8);
    if (cVar5 != '\0') {
      DAT_1404df540 = DAT_1404df540 | 0x1001;
      local_1198 = (wchar_t *)0x0;
      uStack_1190 = 0;
      local_11a8._0_8_ = (HANDLE)0x0;
      local_11a8._8_8_ = (HANDLE)0x0;
      uVar45 = FUN_140017480(local_11a8,"-host",5);
      puVar18 = (undefined8 *)FUN_14000db60(uVar45,&local_1160,local_11a8);
      if (0xf < (ulonglong)puVar18[3]) {
        puVar18 = (undefined8 *)*puVar18;
      }
      DAT_1404e5288 = FUN_1402c0e80(puVar18,0,10);
      FUN_140017240(&local_1160);
      local_1198 = (wchar_t *)0x0;
      uStack_1190 = 0;
      local_11a8._0_8_ = (HANDLE)0x0;
      local_11a8._8_8_ = (HANDLE)0x0;
      uVar45 = FUN_140017480(local_11a8,"-preview",8);
      cVar5 = FUN_14000dc20(uVar45,local_11a8);
      if (cVar5 == '\0') {
        local_1178 = 0;
        uStack_1170 = 0;
        local_1198 = (wchar_t *)0x0;
        local_1078.hIcon = (HANDLE)0x0;
        local_10d8._8_8_ = (HWND)0x0;
        local_10d8._0_4_ = 0x68;
        local_10d8._4_4_ = 0;
        local_10d8._24_8_ = (wchar_t *)0x0;
        local_10d8._16_8_ = L"WinSta0\\default";
        local_10d8._48_8_ = 0;
        local_10d8._56_8_ = (HINSTANCE)0x0;
        local_11a8._0_8_ = (HANDLE)0x0;
        local_11a8._8_8_ = (HANDLE)0x0;
        local_10d8._32_8_ = (wchar_t *)0x0;
        local_10d8._40_8_ = (LPCWSTR)0x0;
        local_10d8._64_8_ = (void *)0x0;
        local_10d8._72_8_ = (LPCWSTR)0x0;
        local_10d8._80_8_ = (HKEY)0x0;
        pvStack_1080 = (HANDLE)0x0;
        local_1188 = (LPWSTR ******)0x0;
        lStack_1180 = 0;
        FUN_140016170(&local_1188,L"wallpaper64.exe -control aws",0x1c);
        pWVar28 = (LPCWSTR)FUN_140005ee0(&local_1160);
        if (7 < *(ulonglong *)(pWVar28 + 0xc)) {
          pWVar28 = *(LPCWSTR *)pWVar28;
        }
        pppppppWVar33 = (LPWSTR ******)&local_1188;
        if (7 < uStack_1170) {
          pppppppWVar33 = local_1188;
        }
        BVar8 = CreateProcessW(L"wallpaper64.exe",(LPWSTR)pppppppWVar33,(LPSECURITY_ATTRIBUTES)0x0,
                               (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,pWVar28,
                               (LPSTARTUPINFOW)local_10d8,(LPPROCESS_INFORMATION)local_11a8);
        FUN_140016770(&local_1160);
        if (BVar8 != 0) {
          CloseHandle((HANDLE)local_11a8._0_8_);
          CloseHandle((HANDLE)local_11a8._8_8_);
        }
        if (7 < uStack_1170) {
          FUN_140016a90(&local_1188,local_1188);
        }
      }
      else {
        DAT_1404df540 = DAT_1404df540 | 0x2000;
      }
    }
    FUN_140007730();
    FUN_140084dd0(local_1130,0);
    uVar17 = FUN_140086de0(&DAT_1404df5e8,"general","");
    lVar19 = FUN_140087490(uVar17,&DAT_1404737fc,&DAT_140473800);
    if (lVar19 != 0) {
      uVar17 = FUN_140086de0(uVar17,&DAT_1404737fc,&DAT_140473800);
      FUN_140085520(local_1130,uVar17);
    }
    lVar19 = FUN_140086de0(local_1130,"anticrash","");
    if ((*(char *)(lVar19 + 8) == '\x05') && (cVar5 = FUN_140086300(lVar19), cVar5 != '\0')) {
      FUN_14000df80(local_1048);
      uVar17 = FUN_14000d140(&local_1048[0].dwPlatformId,"-restartapplocal -incremetal -process ");
      DVar11 = GetCurrentProcessId();
      FUN_14000e8f0(uVar17,DVar11);
      FUN_14000d140(&local_1048[0].dwPlatformId," -x64");
      lVar19 = *(longlong *)ThreadLocalStoragePointer;
      if ((*(int *)(lVar19 + 0x130) < DAT_1404e9040) &&
         (FUN_14028b140(&DAT_1404e9040), DAT_1404e9040 == -1)) {
        uVar17 = FUN_140005ee0(&local_1160);
        uVar17 = FUN_140005d20(uVar17,&DAT_140473850);
        uVar17 = FUN_140005d20(uVar17,"apputil32.exe");
        FUN_140016600(&DAT_1404e9048,uVar17);
        FUN_140016770(&local_1160);
        FUN_14028b410(FUN_140424090);
        _Init_thread_footer(&DAT_1404e9040);
      }
      if ((*(int *)(lVar19 + 0x130) < DAT_1404e9068) &&
         (FUN_14028b140(&DAT_1404e9068), DAT_1404e9068 == -1)) {
        FUN_14000dee0(local_1048,&DAT_1404e9070);
        FUN_14028b410(FUN_140424010);
        _Init_thread_footer(&DAT_1404e9068);
      }
      if ((*(int *)(lVar19 + 0x130) < DAT_1404e9090) &&
         (FUN_14028b140(&DAT_1404e9090), DAT_1404e9090 == -1)) {
        uVar17 = FUN_140005ee0(&local_1160);
        uVar17 = FUN_140005d20(uVar17,&DAT_140473850);
        FUN_140016600(&DAT_1404e9098,uVar17);
        FUN_140016770(&local_1160);
        FUN_14028b410(FUN_140423f90);
        _Init_thread_footer(&DAT_1404e9090);
      }
      DAT_1404e8b68 = &DAT_1404e9048;
      if (7 < DAT_1404e9060) {
        DAT_1404e8b68 = DAT_1404e9048;
      }
      pwVar26 = (wchar_t *)&DAT_1404e9070;
      if (7 < DAT_1404e9088) {
        pwVar26 = DAT_1404e9070;
      }
      DAT_1404e8b78 = &DAT_1404e9098;
      if (7 < DAT_1404e90b0) {
        DAT_1404e8b78 = DAT_1404e9098;
      }
      DAT_1404e8b70 = pwVar26;
      SetUnhandledExceptionFilter(FUN_1400076a0);
      FUN_140005b50(local_1048);
    }
    local_1198 = (wchar_t *)&DAT_0000000c;
    pwVar25 = (wchar_t *)((ulonglong)pwVar26 & 0xffffffffffffff00);
    uStack_1190 = 0xf;
    local_11a8[0] = s__updateuicmd_140473868[0];
    local_11a8[1] = s__updateuicmd_140473868[1];
    local_11a8[2] = s__updateuicmd_140473868[2];
    local_11a8[3] = s__updateuicmd_140473868[3];
    local_11a8[4] = s__updateuicmd_140473868[4];
    local_11a8[5] = s__updateuicmd_140473868[5];
    local_11a8[6] = s__updateuicmd_140473868[6];
    local_11a8[7] = s__updateuicmd_140473868[7];
    local_11a8._12_4_ = 0;
    local_11a8[8] = s__updateuicmd_140473868[8];
    local_11a8[9] = s__updateuicmd_140473868[9];
    local_11a8[10] = s__updateuicmd_140473868[10];
    local_11a8[0xb] = s__updateuicmd_140473868[0xb];
    cVar5 = FUN_14000dc20((int)s__updateuicmd_140473868._0_8_,local_11a8);
    if (cVar5 != '\0') {
      FUN_14000ef10(local_1048);
      puVar4 = DAT_1404e8b28;
      for (puVar18 = (undefined8 *)*DAT_1404e8b28; puVar18 != puVar4;
          puVar18 = (undefined8 *)*puVar18) {
        uVar35 = puVar18[4];
        puVar31 = puVar18 + 2;
        uVar36 = puVar18[5];
        _Size = 2;
        if (uVar35 < 2) {
          _Size = uVar35;
        }
        if (0xf < uVar36) {
          puVar31 = (undefined8 *)puVar18[2];
        }
        iVar7 = memcmp(puVar31,&DAT_140473878,_Size);
        if ((iVar7 == 0) && (1 < _Size)) {
          if (uVar36 < 0x10) {
            puVar31 = puVar18 + 2;
          }
          else {
            puVar31 = (undefined8 *)puVar18[2];
          }
          if ((uVar35 == 0xd) &&
             (iVar7 = memcmp(puVar31,"--disable-gpu",0xd), uVar35 = uStack_1158, iVar7 == 0)) {
            uStack_1158 = CONCAT71(uStack_1158._1_7_,5);
            uStack_1158._4_4_ = SUB84(uVar35,4);
            uStack_1158 = CONCAT44(uStack_1158._4_4_,(undefined4)uStack_1158) & 0xfffffffffffffeff;
            local_1140 = 0;
            local_1160 = (longlong *)((ulonglong)local_1160 & 0xffffffffffffff00);
            local_1150 = 0;
            uStack_1148 = 0;
            uVar17 = FUN_140086de0(local_1130,"uihardwareacceleration","");
            FUN_140085610(uVar17,&local_1160);
            FUN_140085440(&local_1160);
          }
          else {
            uVar17 = FUN_14000c990(&local_1048[0].dwPlatformId,&DAT_1404738a8);
            FUN_14000cbc0(uVar17,puVar18 + 2);
            if (puVar18[8] != 0) {
              uVar17 = FUN_14000c990(&local_1048[0].dwPlatformId,&DAT_1404738a8);
              FUN_14000cbc0(uVar17,puVar18 + 6);
            }
          }
        }
      }
      lStack_1180 = 0;
      local_1188 = (LPWSTR ******)0x0;
      local_1178 = 0;
      uStack_1170 = 0xf;
      FUN_140012960(local_1048[0].szCSDVersion + 2,local_11a8);
      uVar35 = 0xf;
      if ((wchar_t *)local_11a8._0_8_ != (wchar_t *)0x0) {
        FUN_14000f880(&local_1188,local_11a8._0_8_,local_11a8._8_8_);
        uVar35 = uStack_1170;
      }
      uVar36 = uStack_1158;
      uStack_1158 = CONCAT71(uStack_1158._1_7_,4);
      uStack_1158._4_4_ = SUB84(uVar36,4);
      uStack_1158 = CONCAT44(uStack_1158._4_4_,(undefined4)uStack_1158) | 0x100;
      local_1140 = 0;
      local_1150 = 0;
      uStack_1148 = 0;
      pppppppWVar33 = (LPWSTR ******)&local_1188;
      if (0xf < uVar35) {
        pppppppWVar33 = local_1188;
      }
      local_1160 = (longlong *)FUN_140084b30(pppppppWVar33,local_1178 & 0xffffffff);
      uVar17 = FUN_140086de0(local_1130,&DAT_1404738ac,&DAT_1404738b1);
      FUN_140085610(uVar17,&local_1160);
      FUN_140085440(&local_1160);
      if (0xf < uStack_1170) {
        uVar35 = uStack_1170 + 1;
        pppppppWVar33 = local_1188;
        if (0xfff < uVar35) {
          pppppppWVar33 = (LPWSTR ******)local_1188[-1];
          if (0x1f < (ulonglong)((longlong)local_1188 + (-8 - (longlong)pppppppWVar33)))
          goto LAB_14000b610;
          uVar35 = uStack_1170 + 0x28;
        }
        thunk_FUN_14028af80(pppppppWVar33,uVar35);
      }
      pwVar25 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar26 >> 8),1);
      FUN_1400056d0(local_1048);
    }
    pwVar26 = (wchar_t *)0x0;
    plVar20 = (longlong *)FUN_140086de0(local_1130,"steamlanguage","");
    pwVar15 = (wchar_t *)*plVar20;
    pwVar16 = pwVar26;
    if ((pwVar15 != (wchar_t *)0x0) && (pwVar16 = pwVar15, (*(uint *)(plVar20 + 1) >> 8 & 1) != 0))
    {
      pwVar16 = pwVar15 + 2;
    }
    local_10f8 = (char ******)0x0;
    ppppppcStack_10f0 = (char ******)0x0;
    local_1108 = (char *******)0x0;
    ppppppcStack_1100 = (char ******)0x0;
    sVar21 = strlen((char *)pwVar16);
    FUN_140017480(&local_1108,pwVar16,sVar21);
    local_1198 = (wchar_t *)&DAT_00000009;
    uStack_1190 = 0xf;
    local_11a8[0] = s__language_1404738c8[0];
    local_11a8[1] = s__language_1404738c8[1];
    local_11a8[2] = s__language_1404738c8[2];
    local_11a8[3] = s__language_1404738c8[3];
    local_11a8[4] = s__language_1404738c8[4];
    local_11a8[5] = s__language_1404738c8[5];
    local_11a8[6] = s__language_1404738c8[6];
    local_11a8[7] = s__language_1404738c8[7];
    local_11a8._9_7_ = 0;
    local_11a8[8] = s__language_1404738c8[8];
    cVar5 = FUN_14000dc20((int)s__language_1404738c8._0_8_,local_11a8);
    if (cVar5 == '\0') {
LAB_14000b066:
      bVar44 = false;
    }
    else {
      local_1198 = (wchar_t *)&DAT_00000009;
      pwVar43 = (wchar_t *)0x1;
      local_11a8[0] = s__language_1404738c8[0];
      local_11a8[1] = s__language_1404738c8[1];
      local_11a8[2] = s__language_1404738c8[2];
      local_11a8[3] = s__language_1404738c8[3];
      local_11a8[4] = s__language_1404738c8[4];
      local_11a8[5] = s__language_1404738c8[5];
      local_11a8[6] = s__language_1404738c8[6];
      local_11a8[7] = s__language_1404738c8[7];
      uStack_1190 = 0xf;
      local_11a8._9_7_ = 0;
      local_11a8[8] = s__language_1404738c8[8];
      lVar19 = FUN_14000db60((int)s__language_1404738c8._0_8_,&local_1188,local_11a8);
      if (*(longlong *)(lVar19 + 0x10) == 0) goto LAB_14000b066;
      local_1198 = (wchar_t *)&DAT_00000009;
      pwVar43 = (wchar_t *)0x3;
      local_11a8[0] = s__language_1404738c8[0];
      local_11a8[1] = s__language_1404738c8[1];
      local_11a8[2] = s__language_1404738c8[2];
      local_11a8[3] = s__language_1404738c8[3];
      local_11a8[4] = s__language_1404738c8[4];
      local_11a8[5] = s__language_1404738c8[5];
      local_11a8[6] = s__language_1404738c8[6];
      local_11a8[7] = s__language_1404738c8[7];
      uStack_1190 = 0xf;
      local_11a8._9_7_ = 0;
      local_11a8[8] = s__language_1404738c8[8];
      puVar18 = (undefined8 *)FUN_14000db60((int)s__language_1404738c8._0_8_,&local_1160,local_11a8)
      ;
      pppppppcVar22 = (char *******)&local_1108;
      if ((char ******)0xf < ppppppcStack_10f0) {
        pppppppcVar22 = local_1108;
      }
      ppppppcVar37 = (char ******)puVar18[2];
      if (0xf < (ulonglong)puVar18[3]) {
        puVar18 = (undefined8 *)*puVar18;
      }
      if ((ppppppcVar37 == local_10f8) &&
         ((ppppppcVar37 == (char ******)0x0 ||
          (iVar7 = memcmp(puVar18,pppppppcVar22,(size_t)ppppppcVar37), iVar7 == 0))))
      goto LAB_14000b066;
      bVar44 = true;
    }
    if (((ulonglong)pwVar43 & 2) != 0) {
      pwVar43 = (wchar_t *)(ulonglong)((uint)pwVar43 & 0xfffffffd);
      FUN_140017240(&local_1160);
    }
    if (((ulonglong)pwVar43 & 1) != 0) {
      FUN_140017240(&local_1188);
    }
    if (bVar44) {
      local_1198 = (wchar_t *)&DAT_00000009;
      uStack_1190 = 0xf;
      local_11a8[0] = s__language_1404738c8[0];
      local_11a8[1] = s__language_1404738c8[1];
      local_11a8[2] = s__language_1404738c8[2];
      local_11a8[3] = s__language_1404738c8[3];
      local_11a8[4] = s__language_1404738c8[4];
      local_11a8[5] = s__language_1404738c8[5];
      local_11a8[6] = s__language_1404738c8[6];
      local_11a8[7] = s__language_1404738c8[7];
      local_11a8._9_7_ = 0;
      local_11a8[8] = s__language_1404738c8[8];
      pppppppcVar22 =
           (char *******)FUN_14000db60((int)s__language_1404738c8._0_8_,&local_1160,local_11a8);
      if (&local_1108 != (char ********)pppppppcVar22) {
        if ((char ******)0xf < ppppppcStack_10f0) {
          ppppppcVar37 = (char ******)((longlong)ppppppcStack_10f0 + 1);
          pppppppcVar32 = local_1108;
          if ((char ******)0xfff < ppppppcVar37) {
            pppppppcVar32 = (char *******)local_1108[-1];
            if ((char *)0x1f < (char *)((longlong)local_1108 + (-8 - (longlong)pppppppcVar32)))
            goto LAB_14000b610;
            ppppppcVar37 = ppppppcStack_10f0 + 5;
          }
          thunk_FUN_14028af80(pppppppcVar32,ppppppcVar37);
        }
        local_1108 = (char *******)*pppppppcVar22;
        ppppppcStack_1100 = pppppppcVar22[1];
        local_10f8 = pppppppcVar22[2];
        ppppppcStack_10f0 = pppppppcVar22[3];
        pppppppcVar22[2] = (char ******)0x0;
        pppppppcVar22[3] = (char ******)0xf;
        *(undefined1 *)pppppppcVar22 = 0;
      }
      FUN_140017240(&local_1160);
      uVar35 = uStack_1158;
      uStack_1158 = CONCAT71(uStack_1158._1_7_,4);
      uStack_1158._4_4_ = SUB84(uVar35,4);
      uStack_1158 = CONCAT44(uStack_1158._4_4_,(undefined4)uStack_1158) | 0x100;
      local_1150 = 0;
      uStack_1148 = 0;
      pppppppcVar22 = (char *******)&local_1108;
      if ((char ******)0xf < ppppppcStack_10f0) {
        pppppppcVar22 = local_1108;
      }
      local_1140 = 0;
      local_1160 = (longlong *)FUN_140084b30(pppppppcVar22,(ulonglong)local_10f8 & 0xffffffff);
      uVar17 = FUN_140086de0(local_1130,"steamlanguage","");
      FUN_140085610(uVar17,&local_1160);
      FUN_140085440(&local_1160);
LAB_14000b1bb:
      uVar17 = FUN_140086de0(&DAT_1404df5e8,"general","");
      uVar17 = FUN_140086de0(uVar17,&DAT_1404737fc,&DAT_140473800);
      FUN_140085520(uVar17,local_1130);
      FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
    }
    else if ((char)pwVar25 != '\0') goto LAB_14000b1bb;
    pppppppcVar22 = (char *******)&local_1108;
    if ((char ******)0xf < ppppppcStack_10f0) {
      pppppppcVar22 = local_1108;
    }
    puVar18 = (undefined8 *)FUN_140086de0(local_1130,"language","");
    pwVar43 = (wchar_t *)*puVar18;
    pwVar25 = pwVar26;
    if ((pwVar43 != (wchar_t *)0x0) && (pwVar25 = pwVar43, (*(uint *)(puVar18 + 1) >> 8 & 1) != 0))
    {
      pwVar25 = pwVar43 + 2;
    }
    if ((pppppppcVar22 != (char *******)0x0) && (*(char *)pppppppcVar22 != '\0')) {
      DAT_1404e6d84 = FUN_1400982d0(pppppppcVar22);
    }
    iVar7 = FUN_1402c10d0(pwVar25,"default");
    if (((iVar7 != 0) || (pppppppcVar22 == (char *******)0x0)) ||
       (uVar45 = DAT_1404e6d84, *(char *)pppppppcVar22 == '\0')) {
      uVar45 = FUN_140098240(pwVar25);
    }
    DAT_1404e6d80 = uVar45;
    uVar17 = FUN_140085090(&local_1160,local_1130);
    FUN_140006060(uVar17);
    if ((char ******)0xf < ppppppcStack_10f0) {
      ppppppcVar37 = (char ******)((longlong)ppppppcStack_10f0 + 1);
      pppppppcVar22 = local_1108;
      if ((char ******)0xfff < ppppppcVar37) {
        pppppppcVar22 = (char *******)local_1108[-1];
        if ((char *)0x1f < (char *)((longlong)local_1108 + (-8 - (longlong)pppppppcVar22)))
        goto LAB_14000b610;
        ppppppcVar37 = ppppppcStack_10f0 + 5;
      }
      thunk_FUN_14028af80(pppppppcVar22,ppppppcVar37);
    }
    local_10f8 = (char ******)0x0;
    ppppppcStack_10f0 = (char ******)0xf;
    local_1108 = (char *******)((ulonglong)local_1108 & 0xffffffffffffff00);
    FUN_140085440(local_1130);
    uVar3 = DAT_1404df540;
    pvVar23 = GetCurrentProcess();
    SetPriorityClass(pvVar23,0x80);
    SetProcessDefaultLayout(0);
    SetCurrentProcessExplicitAppUserModelID(L"KristjanSkutta.WallpaperEngine");
    DVar11 = 0;
    if ((uVar3 >> 0xc & 1) == 0) {
      DVar12 = DVar11;
      if (DAT_1404e8b60 == (HANDLE)0x0) {
        SetLastError(0);
        pvVar23 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,0,L"cxWallpaperEngineGlobalMutex");
        DVar12 = GetLastError();
        DAT_1404e8b60 = pvVar23;
      }
      if ((DAT_1404e8b60 != (HANDLE)0x0) && (DVar12 == 0xb7)) {
        ReleaseMutex(DAT_1404e8b60);
        DAT_1404e8b60 = (HANDLE)0x0;
        DVar11 = 1;
      }
    }
    if (DAT_1404e52b8 == 2) {
      FUN_140098b00("Application start.\nVersion: %s (%s)\n\n","2.8.42","2026-06-29 14:36:02");
      puVar18 = (undefined8 *)FUN_140005ee0(&local_1160);
      if (7 < (ulonglong)puVar18[3]) {
        puVar18 = (undefined8 *)*puVar18;
      }
      FUN_140098b00("Working dir: %S\n",puVar18);
      FUN_140016770(&local_1160);
    }
    uVar17 = FUN_140005ee0(&local_1160);
    FUN_140016600(local_11a8,uVar17);
    if (uStack_1190 - (longlong)local_1198 < 5) {
      plVar20 = (longlong *)
                FUN_140016310(local_11a8,5,(undefined1)local_res18[0].s.LowPart,L"\\bin\\");
    }
    else {
      pwVar25 = (wchar_t *)((longlong)local_1198 + 5);
      pwVar43 = (wchar_t *)local_11a8;
      if (7 < uStack_1190) {
        pwVar43 = (wchar_t *)local_11a8._0_8_;
      }
      pwVar15 = pwVar43 + (longlong)local_1198;
      local_1198 = pwVar25;
      FUN_1404210f0(pwVar15,L"\\bin\\",10);
      plVar20 = (longlong *)local_11a8;
      pwVar43[(longlong)pwVar25] = L'\0';
    }
    local_1178 = 0;
    local_1188 = (LPWSTR ******)0x0;
    lStack_1180 = 0;
    uStack_1170 = 0;
    local_1188 = (LPWSTR ******)*plVar20;
    lStack_1180 = plVar20[1];
    local_1178 = plVar20[2];
    uStack_1170 = plVar20[3];
    plVar20[2] = 0;
    plVar20[3] = 7;
    *(undefined2 *)plVar20 = 0;
    if (7 < uStack_1190) {
      uVar35 = uStack_1190 * 2 + 2;
      pwVar43 = (wchar_t *)local_11a8._0_8_;
      if (0xfff < uVar35) {
        pwVar43 = *(wchar_t **)(local_11a8._0_8_ + -8);
        if ((char *)0x1f < (char *)(local_11a8._0_8_ + (-8 - (longlong)pwVar43)))
        goto LAB_14000b610;
        uVar35 = uStack_1190 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pwVar43,uVar35);
    }
    local_1198 = (wchar_t *)0x0;
    uStack_1190 = 7;
    local_11a8._0_8_ = local_11a8._0_8_ & 0xffffffffffff0000;
    FUN_140016770(&local_1160);
    FUN_140005970(&local_1188,0x5c);
    pppppppWVar33 = (LPWSTR ******)&local_1188;
    if (7 < uStack_1170) {
      pppppppWVar33 = local_1188;
    }
    AddDllDirectory(pppppppWVar33);
    QueryPerformanceCounter(local_res18);
    FUN_1402c97cc(local_res18[0].s.LowPart);
    if (7 < uStack_1170) {
      uVar35 = uStack_1170 * 2 + 2;
      pppppppWVar33 = local_1188;
      if (0xfff < uVar35) {
        pppppppWVar33 = (LPWSTR ******)local_1188[-1];
        if (0x1f < (ulonglong)((longlong)local_1188 + (-8 - (longlong)pppppppWVar33)))
        goto LAB_14000b610;
        uVar35 = uStack_1170 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppppWVar33,uVar35);
    }
    puVar41 = auStackY_11f8;
    if ((DVar11 == 0) || (puVar41 = auStackY_11f8, (DAT_1404df540 & 0x1000) != 0))
    goto LAB_14000b6fc;
    local_1198 = (wchar_t *)0x0;
    uStack_1190 = 0;
    local_11a8._0_8_ = (wchar_t *)0x0;
    local_11a8._8_8_ = (wchar_t *)0x0;
    uVar45 = FUN_140017480(local_11a8,"-silent",7);
    cVar5 = FUN_14000dc20(uVar45,local_11a8);
    if ((cVar5 != '\0') && (DVar11 == 1)) goto LAB_14000c7aa;
    pHVar24 = FindWindowW(L"WPEEventWindow",(LPCWSTR)0x0);
    if (pHVar24 == (HWND)0x0) {
      pwVar25 = (wchar_t *)CreateToolhelp32Snapshot(2,0);
      puVar40 = auStackY_11f8;
      if (pwVar25 != (wchar_t *)0xffffffffffffffff) goto LAB_14000b617;
      goto LAB_14000b6d4;
    }
    local_1188 = (LPWSTR ******)0x0;
    local_1198 = (wchar_t *)0x0;
    uStack_1190 = 0;
    local_11a8._0_8_ = (HANDLE)0x0;
    local_11a8._8_8_ = (HANDLE)0x0;
    uVar45 = FUN_140017480(local_11a8,"-control",8);
    cVar6 = FUN_14000dc20(uVar45,local_11a8);
    if (cVar6 != '\0') {
      uVar17 = FUN_140008270(pHVar24);
      return uVar17;
    }
    local_1198 = (wchar_t *)0x0;
    uStack_1190 = 0;
    local_11a8._0_8_ = (wchar_t *)0x0;
    local_11a8._8_8_ = (wchar_t *)0x0;
    uVar45 = FUN_140017480(local_11a8,"-language",9);
    cVar6 = FUN_14000dc20(uVar45,local_11a8);
    if (cVar6 != '\0') {
      local_1150 = 0;
      uStack_1148 = 0;
      local_1160 = (longlong *)0x0;
      uStack_1158 = 0;
      uVar45 = FUN_140017480(&local_1160,"-language",9);
      FUN_14000db60(uVar45,local_11a8,&local_1160);
      if (local_1198 != (wchar_t *)0x0) {
        pwVar25 = (wchar_t *)local_11a8;
        if (0xf < uStack_1190) {
          pwVar25 = (wchar_t *)local_11a8._0_8_;
        }
        iVar7 = FUN_1400982d0(pwVar25);
        SendMessageTimeoutW(pHVar24,0x111,0x9c5a,(longlong)iVar7,0,2000,(PDWORD_PTR)&local_1188);
      }
      FUN_140017240(local_11a8);
    }
    LVar27 = SendMessageTimeoutW(pHVar24,0x111,0x9c59,0,0,2000,(PDWORD_PTR)&local_1188);
    if ((LVar27 == 0) || (local_1188 == (LPWSTR ******)0xb3b0)) {
      iVar7 = 1;
      if ((cVar5 == '\0') && (local_1188 != (LPWSTR ******)0xb3b0)) {
        pWVar28 = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,local_11a8,"core_msgboxtitle_error");
        if (7 < *(ulonglong *)(pWVar28 + 0xc)) {
          pWVar28 = *(LPCWSTR *)pWVar28;
        }
        pWVar29 = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,&local_1160,
                                         "core_msgbox_init_secondinstance_ask_quit");
        if (7 < *(ulonglong *)(pWVar29 + 0xc)) {
          pWVar29 = *(LPCWSTR *)pWVar29;
        }
        iVar7 = MessageBoxW((HWND)0x0,pWVar29,pWVar28,0x31);
        FUN_140016770(&local_1160);
        FUN_140016770(local_11a8);
      }
      if (iVar7 != 1) goto LAB_14000c7aa;
      local_res18[0].s.LowPart = 0;
      SetLastError(0);
      GetWindowThreadProcessId(pHVar24,(LPDWORD)&local_res18[0].QuadPart);
      if ((local_res18[0].s.LowPart == 0) ||
         (pvVar23 = OpenProcess(0x1fffff,1,local_res18[0].s.LowPart), pvVar23 == (HANDLE)0x0)) {
        DVar11 = GetLastError();
        pwVar26 = (wchar_t *)(ulonglong)DVar11;
      }
      else {
        BVar8 = TerminateProcess(pvVar23,0);
        if (BVar8 == 1) {
          WaitForSingleObject(pvVar23,4000);
          FUN_140007b60(extraout_XMM0_Da_03,0,1);
          CloseHandle(pvVar23);
        }
        else {
          DVar11 = GetLastError();
          pwVar26 = (wchar_t *)(ulonglong)DVar11;
          CloseHandle(pvVar23);
        }
      }
      if ((int)pwVar26 != 0) {
        local_1198 = (wchar_t *)0x0;
        local_11a8._8_8_ = (HANDLE)0x0;
        local_11a8._0_8_ = (HANDLE)0x0;
        uStack_1190 = 7;
        FUN_140014fa0(pwVar26,local_11a8);
        FUN_14000df80(local_1048);
        uVar17 = FUN_140097640(&DAT_1404e6d80,&local_1160,"core_msgbox_init_secondinstance_failed");
        uVar17 = FUN_14000d440(&local_1048[0].dwPlatformId,uVar17);
        uVar17 = FUN_14000d440(uVar17,local_11a8);
        uVar17 = FUN_14000d140(uVar17,&DAT_140473ef8);
        uVar17 = FUN_14000ea80(uVar17,pwVar26);
        FUN_14000d140(uVar17,&DAT_140473ef4);
        FUN_140016770(&local_1160);
        pWVar28 = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,local_1130,"core_msgboxtitle_error");
        if (7 < *(ulonglong *)(pWVar28 + 0xc)) {
          pWVar28 = *(LPCWSTR *)pWVar28;
        }
        pWVar29 = (LPCWSTR)FUN_14000dee0(local_1048,&local_1160);
        if (7 < *(ulonglong *)(pWVar29 + 0xc)) {
          pWVar29 = *(LPCWSTR *)pWVar29;
        }
        MessageBoxW((HWND)0x0,pWVar29,pWVar28,0x30);
        FUN_140016770(&local_1160);
        FUN_140016770(local_1130);
        FUN_140005b50(local_1048);
        FUN_140016770(local_11a8);
        return 1;
      }
      goto LAB_14000b6ee;
    }
LAB_14000c7aa:
    uVar17 = 0;
  }
  else {
    do {
      cVar5 = (char)*param_3;
      if (cVar5 == '\0') break;
      if (pwVar25 == (wchar_t *)0x0) {
        if (cVar5 != ' ') {
          bVar44 = cVar5 == '\"';
          if ((bVar44) ||
             (iVar7 = FUN_1402c9e60(param_3,"RAW~(",5), uVar45 = extraout_XMM0_Da, iVar7 != 0)) {
            bVar2 = false;
            pwVar25 = param_3;
            if (cVar5 == '\"') {
              pwVar25 = (wchar_t *)((longlong)param_3 + 1);
            }
          }
          else {
            pwVar25 = (wchar_t *)((longlong)param_3 + 5);
            bVar2 = true;
            param_3 = param_3 + 2;
          }
        }
      }
      else {
        if ((bVar44) && (cVar5 == '\"')) {
          local_1178 = 0;
          lStack_1180 = 0;
          local_1188 = (LPWSTR ******)0x0;
          uStack_1170 = 0xf;
          FUN_14000f880(&local_1188,pwVar25,(longlong)param_3 - (longlong)pwVar25);
          uVar45 = FUN_14000cde0(local_11a8,&local_1188);
          bVar44 = false;
        }
        else if ((bVar2) &&
                (iVar7 = FUN_1402c9e60(param_3,")~END",5), uVar45 = extraout_XMM0_Da_00, iVar7 == 0)
                ) {
          local_1178 = 0;
          lStack_1180 = 0;
          local_1188 = (LPWSTR ******)0x0;
          uStack_1170 = 0xf;
          FUN_14000f880(&local_1188,pwVar25,(longlong)param_3 - (longlong)pwVar25);
          uVar45 = FUN_14000cde0(local_11a8,&local_1188);
          bVar2 = false;
          param_3 = param_3 + 2;
        }
        else {
          if (((bVar44 || bVar2) || ((char)*param_3 == '\0')) || ((char)*param_3 != ' '))
          goto LAB_14000a41c;
          local_1178 = 0;
          lStack_1180 = 0;
          local_1188 = (LPWSTR ******)0x0;
          uStack_1170 = 0xf;
          FUN_14000f880(&local_1188,pwVar25,(longlong)param_3 - (longlong)pwVar25);
          uVar45 = FUN_14000cde0(local_11a8,&local_1188);
        }
        pwVar25 = (wchar_t *)0x0;
        if (0xf < uStack_1170) {
          uVar35 = uStack_1170 + 1;
          pppppppWVar33 = local_1188;
          if (0xfff < uVar35) {
            pppppppWVar33 = (LPWSTR ******)local_1188[-1];
            pwVar25 = pwVar43;
            if (0x1f < (ulonglong)((longlong)local_1188 + (-8 - (longlong)pppppppWVar33)))
            goto LAB_14000b610;
            uVar35 = uStack_1170 + 0x28;
          }
          uVar45 = thunk_FUN_14028af80(pppppppWVar33,uVar35);
          pwVar25 = (wchar_t *)0x0;
        }
      }
LAB_14000a41c:
      param_3 = (wchar_t *)((longlong)param_3 + 1);
    } while (param_3 != (wchar_t *)0x0);
    if ((pwVar25 == (wchar_t *)0x0) || (param_3 <= pwVar25)) goto LAB_14000a4a7;
    local_1178 = 0;
    lStack_1180 = 0;
    local_1188 = (LPWSTR ******)0x0;
    uStack_1170 = 0xf;
    FUN_14000f880(&local_1188,pwVar25,(longlong)param_3 - (longlong)pwVar25);
    uVar45 = FUN_14000cde0(local_11a8,&local_1188);
    if (uStack_1170 < 0x10) goto LAB_14000a4a7;
    uVar35 = uStack_1170 + 1;
    pppppppWVar33 = local_1188;
    if (uVar35 < 0x1000) {
LAB_14000a4a2:
      uVar45 = thunk_FUN_14028af80(pppppppWVar33,uVar35);
      goto LAB_14000a4a7;
    }
    pppppppWVar33 = (LPWSTR ******)local_1188[-1];
    if ((ulonglong)((longlong)local_1188 + (-8 - (longlong)pppppppWVar33)) < 0x20) {
      uVar35 = uStack_1170 + 0x28;
      goto LAB_14000a4a2;
    }
LAB_14000b610:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar39 = auStackY_11f0;
LAB_14000b617:
    pwVar26 = (wchar_t *)0x0;
    local_1048[0].dwOSVersionInfoSize = 0x130;
    *(undefined8 *)(puVar39 + -8) = 0x14000b631;
    iVar7 = Process32First(pwVar25,local_1048);
    puVar40 = puVar39;
    if (iVar7 == 0) {
      *(undefined8 *)(puVar39 + -8) = 0x14000b63e;
      CloseHandle(pwVar25);
LAB_14000b6d4:
      *(undefined8 *)(puVar40 + -8) = 0x14000b6e0;
      FUN_140098760("Failed to terminate existing process without window. STARTING ANYWAY.\n");
      if (pwVar26 != (wchar_t *)0x0) goto LAB_14000b6e5;
    }
    else {
      *(undefined8 *)(puVar39 + -8) = 0x14000b64f;
      DVar11 = GetCurrentProcessId();
      do {
        if (local_1048[0].dwMinorVersion != DVar11) {
          *(undefined8 *)(puVar39 + -8) = 0x14000b66c;
          iVar7 = FUN_1402c10d0(local_1048[0].szCSDVersion + 0xc,"wallpaper32.exe");
          if (iVar7 != 0) {
            *(undefined8 *)(puVar39 + -8) = 0x14000b683;
            iVar7 = FUN_1402c10d0(local_1048[0].szCSDVersion + 0xc,"wallpaper64.exe");
            if (iVar7 != 0) goto LAB_14000b6a3;
          }
          if (pwVar26 == (wchar_t *)0x0) {
            *(undefined8 *)(puVar39 + -8) = 0x14000b6a0;
            pwVar26 = OpenProcess(0x1fffff,0,local_1048[0].dwMinorVersion);
          }
        }
LAB_14000b6a3:
        *(undefined8 *)(puVar39 + -8) = 0x14000b6b3;
        iVar7 = Process32Next(pwVar25,local_1048);
      } while (iVar7 != 0);
      *(undefined8 *)(puVar39 + -8) = 0x14000b6c0;
      CloseHandle(pwVar25);
      if (pwVar26 == (wchar_t *)0x0) goto LAB_14000b6d4;
      *(undefined8 *)(puVar39 + -8) = 0x14000b6d0;
      BVar8 = TerminateProcess(pwVar26,0);
      if (BVar8 == 0) goto LAB_14000b6d4;
LAB_14000b6e5:
      *(undefined8 *)(puVar40 + -8) = 0x14000b6ee;
      CloseHandle(pwVar26);
    }
LAB_14000b6ee:
    *(undefined8 *)(puVar40 + -8) = 0x14000b6f5;
    DAT_1404e8b60 = (HANDLE)FUN_140007b00(0);
    puVar41 = puVar40;
LAB_14000b6fc:
    local_1150 = 0;
    uStack_1148 = 0;
    local_1160 = (longlong *)0x0;
    uStack_1158 = 0;
    *(undefined8 *)(puVar41 + -8) = 0x14000b721;
    uVar45 = FUN_140017480(&local_1160,"-control",8);
    *(undefined8 *)(puVar41 + -8) = 0x14000b72a;
    cVar5 = FUN_14000dc20(uVar45,&local_1160);
    if (cVar5 == '\0') {
LAB_14000bb40:
      local_1150 = 0;
      uStack_1148 = 0;
      local_1160 = (longlong *)0x0;
      uStack_1158 = 0;
      *(undefined8 *)(puVar41 + -8) = 0x14000bb65;
      uVar45 = FUN_140017480(&local_1160,"-silent",7);
      *(undefined8 *)(puVar41 + -8) = 0x14000bb6e;
      cVar5 = FUN_14000dc20(uVar45,&local_1160);
      if (((int)DAT_1404e5290 < 7) && (cVar5 == '\0')) {
        *(undefined8 *)(puVar41 + -8) = 0x14000bb95;
        pWVar28 = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,&local_1160,"core_msgboxtitle_error");
        if (7 < *(ulonglong *)(pWVar28 + 0xc)) {
          pWVar28 = *(LPCWSTR *)pWVar28;
        }
        *(undefined8 *)(puVar41 + -8) = 0x14000bbb9;
        pWVar29 = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,local_1130,"core_msgbox_below_win_7");
        if (7 < *(ulonglong *)(pWVar29 + 0xc)) {
          pWVar29 = *(LPCWSTR *)pWVar29;
        }
        *(undefined8 *)(puVar41 + -8) = 0x14000bbd7;
        MessageBoxW((HWND)0x0,pWVar29,pWVar28,0x10);
        *(undefined8 *)(puVar41 + -8) = 0x14000bbe0;
        FUN_140016770(local_1130);
        *(undefined8 *)(puVar41 + -8) = 0x14000bbe9;
        FUN_140016770(&local_1160);
      }
      *(undefined8 *)(puVar41 + 0x70) = 0;
      *(undefined8 *)(puVar41 + 0x78) = 0;
      *(undefined4 *)(puVar41 + 0x70) = 0x10;
      *(undefined8 *)(puVar41 + -8) = 0x14000bc11;
      BVar8 = SystemParametersInfoW(0x42,0x10,puVar41 + 0x70,0);
      if ((BVar8 != 1) || (bVar44 = true, (puVar41[0x74] & 1) == 0)) {
        bVar44 = false;
        local_res18[0].s.LowPart = 0;
        if ((int)DAT_1404e5290 < 10) goto LAB_14000bc3a;
LAB_14000bc82:
        local_1168[0] = 1;
        *(undefined8 *)(puVar41 + -8) = 0x14000bc93;
        HVar14 = DwmIsCompositionEnabled((BOOL *)local_1168);
        if ((HVar14 < 0) || (local_1168[0] == 0)) {
          iVar7 = 2;
          goto LAB_14000bca6;
        }
LAB_14000c15b:
        if ((DAT_1404df540 & 0x1000) == 0) {
          *(undefined1 **)(puVar41 + 0x20) = puVar41 + 0x70;
          *(undefined8 *)(puVar41 + -8) = 0x14000c192;
          LVar13 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Software\\WallpaperEngine\\",0,0xf003f,
                                 *(PHKEY *)(puVar41 + 0x20));
          if (LVar13 == 0) {
            *(undefined4 **)(puVar41 + 0x28) = local_1138;
            local_1138[0] = 4;
            *(LARGE_INTEGER **)(puVar41 + 0x20) = local_res18;
            local_1168[0] = 4;
            *(undefined8 *)(puVar41 + -8) = 0x14000c1d6;
            LVar13 = RegQueryValueExW(*(HKEY *)(puVar41 + 0x70),L"faultyShutdown",(LPDWORD)0x0,
                                      local_1168,*(LPBYTE *)(puVar41 + 0x20),
                                      *(LPDWORD *)(puVar41 + 0x28));
            if ((LVar13 == 0) && (local_res18[0].s.LowPart == 1)) {
              *(undefined8 *)(puVar41 + -8) = 0x14000c1f6;
              FUN_140084dd0(local_1130,0);
              *(undefined8 *)(puVar41 + -8) = 0x14000c210;
              uVar17 = FUN_140086de0(&DAT_1404df5e8,"general","");
              *(undefined8 *)(puVar41 + -8) = 0x14000c229;
              lVar19 = FUN_140087490(uVar17,&DAT_1404737fc,&DAT_140473800);
              if (lVar19 != 0) {
                *(undefined8 *)(puVar41 + -8) = 0x14000c244;
                uVar17 = FUN_140086de0(uVar17,&DAT_1404737fc,&DAT_140473800);
                *(undefined8 *)(puVar41 + -8) = 0x14000c250;
                FUN_140085520(local_1130,uVar17);
              }
              *(undefined8 *)(puVar41 + -8) = 0x14000c267;
              lVar19 = FUN_140086de0(local_1130,"safemode","");
              if (*(char *)(lVar19 + 8) == '\x05') {
                *(undefined8 *)(puVar41 + -8) = 0x14000c275;
                cVar5 = FUN_140086300(lVar19);
                if (cVar5 != '\0') goto LAB_14000c279;
              }
              else {
LAB_14000c279:
                local_1150 = 0;
                uStack_1148 = 0;
                local_1160 = (longlong *)0x0;
                uStack_1158 = 0;
                *(undefined8 *)(puVar41 + -8) = 0x14000c29e;
                uVar45 = FUN_140017480(&local_1160,"-nowallpapers",0xd);
                *(undefined8 *)(puVar41 + -8) = 0x14000c2a7;
                FUN_14000dad0(uVar45,&local_1160);
                local_1150 = 0;
                uStack_1148 = 0;
                local_1160 = (longlong *)0x0;
                uStack_1158 = 0;
                *(undefined8 *)(puVar41 + -8) = 0x14000c2cc;
                uVar45 = FUN_140017480(&local_1160,"-showbrowse",0xb);
                *(undefined8 *)(puVar41 + -8) = 0x14000c2d5;
                FUN_14000dad0(uVar45,&local_1160);
              }
              *(undefined8 *)(puVar41 + -8) = 0x14000c2de;
              FUN_140085440(local_1130);
            }
            *(undefined4 *)(puVar41 + 0x28) = 4;
            *(LARGE_INTEGER **)(puVar41 + 0x20) = local_res18;
            local_res18[0].s.LowPart = 1;
            *(undefined8 *)(puVar41 + -8) = 0x14000c317;
            RegSetValueExW(*(HKEY *)(puVar41 + 0x70),L"faultyShutdown",0,4,
                           *(BYTE **)(puVar41 + 0x20),*(DWORD *)(puVar41 + 0x28));
            *(undefined4 **)(puVar41 + 0x28) = local_1138;
            local_res18[0].s.LowPart = 0;
            *(LARGE_INTEGER **)(puVar41 + 0x20) = local_res18;
            *(undefined8 *)(puVar41 + -8) = 0x14000c34c;
            LVar13 = RegQueryValueExW(*(HKEY *)(puVar41 + 0x70),L"hideTrayIcon",(LPDWORD)0x0,
                                      local_1168,*(LPBYTE *)(puVar41 + 0x20),
                                      *(LPDWORD *)(puVar41 + 0x28));
            if ((LVar13 == 0) && (local_res18[0].s.LowPart == 1)) {
              DAT_1404df540 = DAT_1404df540 | 1;
            }
            *(undefined4 **)(puVar41 + 0x28) = local_1138;
            *(LARGE_INTEGER **)(puVar41 + 0x20) = local_res18;
            *(undefined8 *)(puVar41 + -8) = 0x14000c38e;
            LVar13 = RegQueryValueExW(*(HKEY *)(puVar41 + 0x70),L"disablePlugins",(LPDWORD)0x0,
                                      local_1168,*(LPBYTE *)(puVar41 + 0x20),
                                      *(LPDWORD *)(puVar41 + 0x28));
            if ((LVar13 == 0) && (local_res18[0].s.LowPart == 1)) {
              *(undefined8 *)(puVar41 + -8) = 0x14000c3b5;
              RegDeleteValueW(*(HKEY *)(puVar41 + 0x70),L"disablePlugins");
              *(undefined8 *)(puVar41 + -8) = 0x14000c3c0;
              FUN_140084dd0(local_1130,0);
              *(undefined8 *)(puVar41 + -8) = 0x14000c3da;
              uVar17 = FUN_140086de0(&DAT_1404df5e8,"general","");
              *(undefined8 *)(puVar41 + -8) = 0x14000c3f3;
              lVar19 = FUN_140087490(uVar17,&DAT_1404737fc,&DAT_140473800);
              if (lVar19 != 0) {
                *(undefined8 *)(puVar41 + -8) = 0x14000c40e;
                uVar17 = FUN_140086de0(uVar17,&DAT_1404737fc,&DAT_140473800);
                *(undefined8 *)(puVar41 + -8) = 0x14000c41a;
                FUN_140085520(local_1130,uVar17);
              }
              *(undefined8 *)(puVar41 + -8) = 0x14000c431;
              lVar19 = FUN_140087490(local_1130,"plugins","");
              if (lVar19 == 0) {
                local_1150 = 0;
                *(undefined8 *)(puVar41 + -8) = 0x14000c44b;
                FUN_140086ca0(&local_1160,7,0);
                *(undefined8 *)(puVar41 + -8) = 0x14000c455;
                plVar20 = (longlong *)FUN_14028af20(0x10);
                *plVar20 = 0;
                plVar20[1] = 0;
                *(undefined8 *)(puVar41 + -8) = 0x14000c469;
                lVar19 = FUN_14028af20(0x58);
                *(longlong *)lVar19 = lVar19;
                *(longlong *)(lVar19 + 8) = lVar19;
                *(longlong *)(lVar19 + 0x10) = lVar19;
                *(undefined2 *)(lVar19 + 0x18) = 0x101;
                *plVar20 = lVar19;
                *(undefined8 *)(puVar41 + -8) = 0x14000c498;
                local_1160 = plVar20;
                uVar17 = FUN_140086de0(local_1130,"plugins","");
                *(undefined8 *)(puVar41 + -8) = 0x14000c4a4;
                FUN_140085610(uVar17,&local_1160);
                *(undefined8 *)(puVar41 + -8) = 0x14000c4ad;
                FUN_140085440(&local_1160);
              }
              *(undefined8 *)(puVar41 + -8) = 0x14000c4c4;
              lVar19 = FUN_140086de0(local_1130,"plugins","");
              if (*(char *)(lVar19 + 8) == '\a') {
                *(undefined8 *)(puVar41 + -8) = 0x14000c4e7;
                lVar30 = FUN_140087490(lVar19,"ledextensions","");
                if (lVar30 == 0) {
                  local_1150 = 0;
                  *(undefined8 *)(puVar41 + -8) = 0x14000c501;
                  FUN_140086ca0(&local_1160,7,0);
                  *(undefined8 *)(puVar41 + -8) = 0x14000c50b;
                  plVar20 = (longlong *)FUN_14028af20(0x10);
                  *plVar20 = 0;
                  plVar20[1] = 0;
                  *(undefined8 *)(puVar41 + -8) = 0x14000c51f;
                  lVar30 = FUN_14028af20(0x58);
                  *(longlong *)lVar30 = lVar30;
                  *(longlong *)(lVar30 + 8) = lVar30;
                  *(longlong *)(lVar30 + 0x10) = lVar30;
                  *(undefined2 *)(lVar30 + 0x18) = 0x101;
                  *plVar20 = lVar30;
                  *(undefined8 *)(puVar41 + -8) = 0x14000c54d;
                  local_1160 = plVar20;
                  uVar17 = FUN_140086de0(lVar19,"ledextensions","");
                  *(undefined8 *)(puVar41 + -8) = 0x14000c559;
                  FUN_140085610(uVar17,&local_1160);
                  *(undefined8 *)(puVar41 + -8) = 0x14000c562;
                  FUN_140085440(&local_1160);
                }
                *(undefined8 *)(puVar41 + -8) = 0x14000c578;
                lVar19 = FUN_140086de0(lVar19,"ledextensions","");
                if (*(char *)(lVar19 + 8) == '\a') {
                  local_1150 = 0;
                  *(undefined8 *)(puVar41 + -8) = 0x14000c596;
                  FUN_140086ca0(&local_1160,5,0);
                  local_1160 = (longlong *)((ulonglong)local_1160 & 0xffffffffffffff00);
                  *(undefined8 *)(puVar41 + -8) = 0x14000c5b0;
                  uVar17 = FUN_140086de0(lVar19,"enabled","");
                  *(undefined8 *)(puVar41 + -8) = 0x14000c5bc;
                  FUN_140085610(uVar17,&local_1160);
                  *(undefined8 *)(puVar41 + -8) = 0x14000c5c5;
                  FUN_140085440(&local_1160);
                }
              }
              *(undefined8 *)(puVar41 + -8) = 0x14000c5df;
              uVar17 = FUN_140086de0(&DAT_1404df5e8,"general","");
              *(undefined8 *)(puVar41 + -8) = 0x14000c5f5;
              uVar17 = FUN_140086de0(uVar17,&DAT_1404737fc,&DAT_140473800);
              *(undefined8 *)(puVar41 + -8) = 0x14000c601;
              FUN_140085520(uVar17,local_1130);
              *(undefined8 *)(puVar41 + -8) = 0x14000c60d;
              FUN_140041250(&PTR_s_wallpaperconfig_1404df5a0);
              *(undefined8 *)(puVar41 + -8) = 0x14000c616;
              FUN_140085440(local_1130);
            }
            *(undefined8 *)(puVar41 + -8) = 0x14000c621;
            RegCloseKey(*(HKEY *)(puVar41 + 0x70));
          }
        }
        lVar19 = cpuid_Version_info(1);
        uVar45 = *(undefined4 *)(lVar19 + 8);
        if ((*(uint *)(lVar19 + 0xc) & 0x980201) == 0x980201) {
          DAT_1404df548 = 0x40;
LAB_14000c646:
          *(undefined8 *)(puVar41 + -8) = 0x14000c650;
          DAT_1404e52d8 = (undefined8 *)FUN_14028af20(0x18,uVar45);
          ppuVar34 = &PTR_FUN_140488440;
        }
        else {
          if (DAT_1404df548 == 0x40) goto LAB_14000c646;
          *(undefined8 *)(puVar41 + -8) = 0x14000c866;
          DAT_1404e52d8 = (undefined8 *)FUN_14028af20(0x18,uVar45);
          ppuVar34 = &PTR_FUN_140488468;
        }
        DAT_1404e52d8[1] = 0x3f000000;
        *DAT_1404e52d8 = ppuVar34;
        DAT_1404e52d8[2] = 0x40000000;
        *(undefined8 *)(puVar41 + -8) = 0x14000c67e;
        CoInitializeEx((LPVOID)0x0,6);
        local_10e8 = 1;
        local_10e4 = 4;
        *(undefined8 *)(puVar41 + -8) = 0x14000c693;
        pvVar23 = GetCurrentProcess();
        *(undefined8 *)(puVar41 + -8) = 0x14000c6ab;
        SetProcessInformation(pvVar23,4,&local_10e8,0xc);
        *(undefined8 *)(puVar41 + -8) = 0x14000c6b0;
        FUN_14001eae0();
        if ((DAT_1404df540 & 0x1000) == 0) {
          *(undefined8 *)(puVar41 + -8) = 0x14000c6d5;
          LVar13 = RegOpenKeyW((HKEY)0xffffffff80000001,L"Software\\WallpaperEngine\\",
                               (PHKEY)(puVar41 + 0x70));
          if (LVar13 == 0) {
            *(undefined4 *)(puVar41 + 0x28) = 4;
            *(LARGE_INTEGER **)(puVar41 + 0x20) = local_res18;
            local_res18[0].s.LowPart = 0;
            *(undefined8 *)(puVar41 + -8) = 0x14000c70f;
            RegSetValueExW(*(HKEY *)(puVar41 + 0x70),L"faultyShutdown",0,4,
                           *(BYTE **)(puVar41 + 0x20),*(DWORD *)(puVar41 + 0x28));
            *(undefined8 *)(puVar41 + -8) = 0x14000c71a;
            RegCloseKey(*(HKEY *)(puVar41 + 0x70));
          }
        }
        *(undefined8 *)(puVar41 + -8) = 0x14000c720;
        CoUninitialize();
        if (DAT_1404e7e8d != '\0') {
          *(undefined8 *)(puVar41 + -8) = 0x14000c72f;
          MFShutdown();
          DAT_1404e7e8d = '\0';
        }
        *(undefined8 *)(puVar41 + -8) = 0x14000c742;
        FUN_140015140(&DAT_1404df730);
        if (DAT_1404e52c8 != (HMODULE)0x0) {
          *(undefined8 *)(puVar41 + -8) = 0x14000c754;
          FreeLibrary(DAT_1404e52c8);
        }
        DAT_1404e52c8 = (HMODULE)0x0;
        *(undefined8 *)(puVar41 + -8) = 0x14000c767;
        FUN_140290ea0(&DAT_1404df730);
        if (DAT_1404e52d8 != (undefined8 *)0x0) {
          pcVar1 = *(code **)*DAT_1404e52d8;
          *(undefined8 *)(puVar41 + -8) = 0x14000c77d;
          (*pcVar1)(DAT_1404e52d8,1);
        }
        *(undefined8 *)(puVar41 + -8) = 0x14000c782;
        pHVar24 = (HWND)FUN_14003cb80();
        *(undefined8 *)(puVar41 + -8) = 0x14000c78a;
        cVar5 = FUN_14003cb30();
        if (cVar5 != '\0') {
          *(undefined8 *)(puVar41 + -8) = 0x14000c79c;
          InvalidateRect(pHVar24,(RECT *)0x0,0);
          *(undefined8 *)(puVar41 + -8) = 0x14000c7aa;
          ShowWindow(pHVar24,4);
        }
        goto LAB_14000c7aa;
      }
LAB_14000bc3a:
      local_res18[0].s.LowPart = 0;
      *(undefined8 *)(puVar41 + -8) = 0x14000bc51;
      BVar8 = SystemParametersInfoW(0x1042,0,local_res18,0);
      if ((BVar8 == 0) || (local_res18[0].s.LowPart == 0)) {
        *(undefined8 *)(puVar41 + -8) = 0x14000bc77;
        SystemParametersInfoW(0x1043,0,(PVOID)0x1,3);
      }
      if (!bVar44) goto LAB_14000bc82;
      iVar7 = 1;
LAB_14000bca6:
      if ((cVar5 == '\0') && (iVar7 == 1)) {
        *(undefined8 *)(puVar41 + 0x70) = 0;
        *(undefined8 *)(puVar41 + 0x78) = 0;
        *(undefined4 *)(puVar41 + 0x70) = 0x10;
        *(undefined8 *)(puVar41 + -8) = 0x14000bce0;
        BVar8 = SystemParametersInfoW(0x42,0x10,puVar41 + 0x70,0);
        if (BVar8 != 1) goto LAB_14000bd49;
        *(undefined8 *)(puVar41 + -8) = 0x14000bcf5;
        iVar10 = FUN_1402c12c0(*(undefined8 *)(puVar41 + 0x78),L"High Contrast White");
        if (iVar10 != 0) goto LAB_14000bd49;
        *(undefined8 *)(puVar41 + -8) = 0x14000bd10;
        pWVar28 = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,&local_1160,"core_msgboxtitle_error");
        if (7 < *(ulonglong *)(pWVar28 + 0xc)) {
          pWVar28 = *(LPCWSTR *)pWVar28;
        }
        *(undefined8 *)(puVar41 + -8) = 0x14000bd34;
        pWVar29 = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,local_1130,"core_msgbox_high_contrast_white"
                                        );
        if (7 < *(ulonglong *)(pWVar29 + 0xc)) {
          pWVar29 = *(LPCWSTR *)pWVar29;
        }
        uType = 0x1010;
      }
      else {
LAB_14000bd49:
        *(undefined8 *)(puVar41 + -8) = 0x14000bd4e;
        cVar6 = FUN_14003c840();
        if (cVar6 != '\0') goto LAB_14000c15b;
        if (cVar5 != '\0') goto LAB_14000c845;
        if (((int)DAT_1404e5290 < 8) || (iVar7 == 1)) {
          *(undefined8 *)(puVar41 + -8) = 0x14000bdb4;
          pWVar28 = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,&local_1160,"core_msgboxtitle_wpe");
          if (7 < *(ulonglong *)(pWVar28 + 0xc)) {
            pWVar28 = *(LPCWSTR *)pWVar28;
          }
          pcVar42 = "core_msgbox_prompt_aero_win7";
          if (7 < (int)DAT_1404e5290) {
            pcVar42 = "core_msgbox_prompt_aero_win8";
          }
          *(undefined8 *)(puVar41 + -8) = 0x14000bdea;
          pWVar29 = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,local_1130,pcVar42);
          if (7 < *(ulonglong *)(pWVar29 + 0xc)) {
            pWVar29 = *(LPCWSTR *)pWVar29;
          }
          *(undefined8 *)(puVar41 + -8) = 0x14000be08;
          iVar7 = MessageBoxW((HWND)0x0,pWVar29,pWVar28,0x24);
          *(undefined8 *)(puVar41 + -8) = 0x14000be13;
          FUN_140016770(local_1130);
          *(undefined8 *)(puVar41 + -8) = 0x14000be1c;
          FUN_140016770(&local_1160);
          if (iVar7 == 6) {
            local_1168[0] = 1;
            *(undefined1 **)(puVar41 + 0x20) = puVar41 + 0x70;
            *(undefined8 *)(puVar41 + -8) = 0x14000be7f;
            LVar13 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                                   L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VisualEffects"
                                   ,0,0xf003f,*(PHKEY *)(puVar41 + 0x20));
            if (LVar13 == 0) {
              *(undefined4 *)(puVar41 + 0x28) = 4;
              *(DWORD **)(puVar41 + 0x20) = local_1168;
              *(undefined8 *)(puVar41 + -8) = 0x14000beaf;
              RegSetValueExW(*(HKEY *)(puVar41 + 0x70),L"VisualFXSetting",0,4,
                             *(BYTE **)(puVar41 + 0x20),*(DWORD *)(puVar41 + 0x28));
              *(undefined8 *)(puVar41 + -8) = 0x14000beba;
              RegCloseKey(*(HKEY *)(puVar41 + 0x70));
            }
            local_1168[0] = 1;
            *(undefined1 **)(puVar41 + 0x20) = puVar41 + 0x70;
            local_1138[0] = 2;
            *(undefined8 *)(puVar41 + -8) = 0x14000beef;
            LVar13 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Software\\Microsoft\\Windows\\DWM",0,
                                   0xf003f,*(PHKEY *)(puVar41 + 0x20));
            if (LVar13 == 0) {
              *(undefined4 *)(puVar41 + 0x28) = 4;
              *(DWORD **)(puVar41 + 0x20) = local_1168;
              *(undefined8 *)(puVar41 + -8) = 0x14000bf1f;
              RegSetValueExW(*(HKEY *)(puVar41 + 0x70),L"Composition",0,4,*(BYTE **)(puVar41 + 0x20)
                             ,*(DWORD *)(puVar41 + 0x28));
              *(undefined8 *)(puVar41 + -8) = 0x14000bf2a;
              RegCloseKey(*(HKEY *)(puVar41 + 0x70));
            }
            *(undefined1 **)(puVar41 + 0x20) = puVar41 + 0x70;
            *(undefined8 *)(puVar41 + -8) = 0x14000bf51;
            LVar13 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"Software\\Microsoft\\Windows\\DWM",0,
                                   0xf003f,*(PHKEY *)(puVar41 + 0x20));
            if (LVar13 == 0) {
              *(undefined4 *)(puVar41 + 0x28) = 4;
              *(undefined4 **)(puVar41 + 0x20) = local_1138;
              *(undefined8 *)(puVar41 + -8) = 0x14000bf81;
              RegSetValueExW(*(HKEY *)(puVar41 + 0x70),L"CompositionPolicy",0,4,
                             *(BYTE **)(puVar41 + 0x20),*(DWORD *)(puVar41 + 0x28));
              *(undefined8 *)(puVar41 + -8) = 0x14000bf8c;
              RegCloseKey(*(HKEY *)(puVar41 + 0x70));
            }
            *(undefined8 *)(puVar41 + -8) = 0x14000bf98;
            FUN_14003ded0(&DAT_1404e8ca0);
            *(undefined8 *)(puVar41 + -8) = 0x14000bfa7;
            EnumWindows(FUN_14003c180,0);
            local_10d8._0_4_ = 0x70;
            local_10d8._4_4_ = 0x40;
            local_10d8._24_8_ = (LPWSTR)0x0;
            local_10d8._8_8_ = (HWND)0x0;
            local_10d8._32_8_ = (wchar_t *)0x0;
            local_10d8._16_8_ = (wchar_t *)0x0;
            *(undefined8 *)(puVar41 + 0x50) = 0;
            *(undefined8 *)(puVar41 + 0x58) = 0;
            local_10d8._40_8_ = (LPCWSTR)0x0;
            local_10d8._48_8_ = 5;
            local_10d8._56_8_ = (HINSTANCE)0x0;
            *(undefined2 *)(puVar41 + 0x50) = 0;
            local_10d8._64_8_ = (void *)0x0;
            local_10d8._72_8_ = (LPCWSTR)0x0;
            *(undefined8 *)(puVar41 + 0x60) = 0;
            local_10d8._80_8_ = (HKEY)0x0;
            pvStack_1080 = (HANDLE)0x0;
            *(undefined8 *)(puVar41 + 0x68) = 7;
            local_1078.hIcon = (HANDLE)0x0;
            pvStack_1070 = (HANDLE)0x0;
            if ((int)DAT_1404e5290 < 8) {
              *(undefined8 *)(puVar41 + -8) = 0x14000c034;
              FUN_1404217a0(local_1048,0,0x800);
              *(undefined8 *)(puVar41 + -8) = 0x14000c046;
              GetWindowsDirectoryW((LPWSTR)local_1048,0x400);
              *(undefined8 *)(puVar41 + -8) = 0x14000c052;
              uVar17 = FUN_1402d6aa0(local_1048);
              *(undefined8 *)(puVar41 + -8) = 0x14000c066;
              FUN_140016ae0(puVar41 + 0x50,local_1048,uVar17);
              *(undefined8 *)(puVar41 + -8) = 0x14000c07d;
              FUN_1400164d0(puVar41 + 0x50,L"\\system32\\desk.cpl",0x12);
              local_10d8._24_8_ = puVar41 + 0x50;
              if (7 < *(ulonglong *)(puVar41 + 0x68)) {
                local_10d8._24_8_ = *(wchar_t **)(puVar41 + 0x50);
              }
              local_10d8._32_8_ =
                   L"desk,@Themes /Action:OpenTheme /file:\"C:\\Windows\\Resources\\Themes\\aero.theme\""
              ;
            }
            else {
              local_10d8._24_8_ = L"C:\\Windows\\Resources\\Themes\\aero.theme";
            }
            *(undefined8 *)(puVar41 + -8) = 0x14000c0a7;
            ShellExecuteExW((SHELLEXECUTEINFOW *)local_10d8);
            if (pvStack_1070 != (HANDLE)0x0) {
              *(undefined8 *)(puVar41 + -8) = 0x14000c0be;
              WaitForSingleObject(pvStack_1070,5000);
              *(undefined8 *)(puVar41 + -8) = 0x14000c0cb;
              CloseHandle(pvStack_1070);
            }
            local_res18[0].s.LowPart = 0;
            iVar7 = 5;
            do {
              *(undefined8 *)(puVar41 + -8) = 0x14000c0eb;
              Sleep(1000);
              *(undefined8 *)(puVar41 + -8) = 0x14000c0f8;
              HVar14 = DwmIsCompositionEnabled((BOOL *)&local_res18[0].QuadPart);
              if ((-1 < HVar14) && (local_res18[0].s.LowPart == 1)) {
                *(undefined8 *)(puVar41 + -8) = 0x14000c11f;
                EnumWindows(FUN_14003c180,1);
                break;
              }
              iVar7 = iVar7 + -1;
            } while (0 < iVar7);
            *(undefined8 *)(puVar41 + -8) = 0x14000c12c;
            HVar14 = DwmIsCompositionEnabled((BOOL *)&local_res18[0].QuadPart);
            if ((-1 < HVar14) && (local_res18[0].s.LowPart != 0)) {
              if (7 < *(ulonglong *)(puVar41 + 0x68)) {
                *(undefined8 *)(puVar41 + -8) = 0x14000c15b;
                FUN_140016a90(puVar41 + 0x50,*(undefined8 *)(puVar41 + 0x50));
              }
              goto LAB_14000c15b;
            }
            if (7 < *(ulonglong *)(puVar41 + 0x68)) {
              *(undefined8 *)(puVar41 + -8) = 0x14000c7da;
              FUN_140016a90(puVar41 + 0x50,*(undefined8 *)(puVar41 + 0x50));
            }
            *(undefined8 *)(puVar41 + -8) = 0x14000c7f1;
            pWVar28 = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,&local_1160,"core_msgboxtitle_error");
            if (7 < *(ulonglong *)(pWVar28 + 0xc)) {
              pWVar28 = *(LPCWSTR *)pWVar28;
            }
            pcVar42 = "core_msgbox_aero_failure";
          }
          else {
            *(undefined8 *)(puVar41 + -8) = 0x14000be38;
            pWVar28 = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,&local_1160,"core_msgboxtitle_error");
            if (7 < *(ulonglong *)(pWVar28 + 0xc)) {
              pWVar28 = *(LPCWSTR *)pWVar28;
            }
            pcVar42 = "core_msgbox_aero_denied";
          }
        }
        else {
          *(undefined8 *)(puVar41 + -8) = 0x14000bd84;
          pWVar28 = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,&local_1160,"core_msgboxtitle_error");
          if (7 < *(ulonglong *)(pWVar28 + 0xc)) {
            pWVar28 = *(LPCWSTR *)pWVar28;
          }
          pcVar42 = "core_msgbox_dwm_disabled";
        }
        *(undefined8 *)(puVar41 + -8) = 0x14000c815;
        pWVar29 = (LPCWSTR)FUN_140097640(&DAT_1404e6d80,local_1130,pcVar42);
        if (7 < *(ulonglong *)(pWVar29 + 0xc)) {
          pWVar29 = *(LPCWSTR *)pWVar29;
        }
        uType = 0x10;
      }
      *(undefined8 *)(puVar41 + -8) = 0x14000c833;
      MessageBoxW((HWND)0x0,pWVar29,pWVar28,uType);
      *(undefined8 *)(puVar41 + -8) = 0x14000c83c;
      FUN_140016770(local_1130);
      *(undefined8 *)(puVar41 + -8) = 0x14000c845;
      FUN_140016770(&local_1160);
    }
    else {
      local_1150 = 0;
      uStack_1148 = 0;
      local_1160 = (longlong *)0x0;
      uStack_1158 = 0;
      *(undefined8 *)(puVar41 + -8) = 0x14000b757;
      uVar45 = FUN_140017480(&local_1160,"-control",8);
      *(undefined8 *)(puVar41 + -8) = 0x14000b765;
      puVar18 = (undefined8 *)FUN_14000db60(uVar45,puVar41 + 0x50,&local_1160);
      plVar20 = puVar18 + 2;
      if (0xf < (ulonglong)puVar18[3]) {
        puVar18 = (undefined8 *)*puVar18;
      }
      if (*plVar20 != 3) {
        *(undefined8 *)(puVar41 + -8) = 0x14000b787;
        FUN_140017240(puVar41 + 0x50);
        goto LAB_14000bb40;
      }
      *(undefined8 *)(puVar41 + -8) = 0x14000bb2c;
      iVar7 = memcmp(puVar18,&DAT_140473d60,3);
      *(undefined8 *)(puVar41 + -8) = 0x14000bb38;
      FUN_140017240(puVar41 + 0x50);
      if (iVar7 != 0) goto LAB_14000bb40;
    }
LAB_14000c845:
    uVar17 = 1;
  }
  return uVar17;
}

