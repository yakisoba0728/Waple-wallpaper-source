// Function: FUN_1401277a0
// Addr: 1401277a0
// Size: 555 bytes


void FUN_1401277a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  HWND hWnd;
  int iVar4;
  BOOL BVar5;
  HMODULE hModule;
  FARPROC pFVar6;
  HWND pHVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  iVar8 = 1;
  LOCK();
  iVar4 = *(int *)(param_1 + 0x140);
  *(int *)(param_1 + 0x140) = 1;
  UNLOCK();
  do {
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x144);
      iVar8 = *(int *)(param_1 + 0x148);
      iVar2 = *(int *)(param_1 + 0x14c);
      iVar3 = *(int *)(param_1 + 0x150);
      *(undefined4 *)(param_1 + 0x140) = 0;
      cVar1 = *(char *)(param_1 + 8);
      if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x158) != -1)) {
        hModule = GetModuleHandleW(L"ntdll");
        pFVar6 = GetProcAddress(hModule,"NtResumeProcess");
        (*pFVar6)(*(undefined8 *)(param_1 + 0x158));
        *(undefined1 *)(param_1 + 8) = 0;
      }
      BVar5 = IsWindow(*(HWND *)(param_1 + 0x188));
      if (BVar5 != 0) {
        SetWindowPos(*(HWND *)(param_1 + 0x188),(HWND)0x0,iVar4,iVar8,iVar2 - iVar4,iVar3 - iVar8,
                     0x4110);
      }
      puVar10 = *(undefined8 **)(param_1 + 0x170);
      puVar11 = *(undefined8 **)(param_1 + 0x178);
      if (puVar10 != puVar11) {
        do {
          puVar9 = puVar10 + 1;
          BVar5 = IsWindow((HWND)*puVar10);
          if (BVar5 == 0) {
            FUN_1404210f0(puVar10);
            *(longlong *)(param_1 + 0x178) = *(longlong *)(param_1 + 0x178) + -8;
            puVar9 = puVar10;
          }
          puVar11 = *(undefined8 **)(param_1 + 0x178);
          puVar10 = puVar9;
        } while (puVar9 != puVar11);
      }
      puVar10 = *(undefined8 **)(param_1 + 0x170);
      if (puVar10 != puVar11) {
        do {
          hWnd = (HWND)*puVar10;
          if ((*(char *)(param_1 + 0x192) == '\0') ||
             (pHVar7 = GetParent(hWnd), pHVar7 == *(HWND *)(param_1 + 0x188))) {
            SetWindowPos(hWnd,(HWND)0x0,0,0,iVar2 - iVar4,iVar3 - iVar8,0x4010);
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar11);
      }
      Sleep(0x32);
      if (cVar1 != '\0') {
        FUN_1401282f0(param_1,1);
        return;
      }
      return;
    }
    iVar4 = *(int *)(param_1 + 0x140);
    while (iVar4 != 0) {
      iVar4 = iVar8;
      if (iVar8 == 0) {
LAB_1401277f9:
        iVar8 = iVar8 * 2;
      }
      else {
        do {
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (iVar8 < 0x40) goto LAB_1401277f9;
        iVar8 = 0x40;
      }
      iVar4 = *(int *)(param_1 + 0x140);
    }
    LOCK();
    iVar4 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = 1;
    UNLOCK();
  } while( true );
}

