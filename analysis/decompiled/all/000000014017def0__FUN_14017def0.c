// Function: FUN_14017def0
// Addr: 14017def0
// Size: 199 bytes


void FUN_14017def0(longlong param_1)

{
  HANDLE hProcess;
  BOOL BVar1;
  longlong lVar2;
  longlong lVar3;
  DWORD local_res8 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x3068);
  for (lVar2 = *(longlong *)(param_1 + 0x3060); lVar2 != lVar3; lVar2 = lVar2 + 0x50) {
    hProcess = *(HANDLE *)(lVar2 + 0x48);
    if (hProcess != (HANDLE)0x0) {
      BVar1 = GetExitCodeProcess(hProcess,local_res8);
      if ((BVar1 != 0) && (local_res8[0] == 0x103)) {
        TerminateProcess(hProcess,0xffffffff);
      }
      CloseHandle(hProcess);
    }
    *(undefined8 *)(lVar2 + 0x48) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x3068);
  lVar3 = *(longlong *)(param_1 + 0x3060);
  if (lVar3 != lVar2) {
    do {
      FUN_140017240(lVar3 + 0x28);
      FUN_140017240(lVar3 + 8);
      lVar3 = lVar3 + 0x50;
    } while (lVar3 != lVar2);
    *(undefined8 *)(param_1 + 0x3068) = *(undefined8 *)(param_1 + 0x3060);
  }
  return;
}

