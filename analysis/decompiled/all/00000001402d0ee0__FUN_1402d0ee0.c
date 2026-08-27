// Function: FUN_1402d0ee0
// Addr: 1402d0ee0
// Size: 44 bytes


void FUN_1402d0ee0(UINT param_1,char param_2)

{
  HANDLE hProcess;
  
  if (param_2 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_1402d0f10(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

