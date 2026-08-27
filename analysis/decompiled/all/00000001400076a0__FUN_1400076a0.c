// Function: FUN_1400076a0
// Addr: 1400076a0
// Size: 129 bytes


undefined8 FUN_1400076a0(void)

{
  _NOTIFYICONDATAW local_3d8 [5];
  
  ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,DAT_1404e8b68,DAT_1404e8b70,DAT_1404e8b78,5);
  local_3d8[0]._4_4_ = 0;
  FUN_1404217a0(&local_3d8[0].uFlags,0,0x3bc);
  local_3d8[0].hWnd = DAT_1404e5278;
  local_3d8[0].uID = 1000;
  local_3d8[0].cbSize = 0x3d0;
  Shell_NotifyIconW(2,local_3d8);
  return 0;
}

