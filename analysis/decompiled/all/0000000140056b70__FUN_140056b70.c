// Function: FUN_140056b70
// Addr: 140056b70
// Size: 82 bytes


void FUN_140056b70(longlong param_1,byte param_2,UINT param_3)

{
  if (*(HWND *)(param_1 + 0x78) != (HWND)0x0) {
    KillTimer(*(HWND *)(param_1 + 0x78),(ulonglong)(param_2 + 10000));
    SetTimer(*(HWND *)(param_1 + 0x78),(ulonglong)(param_2 + 10000),param_3,(TIMERPROC)0x0);
  }
  return;
}

