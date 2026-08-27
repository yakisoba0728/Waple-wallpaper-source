// Function: FUN_14003d930
// Addr: 14003d930
// Size: 472 bytes


void FUN_14003d930(int param_1)

{
  BOOL BVar1;
  uint uVar2;
  HWND hWndParent;
  int iVar3;
  BYTE bAlpha;
  float fVar4;
  HWND local_28;
  HWND pHStack_20;
  HWND local_18;
  HWND pHStack_10;
  
  if (DAT_1404df590 == param_1) {
    return;
  }
  local_28 = (HWND)0x0;
  pHStack_20 = (HWND)0x0;
  local_18 = (HWND)0x0;
  pHStack_10 = (HWND)0x0;
  pHStack_10 = FindWindowW(L"Progman",(LPCWSTR)0x0);
  if (pHStack_10 == (HWND)0x0) {
    return;
  }
  hWndParent = GetDesktopWindow();
  EnumChildWindows(hWndParent,FUN_14003c760,(LPARAM)&local_28);
  if ((10 < DAT_1404e5290) && (BVar1 = IsWindow(local_18), BVar1 == 0)) {
    local_18 = FindWindowExW(pHStack_10,(HWND)0x0,L"WorkerW",(LPCWSTR)0x0);
    BVar1 = IsWindow(local_18);
    if (BVar1 != 0) {
      local_28 = FindWindowExW(pHStack_10,(HWND)0x0,L"SHELLDLL_DefView",(LPCWSTR)0x0);
      pHStack_20 = FindWindowExW(local_28,(HWND)0x0,L"SysListView32",(LPCWSTR)0x0);
    }
  }
  BVar1 = IsWindow(local_28);
  if (BVar1 == 0) {
    return;
  }
  fVar4 = (float)FUN_140419fa0(((float)param_1 / DAT_1404928f8) * DAT_14049290c);
  iVar3 = (int)fVar4;
  if (iVar3 < 0xff) {
    if (iVar3 < 1) {
      iVar3 = 1;
      uVar2 = GetWindowLongW(local_28,-0x14);
    }
    else {
      uVar2 = GetWindowLongW(local_28,-0x14);
      if (0xfd < iVar3) goto LAB_14003da95;
    }
    SetWindowLongW(local_28,-0x14,uVar2 | 0x80000);
    bAlpha = (BYTE)iVar3;
  }
  else {
    uVar2 = GetWindowLongW(local_28,-0x14);
LAB_14003da95:
    if (DAT_1404e5290 < 0xb) {
      SetWindowLongW(local_28,-0x14,uVar2 & 0xfff7ffff);
      DAT_1404df590 = param_1;
      return;
    }
    bAlpha = 0xff;
  }
  SetLayeredWindowAttributes(local_28,0,bAlpha,2);
  UpdateLayeredWindow(local_28,(HDC)0x0,(POINT *)0x0,(SIZE *)0x0,(HDC)0x0,(POINT *)0x0,0,
                      (BLENDFUNCTION *)0x0,0);
  DAT_1404df590 = param_1;
  return;
}

