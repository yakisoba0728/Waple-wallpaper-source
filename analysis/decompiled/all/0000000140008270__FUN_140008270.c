// Function: FUN_140008270
// Addr: 140008270
// Size: 8062 bytes


undefined4 * FUN_140008270(HWND param_1)

{
  byte *pbVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  BOOL BVar10;
  undefined4 uVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  HANDLE pvVar20;
  size_t sVar21;
  undefined4 *puVar22;
  undefined8 *******pppppppuVar23;
  LPWSTR pWVar24;
  LPCWSTR ******pppppppWVar25;
  undefined4 *puVar26;
  ulonglong uVar27;
  undefined1 *puVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined4 local_res10 [2];
  DWORD local_res18;
  undefined4 uStackX_1c;
  HANDLE local_res20;
  undefined1 auStackY_648 [8];
  undefined1 auStackY_640 [24];
  undefined8 ******local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined4 *puStack_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  longlong local_5d0;
  ulonglong uStack_5c8;
  undefined8 local_5c0;
  undefined8 ******local_5b8;
  PSECURITY_DESCRIPTOR pvStack_5b0;
  longlong local_5a8;
  ulonglong local_5a0;
  longlong *local_598;
  uint local_590;
  longlong local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  longlong local_570;
  int local_568;
  undefined4 *local_560;
  LPCWSTR *****local_558;
  undefined8 uStack_550;
  longlong local_548;
  ulonglong uStack_540;
  undefined8 ******local_538;
  PSECURITY_DESCRIPTOR pvStack_530;
  BOOL local_528;
  LPWSTR local_518;
  ulonglong uStack_510;
  undefined8 local_508;
  ulonglong uStack_500;
  ULONG_PTR local_4f0;
  undefined8 ****local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined4 local_4a0;
  int local_49c;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  char local_448 [16];
  longlong local_438 [3];
  uint auStack_420 [2];
  longlong *local_418;
  longlong *local_410;
  longlong *local_3f8;
  ulonglong *local_3f0;
  int *local_3e0;
  ulonglong local_3c8;
  uint local_3c0;
  undefined1 local_49;
  
  puVar28 = auStackY_648;
  puVar19 = (undefined4 *)0x0;
  local_res10[0] = 0;
  local_5e0 = (LPWSTR)s__control_140473b20._0_8_;
  local_5d0 = 8;
  uStack_5c8 = 0xf;
  uVar30 = 0xcbf29ce484222325;
  uStack_5d8 = 0;
  puVar22 = puVar19;
  do {
    pbVar1 = (byte *)((longlong)&local_5e0 + (longlong)puVar22);
    puVar22 = (undefined4 *)((longlong)puVar22 + 1);
    uVar30 = (uVar30 ^ *pbVar1) * 0x100000001b3;
  } while (puVar22 < &DAT_00000008);
  lVar14 = FUN_1400110a0(&DAT_1404e8b20,&local_538,&local_5e0,uVar30);
  lVar29 = DAT_1404e8b28;
  if (*(longlong *)(lVar14 + 8) != 0) {
    lVar29 = *(longlong *)(lVar14 + 8);
  }
  if (lVar29 == DAT_1404e8b28) {
    local_5a8 = 0;
    pvStack_5b0 = (PSECURITY_DESCRIPTOR)0x0;
    local_5b8 = (undefined8 *******)0x0;
    local_5a0 = 0xf;
  }
  else {
    FUN_140016fc0(&local_5b8,lVar29 + 0x30);
  }
  uVar30 = local_5a0;
  local_590 = CONCAT31(local_590._1_3_,7);
  local_590 = local_590 & 0xfffffeff;
  local_588 = 0;
  uStack_580 = 0;
  local_570 = 0;
  local_568 = 0;
  local_560 = (undefined4 *)0x0;
  local_578 = 0;
  plVar15 = (longlong *)FUN_14028af20(0x10);
  *plVar15 = 0;
  plVar15[1] = 0;
  lVar14 = FUN_14028af20(0x58);
  lVar29 = local_5a8;
  ppppppuVar6 = local_5b8;
  *(longlong *)lVar14 = lVar14;
  pppppppuVar23 = &local_5b8;
  if (0xf < uVar30) {
    pppppppuVar23 = (undefined8 *******)local_5b8;
  }
  *(longlong *)(lVar14 + 8) = lVar14;
  *(longlong *)(lVar14 + 0x10) = lVar14;
  *(undefined2 *)(lVar14 + 0x18) = 0x101;
  *plVar15 = lVar14;
  local_598 = plVar15;
  if ((local_5a8 == 5) && (iVar9 = memcmp(pppppppuVar23,"pause",5), iVar9 == 0)) {
    local_570 = 1000;
LAB_1400097d4:
    local_res20 = (HANDLE)0xffffffffffffffff;
    if (local_570 != 0x3f7) {
LAB_140009acc:
      if ((char)local_590 == '\0') {
LAB_140009b65:
        iVar9 = 0;
LAB_140009b68:
        if (iVar9 != 0) goto LAB_140009b73;
      }
      else {
        if ((local_590 & 0xff) == 6) {
          if (local_598[1] == 0) goto LAB_140009b65;
          plVar15 = (longlong *)*local_598;
          if (*(char *)((longlong)plVar15 + 0x19) == '\0') {
            lVar29 = *plVar15;
            if (*(char *)(lVar29 + 0x19) == '\0') {
              cVar7 = *(char *)(*(longlong *)(lVar29 + 0x10) + 0x19);
              while (cVar7 == '\0') {
                lVar29 = *(longlong *)(lVar29 + 0x10);
                cVar7 = *(char *)(*(longlong *)(lVar29 + 0x10) + 0x19);
              }
              iVar9 = *(int *)(lVar29 + 0x28) + 1;
            }
            else {
              cVar7 = *(char *)(plVar15[1] + 0x19);
              plVar18 = (longlong *)plVar15[1];
              while ((cVar7 == '\0' && (plVar15 == (longlong *)*plVar18))) {
                cVar7 = *(char *)(plVar18[1] + 0x19);
                plVar15 = plVar18;
                plVar18 = (longlong *)plVar18[1];
              }
              if (*(char *)((longlong)plVar15 + 0x19) != '\0') {
                plVar18 = plVar15;
              }
              iVar9 = (int)plVar18[5] + 1;
            }
          }
          else {
            iVar9 = *(int *)(plVar15[2] + 0x28) + 1;
          }
          goto LAB_140009b68;
        }
        if ((local_590 & 0xff) == 7) {
          iVar9 = (int)local_598[1];
          goto LAB_140009b68;
        }
LAB_140009b73:
        FUN_140004d00(&local_608,&local_598,0);
        uVar17 = local_5f8;
        iVar9 = (int)local_5f8 + 0x10;
        puVar19 = (undefined4 *)thunk_FUN_14028af20((longlong)iVar9);
        puVar22 = puStack_5f0;
        ppppppuVar5 = local_608;
        pppppppuVar23 = &local_608;
        if ((undefined4 *)0xf < puStack_5f0) {
          pppppppuVar23 = (undefined8 *******)local_608;
        }
        FUN_1404210f0(puVar19 + 4,pppppppuVar23,uVar17);
        *puVar19 = 0x27977599;
        puVar19[1] = 0xc58b644e;
        puVar19[2] = 0x3d427e3b;
        puVar19[3] = 0x906b6102;
        local_568 = iVar9;
        local_560 = puVar19;
        if ((undefined4 *)0xf < puVar22) {
          puVar26 = (undefined4 *)((longlong)puVar22 + 1);
          pppppppuVar23 = (undefined8 *******)ppppppuVar5;
          if ((undefined4 *)0xfff < puVar26) {
            pppppppuVar23 = (undefined8 *******)ppppppuVar5[-1];
            if (0x1f < (ulonglong)((longlong)ppppppuVar5 + (-8 - (longlong)pppppppuVar23)))
            goto LAB_14000a1a4;
            puVar26 = puVar22 + 10;
          }
          thunk_FUN_14028af80(pppppppuVar23,puVar26);
        }
      }
      puVar22 = (undefined4 *)0x0;
      DVar13 = 0;
      local_4f0 = 0;
      SendMessageTimeoutW(param_1,0x4a,0,(LPARAM)&local_570,0,2000,&local_4f0);
      thunk_FUN_14028af80(puVar19);
      if (local_res20 != (HANDLE)0xffffffffffffffff) {
        FUN_1404217a0(local_448,0,0x400);
        local_res10[0] = 0;
        local_498 = 0;
        uStack_490 = 0;
        local_4e0 = 0;
        local_458 = 0;
        local_488 = 0;
        uStack_480 = 0;
        local_4d8 = 0;
        local_478 = 0;
        uStack_470 = 0;
        local_4a0 = 0xffffffff;
        local_468 = 0;
        uStack_460 = 0;
        local_4e8._0_4_ = 2;
        local_4d0 = 0;
        uStack_4c8 = 0;
        local_49c = 0;
        local_4c0 = 0;
        uStack_4b8 = 0;
        local_4b0 = 0;
        uStack_4a8 = 0;
        plVar15 = (longlong *)FUN_14028af20(0x28);
        *plVar15 = (longlong)&local_498;
        plVar15[1] = (longlong)&local_4e8;
        plVar15[2] = (longlong)&local_res20;
        plVar15[3] = (longlong)local_448;
        plVar15[4] = (longlong)local_res10;
        local_538 = (undefined8 ******)FUN_1402ca17c(0,0,FUN_140011170,plVar15);
        if ((undefined8 *******)local_538 == (undefined8 *******)0x0) goto LAB_14000a1ab;
        local_5b8 = (undefined8 ******)&local_4e8;
        iVar9 = FUN_140290d80(&local_4e8);
        if (iVar9 != 0) {
LAB_14000a1e9:
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(5);
        }
        if (local_49c == 0x7fffffff) {
          local_49c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(6);
        }
        pvStack_5b0 = (PSECURITY_DESCRIPTOR)CONCAT71(pvStack_5b0._1_7_,1);
        FUN_140014df0(&local_res18);
        if (CONCAT44(uStackX_1c,local_res18) < 0x7ffffffed5fa0dff) {
          lVar29 = CONCAT44(uStackX_1c,local_res18) + 5000000000;
        }
        else {
          lVar29 = 0x7fffffffffffffff;
        }
        FUN_14000f6c0(&local_498,&local_5b8,lVar29);
        CancelSynchronousIo(local_538);
        if ((DWORD)pvStack_530 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(1);
        }
        DVar12 = GetCurrentThreadId();
        if ((DWORD)pvStack_530 == DVar12) goto LAB_14000a1e9;
        local_5b8 = local_538;
        pvStack_5b0 = pvStack_530;
        iVar9 = FUN_140291150(&local_5b8,0);
        if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(2);
        }
        local_538 = (undefined8 *******)0x0;
        pvStack_530 = (PSECURITY_DESCRIPTOR)0x0;
        FUN_140290ea0(&local_4e8);
        CloseHandle(local_res20);
        pvVar20 = GetStdHandle(0xfffffff5);
        if ((pvVar20 == (HANDLE)0xffffffffffffffff) || (DVar13 = GetFileType(pvVar20), DVar13 != 1))
        {
          SetStdHandle(0xfffffff5,(HANDLE)0x0);
          SetStdHandle(0xfffffff4,(HANDLE)0x0);
          SetStdHandle(0xfffffff6,(HANDLE)0x0);
          BVar10 = AttachConsole(0xffffffff);
          if ((BVar10 != 0) || (BVar10 = AllocConsole(), BVar10 != 0)) goto LAB_140009e88;
        }
        else {
LAB_140009e88:
          pvVar20 = GetStdHandle(0xfffffff5);
          if (pvVar20 != (HANDLE)0xffffffffffffffff) {
            local_49 = 0;
            local_548 = 0;
            local_558 = (LPCWSTR *****)0x0;
            uStack_550 = 0;
            uStack_540 = 0;
            sVar21 = strlen(local_448);
            FUN_140017480(&local_558,local_448,sVar21);
            if (local_548 == 0) {
LAB_140009f7a:
              local_508 = 0;
              uStack_510 = 0;
              local_518 = (LPWSTR)0x0;
              uStack_500 = 7;
            }
            else {
              pppppppWVar25 = &local_558;
              if (0xf < uStack_540) {
                pppppppWVar25 = (LPCWSTR ******)local_558;
              }
              iVar9 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppWVar25,(int)local_548,(LPWSTR)0x0,
                                          0);
              if (iVar9 < 1) goto LAB_140009f7a;
              local_5d0 = 0;
              uStack_5c8 = 0;
              local_5e0 = (LPWSTR)0x0;
              uStack_5d8 = 0;
              FUN_1400167e0(&local_5e0,0,(longlong)iVar9);
              pWVar24 = (LPWSTR)&local_5e0;
              if (7 < uStack_5c8) {
                pWVar24 = local_5e0;
              }
              pppppppWVar25 = &local_558;
              if (0xf < uStack_540) {
                pppppppWVar25 = (LPCWSTR ******)local_558;
              }
              MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppWVar25,(int)local_548,pWVar24,iVar9);
              local_518 = local_5e0;
              uStack_510 = uStack_5d8;
              local_508 = local_5d0;
              uStack_500 = uStack_5c8;
            }
            FUN_140016600(&local_608,&local_518);
            FUN_140005970(&local_608,0x2f);
            if (7 < uStack_500) {
              FUN_140016a90(&local_518,local_518);
            }
            if (0xf < uStack_540) {
              uVar27 = uStack_540 + 1;
              pppppppWVar25 = (LPCWSTR ******)local_558;
              if (0xfff < uVar27) {
                pppppppWVar25 = (LPCWSTR ******)local_558[-1];
                if (0x1f < (ulonglong)((longlong)local_558 + (-8 - (longlong)pppppppWVar25)))
                goto LAB_14000a1a4;
                uVar27 = uStack_540 + 0x28;
              }
              thunk_FUN_14028af80(pppppppWVar25,uVar27);
            }
            local_5b8 = (undefined8 *******)0x0;
            if (DVar13 != 1) {
              uVar17 = FUN_1402c9a6c(1);
              FUN_1402c9934(&local_5b8,"CONOUT$",&DAT_140473d94,uVar17);
            }
            pppppppuVar23 = &local_608;
            if ((undefined4 *)0x7 < puStack_5f0) {
              pppppppuVar23 = (undefined8 *******)local_608;
            }
            local_res18 = 0;
            WriteConsoleW(pvVar20,pppppppuVar23,(DWORD)local_5f8,&local_res18,(LPVOID)0x0);
            uVar17 = FUN_1402c9a6c(0);
            FUN_1402c9cf8(uVar17);
            uVar17 = FUN_1402c9a6c(1);
            FUN_1402c9cf8(uVar17);
            uVar17 = FUN_1402c9a6c(2);
            FUN_1402c9cf8(uVar17);
            FUN_140016770(&local_608);
          }
          FreeConsole();
        }
        if ((DWORD)pvStack_530 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140015110();
        }
      }
      puVar19 = (undefined4 *)(local_4f0 & 0xffffffff);
      goto LAB_14000a0b0;
    }
    local_538 = (undefined8 ******)CONCAT44(local_538._4_4_,0x18);
    local_528 = 0;
    pvStack_530 = LocalAlloc(0x40,0x28);
    BVar10 = InitializeSecurityDescriptor(pvStack_530,1);
    if (BVar10 != 0) {
      SetSecurityDescriptorDacl(pvStack_530,1,(PACL)0x0,0);
    }
    FUN_14000df80(local_448);
    iVar9 = *(int *)(local_438[0] + 4);
    puVar2 = (uint *)((longlong)auStack_420 + (longlong)iVar9);
    *puVar2 = *puVar2 & 0xfffff9ff;
    puVar2 = (uint *)((longlong)auStack_420 + (longlong)iVar9);
    *puVar2 = *puVar2 | 0x800;
    uVar11 = FUN_1402c97a0();
    FUN_14000ea80(local_438,uVar11);
    local_5a8 = 0;
    local_5d0 = 0;
    uStack_5c8 = 7;
    uStack_5d8 = 0;
    local_5e0 = (LPWSTR)0x0;
    local_5b8 = (undefined8 *******)0x0;
    pvStack_5b0 = (PSECURITY_DESCRIPTOR)0x0;
    if ((((byte)local_3c0 & 0x22) == 2) || (uVar27 = *local_3f0, uVar27 == 0)) {
      if (((local_3c0 & 4) == 0) && (*local_3f8 != 0)) {
        lVar29 = *local_418;
        uVar27 = *local_3f8 + (longlong)*local_3e0 * 2;
        goto LAB_1400098f9;
      }
    }
    else {
      lVar29 = *local_410;
      if (uVar27 < local_3c8) {
        uVar27 = local_3c8;
      }
LAB_1400098f9:
      if (lVar29 != 0) {
        FUN_140016ae0(&local_5e0,lVar29,(longlong)(uVar27 - lVar29) >> 1);
      }
    }
    puVar16 = (undefined8 *)FUN_140015910(&local_5e0);
    local_558 = (LPCWSTR *****)*puVar16;
    uStack_550 = puVar16[1];
    local_548 = puVar16[2];
    uStack_540 = puVar16[3];
    puVar16[2] = 0;
    puVar16[3] = 7;
    *(undefined2 *)puVar16 = 0;
    puVar22 = puVar19;
    if (uStack_5c8 < 8) {
LAB_14000999a:
      uVar17 = FUN_140005790(&local_608,&local_558);
      FUN_140084fe0(&local_5e0,uVar17);
      uVar17 = FUN_140086de0(&local_598,&DAT_140473d8c,&DAT_140473d90);
      FUN_140085610(uVar17,&local_5e0);
      FUN_140085440(&local_5e0);
      if ((undefined4 *)0xf < puStack_5f0) {
        puVar26 = (undefined4 *)((longlong)puStack_5f0 + 1);
        pppppppuVar23 = (undefined8 *******)local_608;
        if ((undefined4 *)0xfff < puVar26) {
          pppppppuVar23 = (undefined8 *******)local_608[-1];
          if (0x1f < (ulonglong)((longlong)local_608 + (-8 - (longlong)pppppppuVar23)))
          goto LAB_14000a1a4;
          puVar26 = puStack_5f0 + 10;
        }
        thunk_FUN_14028af80(pppppppuVar23,puVar26);
      }
      pppppppWVar25 = &local_558;
      if (7 < uStack_540) {
        pppppppWVar25 = (LPCWSTR ******)local_558;
      }
      local_res20 = CreateNamedPipeW((LPCWSTR)pppppppWVar25,1,6,1,0,0x400,0,
                                     (LPSECURITY_ATTRIBUTES)&local_538);
      LocalFree(pvStack_530);
      if (7 < uStack_540) {
        uVar27 = uStack_540 * 2 + 2;
        pppppppWVar25 = (LPCWSTR ******)local_558;
        if (0xfff < uVar27) {
          pppppppWVar25 = (LPCWSTR ******)local_558[-1];
          if (0x1f < (ulonglong)((longlong)local_558 + (-8 - (longlong)pppppppWVar25)))
          goto LAB_14000a1a4;
          uVar27 = uStack_540 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pppppppWVar25,uVar27);
      }
      local_548 = 0;
      uStack_540 = 7;
      local_558 = (LPCWSTR *****)((ulonglong)local_558 & 0xffffffffffff0000);
      FUN_140005b50(local_448);
      goto LAB_140009acc;
    }
    uVar27 = uStack_5c8 * 2 + 2;
    pWVar24 = local_5e0;
    if (uVar27 < 0x1000) {
LAB_140009995:
      thunk_FUN_14028af80(pWVar24,uVar27);
      goto LAB_14000999a;
    }
    pWVar24 = *(LPWSTR *)(local_5e0 + -4);
    if ((ulonglong)((longlong)local_5e0 + (-8 - (longlong)pWVar24)) < 0x20) {
      uVar27 = uStack_5c8 * 2 + 0x29;
      goto LAB_140009995;
    }
  }
  else {
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 4) && (iVar9 = memcmp(pppppppuVar23,&DAT_140473b34,4), iVar9 == 0)) {
      local_570 = 0x3e9;
      goto LAB_1400097d4;
    }
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 4) && (iVar9 = memcmp(pppppppuVar23,&DAT_140473b3c,4), iVar9 == 0)) {
      local_570 = 0x3ea;
      goto LAB_1400097d4;
    }
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 4) && (iVar9 = memcmp(pppppppuVar23,&DAT_140473b44,4), iVar9 == 0)) {
      local_570 = 0x3eb;
      goto LAB_1400097d4;
    }
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 6) && (iVar9 = memcmp(pppppppuVar23,"unmute",6), iVar9 == 0)) {
      local_570 = 0x3ec;
      goto LAB_1400097d4;
    }
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 0xd) && (iVar9 = memcmp(pppppppuVar23,"openWallpaper",0xd), iVar9 == 0)) {
      local_5d0 = 5;
      uStack_5d8 = 0;
      uStack_5c8 = 0xf;
      local_5e0 = (LPWSTR)(ulonglong)CONCAT14(s__file_140473b70[4],s__file_140473b70._0_4_);
      uVar17 = FUN_14000db60(0,&local_608,&local_5e0);
      FUN_140084fe0(&local_5e0,uVar17);
      uVar17 = FUN_140086de0(&local_598,&DAT_140473b68,&DAT_140473b6c);
      FUN_140085610(uVar17,&local_5e0);
      FUN_140085440(&local_5e0);
      FUN_140017240(&local_608);
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-location",9);
      uVar17 = FUN_14000db60(uVar11,&local_5e0,&local_608);
      FUN_140084fe0(&local_518,uVar17);
      uVar17 = FUN_140086de0(&local_598,"location","");
      FUN_140085610(uVar17,&local_518);
      FUN_140085440(&local_518);
      FUN_140017240(&local_5e0);
      local_5f8 = 8;
      local_608 = (undefined8 ******)s__monitor_140473ba0._0_8_;
      uStack_600 = 0;
      puStack_5f0 = (undefined4 *)0xf;
      cVar7 = FUN_14000dc20(0,&local_608);
      if (cVar7 == '\0') {
        iVar9 = -1;
        puVar22 = puVar19;
      }
      else {
        local_5f8 = 0;
        puStack_5f0 = (undefined4 *)0x0;
        local_608 = (undefined8 ******)0x0;
        uStack_600 = 0;
        uVar11 = FUN_140017480(&local_608,"-monitor",8);
        puVar16 = (undefined8 *)FUN_14000db60(uVar11,&local_5e0,&local_608);
        if (0xf < (ulonglong)puVar16[3]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        iVar9 = FUN_1402c82c0(puVar16);
        puVar22 = (undefined4 *)0x1;
      }
      uVar17 = uStack_600;
      local_608 = (undefined8 ******)(longlong)iVar9;
      uStack_600 = CONCAT71(uStack_600._1_7_,1);
      uStack_600._4_4_ = SUB84(uVar17,4);
      uStack_600 = CONCAT44(uStack_600._4_4_,(undefined4)uStack_600) & 0xfffffffffffffeff;
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_5e8 = 0;
      uVar17 = FUN_140086de0(&local_598,"monitor","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      if (puVar22 != (undefined4 *)0x0) {
        FUN_140017240(&local_5e0);
      }
      bVar4 = false;
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-playInWindow",0xd);
      cVar7 = FUN_14000dc20(uVar11,&local_608);
      if (cVar7 != '\0') {
        local_5f8 = 0;
        puStack_5f0 = (undefined4 *)0x0;
        local_608 = (undefined8 ******)0x0;
        uStack_600 = 0;
        uVar11 = FUN_140017480(&local_608,"-playInWindow",0xd);
        FUN_14000db60(uVar11,&local_5e0,&local_608);
        if (local_5d0 == 0) {
          FUN_14000f880(&local_5e0,"Wallpaper Pop-out",0x11);
        }
        FUN_140084fe0(&local_608,&local_5e0);
        uVar17 = FUN_140086de0(&local_598,"playinwindow","");
        FUN_140085610(uVar17,&local_608);
        FUN_140085440(&local_608);
        FUN_140017240(&local_5e0);
      }
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-width",6);
      cVar7 = FUN_14000dc20(uVar11,&local_608);
      if (cVar7 == '\0') {
        iVar9 = -1;
      }
      else {
        local_5f8 = 0;
        puStack_5f0 = (undefined4 *)0x0;
        bVar4 = true;
        local_608 = (undefined8 ******)0x0;
        uStack_600 = 0;
        uVar11 = FUN_140017480(&local_608,"-width",6);
        puVar16 = (undefined8 *)FUN_14000db60(uVar11,&local_5e0,&local_608);
        if (0xf < (ulonglong)puVar16[3]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        iVar9 = FUN_1402c82c0(puVar16);
      }
      uVar17 = uStack_600;
      local_608 = (undefined8 ******)(longlong)iVar9;
      uStack_600 = CONCAT71(uStack_600._1_7_,1);
      uStack_600._4_4_ = SUB84(uVar17,4);
      uStack_600 = CONCAT44(uStack_600._4_4_,(undefined4)uStack_600) & 0xfffffffffffffeff;
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_5e8 = 0;
      uVar17 = FUN_140086de0(&local_598,"width","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      if (bVar4) {
        FUN_140017240(&local_5e0);
      }
      bVar4 = false;
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-height",7);
      cVar7 = FUN_14000dc20(uVar11,&local_608);
      if (cVar7 == '\0') {
        iVar9 = -1;
      }
      else {
        local_5f8 = 0;
        puStack_5f0 = (undefined4 *)0x0;
        bVar4 = true;
        local_608 = (undefined8 ******)0x0;
        uStack_600 = 0;
        uVar11 = FUN_140017480(&local_608,"-height",7);
        puVar16 = (undefined8 *)FUN_14000db60(uVar11,&local_5e0,&local_608);
        if (0xf < (ulonglong)puVar16[3]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        iVar9 = FUN_1402c82c0(puVar16);
      }
      uVar17 = uStack_600;
      local_608 = (undefined8 ******)(longlong)iVar9;
      uStack_600 = CONCAT71(uStack_600._1_7_,1);
      uStack_600._4_4_ = SUB84(uVar17,4);
      uStack_600 = CONCAT44(uStack_600._4_4_,(undefined4)uStack_600) & 0xfffffffffffffeff;
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_5e8 = 0;
      uVar17 = FUN_140086de0(&local_598,"height","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      if (bVar4) {
        FUN_140017240(&local_5e0);
      }
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,&DAT_140473c08,2);
      cVar7 = FUN_14000dc20(uVar11,&local_608);
      if (cVar7 != '\0') {
        local_5f8 = 0;
        puStack_5f0 = (undefined4 *)0x0;
        local_608 = (undefined8 ******)0x0;
        uStack_600 = 0;
        uVar11 = FUN_140017480(&local_608,&DAT_140473c08,2);
        puVar16 = (undefined8 *)FUN_14000db60(uVar11,&local_5e0,&local_608);
        uVar17 = uStack_600;
        if (0xf < (ulonglong)puVar16[3]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        uStack_600 = CONCAT71(uStack_600._1_7_,1);
        uStack_600._4_4_ = SUB84(uVar17,4);
        uStack_600 = CONCAT44(uStack_600._4_4_,(undefined4)uStack_600) & 0xfffffffffffffeff;
        local_5f8 = 0;
        puStack_5f0 = (undefined4 *)0x0;
        local_5e8 = 0;
        iVar9 = FUN_1402c82c0(puVar16);
        local_608 = (undefined8 ******)(longlong)iVar9;
        uVar17 = FUN_140086de0(&local_598,&DAT_140473c0c,&DAT_140473c0d);
        FUN_140085610(uVar17,&local_608);
        FUN_140085440(&local_608);
        FUN_140017240(&local_5e0);
      }
      local_5f8 = 2;
      uStack_600 = 0;
      local_608 = (undefined8 ******)(ulonglong)DAT_140473c10;
      puStack_5f0 = (undefined4 *)0xf;
      cVar7 = FUN_14000dc20(0,&local_608);
      if (cVar7 != '\0') {
        local_5f8 = 0;
        puStack_5f0 = (undefined4 *)0x0;
        local_608 = (undefined8 ******)0x0;
        uStack_600 = 0;
        uVar11 = FUN_140017480(&local_608,&DAT_140473c10,2);
        puVar16 = (undefined8 *)FUN_14000db60(uVar11,&local_5e0,&local_608);
        uVar17 = uStack_600;
        if (0xf < (ulonglong)puVar16[3]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        uStack_600 = CONCAT71(uStack_600._1_7_,1);
        uStack_600._4_4_ = SUB84(uVar17,4);
        uStack_600 = CONCAT44(uStack_600._4_4_,(undefined4)uStack_600) & 0xfffffffffffffeff;
        local_5f8 = 0;
        puStack_5f0 = (undefined4 *)0x0;
        local_5e8 = 0;
        iVar9 = FUN_1402c82c0(puVar16);
        local_608 = (undefined8 ******)(longlong)iVar9;
        uVar17 = FUN_140086de0(&local_598,&DAT_140473c14,&DAT_140473c15);
        FUN_140085610(uVar17,&local_608);
        FUN_140085440(&local_608);
        FUN_140017240(&local_5e0);
      }
      uVar27 = uStack_600;
      uStack_600 = CONCAT71(uStack_600._1_7_,5);
      uStack_600._4_4_ = SUB84(uVar27,4);
      uStack_600 = CONCAT44(uStack_600._4_4_,(undefined4)uStack_600) & 0xfffffffffffffeff;
      local_5d0 = 9;
      local_5e0._0_1_ = s__activate_140473c28[0];
      local_5e0._1_1_ = s__activate_140473c28[1];
      local_5e0._2_1_ = s__activate_140473c28[2];
      local_5e0._3_1_ = s__activate_140473c28[3];
      local_5e0._4_1_ = s__activate_140473c28[4];
      local_5e0._5_1_ = s__activate_140473c28[5];
      local_5e0._6_1_ = s__activate_140473c28[6];
      local_5e0._7_1_ = s__activate_140473c28[7];
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      uStack_5c8 = 0xf;
      uStack_5d8 = (ulonglong)(byte)s__activate_140473c28[8];
      local_5e8 = 0;
      uVar8 = FUN_14000dc20(0,&local_5e0);
      local_608 = (undefined8 ******)CONCAT71(local_608._1_7_,uVar8);
      uVar17 = FUN_140086de0(&local_598,"activate","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      FUN_140017480(&local_608,"-borderless",0xb);
      uVar27 = uStack_5d8;
      uStack_5d8 = CONCAT71(uStack_5d8._1_7_,5);
      uStack_5d8._4_4_ = SUB84(uVar27,4);
      uStack_5d8 = CONCAT44(uStack_5d8._4_4_,(undefined4)uStack_5d8) & 0xfffffffffffffeff;
      local_5d0 = 0;
      uStack_5c8 = 0;
      local_5c0 = 0;
      cVar7 = FUN_14000dc20(0,&local_608);
      local_5e0 = (LPWSTR)CONCAT71(local_5e0._1_7_,cVar7);
      uVar17 = FUN_140086de0(&local_598,"borderless","");
      FUN_140085610(uVar17,&local_5e0);
      FUN_140085440(&local_5e0);
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 *******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-preset",7);
      uVar17 = FUN_14000db60(uVar11,&local_5e0,&local_608);
      FUN_140084fe0(&local_518,uVar17);
      uVar17 = FUN_140086de0(&local_598,"preset","");
      FUN_140085610(uVar17,&local_518);
      FUN_140085440(&local_518);
      FUN_140017240(&local_5e0);
      local_570 = 0x3ed;
      goto LAB_1400097d4;
    }
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 0xc) && (iVar9 = memcmp(pppppppuVar23,"openPlaylist",0xc), iVar9 == 0)) {
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-playlist",9);
      uVar17 = FUN_14000db60(uVar11,&local_5e0,&local_608);
      FUN_140084fe0(&local_608,uVar17);
      uVar17 = FUN_140086de0(&local_598,"playlist","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      FUN_140017240(&local_5e0);
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-location",9);
      uVar17 = FUN_14000db60(uVar11,&local_5e0,&local_608);
      FUN_140084fe0(&local_518,uVar17);
      uVar17 = FUN_140086de0(&local_598,"location","");
      FUN_140085610(uVar17,&local_518);
      FUN_140085440(&local_518);
      FUN_140017240(&local_5e0);
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-monitor",8);
      cVar7 = FUN_14000dc20(uVar11,&local_608);
      if (cVar7 == '\0') {
        iVar9 = -1;
        puVar22 = puVar19;
      }
      else {
        local_5f8 = 0;
        puStack_5f0 = (undefined4 *)0x0;
        local_608 = (undefined8 ******)0x0;
        uStack_600 = 0;
        uVar11 = FUN_140017480(&local_608,"-monitor",8);
        puVar16 = (undefined8 *)FUN_14000db60(uVar11,&local_5e0,&local_608);
        if (0xf < (ulonglong)puVar16[3]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        iVar9 = FUN_1402c82c0(puVar16);
        puVar22 = (undefined4 *)&DAT_00000008;
      }
      uVar17 = uStack_600;
      local_608 = (undefined8 ******)(longlong)iVar9;
      uStack_600 = CONCAT71(uStack_600._1_7_,1);
      uStack_600._4_4_ = SUB84(uVar17,4);
      uStack_600 = CONCAT44(uStack_600._4_4_,(undefined4)uStack_600) & 0xfffffffffffffeff;
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_5e8 = 0;
      uVar17 = FUN_140086de0(&local_598,"monitor","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      if (puVar22 != (undefined4 *)0x0) {
        FUN_140017240(&local_5e0);
      }
      local_570 = 0x3ee;
      goto LAB_1400097d4;
    }
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 0xb) && (iVar9 = memcmp(pppppppuVar23,"openProfile",0xb), iVar9 == 0)) {
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 *******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-profile",8);
      uVar17 = FUN_14000db60(uVar11,&local_5e0,&local_608);
      FUN_140084fe0(&local_608,uVar17);
      uVar17 = FUN_140086de0(&local_598,"profile","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      FUN_140017240(&local_5e0);
      local_570 = 0x3f5;
      goto LAB_1400097d4;
    }
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 0xe) && (iVar9 = memcmp(pppppppuVar23,"closeWallpaper",0xe), iVar9 == 0)) {
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-location",9);
      uVar17 = FUN_14000db60(uVar11,&local_5e0,&local_608);
      FUN_140084fe0(&local_608,uVar17);
      uVar17 = FUN_140086de0(&local_598,"location","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      FUN_140017240(&local_5e0);
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-monitor",8);
      cVar7 = FUN_14000dc20(uVar11,&local_608);
      if (cVar7 == '\0') {
        iVar9 = -1;
        puVar22 = puVar19;
      }
      else {
        local_5f8 = 0;
        puStack_5f0 = (undefined4 *)0x0;
        local_608 = (undefined8 ******)0x0;
        uStack_600 = 0;
        uVar11 = FUN_140017480(&local_608,"-monitor",8);
        puVar16 = (undefined8 *)FUN_14000db60(uVar11,&local_5e0,&local_608);
        if (0xf < (ulonglong)puVar16[3]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        iVar9 = FUN_1402c82c0(puVar16);
        puVar22 = (undefined4 *)&DAT_00000010;
      }
      local_5f8 = 0;
      FUN_140086ca0(&local_608,1,0);
      local_608 = (undefined8 ******)(longlong)iVar9;
      uVar17 = FUN_140086de0(&local_598,"monitor","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      if (puVar22 != (undefined4 *)0x0) {
        FUN_140017240(&local_5e0);
      }
      local_570 = 0x3ef;
      goto LAB_1400097d4;
    }
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 0xf) && (iVar9 = memcmp(pppppppuVar23,"applyProperties",0xf), iVar9 == 0)) {
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-location",9);
      uVar17 = FUN_14000db60(uVar11,&local_5e0,&local_608);
      FUN_140084fe0(&local_608,uVar17);
      uVar17 = FUN_140086de0(&local_598,"location","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      FUN_140017240(&local_5e0);
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-monitor",8);
      cVar7 = FUN_14000dc20(uVar11,&local_608);
      if (cVar7 == '\0') {
        iVar9 = -1;
        puVar22 = puVar19;
      }
      else {
        local_5f8 = 0;
        puStack_5f0 = (undefined4 *)0x0;
        local_608 = (undefined8 ******)0x0;
        uStack_600 = 0;
        uVar11 = FUN_140017480(&local_608,"-monitor",8);
        puVar16 = (undefined8 *)FUN_14000db60(uVar11,&local_5e0,&local_608);
        if (0xf < (ulonglong)puVar16[3]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        iVar9 = FUN_1402c82c0(puVar16);
        puVar22 = (undefined4 *)&DAT_00000020;
      }
      local_5f8 = 0;
      FUN_140086ca0(&local_608,1,0);
      local_608 = (undefined8 ******)(longlong)iVar9;
      uVar17 = FUN_140086de0(&local_598,"monitor","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      if (puVar22 != (undefined4 *)0x0) {
        FUN_140017240(&local_5e0);
      }
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 *******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-properties",0xb);
      uVar17 = FUN_14000db60(uVar11,&local_5e0,&local_608);
      FUN_140084fe0(&local_518,uVar17);
      uVar17 = FUN_140086de0(&local_598,"properties","");
      FUN_140085610(uVar17,&local_518);
      FUN_140085440(&local_518);
      FUN_140017240(&local_5e0);
      local_570 = 0x3f0;
      goto LAB_1400097d4;
    }
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 0xd) && (iVar9 = memcmp(pppppppuVar23,"nextWallpaper",0xd), iVar9 == 0)) {
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-location",9);
      uVar17 = FUN_14000db60(uVar11,&local_5e0,&local_608);
      FUN_140084fe0(&local_608,uVar17);
      uVar17 = FUN_140086de0(&local_598,"location","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      FUN_140017240(&local_5e0);
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-monitor",8);
      cVar7 = FUN_14000dc20(uVar11,&local_608);
      if (cVar7 == '\0') {
        iVar9 = -1;
        puVar22 = puVar19;
      }
      else {
        local_5f8 = 0;
        puStack_5f0 = (undefined4 *)0x0;
        local_608 = (undefined8 ******)0x0;
        uStack_600 = 0;
        uVar11 = FUN_140017480(&local_608,"-monitor",8);
        puVar16 = (undefined8 *)FUN_14000db60(uVar11,&local_5e0,&local_608);
        if (0xf < (ulonglong)puVar16[3]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        iVar9 = FUN_1402c82c0(puVar16);
        puVar22 = (undefined4 *)0x40;
      }
      local_5f8 = 0;
      FUN_140086ca0(&local_608,1,0);
      local_608 = (undefined8 ******)(longlong)iVar9;
      uVar17 = FUN_140086de0(&local_598,"monitor","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      if (puVar22 != (undefined4 *)0x0) {
        FUN_140017240(&local_5e0);
      }
      local_570 = 0x3f1;
      goto LAB_1400097d4;
    }
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 9) && (iVar9 = memcmp(pppppppuVar23,"hideIcons",9), iVar9 == 0)) {
      local_570 = 0x3f2;
      goto LAB_1400097d4;
    }
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 9) && (iVar9 = memcmp(pppppppuVar23,"showIcons",9), iVar9 == 0)) {
      local_570 = 0x3f3;
      goto LAB_1400097d4;
    }
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 0xf) && (iVar9 = memcmp(pppppppuVar23,"revealWallpaper",0xf), iVar9 == 0)) {
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 *******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,&DAT_140473d4c,3);
      uVar17 = FUN_14000db60(uVar11,&local_5e0,&local_608);
      FUN_140084fe0(&local_608,uVar17);
      uVar17 = FUN_140086de0(&local_598,"workshopid","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      FUN_140017240(&local_5e0);
      local_570 = 0x3f4;
      goto LAB_1400097d4;
    }
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 0xc) && (iVar9 = memcmp(pppppppuVar23,"getWallpaper",0xc), iVar9 == 0)) {
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-location",9);
      uVar17 = FUN_14000db60(uVar11,&local_5e0,&local_608);
      FUN_140084fe0(&local_608,uVar17);
      uVar17 = FUN_140086de0(&local_598,"location","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      FUN_140017240(&local_5e0);
      local_5f8 = 0;
      puStack_5f0 = (undefined4 *)0x0;
      local_608 = (undefined8 ******)0x0;
      uStack_600 = 0;
      uVar11 = FUN_140017480(&local_608,"-monitor",8);
      cVar7 = FUN_14000dc20(uVar11,&local_608);
      if (cVar7 == '\0') {
        iVar9 = -1;
        puVar22 = puVar19;
      }
      else {
        local_5f8 = 0;
        puStack_5f0 = (undefined4 *)0x0;
        local_608 = (undefined8 ******)0x0;
        uStack_600 = 0;
        uVar11 = FUN_140017480(&local_608,"-monitor",8);
        puVar16 = (undefined8 *)FUN_14000db60(uVar11,&local_5e0,&local_608);
        if (0xf < (ulonglong)puVar16[3]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        iVar9 = FUN_1402c82c0(puVar16);
        puVar22 = (undefined4 *)0x80;
      }
      local_5f8 = 0;
      FUN_140086ca0(&local_608,1,0);
      local_608 = (undefined8 ******)(longlong)iVar9;
      uVar17 = FUN_140086de0(&local_598,"monitor","");
      FUN_140085610(uVar17,&local_608);
      FUN_140085440(&local_608);
      if ((char)puVar22 < '\0') {
        FUN_140017240(&local_5e0);
      }
      local_570 = 0x3f7;
      goto LAB_1400097d4;
    }
    pppppppuVar23 = &local_5b8;
    if (0xf < uVar30) {
      pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    }
    if ((lVar29 == 3) && (iVar9 = memcmp(pppppppuVar23,&DAT_140473d60,3), iVar9 == 0)) {
      local_570 = 0x3f6;
      goto LAB_1400097d4;
    }
    if (local_570 != 0) goto LAB_1400097d4;
LAB_14000a0b0:
    plVar15 = local_598;
    puVar22 = (undefined4 *)0x0;
    switch((char)local_590) {
    case '\0':
    case '\x01':
    case '\x02':
    case '\x03':
    case '\x05':
      break;
    case '\x04':
      if ((local_590 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(local_598);
      }
      break;
    case '\x06':
    case '\a':
      if (local_598 != (longlong *)0x0) {
        FUN_140088e40(local_598);
        thunk_FUN_14028af80(plVar15,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    lVar29 = local_588;
    local_598 = (longlong *)0x0;
    if (local_588 != 0) {
      FUN_140017240(local_588 + 0x40);
      FUN_140017240(lVar29 + 0x20);
      FUN_140017240(lVar29);
      thunk_FUN_14028af80(lVar29,0x60);
    }
    if (uVar30 < 0x10) {
      return puVar19;
    }
    uVar27 = uVar30 + 1;
    pppppppuVar23 = (undefined8 *******)ppppppuVar6;
    if (uVar27 < 0x1000) {
LAB_14000a179:
      thunk_FUN_14028af80(pppppppuVar23,uVar27);
      return puVar19;
    }
    pppppppuVar23 = (undefined8 *******)ppppppuVar6[-1];
    if ((ulonglong)((longlong)ppppppuVar6 + (-8 - (longlong)pppppppuVar23)) < 0x20) {
      uVar27 = uVar30 + 0x28;
      goto LAB_14000a179;
    }
  }
LAB_14000a1a4:
  DVar13 = (DWORD)puVar22;
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar28 = auStackY_640;
LAB_14000a1ab:
  pvStack_530 = (PSECURITY_DESCRIPTOR)CONCAT44(pvStack_530._4_4_,DVar13);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar28 + -8) = &UNK_14000a1b9;
  FUN_140290d30(6);
}

