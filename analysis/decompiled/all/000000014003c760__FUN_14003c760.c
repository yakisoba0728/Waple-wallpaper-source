// Function: FUN_14003c760
// Addr: 14003c760
// Size: 218 bytes


undefined8 FUN_14003c760(HWND param_1,undefined8 *param_2)

{
  int iVar1;
  BOOL BVar2;
  HWND pHVar3;
  HWND hWnd;
  tagRECT local_238;
  WCHAR local_228 [260];
  
  GetClassNameW(param_1,local_228,0x100);
  iVar1 = FUN_1402c12c0(local_228,L"WorkerW");
  if (iVar1 == 0) {
    pHVar3 = FindWindowExW(param_1,(HWND)0x0,L"SHELLDLL_DefView",(LPCWSTR)0x0);
    if (pHVar3 != (HWND)0x0) {
      hWnd = FindWindowExW((HWND)0x0,param_1,L"WorkerW",(LPCWSTR)0x0);
      local_238.left = 0;
      local_238.top = 0;
      local_238.right = 0;
      local_238.bottom = 0;
      BVar2 = GetWindowRect(hWnd,&local_238);
      if ((BVar2 != 0) && (0x100 < local_238.bottom - local_238.top)) {
        *param_2 = param_1;
        param_2[2] = hWnd;
        pHVar3 = FindWindowExW(pHVar3,(HWND)0x0,L"SysListView32",(LPCWSTR)0x0);
        param_2[1] = pHVar3;
        return 0;
      }
    }
  }
  return 1;
}

