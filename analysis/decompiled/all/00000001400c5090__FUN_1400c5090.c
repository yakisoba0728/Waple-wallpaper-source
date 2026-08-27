// Function: FUN_1400c5090
// Addr: 1400c5090
// Size: 1733 bytes


/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1400c5090(undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  LSTATUS LVar3;
  int iVar4;
  undefined8 *puVar5;
  size_t sVar6;
  size_t sVar7;
  HINSTANCE pHVar8;
  undefined8 *******pppppppuVar9;
  LPCSTR ******pppppppCVar10;
  LPWSTR ******pppppppWVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  LPWSTR ******lpFile;
  undefined1 local_368 [2];
  undefined1 uStack_366;
  undefined1 uStack_365;
  undefined1 local_364;
  undefined1 local_363 [3];
  LPCSTR ******local_360;
  undefined8 uStack_358;
  longlong local_350;
  ulonglong local_348;
  DWORD local_340 [2];
  LPWSTR ******local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  ulonglong uStack_320;
  DWORD local_318 [2];
  LPWSTR ******local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  ulonglong uStack_2f8;
  undefined8 *******local_2f0;
  undefined8 uStack_2e8;
  size_t local_2e0;
  ulonglong local_2d8;
  longlong local_2c8;
  ulonglong local_2c0;
  undefined1 local_2b8 [64];
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  LPWSTR ******local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  ulonglong uStack_240;
  undefined1 local_238 [512];
  
  _local_368 = 0x88db2714;
  local_364 = 0x1d;
  local_318[0] = 1;
  FUN_1404217a0(local_238,0,0x200);
  local_340[0] = 0x200;
  LVar3 = RegGetValueW((HKEY)0xffffffff80000002,L"SOFTWARE\\Microsoft\\Cryptography\\",
                       L"MachineGuid",0x10002,local_318,local_238,local_340);
  if (LVar3 == 0) {
    uVar16 = (ulonglong)local_340[0];
    local_2c8 = 0;
    local_2c0 = 0;
    local_278 = 0x6a09e667;
    local_274 = 0xbb67ae85;
    local_270 = 0x3c6ef372;
    local_26c = 0xa54ff53a;
    local_268 = 0x510e527f;
    local_264 = 0x9b05688c;
    local_260 = 0x1f83d9ab;
    local_25c = 0x5be0cd19;
    if (uVar16 != 0) {
      puVar14 = local_238;
      for (; 0x3f < uVar16; uVar16 = uVar16 - 0x40) {
        FUN_140141a80(&local_2c8,puVar14);
        local_2c8 = local_2c8 + 0x40;
        puVar14 = puVar14 + 0x40;
      }
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        uVar1 = *puVar14;
        puVar14 = puVar14 + 1;
        local_2b8[local_2c0] = uVar1;
        local_2c0 = local_2c0 + 1;
      }
    }
    uVar16 = local_2c0;
    puVar15 = (undefined4 *)local_368;
    lVar17 = 5;
    if (local_2c0 - 1 < 0x3f) {
      local_2b8[local_2c0] = local_368[0];
      local_2c0 = local_2c0 + 1;
      if (local_2c0 < 0x40) {
        local_2b8[uVar16 + 1] = local_368[1];
        local_2c0 = uVar16 + 2;
        if (uVar16 + 2 < 0x40) {
          local_2b8[uVar16 + 2] = uStack_366;
          local_2c0 = uVar16 + 3;
          if (uVar16 + 3 < 0x40) {
            local_2b8[uVar16 + 3] = uStack_365;
            local_2c0 = uVar16 + 4;
            if (uVar16 + 4 < 0x40) {
              puVar15 = (undefined4 *)local_363;
              local_2b8[uVar16 + 4] = local_364;
              local_2c0 = uVar16 + 5;
              lVar17 = 0;
            }
            else {
              lVar17 = 1;
              puVar15 = (undefined4 *)&local_364;
            }
          }
          else {
            lVar17 = 2;
            puVar15 = (undefined4 *)((longlong)local_368 + 3);
          }
        }
        else {
          lVar17 = 3;
          puVar15 = (undefined4 *)((longlong)local_368 + 2);
        }
      }
      else {
        lVar17 = 4;
        puVar15 = (undefined4 *)((longlong)local_368 + 1);
      }
    }
    if (local_2c0 == 0x40) {
      FUN_140141a80(&local_2c8,local_2b8);
      local_2c8 = local_2c8 + 0x40;
      local_2c0 = 0;
    }
    for (; lVar17 != 0; lVar17 = lVar17 + -1) {
      uVar1 = *(undefined1 *)puVar15;
      puVar15 = (undefined4 *)((longlong)puVar15 + 1);
      local_2b8[local_2c0] = uVar1;
      local_2c0 = local_2c0 + 1;
    }
    puVar5 = (undefined8 *)FUN_140144930(&local_2c8,&local_338);
    local_2e0 = 0;
    local_2d8 = 0;
    local_2f0 = (undefined8 *******)0x0;
    uStack_2e8 = 0;
    uVar16 = 6;
    if ((ulonglong)puVar5[2] < 6) {
      uVar16 = puVar5[2];
    }
    if (0xf < (ulonglong)puVar5[3]) {
      puVar5 = (undefined8 *)*puVar5;
    }
    FUN_140017480(&local_2f0,puVar5,uVar16);
    if (0xf < uStack_320) {
      uVar16 = uStack_320 + 1;
      pppppppWVar11 = local_338;
      if (0xfff < uVar16) {
        pppppppWVar11 = (LPWSTR ******)local_338[-1];
        if (0x1f < (ulonglong)((longlong)local_338 + (-8 - (longlong)pppppppWVar11)))
        goto LAB_1400c574d;
        uVar16 = uStack_320 + 0x28;
      }
      thunk_FUN_14028af80(pppppppWVar11,uVar16);
    }
    sVar7 = local_2e0;
    uVar16 = local_2d8;
    if (local_2e0 == 0) goto LAB_1400c56f1;
    sVar6 = strlen(param_2);
    uVar16 = local_2d8;
    pppppppuVar9 = &local_2f0;
    if (0xf < local_2d8) {
      pppppppuVar9 = local_2f0;
    }
    if ((sVar7 != sVar6) ||
       ((sVar7 != 0 && (iVar4 = memcmp(pppppppuVar9,param_2,sVar7), iVar4 != 0))))
    goto LAB_1400c56f1;
    local_350 = 0;
    local_348 = 0;
    local_360 = (LPCSTR ******)0x0;
    uStack_358 = 0;
    sVar7 = strlen(param_3);
    FUN_140017480(&local_360,param_3,sVar7);
    if (local_350 == 0) {
LAB_1400c5479:
      local_248 = 0;
      uStack_250 = 0;
      local_258 = (LPWSTR ******)0x0;
      uStack_240 = 7;
    }
    else {
      pppppppCVar10 = (LPCSTR ******)&local_360;
      if (0xf < local_348) {
        pppppppCVar10 = local_360;
      }
      iVar4 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppCVar10,(int)local_350,(LPWSTR)0x0,0);
      if (iVar4 < 1) goto LAB_1400c5479;
      local_328 = 0;
      uStack_320 = 0;
      local_338 = (LPWSTR ******)0x0;
      uStack_330 = 0;
      FUN_1400167e0(&local_338,0,(longlong)iVar4);
      pppppppWVar11 = (LPWSTR ******)&local_338;
      if (7 < uStack_320) {
        pppppppWVar11 = local_338;
      }
      pppppppCVar10 = (LPCSTR ******)&local_360;
      if (0xf < local_348) {
        pppppppCVar10 = local_360;
      }
      MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppCVar10,(int)local_350,(LPWSTR)pppppppWVar11,iVar4)
      ;
      local_258 = local_338;
      uStack_250 = uStack_330;
      local_248 = local_328;
      uStack_240 = uStack_320;
    }
    if (0xf < local_348) {
      uVar12 = local_348 + 1;
      pppppppCVar10 = local_360;
      if (0xfff < uVar12) {
        pppppppCVar10 = (LPCSTR ******)local_360[-1];
        if (0x1f < (ulonglong)((longlong)local_360 + (-8 - (longlong)pppppppCVar10)))
        goto LAB_1400c574d;
        uVar12 = local_348 + 0x28;
      }
      thunk_FUN_14028af80(pppppppCVar10,uVar12);
    }
    local_350 = 0;
    local_348 = 0;
    local_360 = (LPCSTR ******)0x0;
    uStack_358 = 0;
    sVar7 = strlen(param_4);
    FUN_140017480(&local_360,param_4,sVar7);
    if (local_350 == 0) {
LAB_1400c55ad:
      local_300 = 0;
      uStack_308 = 0;
      local_310 = (LPWSTR ******)0x0;
      uStack_2f8 = 7;
    }
    else {
      pppppppCVar10 = (LPCSTR ******)&local_360;
      if (0xf < local_348) {
        pppppppCVar10 = local_360;
      }
      iVar4 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppCVar10,(int)local_350,(LPWSTR)0x0,0);
      if (iVar4 < 1) goto LAB_1400c55ad;
      local_328 = 0;
      uStack_320 = 0;
      local_338 = (LPWSTR ******)0x0;
      uStack_330 = 0;
      FUN_1400167e0(&local_338,0,(longlong)iVar4);
      pppppppWVar11 = (LPWSTR ******)&local_338;
      if (7 < uStack_320) {
        pppppppWVar11 = local_338;
      }
      pppppppCVar10 = (LPCSTR ******)&local_360;
      if (0xf < local_348) {
        pppppppCVar10 = local_360;
      }
      MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppCVar10,(int)local_350,(LPWSTR)pppppppWVar11,iVar4)
      ;
      local_300 = local_328;
      uStack_2f8 = uStack_320;
      local_310 = local_338;
      uStack_308 = uStack_330;
    }
    if (0xf < local_348) {
      uVar12 = local_348 + 1;
      pppppppCVar10 = local_360;
      if (0xfff < uVar12) {
        pppppppCVar10 = (LPCSTR ******)local_360[-1];
        if (0x1f < (ulonglong)((longlong)local_360 + (-8 - (longlong)pppppppCVar10)))
        goto LAB_1400c574d;
        uVar12 = local_348 + 0x28;
      }
      thunk_FUN_14028af80(pppppppCVar10,uVar12);
    }
    pppppppWVar11 = (LPWSTR ******)&local_310;
    if (7 < uStack_2f8) {
      pppppppWVar11 = local_310;
    }
    lpFile = (LPWSTR ******)&local_258;
    if (7 < uStack_240) {
      lpFile = local_258;
    }
    pHVar8 = ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,(LPCWSTR)lpFile,(LPCWSTR)pppppppWVar11,
                           (LPCWSTR)0x0,1);
    bVar13 = 0x20 < (longlong)pHVar8;
    if (7 < uStack_2f8) {
      uVar12 = uStack_2f8 * 2 + 2;
      pppppppWVar11 = local_310;
      if (0xfff < uVar12) {
        pppppppWVar11 = (LPWSTR ******)local_310[-1];
        if (0x1f < (ulonglong)((longlong)local_310 + (-8 - (longlong)pppppppWVar11)))
        goto LAB_1400c574d;
        uVar12 = uStack_2f8 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppppWVar11,uVar12);
    }
    local_300 = 0;
    uStack_2f8 = 7;
    local_310 = (LPWSTR ******)((ulonglong)local_310 & 0xffffffffffff0000);
    if (7 < uStack_240) {
      uVar12 = uStack_240 * 2 + 2;
      pppppppWVar11 = local_258;
      if (0xfff < uVar12) {
        pppppppWVar11 = (LPWSTR ******)local_258[-1];
        if (0x1f < (ulonglong)((longlong)local_258 + (-8 - (longlong)pppppppWVar11)))
        goto LAB_1400c574d;
        uVar12 = uStack_240 * 2 + 0x29;
      }
      thunk_FUN_14028af80(pppppppWVar11,uVar12);
    }
  }
  else {
    uStack_2e8 = 0;
    local_2f0 = (undefined8 *******)0x0;
    uVar16 = 0xf;
LAB_1400c56f1:
    FUN_140098930("User shortcut blocked.\n",1);
    bVar13 = false;
  }
  if (0xf < uVar16) {
    uVar12 = uVar16 + 1;
    pppppppuVar9 = local_2f0;
    if (0xfff < uVar12) {
      pppppppuVar9 = (undefined8 *******)local_2f0[-1];
      if (0x1f < (ulonglong)((longlong)local_2f0 + (-8 - (longlong)pppppppuVar9))) {
LAB_1400c574d:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        uVar16 = (*pcVar2)();
        return uVar16;
      }
      uVar12 = uVar16 + 0x28;
    }
    thunk_FUN_14028af80(pppppppuVar9,uVar12);
  }
  return (ulonglong)bVar13;
}

