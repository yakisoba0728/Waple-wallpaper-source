// Function: FUN_140118b00
// Addr: 140118b00
// Size: 1151 bytes


undefined8 FUN_140118b00(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  DWORD idAttach;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  HMODULE hInstance;
  HWND pHVar10;
  byte bVar11;
  uint uVar12;
  longlong local_a8;
  uint local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  WNDCLASSEXW local_78;
  
  FUN_14010a520();
  uVar6 = FUN_140086de0(param_1 + 7,"wproperties","");
  lVar7 = FUN_140086de0(uVar6,"schemecolor","");
  if (((*(char *)(lVar7 + 8) == '\a') &&
      (plVar8 = (longlong *)FUN_140086de0(lVar7,"order",""), *(byte *)(plVar8 + 1) - 1 < 3)) &&
     (iVar3 = FUN_140085ee0(plVar8), iVar3 == 0)) {
    local_a0 = CONCAT31(local_a0._1_3_,1);
    uVar12 = local_a0 & 0xfffffeff;
    iVar3 = FUN_140085ee0(plVar8);
    local_a0 = *(uint *)(plVar8 + 1);
    *(uint *)(plVar8 + 1) = uVar12;
    local_a8 = *plVar8;
    *plVar8 = (longlong)(iVar3 + -0x14);
    lVar7 = plVar8[2];
    plVar8[2] = 0;
    lStack_90 = plVar8[3];
    local_88 = plVar8[4];
    plVar8[3] = 0;
    plVar8[4] = 0;
    local_98 = lVar7;
    FUN_140086d30(&local_a8);
    if (lVar7 != 0) {
      FUN_140017240(lVar7 + 0x40);
      FUN_140017240(lVar7 + 0x20);
      FUN_140017240(lVar7);
      thunk_FUN_14028af80(lVar7,0x60);
    }
  }
  lVar7 = FUN_140087490(uVar6,"audioprocessing","");
  if (((lVar7 != 0) &&
      (lVar7 = FUN_140086de0(uVar6,"audioprocessing",""), *(char *)(lVar7 + 8) == '\a')) &&
     ((lVar7 = FUN_140086de0(lVar7,"order",""), *(byte *)(lVar7 + 8) - 1 < 3 &&
      (iVar3 = FUN_140085ee0(lVar7), iVar3 == -1)))) {
    local_a0 = CONCAT31(local_a0._1_3_,1);
    local_a0 = local_a0 & 0xfffffeff;
    local_98 = 0;
    lStack_90 = 0;
    local_88 = 0;
    iVar3 = FUN_140085ee0(lVar7);
    local_a8 = (longlong)(iVar3 + -0x14);
    FUN_140085610(lVar7,&local_a8);
    FUN_140085440(&local_a8);
  }
  if (param_1[0x86] != 0) goto LAB_140118f56;
  if (DAT_1404e8fb8 == 0) {
    local_78.lpfnWndProc = (WNDPROC)0x0;
    local_78.cbSize = 0x50;
    local_78.style = 0;
    local_78.cbClsExtra = 0;
    local_78.cbWndExtra = 0;
    local_78.hInstance = (HINSTANCE)0x0;
    local_78.hIcon = (HICON)0x0;
    local_78.hCursor = (HCURSOR)0x0;
    local_78.hbrBackground = (HBRUSH)0x0;
    local_78.lpszMenuName = (LPCWSTR)0x0;
    local_78.lpszClassName = (LPCWSTR)0x0;
    local_78.hIconSm = (HICON)0x0;
    local_78.hInstance = GetModuleHandleW((LPCWSTR)0x0);
    local_78.hbrBackground = (HBRUSH)0x1;
    local_78.lpfnWndProc = DefWindowProcW_exref;
    local_78.lpszClassName = L"WPEDesktopCEFWindow";
    local_78.style = 0x80;
    DAT_1404e8fb8 = RegisterClassExW(&local_78);
  }
  uVar6 = (**(code **)(*param_1 + 0x98))(param_1,&local_78);
  uVar6 = FUN_140086de0(uVar6,"general","");
  FUN_140085090(&local_a8,uVar6);
  FUN_140085440(&local_78);
  lVar7 = FUN_140086de0(&local_a8,"overridewallpaper","");
  lVar9 = FUN_140086de0(&local_a8,"overridelockscreen","");
  bVar11 = *(byte *)((longlong)param_1 + 0xa6);
  if ((bVar11 & 0x10) == 0) {
    if (*(char *)(lVar7 + 8) == '\x05') {
      cVar1 = FUN_140086300(lVar7);
      if (cVar1 == '\0') {
        bVar11 = *(byte *)((longlong)param_1 + 0xa6);
        goto LAB_140118de1;
      }
    }
    else {
LAB_140118de1:
      if (*(char *)(lVar9 + 8) == '\x05') {
        cVar1 = FUN_140086300(lVar9);
        if (cVar1 != '\0') goto LAB_140118e00;
        bVar11 = *(byte *)((longlong)param_1 + 0xa6);
      }
      if ((bVar11 & 0x20) == 0) goto LAB_140118e04;
    }
LAB_140118e00:
    uVar2 = 1;
  }
  else {
LAB_140118e04:
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x87) = uVar2;
  iVar3 = 1;
  DVar5 = 0x8280020;
  if ((*(byte *)((longlong)param_1 + 0xa6) & 0x10) == 0) {
    DVar5 = 0x8280000;
  }
  LOCK();
  iVar4 = (int)param_1[0x28];
  *(int *)(param_1 + 0x28) = 1;
  UNLOCK();
  while (iVar4 != 0) {
    iVar4 = (int)param_1[0x28];
    while (iVar4 != 0) {
      iVar4 = iVar3;
      if (iVar3 == 0) {
LAB_140118e69:
        iVar3 = iVar3 * 2;
      }
      else {
        do {
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (iVar3 < 0x40) goto LAB_140118e69;
        iVar3 = 0x40;
      }
      iVar4 = (int)param_1[0x28];
    }
    LOCK();
    iVar4 = (int)param_1[0x28];
    *(int *)(param_1 + 0x28) = 1;
    UNLOCK();
  }
  iVar3 = *(int *)((longlong)param_1 + 0x144);
  lVar7 = param_1[0x29];
  iVar4 = *(int *)((longlong)param_1 + 0x14c);
  lVar9 = param_1[0x2a];
  *(undefined4 *)(param_1 + 0x28) = 0;
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  pHVar10 = CreateWindowExW(DVar5,(LPCWSTR)(ulonglong)DAT_1404e8fb8,L"WPELiveWallpaper",0x40000000,
                            iVar3,(int)lVar7,iVar4 - iVar3,(int)lVar9 - (int)lVar7,
                            (HWND)param_1[0xc],(HMENU)0x0,hInstance,(LPVOID)0x0);
  param_1[0x86] = (longlong)pHVar10;
  DVar5 = GetWindowThreadProcessId((HWND)param_1[0xc],(LPDWORD)0x0);
  idAttach = GetWindowThreadProcessId((HWND)param_1[0x86],(LPDWORD)0x0);
  AttachThreadInput(idAttach,DVar5,0);
  ShowWindow((HWND)param_1[0x86],4);
  FUN_140085440(&local_a8);
LAB_140118f56:
  FUN_14011a180(param_1,param_3);
  return 1;
}

