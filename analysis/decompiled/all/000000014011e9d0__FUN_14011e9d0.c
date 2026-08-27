// Function: FUN_14011e9d0
// Addr: 14011e9d0
// Size: 1131 bytes


undefined8 FUN_14011e9d0(LPVOID param_1,char *param_2,HICON param_3,int *param_4,char param_5)

{
  code *pcVar1;
  ushort uVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  HMODULE pHVar6;
  size_t sVar7;
  HWND hWnd;
  LPCSTR ***ppppCVar8;
  LPCWSTR pWVar9;
  UINT uFlags;
  WNDCLASSEXW *lpWideCharStr;
  ulonglong uVar10;
  undefined1 *puVar11;
  DWORD dwStyle;
  ULONG_PTR local_res8;
  undefined1 auStackY_128 [8];
  undefined1 auStackY_120 [24];
  tagRECT local_c8;
  LPCSTR **local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  WNDCLASSEXW local_78;
  
  puVar11 = auStackY_128;
  local_c8.right = param_4[2];
  local_c8.bottom = param_4[3];
  local_c8.left = 0;
  local_c8.top = 0;
  AdjustWindowRectEx(&local_c8,0xcf0000,0,0);
  iVar4 = param_4[1];
  if (iVar4 == -0x80000000) {
    if (*param_4 != -0x80000000) {
      param_4[1] = 0;
      iVar4 = 0;
      goto LAB_14011ea34;
    }
  }
  else {
LAB_14011ea34:
    if (*param_4 == -0x80000000) {
      *param_4 = 0;
    }
  }
  if (*(HWND *)((longlong)param_1 + 8) != (HWND)0x0) {
    BVar3 = IsWindow(*(HWND *)((longlong)param_1 + 8));
    if (BVar3 != 0) {
      local_78.cbSize = 0x2c;
      BVar3 = GetWindowPlacement(*(HWND *)((longlong)param_1 + 8),(WINDOWPLACEMENT *)&local_78);
      if ((BVar3 == 1) && (((int)local_78.lpfnWndProc == 3) != (bool)param_5)) {
        local_res8 = 0;
        if (param_5 != '\0') {
          SendMessageTimeoutW(*(HWND *)((longlong)param_1 + 8),0x112,0xf030,0,1,0,&local_res8);
          goto LAB_14011edf0;
        }
        SendMessageTimeoutW(*(HWND *)((longlong)param_1 + 8),0x112,0xf120,0,1,0,&local_res8);
      }
      else if (param_5 != '\0') goto LAB_14011edf0;
      if ((*param_4 == -0x80000000) || (uFlags = 0x14, iVar4 == -0x80000000)) {
        uFlags = 0x16;
      }
      SetWindowPos(*(HWND *)((longlong)param_1 + 8),(HWND)0x0,*param_4,iVar4,
                   local_c8.right - local_c8.left,local_c8.bottom - local_c8.top,uFlags);
      goto LAB_14011edf0;
    }
  }
  iVar4 = FUN_140290d80(&DAT_1404dfa50);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404dfa9c == 0x7fffffff) goto LAB_14011ee1f;
  if (DAT_1404e8fbc == 0) {
    local_78.style = 0;
    local_78.lpfnWndProc._0_4_ = 0;
    local_78.hbrBackground = (HBRUSH)0x0;
    local_78.lpszMenuName = (LPCWSTR)0x0;
    local_78.lpszClassName = (LPCWSTR)0x0;
    local_78.hIconSm = (HICON)0x0;
    local_78.lpfnWndProc._4_4_ = 0;
    local_78.cbClsExtra = 0;
    local_78.cbWndExtra = 0;
    local_78.hInstance._0_4_ = 0;
    local_78.hInstance._4_4_ = 0;
    local_78.hCursor = (HCURSOR)0x0;
    local_78.cbSize = 0x50;
    local_78.hIcon = param_3;
    local_78.hbrBackground = GetStockObject(4);
    local_78.lpfnWndProc._0_4_ = 0x4011e8e0;
    local_78.lpfnWndProc._4_4_ = 1;
    pHVar6 = GetModuleHandleW((LPCWSTR)0x0);
    local_78.hInstance._0_4_ = SUB84(pHVar6,0);
    local_78.hInstance._4_4_ = (undefined4)((ulonglong)pHVar6 >> 0x20);
    local_78.lpszClassName = L"WPEOverlappedWallpaper";
    DAT_1404e8fbc = RegisterClassExW(&local_78);
  }
  uVar2 = DAT_1404e8fbc;
  FUN_140290ea0(&DAT_1404dfa50);
  dwStyle = 0x10cf0000;
  if (*(char *)((longlong)param_1 + 0x10) != '\0') {
    dwStyle = 0x90000000;
  }
  if ((param_5 != '\0') && (dwStyle = 0x11cf0000, *(char *)((longlong)param_1 + 0x10) != '\0')) {
    dwStyle = 0x91000000;
  }
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = (LPCSTR **)0x0;
  uStack_b0 = 0;
  sVar7 = strlen(param_2);
  FUN_140017480(&local_b8,param_2,sVar7);
  if (local_a8 == 0) {
LAB_14011eccd:
    local_88 = 0;
    uStack_90 = 0;
    local_98 = (LPCWSTR)0x0;
    uStack_80 = 7;
  }
  else {
    ppppCVar8 = &local_b8;
    if (0xf < local_a0) {
      ppppCVar8 = (LPCSTR ***)local_b8;
    }
    iVar4 = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar8,(int)local_a8,(LPWSTR)0x0,0);
    if (iVar4 < 1) goto LAB_14011eccd;
    local_78.cbClsExtra = 0;
    local_78.cbWndExtra = 0;
    local_78.hInstance._0_4_ = 0;
    local_78.hInstance._4_4_ = 0;
    local_78.cbSize = 0;
    local_78.style = 0;
    local_78.lpfnWndProc._0_4_ = 0;
    local_78.lpfnWndProc._4_4_ = 0;
    FUN_1400167e0(&local_78,0,(longlong)iVar4);
    lpWideCharStr = &local_78;
    if (7 < CONCAT44(local_78.hInstance._4_4_,local_78.hInstance._0_4_)) {
      lpWideCharStr = (WNDCLASSEXW *)CONCAT44(local_78.style,local_78.cbSize);
    }
    ppppCVar8 = &local_b8;
    if (0xf < local_a0) {
      ppppCVar8 = (LPCSTR ***)local_b8;
    }
    MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar8,(int)local_a8,(LPWSTR)lpWideCharStr,iVar4);
    local_88 = CONCAT44(local_78.cbWndExtra,local_78.cbClsExtra);
    uStack_80 = CONCAT44(local_78.hInstance._4_4_,local_78.hInstance._0_4_);
    local_98 = (LPCWSTR)CONCAT44(local_78.style,local_78.cbSize);
    uStack_90 = CONCAT44(local_78.lpfnWndProc._4_4_,(int)local_78.lpfnWndProc);
  }
  if (0xf < local_a0) {
    uVar10 = local_a0 + 1;
    ppppCVar8 = (LPCSTR ***)local_b8;
    if (uVar10 < 0x1000) {
LAB_14011ed1b:
      thunk_FUN_14028af80(ppppCVar8,uVar10);
      goto LAB_14011ed20;
    }
    ppppCVar8 = (LPCSTR ***)local_b8[-1];
    if ((ulonglong)((longlong)local_b8 + (-8 - (longlong)ppppCVar8)) < 0x20) {
      uVar10 = local_a0 + 0x28;
      goto LAB_14011ed1b;
    }
LAB_14011ee18:
    pcVar1 = (code *)swi(0x29);
    DAT_1404dfa9c = (*pcVar1)(5);
    puVar11 = auStackY_120;
LAB_14011ee1f:
    DAT_1404dfa9c = DAT_1404dfa9c + -1;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar11 + -8) = &UNK_14011ee31;
    FUN_140290d30(6);
  }
LAB_14011ed20:
  pHVar6 = GetModuleHandleW((LPCWSTR)0x0);
  pWVar9 = (LPCWSTR)&local_98;
  if (7 < uStack_80) {
    pWVar9 = local_98;
  }
  hWnd = CreateWindowExW(0,(LPCWSTR)(ulonglong)uVar2,pWVar9,dwStyle,*param_4,param_4[1],
                         local_c8.right - local_c8.left,local_c8.bottom - local_c8.top,(HWND)0x0,
                         (HMENU)0x0,pHVar6,param_1);
  *(HWND *)((longlong)param_1 + 8) = hWnd;
  if (*(char *)((longlong)param_1 + 0x10) != '\0') {
    uVar5 = GetWindowLongW(hWnd,-0x10);
    SetWindowLongW(hWnd,-0x10,uVar5 & 0xde33ffff);
  }
  if (uStack_80 < 8) goto LAB_14011edf0;
  uVar10 = uStack_80 * 2 + 2;
  pWVar9 = local_98;
  if (0xfff < uVar10) {
    pWVar9 = *(LPCWSTR *)(local_98 + -4);
    if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pWVar9))) goto LAB_14011ee18;
    uVar10 = uStack_80 * 2 + 0x29;
  }
  thunk_FUN_14028af80(pWVar9,uVar10);
LAB_14011edf0:
  return *(undefined8 *)((longlong)param_1 + 8);
}

