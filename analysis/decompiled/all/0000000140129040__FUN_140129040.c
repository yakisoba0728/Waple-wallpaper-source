// Function: FUN_140129040
// Addr: 140129040
// Size: 1007 bytes


undefined8 FUN_140129040(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  BOOL BVar4;
  int iVar5;
  DWORD idAttachTo;
  DWORD idAttach;
  uint uVar6;
  undefined8 uVar7;
  HMODULE hInstance;
  HWND pHVar8;
  int iVar9;
  LARGE_INTEGER local_res8;
  WNDCLASSEXW local_a8;
  undefined1 local_58 [48];
  
  *(undefined1 *)(param_1 + 0x34) = 0;
  QueryPerformanceCounter(&local_res8);
  *(LARGE_INTEGER *)(param_1 + 0x32) = local_res8;
  BVar4 = IsWindow((HWND)param_1[0x2b]);
  if (BVar4 != 0) {
    KillTimer((HWND)param_1[0x2b],100);
  }
  thunk_FUN_14028af80(param_1[0x2f]);
  param_1[0x2f] = 0;
  FUN_14010a520(param_1,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x98))(param_1,local_58);
  FUN_140086de0(local_58,"general","");
  uVar7 = FUN_140086de0(local_58,"wproperties","");
  FUN_140104b60(uVar7,0x24);
  uVar7 = FUN_140085090(&local_a8,uVar7);
  FUN_14012a270(param_1,uVar7);
  BVar4 = IsWindow((HWND)param_1[0x2b]);
  if (BVar4 == 0) {
    iVar5 = FUN_140290d80(&DAT_1404dfaa0);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    if (DAT_1404dfaec == 0x7fffffff) {
      DAT_1404dfaec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    if (DAT_1404e8fec == 0) {
      local_a8.cbSize = 0x50;
      local_a8.cbClsExtra = 0;
      local_a8.cbWndExtra = 0;
      local_a8.hInstance = (HINSTANCE)0x0;
      local_a8.hIcon = (HICON)0x0;
      local_a8.hCursor = (HCURSOR)0x0;
      local_a8.hbrBackground = (HBRUSH)0x0;
      local_a8.lpszMenuName = (LPCWSTR)0x0;
      local_a8.lpszClassName = (LPCWSTR)0x0;
      local_a8.hIconSm = (HICON)0x0;
      local_a8.lpfnWndProc = FUN_14012a6a0;
      local_a8.style = 0x80;
      local_a8.hInstance = GetModuleHandleW((LPCWSTR)0x0);
      local_a8.hbrBackground = (HBRUSH)0x1;
      local_a8.lpszClassName = L"WPEImageWallpaper";
      DAT_1404e8fec = RegisterClassExW(&local_a8);
    }
    uVar3 = DAT_1404e8fec;
    FUN_140290ea0(&DAT_1404dfaa0);
    iVar9 = 1;
    LOCK();
    iVar5 = (int)param_1[0x28];
    *(int *)(param_1 + 0x28) = 1;
    UNLOCK();
    while (iVar5 != 0) {
      iVar5 = (int)param_1[0x28];
      while (iVar5 != 0) {
        iVar5 = iVar9;
        if (iVar9 == 0) {
LAB_140129279:
          iVar9 = iVar9 * 2;
        }
        else {
          do {
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          if (iVar9 < 0x40) goto LAB_140129279;
          iVar9 = 0x40;
        }
        iVar5 = (int)param_1[0x28];
      }
      LOCK();
      iVar5 = (int)param_1[0x28];
      *(int *)(param_1 + 0x28) = 1;
      UNLOCK();
    }
    iVar5 = *(int *)((longlong)param_1 + 0x144);
    lVar1 = param_1[0x29];
    iVar9 = *(int *)((longlong)param_1 + 0x14c);
    lVar2 = param_1[0x2a];
    *(undefined4 *)(param_1 + 0x28) = 0;
    hInstance = GetModuleHandleW((LPCWSTR)0x0);
    pHVar8 = CreateWindowExW(0x8080000,(LPCWSTR)(ulonglong)uVar3,L"WPEImageWallpaper",0x40000000,
                             iVar5,(int)lVar1,iVar9 - iVar5,(int)lVar2 - (int)lVar1,
                             (HWND)param_1[0xc],(HMENU)0x0,hInstance,(LPVOID)0x0);
    param_1[0x2b] = (longlong)pHVar8;
    GetLastError();
    BVar4 = IsWindow((HWND)param_1[0x2b]);
    if (BVar4 == 0) {
      uVar7 = 0;
      goto LAB_1401293f2;
    }
    SetLayeredWindowAttributes((HWND)param_1[0x2b],0,0xff,2);
    idAttachTo = GetWindowThreadProcessId((HWND)param_1[0xc],(LPDWORD)0x0);
    idAttach = GetWindowThreadProcessId((HWND)param_1[0x2b],(LPDWORD)0x0);
    AttachThreadInput(idAttach,idAttachTo,0);
    SetPropW((HWND)param_1[0x2b],L"WallpaperEngineWallpaper",(HANDLE)0x1);
    SetWindowLongPtrW((HWND)param_1[0x2b],-0x15,(LONG_PTR)param_1);
    pHVar8 = (HWND)param_1[0x2b];
    uVar6 = GetWindowLongW(pHVar8,-0x10);
    SetWindowLongW(pHVar8,-0x10,uVar6 & 0xde33ffff);
    ShowWindow((HWND)param_1[0x2b],4);
  }
  else {
    InvalidateRect((HWND)param_1[0x2b],(RECT *)0x0,0);
  }
  uVar7 = 1;
LAB_1401293f2:
  FUN_140085440(local_58);
  return uVar7;
}

