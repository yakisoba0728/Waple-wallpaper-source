// Function: FUN_140127d00
// Addr: 140127d00
// Size: 1506 bytes


void FUN_140127d00(longlong param_1)

{
  DWORD *pDVar1;
  DWORD DVar2;
  HWND pHVar3;
  longlong *plVar4;
  int iVar5;
  BOOL BVar6;
  uint uVar7;
  HMODULE hModule;
  FARPROC pFVar8;
  longlong lVar9;
  HANDLE hProcess;
  longlong *plVar10;
  char cVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  DWORD local_res8 [2];
  WCHAR local_228 [256];
  
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e92e8) &&
     (FUN_14028b140(&DAT_1404e92e8), DAT_1404e92e8 == -1)) {
    GetCurrentThreadId();
    _Init_thread_footer(&DAT_1404e92e8);
  }
  pDVar1 = (DWORD *)(param_1 + 0x168);
  uVar12 = 0;
  if (*pDVar1 != 0) {
    if (*(HWINEVENTHOOK *)(param_1 + 0x160) != (HWINEVENTHOOK)0x0) {
      UnhookWinEvent(*(HWINEVENTHOOK *)(param_1 + 0x160));
      *(undefined8 *)(param_1 + 0x160) = 0;
    }
    lVar9 = DAT_1404e8e18;
    plVar4 = DAT_1404e8e08;
    uVar15 = (((((ulonglong)*(byte *)pDVar1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)*(byte *)(param_1 + 0x169)) * 0x100000001b3 ^
              (ulonglong)*(byte *)(param_1 + 0x16a)) * 0x100000001b3 ^
             (ulonglong)*(byte *)(param_1 + 0x16b)) * 0x100000001b3 & DAT_1404e8e30;
    plVar10 = *(longlong **)(DAT_1404e8e18 + 8 + uVar15 * 0x10);
    if (plVar10 == DAT_1404e8e08) {
LAB_140127e00:
      plVar10 = (longlong *)0x0;
    }
    else {
      DVar2 = *(DWORD *)(plVar10 + 2);
      while (*pDVar1 != DVar2) {
        if (plVar10 == *(longlong **)(DAT_1404e8e18 + uVar15 * 0x10)) goto LAB_140127e00;
        plVar10 = (longlong *)plVar10[1];
        DVar2 = *(DWORD *)(plVar10 + 2);
      }
    }
    plVar16 = DAT_1404e8e08;
    if (plVar10 != (longlong *)0x0) {
      plVar16 = plVar10;
    }
    if (plVar16 != DAT_1404e8e08) {
      uVar15 = (((((ulonglong)*(byte *)(plVar16 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar16 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar16 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar16 + 0x13)) * 0x100000001b3 & DAT_1404e8e30;
      plVar10 = *(longlong **)(DAT_1404e8e18 + uVar15 * 0x10);
      if (*(longlong **)(DAT_1404e8e18 + 8 + uVar15 * 0x10) == plVar16) {
        if (plVar10 == plVar16) {
          *(longlong **)(DAT_1404e8e18 + uVar15 * 0x10) = DAT_1404e8e08;
          *(longlong **)(lVar9 + 8 + uVar15 * 0x10) = plVar4;
        }
        else {
          *(longlong *)(DAT_1404e8e18 + 8 + uVar15 * 0x10) = plVar16[1];
        }
      }
      else if (plVar10 == plVar16) {
        *(longlong *)(DAT_1404e8e18 + uVar15 * 0x10) = *plVar16;
      }
      lVar9 = *plVar16;
      DAT_1404e8e10 = DAT_1404e8e10 + -1;
      *(longlong *)plVar16[1] = lVar9;
      *(longlong *)(lVar9 + 8) = plVar16[1];
      thunk_FUN_14028af80(plVar16,0x20);
    }
    lVar9 = DAT_1404e8e58;
    plVar4 = DAT_1404e8e48;
    uVar15 = (((((ulonglong)*(byte *)pDVar1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)*(byte *)(param_1 + 0x169)) * 0x100000001b3 ^
              (ulonglong)*(byte *)(param_1 + 0x16a)) * 0x100000001b3 ^
             (ulonglong)*(byte *)(param_1 + 0x16b)) * 0x100000001b3 & DAT_1404e8e70;
    plVar10 = *(longlong **)(DAT_1404e8e58 + 8 + uVar15 * 0x10);
    if (plVar10 == DAT_1404e8e48) {
LAB_140127f20:
      plVar10 = (longlong *)0x0;
    }
    else {
      DVar2 = *(DWORD *)(plVar10 + 2);
      while (*pDVar1 != DVar2) {
        if (plVar10 == *(longlong **)(DAT_1404e8e58 + uVar15 * 0x10)) goto LAB_140127f20;
        plVar10 = (longlong *)plVar10[1];
        DVar2 = *(DWORD *)(plVar10 + 2);
      }
    }
    plVar16 = DAT_1404e8e48;
    if (plVar10 != (longlong *)0x0) {
      plVar16 = plVar10;
    }
    if (plVar16 != DAT_1404e8e48) {
      uVar15 = (((((ulonglong)*(byte *)(plVar16 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar16 + 0x11)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar16 + 0x12)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar16 + 0x13)) * 0x100000001b3 & DAT_1404e8e70;
      plVar10 = *(longlong **)(DAT_1404e8e58 + uVar15 * 0x10);
      if (*(longlong **)(DAT_1404e8e58 + 8 + uVar15 * 0x10) == plVar16) {
        if (plVar10 == plVar16) {
          *(longlong **)(DAT_1404e8e58 + uVar15 * 0x10) = DAT_1404e8e48;
          *(longlong **)(lVar9 + 8 + uVar15 * 0x10) = plVar4;
        }
        else {
          *(longlong *)(DAT_1404e8e58 + 8 + uVar15 * 0x10) = plVar16[1];
        }
      }
      else if (plVar10 == plVar16) {
        *(longlong *)(DAT_1404e8e58 + uVar15 * 0x10) = *plVar16;
      }
      lVar9 = *plVar16;
      DAT_1404e8e50 = DAT_1404e8e50 + -1;
      *(longlong *)plVar16[1] = lVar9;
      *(longlong *)(lVar9 + 8) = plVar16[1];
      thunk_FUN_14028af80(plVar16);
    }
  }
  uVar15 = uVar12;
  if ((*(longlong *)(param_1 + 0x158) != -1) && (*(char *)(param_1 + 8) != '\0')) {
    hModule = GetModuleHandleW(L"ntdll");
    pFVar8 = GetProcAddress(hModule,"NtResumeProcess");
    (*pFVar8)(*(undefined8 *)(param_1 + 0x158));
    *(undefined1 *)(param_1 + 8) = 0;
  }
  do {
    if (((&DAT_1404e8d70)[uVar15] != 0) &&
       (lVar9 = thunk_FUN_14028d250(*(undefined8 *)(param_1 + 0x170)),
       lVar9 != *(longlong *)(param_1 + 0x178))) {
      (&DAT_1404e8d70)[uVar15] = 0;
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 != 0x10);
  if (*(longlong *)(param_1 + 0x158) == -1) goto LAB_140128264;
  puVar13 = *(undefined8 **)(param_1 + 0x170);
  puVar14 = *(undefined8 **)(param_1 + 0x178);
  uVar15 = uVar12;
  if (puVar13 == puVar14) {
LAB_1401280fa:
    cVar11 = '\0';
  }
  else {
    do {
      pHVar3 = (HWND)*puVar13;
      FUN_1404217a0(local_228,0,0x200);
      GetClassNameW(pHVar3,local_228,0x100);
      iVar5 = FUN_1402c12c0(local_228);
      if (iVar5 == 0) {
        uVar15 = (ulonglong)((int)uVar15 + 1);
        BVar6 = IsWindowVisible(pHVar3);
        if (BVar6 == 0) {
          uVar12 = (ulonglong)((int)uVar12 + 1);
        }
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar14);
    if (((int)uVar15 != 2) || ((int)uVar12 != 1)) goto LAB_1401280fa;
    cVar11 = (char)uVar12;
  }
  puVar13 = *(undefined8 **)(param_1 + 0x178);
  for (puVar14 = *(undefined8 **)(param_1 + 0x170); puVar14 != puVar13; puVar14 = puVar14 + 1) {
    pHVar3 = (HWND)*puVar14;
    if ((cVar11 == '\0') || (BVar6 = IsWindowVisible(pHVar3), BVar6 == 0)) {
      uVar7 = GetWindowLongW(pHVar3,-0x10);
      SetWindowLongW(pHVar3,-0x10,uVar7 & 0xefffffff);
      SetParent(pHVar3,(HWND)0x0);
      PostMessageW(pHVar3,0x11,0,1);
      PostMessageW(pHVar3,0x16,0,1);
      PostMessageW(pHVar3,0x10,0,0);
    }
  }
  iVar5 = 1000;
  do {
    if (*pDVar1 == 0) break;
    local_res8[0] = 0;
    hProcess = OpenProcess(0x80000000,0,*pDVar1);
    if (((hProcess == (HANDLE)0xffffffffffffffff) ||
        (BVar6 = GetExitCodeProcess(hProcess,local_res8), BVar6 != 1)) || (local_res8[0] != 0x103))
    {
      CloseHandle(hProcess);
      *pDVar1 = 0;
      goto LAB_14012824c;
    }
    iVar5 = iVar5 + -10;
    CloseHandle(hProcess);
    Sleep(10);
  } while (0 < iVar5);
  *pDVar1 = 0;
  TerminateProcess(*(HANDLE *)(param_1 + 0x158),0);
LAB_14012824c:
  CloseHandle(*(HANDLE *)(param_1 + 0x158));
  *(undefined8 *)(param_1 + 0x158) = 0xffffffffffffffff;
LAB_140128264:
  if (*(longlong *)(param_1 + 0x170) != *(longlong *)(param_1 + 0x178)) {
    *(longlong *)(param_1 + 0x178) = *(longlong *)(param_1 + 0x170);
  }
  return;
}

