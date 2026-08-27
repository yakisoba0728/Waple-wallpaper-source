// Function: FUN_1400832c0
// Addr: 1400832c0
// Size: 3686 bytes


undefined8 FUN_1400832c0(undefined8 *param_1,LPCWSTR param_2,char *param_3,char *param_4)

{
  LPCWSTR pWVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  BOOL BVar7;
  int iVar8;
  DWORD DVar9;
  size_t sVar10;
  ulonglong uVar11;
  HANDLE pvVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  WCHAR *pWVar16;
  LPCWSTR ****pppppWVar17;
  LPWSTR ****pppppWVar18;
  LPCWSTR pWVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  undefined4 uVar23;
  LPCWSTR pWVar24;
  LPWSTR ****pppppWVar25;
  LPCWSTR pWVar26;
  undefined1 auStackY_458 [8];
  undefined1 auStackY_450 [24];
  undefined1 local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  ulonglong local_3f0;
  LPCWSTR pWStack_3e8;
  LPWSTR ***local_3e0;
  undefined8 uStack_3d8;
  longlong local_3d0;
  LPCWSTR local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  ulonglong uStack_3a8;
  LPCWSTR ***local_3a0;
  undefined8 uStack_398;
  longlong local_390;
  ulonglong local_388;
  LPWSTR ***local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  ulonglong uStack_360;
  WCHAR local_358;
  undefined2 uStack_356;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  ulonglong local_348;
  LPCWSTR pWStack_340;
  LPCWSTR ***local_338 [2];
  longlong local_328;
  ulonglong local_320;
  _SECURITY_ATTRIBUTES local_318;
  _PROCESS_INFORMATION local_300;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  ulonglong uStack_2d0;
  _SECURITY_ATTRIBUTES local_2c8;
  _STARTUPINFOW local_2a8;
  undefined1 local_238 [16];
  undefined1 local_228 [32];
  longlong *local_208;
  longlong *local_200;
  longlong *local_1e8;
  ulonglong *local_1e0;
  int *local_1d0;
  ulonglong local_1b8;
  uint local_1b0;
  undefined1 local_138 [16];
  undefined1 local_128 [240];
  
  puVar22 = auStackY_458;
  FUN_140084700();
  FUN_140060990(local_338,param_2);
  FUN_140016600(&local_3c0,local_338);
  local_3f0 = 0;
  pWStack_3e8 = (LPCWSTR)0x7;
  uStack_3f8 = 0;
  local_400 = (LPWSTR ****)0x0;
  FUN_140015670(&local_400,0x104,local_408);
  pWVar19 = param_2;
  do {
    uVar4 = (uint)local_3f0;
    puVar13 = &local_400;
    if ((LPCWSTR)0x7 < pWStack_3e8) {
      puVar13 = local_400;
    }
    pppppWVar18 = (LPWSTR ****)&local_3c0;
    if (7 < uStack_3a8) {
      pppppWVar18 = local_3c0;
    }
    uVar6 = FUN_1402901f0(pppppWVar18,local_3f0 & 0xffffffff,puVar13);
    pWVar24 = pWStack_3e8;
    uVar21 = (ulonglong)uVar6;
    if (local_3f0 < uVar21) {
      uVar11 = uVar21 - local_3f0;
      if ((longlong)pWStack_3e8 - local_3f0 < uVar11) {
        FUN_140015670(&local_400,uVar11,local_408,uVar11);
      }
      else {
        puVar13 = &local_400;
        if ((LPCWSTR)0x7 < pWStack_3e8) {
          puVar13 = local_400;
        }
        pWVar24 = (LPCWSTR)((longlong)puVar13 + local_3f0 * 2);
        local_3f0 = uVar21;
        if (uVar11 != 0) {
          for (; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pWVar24 = L'\0';
            pWVar24 = pWVar24 + 1;
          }
        }
        *(undefined2 *)((longlong)puVar13 + uVar21 * 2) = 0;
      }
    }
    else {
      puVar13 = &local_400;
      if ((LPCWSTR)0x7 < pWStack_3e8) {
        puVar13 = local_400;
      }
      local_3f0 = uVar21;
      *(undefined2 *)((longlong)puVar13 + uVar21 * 2) = 0;
      pWVar24 = pWVar19;
    }
    local_348 = local_3f0;
    pWVar19 = pWVar24;
  } while (uVar4 <= uVar6);
  local_3f0 = 0;
  pWStack_340 = pWStack_3e8;
  pWStack_3e8 = (LPCWSTR)0x7;
  local_358 = (WCHAR)local_400;
  uStack_356 = (undefined2)((ulonglong)local_400 >> 0x10);
  uStack_354 = local_400._4_4_;
  uStack_350 = (undefined4)uStack_3f8;
  uStack_34c = uStack_3f8._4_4_;
  local_400 = (LPWSTR ****)((ulonglong)local_400 & 0xffffffffffff0000);
  FUN_140016770(&local_3c0);
  cVar5 = FUN_140018f30(&local_358);
  if (cVar5 == '\0') {
    local_348 = 0;
    pWVar16 = &local_358;
    if ((LPCWSTR)0x7 < pWStack_340) {
      pWVar16 = (WCHAR *)CONCAT44(uStack_354,CONCAT22(uStack_356,local_358));
    }
    *pWVar16 = L'\0';
  }
  else {
    FUN_14003fe80();
  }
  if (param_4 != (char *)0x0) {
    LOCK();
    *(undefined1 *)(param_1 + 0xe) = 1;
    UNLOCK();
    FUN_140082e40(param_1 + 0x1e);
    local_318.nLength = 0x18;
    local_318.bInheritHandle = 0;
    local_318.lpSecurityDescriptor = LocalAlloc(0x40,0x28);
    BVar7 = InitializeSecurityDescriptor(local_318.lpSecurityDescriptor,1);
    if (BVar7 != 0) {
      SetSecurityDescriptorDacl(local_318.lpSecurityDescriptor,1,(PACL)0x0,0);
    }
    local_3d0 = 0;
    local_3c8 = (LPCWSTR)0x0;
    local_3e0 = (LPWSTR ***)0x0;
    uStack_3d8 = 0;
    sVar10 = strlen(param_4);
    FUN_140017480(&local_3e0,param_4,sVar10);
    if (local_3d0 == 0) {
LAB_1400835c0:
      local_368 = 0;
      uStack_370 = 0;
      local_378 = (LPWSTR ***)0x0;
      uStack_360 = 7;
    }
    else {
      pppppWVar18 = &local_3e0;
      if ((LPCWSTR)0xf < local_3c8) {
        pppppWVar18 = (LPWSTR ****)local_3e0;
      }
      iVar8 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppWVar18,(int)local_3d0,(LPWSTR)0x0,0);
      pWVar24 = (LPCWSTR)(longlong)iVar8;
      if (iVar8 < 1) goto LAB_1400835c0;
      local_3b0 = 0;
      uStack_3a8 = 0;
      local_3c0 = (LPWSTR ****)0x0;
      uStack_3b8 = 0;
      FUN_1400167e0(&local_3c0,0,pWVar24);
      pppppWVar18 = (LPWSTR ****)&local_3c0;
      if (7 < uStack_3a8) {
        pppppWVar18 = local_3c0;
      }
      pppppWVar25 = &local_3e0;
      if ((LPCWSTR)0xf < local_3c8) {
        pppppWVar25 = (LPWSTR ****)local_3e0;
      }
      MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppWVar25,(int)local_3d0,(LPWSTR)pppppWVar18,iVar8);
      local_368 = local_3b0;
      uStack_360 = uStack_3a8;
      local_378 = (LPWSTR ***)local_3c0;
      uStack_370 = uStack_3b8;
    }
    uVar21 = uStack_360;
    if (local_3c8 < &DAT_00000010) {
LAB_140083615:
      pppppWVar18 = (LPWSTR ****)local_378;
      pppppWVar25 = &local_378;
      if (7 < uVar21) {
        pppppWVar25 = (LPWSTR ****)local_378;
      }
      local_390 = 0;
      local_388 = 0;
      local_3a0 = (LPCWSTR ***)0x0;
      uStack_398 = 0;
      FUN_140016170(&local_3a0,L"\\\\.\\pipe\\",9);
      uVar11 = FUN_1402d6aa0(pppppWVar25);
      if (local_388 - local_390 < uVar11) {
        FUN_140016310(&local_3a0,uVar11,local_408,pppppWVar25);
        uVar21 = uStack_360;
        pppppWVar18 = (LPWSTR ****)local_378;
      }
      else {
        lVar15 = local_390 + uVar11;
        pppppWVar17 = &local_3a0;
        if (7 < local_388) {
          pppppWVar17 = (LPCWSTR ****)local_3a0;
        }
        lVar3 = local_390 * 2;
        local_390 = lVar15;
        FUN_1404210f0((LPCWSTR)((longlong)pppppWVar17 + lVar3),pppppWVar25,uVar11 * 2);
        *(WCHAR *)((longlong)pppppWVar17 + lVar15 * 2) = L'\0';
      }
      if (local_388 - local_390 < 6) {
        FUN_140016310(&local_3a0,6,local_408,L"Client");
      }
      else {
        lVar15 = local_390 + 6;
        pppppWVar17 = &local_3a0;
        if (7 < local_388) {
          pppppWVar17 = (LPCWSTR ****)local_3a0;
        }
        lVar3 = local_390 * 2;
        local_390 = lVar15;
        FUN_1404210f0((LPCWSTR)((longlong)pppppWVar17 + lVar3),L"Client",0xc);
        *(WCHAR *)((longlong)pppppWVar17 + lVar15 * 2) = L'\0';
      }
      pppppWVar25 = &local_378;
      if (7 < uVar21) {
        pppppWVar25 = pppppWVar18;
      }
      local_3f0 = 0;
      pWStack_3e8 = (LPCWSTR)0x0;
      local_400 = (LPWSTR ****)0x0;
      uStack_3f8 = 0;
      FUN_140016170(&local_400,L"\\\\.\\pipe\\",9);
      uVar11 = FUN_1402d6aa0(pppppWVar25);
      if ((longlong)pWStack_3e8 - local_3f0 < uVar11) {
        FUN_140016310(&local_400,uVar11,local_408,pppppWVar25);
        uVar21 = uStack_360;
        pppppWVar18 = (LPWSTR ****)local_378;
      }
      else {
        lVar15 = local_3f0 + uVar11;
        pWVar19 = (LPCWSTR)&local_400;
        if (7 < pWStack_3e8) {
          pWVar19 = (LPCWSTR)local_400;
        }
        pWVar24 = pWVar19 + local_3f0;
        local_3f0 = lVar15;
        FUN_1404210f0(pWVar24,pppppWVar25,uVar11 * 2);
        pWVar19[lVar15] = L'\0';
      }
      uVar23 = 0;
      pppppWVar17 = &local_3a0;
      if (7 < local_388) {
        pppppWVar17 = (LPCWSTR ****)local_3a0;
      }
      pvVar12 = CreateNamedPipeW((LPCWSTR)pppppWVar17,1,6,1,0,0x10000,0,&local_318);
      param_1[0xf] = pvVar12;
      pWVar19 = (LPCWSTR)&local_400;
      if (7 < pWStack_3e8) {
        pWVar19 = (LPCWSTR)local_400;
      }
      pvVar12 = CreateNamedPipeW(pWVar19,2,6,1,0x10000,0,0,&local_318);
      param_1[0x10] = pvVar12;
      LocalFree(local_318.lpSecurityDescriptor);
      if ((HANDLE)param_1[0xf] == (HANDLE)0xffffffffffffffff) {
LAB_1400838ec:
        if ((HANDLE)param_1[0x10] != (HANDLE)0xffffffffffffffff) {
          CloseHandle((HANDLE)param_1[0x10]);
        }
      }
      else {
        if (param_1[0x10] == -1) {
          CloseHandle((HANDLE)param_1[0xf]);
          goto LAB_1400838ec;
        }
        puVar13 = (undefined8 *)FUN_14028af20(0x10);
        puVar13[1] = FUN_1400822e0;
        *puVar13 = param_1 + 0xe;
        local_378 = (LPWSTR ***)FUN_1402ca17c(0,0,FUN_140082eb0,puVar13);
        if ((LPWSTR ****)local_378 == (LPWSTR ****)0x0) goto LAB_14008411a;
        if (*(int *)(param_1 + 0x1b) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140015110();
        }
        *(undefined4 *)(param_1 + 0x1b) = (undefined4)uStack_370;
        *(undefined4 *)((longlong)param_1 + 0xdc) = uStack_370._4_4_;
        param_1[0x1a] = local_378;
      }
      if (7 < pWStack_3e8) {
        FUN_140016a90(&local_400,local_400);
      }
      local_400 = (LPWSTR ****)((ulonglong)local_400 & 0xffffffffffff0000);
      pWStack_3e8 = (LPCWSTR)0x7;
      local_3f0 = 0;
      if (7 < local_388) {
        FUN_140016a90(&local_3a0,local_3a0);
      }
      local_3a0 = (LPCWSTR ***)((ulonglong)local_3a0 & 0xffffffffffff0000);
      local_388 = 7;
      local_390 = 0;
      if (7 < uVar21) {
        FUN_140016a90(&local_378,pppppWVar18,uVar21);
      }
      goto LAB_140083979;
    }
    pWVar19 = (LPCWSTR)((longlong)local_3c8 + 1);
    pppppWVar18 = (LPWSTR ****)local_3e0;
    if (pWVar19 < (LPCWSTR)0x1000) {
LAB_140083610:
      thunk_FUN_14028af80(pppppWVar18,pWVar19);
      goto LAB_140083615;
    }
    pppppWVar18 = (LPWSTR ****)local_3e0[-1];
    if ((ulonglong)((longlong)local_3e0 + (-8 - (longlong)pppppWVar18)) < 0x20) {
      pWVar19 = local_3c8 + 0x14;
      goto LAB_140083610;
    }
LAB_140084113:
    uVar23 = SUB84(pWVar24,0);
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar22 = auStackY_450;
LAB_14008411a:
    uStack_370 = CONCAT44(uStack_370._4_4_,uVar23);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar22 + -8) = &UNK_140084127;
    FUN_140290d30(6);
  }
LAB_140083979:
  pWVar16 = (LPCWSTR)0x0;
  DVar9 = GetCurrentProcessId();
  pppppWVar17 = local_338;
  if (7 < local_320) {
    pppppWVar17 = (LPCWSTR ****)local_338[0];
  }
  local_300.dwProcessId = 0;
  local_300.dwThreadId = 0;
  local_2a8.hStdError = (HANDLE)0x0;
  local_2a8.lpReserved = (LPWSTR)0x0;
  local_2a8.cb = 0x68;
  local_2a8._4_4_ = 0;
  local_300.hProcess = (HANDLE)0x0;
  local_300.hThread = (HANDLE)0x0;
  pWVar24 = (LPCWSTR)((longlong)pppppWVar17 + local_328 * 2);
  local_2c8.bInheritHandle = 1;
  local_2c8._20_4_ = 0;
  local_2a8.lpDesktop = (LPWSTR)0x0;
  local_2a8.lpTitle = (LPWSTR)0x0;
  local_2a8.dwX = 0;
  local_2a8.dwY = 0;
  local_2a8.dwXSize = 0;
  local_2a8.dwYSize = 0;
  local_2a8.dwXCountChars = 0;
  local_2a8.dwYCountChars = 0;
  local_2a8.dwFillAttribute = 0;
  local_2a8.dwFlags = 0;
  local_2a8.wShowWindow = 0;
  local_2a8.cbReserved2 = 0;
  local_2a8._68_4_ = 0;
  local_2a8.lpReserved2 = (LPBYTE)0x0;
  local_2a8.hStdInput = (HANDLE)0x0;
  local_2a8.hStdOutput = (HANDLE)0x0;
  local_2c8.nLength = 0;
  local_2c8._4_4_ = 0;
  local_2c8.lpSecurityDescriptor = (LPVOID)0x0;
  pWVar26 = pWVar24;
  for (pWVar19 = (LPCWSTR)FUN_140015e90(0,pWVar24); pWVar19 != pWVar26; pWVar19 = pWVar19 + 1) {
    if ((*pWVar19 != L'\\') && (*pWVar19 != L'/')) goto LAB_140083a30;
  }
LAB_140083a4c:
  local_3b0 = 0;
  uStack_3a8 = 0;
  local_3c0 = (LPWSTR ****)0x0;
  uStack_3b8 = 0;
  FUN_140016170(&local_3c0,pWVar24,(longlong)pWVar26 - (longlong)pWVar24 >> 1);
  local_2e8 = (undefined4)local_3c0;
  uStack_2e4 = local_3c0._4_4_;
  uStack_2e0 = (undefined4)uStack_3b8;
  uStack_2dc = uStack_3b8._4_4_;
  local_2d8 = local_3b0;
  uStack_2d0 = uStack_3a8;
  FUN_14000df80(local_238);
  puVar20 = &local_2e8;
  if (7 < uStack_2d0) {
    puVar20 = (undefined4 *)CONCAT44(uStack_2e4,local_2e8);
  }
  uVar14 = FUN_1400300a0(local_228,puVar20);
  FUN_14000d140(uVar14,&DAT_1404738a8);
  if (param_4 != (char *)0x0) {
    uVar14 = FUN_14000d140(local_228,"-parentprocess ");
    uVar14 = FUN_14000e8f0(uVar14,DVar9);
    uVar14 = FUN_14000d140(uVar14," -messagehandler ");
    uVar14 = FUN_14000d140(uVar14,param_4);
    FUN_14000d140(uVar14,&DAT_1404738a8);
  }
  if (param_3 != (char *)0x0) {
    local_3d0 = 0;
    local_3c8 = (LPCWSTR)0x0;
    local_3e0 = (LPWSTR ***)0x0;
    uStack_3d8 = 0;
    sVar10 = strlen(param_3);
    FUN_140017480(&local_3e0,param_3,sVar10);
    if (local_3d0 == 0) {
LAB_140083bdb:
      local_3f0 = 0;
      uStack_3f8 = 0;
      local_400 = (LPWSTR ****)0x0;
      pWStack_3e8 = (LPCWSTR)0x7;
    }
    else {
      pppppWVar18 = &local_3e0;
      if ((LPCWSTR)0xf < local_3c8) {
        pppppWVar18 = (LPWSTR ****)local_3e0;
      }
      iVar8 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppWVar18,(int)local_3d0,(LPWSTR)0x0,0);
      pWVar24 = (LPCWSTR)(longlong)iVar8;
      if (iVar8 < 1) goto LAB_140083bdb;
      local_3b0 = 0;
      uStack_3a8 = 0;
      local_3c0 = (LPWSTR ****)0x0;
      uStack_3b8 = 0;
      FUN_1400167e0(&local_3c0,0,pWVar24);
      pppppWVar18 = (LPWSTR ****)&local_3c0;
      if (7 < uStack_3a8) {
        pppppWVar18 = local_3c0;
      }
      pppppWVar25 = &local_3e0;
      if ((LPCWSTR)0xf < local_3c8) {
        pppppWVar25 = (LPWSTR ****)local_3e0;
      }
      MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppWVar25,(int)local_3d0,(LPWSTR)pppppWVar18,iVar8);
      local_400 = local_3c0;
      uStack_3f8 = uStack_3b8;
      local_3f0 = local_3b0;
      pWStack_3e8 = (LPCWSTR)uStack_3a8;
    }
    FUN_14000d440(local_228,&local_400);
    if (7 < pWStack_3e8) {
      FUN_140016a90(&local_400,local_400);
    }
    local_3f0 = 0;
    pWStack_3e8 = (LPCWSTR)0x7;
    local_400 = (LPWSTR ****)((ulonglong)local_400 & 0xffffffffffff0000);
    if ((LPCWSTR)0xf < local_3c8) {
      pWVar19 = (LPCWSTR)((longlong)local_3c8 + 1);
      pppppWVar18 = (LPWSTR ****)local_3e0;
      if ((LPCWSTR)0xfff < pWVar19) {
        pppppWVar18 = (LPWSTR ****)local_3e0[-1];
        if (0x1f < (ulonglong)((longlong)local_3e0 + (-8 - (longlong)pppppWVar18)))
        goto LAB_140084113;
        pWVar19 = local_3c8 + 0x14;
      }
      thunk_FUN_14028af80(pppppWVar18,pWVar19);
    }
  }
  DVar9 = 0x8000020;
  if (*(char *)(param_1 + 0xd) == '\0') {
    DVar9 = 0x20;
  }
  if ((local_348 != 0) && (pWVar16 = &local_358, (LPCWSTR)0x7 < pWStack_340)) {
    pWVar16 = (LPCWSTR)CONCAT44(uStack_354,CONCAT22(uStack_356,local_358));
  }
  local_3d0 = 0;
  local_3c8 = (LPCWSTR)0x7;
  uStack_3d8 = 0;
  local_3e0 = (LPWSTR ***)0x0;
  if ((((byte)local_1b0 & 0x22) == 2) || (uVar21 = *local_1e0, uVar21 == 0)) {
    if (((local_1b0 & 4) == 0) && (*local_1e8 != 0)) {
      lVar15 = *local_208;
      uVar21 = *local_1e8 + (longlong)*local_1d0 * 2;
      goto LAB_140083d1d;
    }
  }
  else {
    lVar15 = *local_200;
    if (uVar21 < local_1b8) {
      uVar21 = local_1b8;
    }
LAB_140083d1d:
    if (lVar15 != 0) {
      FUN_140016ae0(&local_3e0,lVar15,(longlong)(uVar21 - lVar15) >> 1);
    }
  }
  pppppWVar18 = &local_3e0;
  if ((LPCWSTR)0x7 < local_3c8) {
    pppppWVar18 = (LPWSTR ****)local_3e0;
  }
  pppppWVar17 = local_338;
  if (7 < local_320) {
    pppppWVar17 = (LPCWSTR ****)local_338[0];
  }
  BVar7 = CreateProcessW((LPCWSTR)pppppWVar17,(LPWSTR)pppppWVar18,&local_2c8,
                         (LPSECURITY_ATTRIBUTES)0x0,1,DVar9,(LPVOID)0x0,pWVar16,&local_2a8,
                         &local_300);
  if ((LPCWSTR)0x7 < local_3c8) {
    uVar21 = (longlong)local_3c8 * 2 + 2;
    pppppWVar18 = (LPWSTR ****)local_3e0;
    if (0xfff < uVar21) {
      pppppWVar18 = (LPWSTR ****)local_3e0[-1];
      pWVar24 = local_3c8;
      if (0x1f < (ulonglong)((longlong)local_3e0 + (-8 - (longlong)pppppWVar18)))
      goto LAB_140084113;
      uVar21 = (longlong)local_3c8 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pppppWVar18,uVar21);
  }
  if (BVar7 == 0) {
    uStack_3f8 = 0;
    local_400 = (LPWSTR ****)0x0;
    local_3f0 = 0;
    pWStack_3e8 = (LPCWSTR)0x7;
    if (local_348 == 0) {
      FUN_140016ae0(&local_400,L"relative to: ",0xd);
      puVar13 = (undefined8 *)FUN_140005ee0(&local_3c0);
      if (7 < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      uVar14 = FUN_1402d6aa0(puVar13);
      FUN_1400164d0(&local_400,puVar13,uVar14);
      FUN_140016770(&local_3c0);
    }
    else {
      pWVar16 = &local_358;
      if ((LPCWSTR)0x7 < pWStack_340) {
        pWVar16 = (WCHAR *)CONCAT44(uStack_354,CONCAT22(uStack_356,local_358));
      }
      uVar14 = FUN_1402d6aa0(pWVar16);
      FUN_140016ae0(&local_400,pWVar16,uVar14);
    }
    DVar9 = GetLastError();
    FUN_14000df80(local_138);
    if (DVar9 - 2 < 2) {
      FUN_14000d140(local_128,"Missing file. Try reinstalling to fix this!\n\n");
      lVar15 = FUN_1402bbb40(param_2,"wallpaperui.exe");
      if (lVar15 != 0) {
        FUN_14000d140(local_128,
                      "If you \'moved\' the files after installation you must reset the auto start option or this may keep showing up every time you restart the PC.\n\n"
                     );
      }
    }
    local_3d0 = 0;
    uStack_3d8 = 0;
    local_3e0 = (LPWSTR ***)0x0;
    local_3c8 = (LPCWSTR)0x7;
    FUN_140014fa0(DVar9,&local_3e0);
    uVar14 = FUN_14000d140(local_128,"Failed to create process: ");
    pppppWVar17 = local_338;
    if (7 < local_320) {
      pppppWVar17 = (LPCWSTR ****)local_338[0];
    }
    uVar14 = FUN_1400300a0(uVar14,pppppWVar17);
    uVar14 = FUN_14000d140(uVar14," (Windows error \"");
    uVar14 = FUN_14000d440(uVar14,&local_3e0);
    uVar14 = FUN_14000d140(uVar14,"\", code ");
    uVar14 = FUN_14000ea80(uVar14,DVar9);
    uVar14 = FUN_14000d140(uVar14,", Dir ");
    uVar14 = FUN_14000d440(uVar14,&local_400);
    FUN_14000d140(uVar14,&DAT_1404784c0);
    uVar14 = FUN_14000dee0(local_138,&local_3a0);
    puVar13 = (undefined8 *)FUN_140005790(&local_3c0,uVar14);
    if (0xf < (ulonglong)puVar13[3]) {
      puVar13 = (undefined8 *)*puVar13;
    }
    FUN_140098760(puVar13);
    FUN_140017240(&local_3c0);
    FUN_140016770(&local_3a0);
    pWVar19 = (LPCWSTR)FUN_14000dee0(local_138,&local_3c0);
    if (7 < *(ulonglong *)(pWVar19 + 0xc)) {
      pWVar19 = *(LPCWSTR *)pWVar19;
    }
    MessageBoxW((HWND)0x0,pWVar19,L"Process Error",0);
    FUN_140016770(&local_3c0);
    FUN_140081800(param_1 + 0xe);
    if (7 < local_3c8) {
      FUN_140016a90(&local_3e0,local_3e0);
    }
    local_3d0 = 0;
    local_3c8 = (LPCWSTR)0x7;
    local_3e0 = (LPWSTR ***)((ulonglong)local_3e0 & 0xffffffffffff0000);
    FUN_140005b50(local_138);
    if (7 < pWStack_3e8) {
      FUN_140016a90(&local_400,local_400);
    }
    uVar14 = 0;
  }
  else {
    FUN_140098b00("Created process: %s\n",param_2);
    *param_1 = local_300.hProcess;
    CloseHandle(local_300.hThread);
    FUN_140084a50(param_1);
    uVar14 = 1;
  }
  FUN_140005b50(local_238);
  FUN_140016770(&local_2e8);
  if (pWStack_340 < &DAT_00000008) goto LAB_1400840db;
  pWVar19 = (LPCWSTR)CONCAT44(uStack_354,CONCAT22(uStack_356,local_358));
  uVar21 = (longlong)pWStack_340 * 2 + 2;
  pWVar24 = pWVar19;
  if (0xfff < uVar21) {
    pWVar24 = *(LPCWSTR *)(pWVar19 + -4);
    if (0x1f < (ulonglong)((longlong)pWVar19 + (-8 - (longlong)pWVar24))) goto LAB_140084113;
    uVar21 = (longlong)pWStack_340 * 2 + 0x29;
  }
  thunk_FUN_14028af80(pWVar24,uVar21);
LAB_1400840db:
  local_348 = 0;
  pWStack_340 = (LPCWSTR)0x7;
  local_358 = L'\0';
  FUN_140016770(local_338);
  return uVar14;
LAB_140083a30:
  pWVar1 = pWVar24 + -1;
  if (pWVar24[-1] == L'\\') goto LAB_140083a4c;
  if ((pWVar24[-1] == L'/') || (pWVar24 = pWVar1, pWVar19 == pWVar1)) goto LAB_140083a4c;
  goto LAB_140083a30;
}

