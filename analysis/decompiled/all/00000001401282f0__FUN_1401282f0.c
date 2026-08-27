// Function: FUN_1401282f0
// Addr: 1401282f0
// Size: 404 bytes


void FUN_1401282f0(longlong param_1,char param_2)

{
  HWND hWnd;
  BOOL BVar1;
  int iVar2;
  DWORD idAttachTo;
  DWORD idAttach;
  HWND hWnd_00;
  HMODULE pHVar3;
  FARPROC pFVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if ((*(longlong *)(param_1 + 0x158) != -1) && (*(char *)(param_1 + 8) != param_2)) {
    if (param_2 != '\0') {
      puVar5 = *(undefined8 **)(param_1 + 0x170);
      puVar7 = *(undefined8 **)(param_1 + 0x178);
      if (puVar5 != puVar7) {
        do {
          puVar6 = puVar5 + 1;
          BVar1 = IsWindow((HWND)*puVar5);
          if (BVar1 == 0) {
            FUN_1404210f0(puVar5);
            *(longlong *)(param_1 + 0x178) = *(longlong *)(param_1 + 0x178) + -8;
            puVar6 = puVar5;
          }
          puVar7 = *(undefined8 **)(param_1 + 0x178);
          puVar5 = puVar6;
        } while (puVar6 != puVar7);
      }
      for (puVar5 = *(undefined8 **)(param_1 + 0x170); puVar5 != puVar7; puVar5 = puVar5 + 1) {
        hWnd = (HWND)*puVar5;
        hWnd_00 = GetParent(hWnd);
        iVar2 = IsWindow(hWnd_00);
        while (iVar2 != 0) {
          idAttachTo = GetWindowThreadProcessId(hWnd_00,(LPDWORD)0x0);
          idAttach = GetWindowThreadProcessId(hWnd,(LPDWORD)0x0);
          AttachThreadInput(idAttach,idAttachTo,0);
          hWnd_00 = GetParent(hWnd_00);
          iVar2 = IsWindow(hWnd_00);
        }
      }
      pHVar3 = GetModuleHandleW(L"ntdll");
      pFVar4 = GetProcAddress(pHVar3,"NtSuspendProcess");
      (*pFVar4)(*(undefined8 *)(param_1 + 0x158));
      *(char *)(param_1 + 8) = param_2;
      return;
    }
    pHVar3 = GetModuleHandleW(L"ntdll");
    pFVar4 = GetProcAddress(pHVar3,"NtResumeProcess");
    (*pFVar4)(*(undefined8 *)(param_1 + 0x158));
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}

