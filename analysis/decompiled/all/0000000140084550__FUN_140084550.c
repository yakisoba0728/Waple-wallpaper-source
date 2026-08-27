// Function: FUN_140084550
// Addr: 140084550
// Size: 216 bytes


void FUN_140084550(undefined8 *param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  uint uVar3;
  HWND hWnd;
  undefined8 local_18;
  HWND pHStack_10;
  
  hWnd = (HWND)0x0;
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    local_18 = 0;
    pHStack_10 = (HWND)0x0;
    DVar1 = GetProcessId((HANDLE)*param_1);
    local_18 = CONCAT44(local_18._4_4_,DVar1);
    EnumWindows(FUN_140082fa0,(LPARAM)&local_18);
    hWnd = pHStack_10;
  }
  BVar2 = IsWindow(hWnd);
  if (BVar2 != 0) {
    uVar3 = GetWindowLongW(hWnd,-0x10);
    if ((uVar3 >> 0x1d & 1) == 0) {
      SetWindowPos(hWnd,(HWND)0xffffffffffffffff,0,0,0,0,3);
      SetWindowPos(hWnd,(HWND)0xfffffffffffffffe,0,0,0,0,3);
    }
    else {
      ShowWindow(hWnd,9);
    }
    BringWindowToTop(hWnd);
    SetForegroundWindow(hWnd);
  }
  return;
}

