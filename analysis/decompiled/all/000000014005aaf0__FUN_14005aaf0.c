// Function: FUN_14005aaf0
// Addr: 14005aaf0
// Size: 911 bytes


void FUN_14005aaf0(undefined8 *param_1,int *param_2,HWND param_3,BLENDFUNCTION param_4,int param_5,
                  int param_6,void *param_7)

{
  bool bVar1;
  HWND hWnd;
  DWORD idAttachTo;
  DWORD idAttach;
  int iVar2;
  undefined8 *lpParam;
  HMODULE hInstance;
  HWND hWnd_00;
  HDC hdc;
  HBITMAP h;
  HDC hdc_00;
  HGDIOBJ h_00;
  int iVar3;
  undefined8 *puVar4;
  SIZE local_res8;
  POINT local_res10;
  HWND local_res18;
  BLENDFUNCTION local_res20 [2];
  tagRECT local_d8;
  BITMAPINFO local_c8;
  WNDCLASSW local_98;
  
  if (((param_5 < 1) || (param_6 < 1)) || (param_7 == (void *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_98.style = 0;
  local_98._4_4_ = 0;
  local_98.lpszClassName = (LPCWSTR)0x0;
  local_98.cbClsExtra = 0;
  local_98.cbWndExtra = 0;
  local_98.hInstance = (HINSTANCE)0x0;
  local_98.lpfnWndProc = FUN_1400579c0;
  local_98.hIcon = (HICON)0x0;
  local_98.hCursor = (HCURSOR)0x0;
  local_98.hbrBackground = (HBRUSH)0x0;
  local_98.lpszMenuName = (LPCWSTR)0x0;
  local_res18 = param_3;
  local_res20[0] = param_4;
  local_98.hInstance = GetModuleHandleW((LPCWSTR)0x0);
  local_98.lpszClassName = L"WPEUIUnderlayWindow";
  local_98.hbrBackground = GetStockObject(4);
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e9134) &&
     (FUN_14028b140(&DAT_1404e9134), DAT_1404e9134 == -1)) {
    DAT_1404e9138 = RegisterClassW(&local_98);
    _Init_thread_footer(&DAT_1404e9134);
  }
  lpParam = (undefined8 *)FUN_14028af20(0x20);
  *lpParam = 0;
  lpParam[1] = 0;
  lpParam[2] = 0;
  lpParam[3] = 0xf;
  *(undefined1 *)lpParam = 0;
  if (lpParam != param_1) {
    puVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_14000f880(lpParam,puVar4,param_1[2]);
  }
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  hWnd = local_res18;
  hWnd_00 = CreateWindowExW(0x8280020,(LPCWSTR)(ulonglong)DAT_1404e9138,L"",0x40000000,*param_2,
                            param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],local_res18,
                            (HMENU)0x0,hInstance,lpParam);
  idAttachTo = GetWindowThreadProcessId(hWnd,(LPDWORD)0x0);
  idAttach = GetWindowThreadProcessId(hWnd_00,(LPDWORD)0x0);
  AttachThreadInput(idAttach,idAttachTo,0);
  SetTimer(hWnd_00,1,3000,(TIMERPROC)0x0);
  SetTimer(hWnd_00,0,1,(TIMERPROC)0x0);
  SetWindowPos(hWnd_00,(HWND)0x1,0,0,0,0,0x41b);
  ShowWindow(hWnd_00,4);
  if (bVar1) {
    iVar2 = 0;
    local_c8.bmiHeader.biWidth = param_5;
    param_5 = param_5 * param_6;
    local_c8.bmiHeader.biXPelsPerMeter = 0;
    local_c8.bmiHeader.biYPelsPerMeter = 0;
    local_c8.bmiHeader.biClrUsed = 0;
    local_c8.bmiHeader.biClrImportant = 0;
    local_c8.bmiColors[0].rgbBlue = '\0';
    local_c8.bmiColors[0].rgbGreen = '\0';
    local_c8.bmiColors[0].rgbRed = '\0';
    local_c8.bmiColors[0].rgbReserved = '\0';
    local_c8.bmiHeader.biSize = 0x2c;
    local_c8.bmiHeader.biPlanes = 1;
    local_c8.bmiHeader.biBitCount = 0x20;
    local_c8.bmiHeader.biCompression = 0;
    local_c8.bmiHeader.biHeight = param_6;
    local_c8.bmiHeader.biSizeImage = param_5 * 4;
    if (0 < param_5) {
      do {
        iVar3 = iVar2 * 4;
        iVar2 = iVar2 + 1;
        *(undefined1 *)((longlong)param_7 + (longlong)iVar3 + 3) = 0xff;
      } while (iVar2 < param_5);
    }
    hdc = GetDC((HWND)0x0);
    h = CreateDIBitmap(hdc,&local_c8.bmiHeader,4,param_7,&local_c8,0);
    hdc_00 = CreateCompatibleDC(hdc);
    h_00 = SelectObject(hdc_00,h);
    local_res20[0].BlendOp = '\0';
    local_res20[0].BlendFlags = '\0';
    local_res20[0].SourceConstantAlpha = 0xff;
    local_res20[0].AlphaFormat = '\x01';
    GetClientRect(hWnd_00,&local_d8);
    local_res8.cx = local_d8.right - local_d8.left;
    local_res8.cy = local_d8.bottom - local_d8.top;
    local_res10.x = 0;
    local_res10.y = 0;
    UpdateLayeredWindow(hWnd_00,hdc,(POINT *)0x0,&local_res8,hdc_00,&local_res10,0,local_res20,2);
    SelectObject(hdc_00,h_00);
    DeleteDC(hdc_00);
    ReleaseDC((HWND)0x0,hdc);
    DeleteObject(h);
  }
  else {
    SetLayeredWindowAttributes(hWnd_00,0,0xff,2);
  }
  return;
}

