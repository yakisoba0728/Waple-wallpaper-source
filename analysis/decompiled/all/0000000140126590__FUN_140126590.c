// Function: FUN_140126590
// Addr: 140126590
// Size: 166 bytes


undefined8 FUN_140126590(HWND param_1)

{
  int iVar1;
  HWND pHVar2;
  WCHAR local_208 [256];
  
  GetClassNameW(param_1,local_208,0x100);
  iVar1 = FUN_1402c12c0(local_208,L"WorkerW");
  if ((iVar1 != 0) && (iVar1 = FUN_1402c12c0(local_208,L"Progman"), iVar1 != 0)) {
    return 1;
  }
  pHVar2 = FindWindowExW(param_1,(HWND)0x0,L"SHELLDLL_DefView",(LPCWSTR)0x0);
  if ((pHVar2 != (HWND)0x0) &&
     (DAT_1404e8d68 = pHVar2,
     pHVar2 = FindWindowExW(pHVar2,(HWND)0x0,L"SysListView32",L"FolderView"), pHVar2 != (HWND)0x0))
  {
    DAT_1404e8d60 = pHVar2;
    return 0;
  }
  return 1;
}

