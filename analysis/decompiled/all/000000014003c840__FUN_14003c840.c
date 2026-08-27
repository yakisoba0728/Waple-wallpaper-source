// Function: FUN_14003c840
// Addr: 14003c840
// Size: 737 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14003c840(void)

{
  bool bVar1;
  HWND hWnd;
  BOOL BVar2;
  int iVar3;
  LRESULT LVar4;
  HWND pHVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined8 uVar6;
  int iVar7;
  WPARAM wParam;
  ULONG_PTR local_res8;
  HWND local_48;
  HWND pHStack_40;
  HWND local_38;
  HWND pHStack_30;
  WCHAR local_28 [16];
  
  hWnd = DAT_1404e52a0;
  if (DAT_1404e5288 != 0) {
    DAT_1404e52a0 = (HWND)DAT_1404e5288;
    return CONCAT71((int7)((ulonglong)DAT_1404e5288 >> 8),1);
  }
  iVar7 = 0;
  bVar1 = 9 < DAT_1404e5290;
  DAT_1404e52a0 = (HWND)0x0;
  DAT_1404e5298 = (HWND)0x0;
  local_48 = (HWND)0x0;
  pHStack_40 = (HWND)0x0;
  local_38 = (HWND)0x0;
  pHStack_30 = (HWND)0x0;
  _DAT_1404e52a8 = FindWindowW(L"Progman",(LPCWSTR)0x0);
  pHVar5 = (HWND)0x0;
  pHStack_30 = _DAT_1404e52a8;
  if (_DAT_1404e52a8 == (HWND)0x0) {
LAB_14003cafe:
    return (ulonglong)pHVar5 & 0xffffffffffffff00;
  }
LAB_14003c8d2:
  BVar2 = IsWindow(hWnd);
  if (BVar2 == 0) {
LAB_14003c91b:
    if (!bVar1) {
      wParam = 0;
    }
    else {
      wParam = 0xd;
    }
    LVar4 = SendMessageTimeoutW(pHStack_30,0x52c,wParam,(ulonglong)bVar1,1,0x9c4,&local_res8);
    pHVar5 = (HWND)0x0;
    if (LVar4 == 0) goto LAB_14003cafe;
  }
  else {
    local_28[0] = L'\0';
    local_28[1] = L'\0';
    local_28[2] = L'\0';
    local_28[3] = L'\0';
    local_28[4] = L'\0';
    local_28[5] = L'\0';
    local_28[6] = L'\0';
    local_28[7] = L'\0';
    local_28[8] = L'\0';
    local_28[9] = L'\0';
    local_28[10] = L'\0';
    local_28[0xb] = L'\0';
    local_28[0xc] = L'\0';
    local_28[0xd] = L'\0';
    local_28[0xe] = L'\0';
    local_28[0xf] = L'\0';
    iVar3 = GetClassNameW(hWnd,local_28,0x10);
    if ((iVar3 < 0) || (iVar3 = wcsncmp(local_28,L"WorkerW",7), iVar3 != 0)) goto LAB_14003c91b;
  }
  pHVar5 = GetDesktopWindow();
  BVar2 = EnumChildWindows(pHVar5,FUN_14003c760,(LPARAM)&local_48);
  pHVar5 = (HWND)CONCAT44(extraout_var,BVar2);
  if (10 < DAT_1404e5290) {
    BVar2 = IsWindow(local_38);
    pHVar5 = (HWND)CONCAT44(extraout_var_00,BVar2);
    if (BVar2 == 0) {
      local_38 = FindWindowExW(pHStack_30,(HWND)0x0,L"WorkerW",(LPCWSTR)0x0);
      BVar2 = IsWindow(local_38);
      pHVar5 = (HWND)CONCAT44(extraout_var_01,BVar2);
      if (BVar2 != 0) {
        local_48 = FindWindowExW(pHStack_30,(HWND)0x0,L"SHELLDLL_DefView",(LPCWSTR)0x0);
        pHVar5 = FindWindowExW(local_48,(HWND)0x0,L"SysListView32",(LPCWSTR)0x0);
        pHStack_40 = pHVar5;
      }
    }
  }
  if (local_38 != (HWND)0x0) {
    SetWindowLongW(local_38,-0x14,0x80000a0);
    if (((DAT_1404e5290 < 8) && (BVar2 = IsWindow(local_48), BVar2 != 0)) &&
       (BVar2 = IsWindow(local_38), BVar2 != 0)) {
      ShowWindow(local_38,4);
    }
    DAT_1404e52a0 = local_38;
    DAT_1404e5298 = local_48;
    BVar2 = SetPropW(local_38,L"WallpaperEngineParent",(HANDLE)0x1);
    uVar6 = CONCAT44(extraout_var_02,BVar2);
    if (10 < DAT_1404e5290) {
      BVar2 = IsWindow(pHStack_40);
      uVar6 = CONCAT44(extraout_var_03,BVar2);
      if (BVar2 != 0) {
        BVar2 = InvalidateRect(pHStack_40,(RECT *)0x0,1);
        uVar6 = CONCAT44(extraout_var_04,BVar2);
      }
    }
    return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  if (bVar1) {
    if (iVar7 < 10) {
      iVar7 = iVar7 + 1;
      Sleep(0x32);
    }
    else {
      if (0x13 < iVar7) goto LAB_14003ca2c;
      iVar7 = iVar7 + 1;
      Sleep(300);
    }
  }
  else {
LAB_14003ca2c:
    if (0x27 < iVar7) goto LAB_14003cafe;
    SystemParametersInfoW(0x1043,0,(PVOID)0x1,3);
    iVar7 = iVar7 + 1;
    bVar1 = false;
    Sleep(0x32);
  }
  goto LAB_14003c8d2;
}

