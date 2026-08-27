// Function: FUN_14017de70
// Addr: 14017de70
// Size: 116 bytes


void FUN_14017de70(undefined8 param_1,longlong param_2)

{
  HANDLE hProcess;
  BOOL BVar1;
  undefined8 local_res8;
  
  hProcess = *(HANDLE *)(param_2 + 0x48);
  if (hProcess != (HANDLE)0x0) {
    local_res8 = param_1;
    BVar1 = GetExitCodeProcess(hProcess,(LPDWORD)&local_res8);
    if ((BVar1 != 0) && ((DWORD)local_res8 == 0x103)) {
      TerminateProcess(hProcess,0xffffffff);
    }
    CloseHandle(hProcess);
    *(undefined8 *)(param_2 + 0x48) = 0;
    return;
  }
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}

