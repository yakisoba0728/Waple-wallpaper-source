// Function: FUN_1400ff350
// Addr: 1400ff350
// Size: 1010 bytes


void FUN_1400ff350(longlong param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  DWORD idAttachTo;
  DWORD idAttach;
  HMODULE hInstance;
  HWND pHVar7;
  int iVar8;
  WNDCLASSEXW local_78;
  
  BVar4 = IsWindow(*(HWND *)(param_1 + 0x168));
  if (BVar4 != 0) {
    uVar5 = GetWindowLongW(*(HWND *)(param_1 + 0x168),-0x14);
    if (((byte)(uVar5 >> 0x15) & 1) == param_2) {
      return;
    }
    DestroyWindow(*(HWND *)(param_1 + 0x168));
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  iVar6 = FUN_140290d80(&DAT_1404df9b0);
  if (iVar6 != 0) {
LAB_1400ff739:
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404df9fc == 0x7fffffff) {
    DAT_1404df9fc = 0x7ffffffe;
LAB_1400ff72e:
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  if (DAT_1404e8f8c == 0) {
    local_78.cbSize = 0x50;
    local_78.cbClsExtra = 0;
    local_78.cbWndExtra = 0;
    local_78.hInstance = (HINSTANCE)0x0;
    local_78.hIcon = (HICON)0x0;
    local_78.hCursor = (HCURSOR)0x0;
    local_78.hbrBackground = (HBRUSH)0x0;
    local_78.lpszMenuName = (LPCWSTR)0x0;
    local_78.lpszClassName = (LPCWSTR)0x0;
    local_78.hIconSm = (HICON)0x0;
    local_78.lpfnWndProc = FUN_140101c50;
    local_78.style = 0x80;
    local_78.hInstance = GetModuleHandleW((LPCWSTR)0x0);
    local_78.hbrBackground = (HBRUSH)0x1;
    local_78.lpszClassName = L"WPEVideoWallpaper";
    DAT_1404e8f8c = RegisterClassExW(&local_78);
  }
  uVar3 = DAT_1404e8f8c;
  FUN_140290ea0(&DAT_1404df9b0);
  iVar8 = 1;
  LOCK();
  iVar6 = *(int *)(param_1 + 0x140);
  *(int *)(param_1 + 0x140) = 1;
  UNLOCK();
  while (iVar6 != 0) {
    iVar6 = *(int *)(param_1 + 0x140);
    while (iVar6 != 0) {
      iVar6 = iVar8;
      if (iVar8 == 0) {
LAB_1400ff4d9:
        iVar8 = iVar8 * 2;
      }
      else {
        do {
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (iVar8 < 0x40) goto LAB_1400ff4d9;
        iVar8 = 0x40;
      }
      iVar6 = *(int *)(param_1 + 0x140);
    }
    LOCK();
    iVar6 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = 1;
    UNLOCK();
  }
  iVar6 = *(int *)(param_1 + 0x144);
  iVar8 = *(int *)(param_1 + 0x148);
  iVar1 = *(int *)(param_1 + 0x14c);
  iVar2 = *(int *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x140) = 0;
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  pHVar7 = CreateWindowExW((uint)param_2 << 0x15 | 0x8080000,(LPCWSTR)(ulonglong)uVar3,
                           L"WPEVideoWallpaper",0x40000000,iVar6,iVar8,iVar1 - iVar6,iVar2 - iVar8,
                           *(HWND *)(param_1 + 0x60),(HMENU)0x0,hInstance,(LPVOID)0x0);
  *(HWND *)(param_1 + 0x168) = pHVar7;
  GetLastError();
  BVar4 = IsWindow(*(HWND *)(param_1 + 0x168));
  if (BVar4 != 0) {
    SetLayeredWindowAttributes(*(HWND *)(param_1 + 0x168),0,0xff,2);
    iVar6 = FUN_140290d80(param_1 + 800);
    if (iVar6 != 0) goto LAB_1400ff739;
    if (*(int *)(param_1 + 0x36c) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x36c) = 0x7ffffffe;
      goto LAB_1400ff72e;
    }
    if (*(longlong *)(param_1 + 0x300) != *(longlong *)(param_1 + 0x308)) {
      SetTimer(*(HWND *)(param_1 + 0x168),0x66,0x2ee,(TIMERPROC)0x0);
      SetTimer(*(HWND *)(param_1 + 0x168),0x67,100,(TIMERPROC)0x0);
    }
    if ((*(byte *)(param_1 + 0x17c) & 0x20) != 0) {
      SetTimer(*(HWND *)(param_1 + 0x168),0x69,500,(TIMERPROC)0x0);
    }
    idAttachTo = GetWindowThreadProcessId(*(HWND *)(param_1 + 0x60),(LPDWORD)0x0);
    idAttach = GetWindowThreadProcessId(*(HWND *)(param_1 + 0x168),(LPDWORD)0x0);
    AttachThreadInput(idAttach,idAttachTo,0);
    SetPropW(*(HWND *)(param_1 + 0x168),L"WallpaperEngineWallpaper",(HANDLE)0x1);
    SetWindowLongPtrW(*(HWND *)(param_1 + 0x168),-0x15,param_1);
    pHVar7 = *(HWND *)(param_1 + 0x168);
    uVar5 = GetWindowLongW(pHVar7,-0x10);
    SetWindowLongW(pHVar7,-0x10,uVar5 & 0xde33ffff);
    ShowWindow(*(HWND *)(param_1 + 0x168),1);
    if ((*(byte *)(param_1 + 0xa6) & 8) != 0) {
      ShowCursor(0);
    }
    FUN_140290ea0(param_1 + 800);
  }
  return;
}

