// Function: FUN_1401295c0
// Addr: 1401295c0
// Size: 513 bytes


undefined8 FUN_1401295c0(longlong param_1,int *param_2,UINT *param_3,undefined8 *param_4)

{
  HWND hWnd;
  BOOL BVar1;
  int iVar2;
  HDC hdc;
  HDC hdc_00;
  HBITMAP hbm;
  HGLOBAL hMem;
  LPVOID lpvBits;
  undefined8 uVar3;
  uint uVar4;
  tagRECT local_a8;
  undefined1 local_98 [4];
  int local_94;
  UINT local_90;
  tagBITMAPINFO local_78;
  
  hWnd = *(HWND *)(param_1 + 0x158);
  hbm = (HBITMAP)0x0;
  uVar3 = 0;
  hdc = GetDC(hWnd);
  hdc_00 = CreateCompatibleDC(hdc);
  if (hdc_00 != (HDC)0x0) {
    GetClientRect(hWnd,&local_a8);
    hbm = CreateCompatibleBitmap(hdc,local_a8.right - local_a8.left,local_a8.bottom - local_a8.top);
    if (hbm != (HBITMAP)0x0) {
      SelectObject(hdc_00,hbm);
      BVar1 = BitBlt(hdc_00,0,0,local_a8.right - local_a8.left,local_a8.bottom - local_a8.top,hdc,0,
                     0,0xcc0020);
      if (BVar1 != 0) {
        GetObjectW(hbm,0x20,local_98);
        local_78.bmiHeader.biHeight = local_90;
        local_78.bmiHeader.biWidth = local_94;
        local_78.bmiHeader.biSize = 0x28;
        local_78.bmiHeader.biPlanes = 1;
        local_78.bmiHeader.biBitCount = 0x20;
        local_78.bmiHeader.biCompression = 0;
        local_78.bmiHeader.biSizeImage = 0;
        local_78.bmiHeader.biXPelsPerMeter = 0;
        uVar4 = local_90 * local_94 * 4;
        local_78.bmiHeader.biYPelsPerMeter = 0;
        local_78.bmiHeader.biClrUsed = 0;
        local_78.bmiHeader.biClrImportant = 0;
        hMem = GlobalAlloc(0x42,(ulonglong)uVar4);
        lpvBits = GlobalLock(hMem);
        iVar2 = GetDIBits(hdc,hbm,0,local_90,lpvBits,&local_78,0);
        if (((iVar2 != 0) && (2 < local_94)) && (2 < (int)local_90)) {
          *param_2 = local_94;
          *param_3 = local_90;
          uVar3 = thunk_FUN_14028af20(uVar4);
          *param_4 = uVar3;
          FUN_1404210f0(uVar3,lpvBits,uVar4);
          uVar3 = 1;
        }
        if (lpvBits != (LPVOID)0x0) {
          GlobalUnlock(hMem);
        }
        if (hMem != (HGLOBAL)0x0) {
          GlobalFree(hMem);
        }
      }
    }
  }
  DeleteObject(hbm);
  DeleteObject(hdc_00);
  ReleaseDC(hWnd,hdc);
  return uVar3;
}

