// Function: FUN_140007e40
// Addr: 140007e40
// Size: 1066 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140007e40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ATOM AVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UINT_PTR uIDEvent;
  HANDLE pvVar7;
  HMODULE pHVar8;
  HWND hWnd;
  int iVar9;
  undefined1 local_res8 [8];
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  tagMSG local_140;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 local_c4;
  WNDCLASSW local_b8;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uIDEvent = SetTimer((HWND)0x0,0,0x32,(TIMERPROC)0x0);
  local_b8.hInstance = GetModuleHandleW((LPCWSTR)0x0);
  local_b8.lpfnWndProc = DefWindowProcW_exref;
  local_b8._0_8_ = 0;
  local_b8.cbClsExtra = 0;
  local_b8.cbWndExtra = 0;
  local_b8.hIcon = (HICON)0x0;
  local_b8.hCursor = (HCURSOR)0x0;
  local_b8.lpszMenuName = (LPCWSTR)0x0;
  local_b8.lpszClassName = (LPCWSTR)0x0;
  local_b8.hbrBackground = (HBRUSH)0x1;
  local_b8.hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  local_b8._0_8_ = local_b8._0_8_ & 0xffffffff00000000;
  local_b8.lpszClassName = L"WPEDesktopDXInitWindow";
  AVar3 = RegisterClassW(&local_b8);
  local_140.hwnd = (HWND)0x0;
  local_140.message = 0;
  local_140._12_4_ = 0;
  iVar9 = 100;
  local_140.wParam = 0;
  local_140.lParam = 0;
  local_140.time = 0;
  local_140.pt.x = 0;
  local_140.pt.y = 0;
  local_140._44_4_ = 0;
  iVar4 = GetMessageW(&local_140,(HWND)0x0,0,0);
  uVar2 = _UNK_140492ca8;
  uVar1 = _DAT_140492ca0;
  iVar6 = 1;
  do {
    if (iVar4 == 0) {
LAB_140008225:
      pHVar8 = GetModuleHandleW((LPCWSTR)0x0);
      UnregisterClassW((LPCWSTR)(ulonglong)AVar3,pHVar8);
      KillTimer((HWND)0x0,uIDEvent);
      pvVar7 = GetCurrentProcess();
      SetPriorityClass(pvVar7,0x80);
      return;
    }
    TranslateMessage(&local_140);
    DispatchMessageW(&local_140);
    iVar5 = iVar6;
    if ((local_140.message == 0x113) && (local_140.wParam == uIDEvent)) {
      iVar9 = iVar9 + -1;
      if (iVar9 == (iVar9 / 100) * 100) {
        FUN_140098760("DX wait: %ims.\n",iVar6 * 0x32);
        iVar5 = iVar6 + 1;
        if (99 < iVar6) {
          iVar5 = iVar6;
        }
        KillTimer((HWND)0x0,uIDEvent);
        uIDEvent = SetTimer((HWND)0x0,0,iVar5 * 0x32,(TIMERPROC)0x0);
        pvVar7 = GetCurrentProcess();
        SetPriorityClass(pvVar7,0x8000);
      }
      pHVar8 = GetModuleHandleW((LPCWSTR)0x0);
      hWnd = CreateWindowExW(0,(LPCWSTR)(ulonglong)AVar3,L"WPEInit",0xcf0000,0,0,100,100,(HWND)0x0,
                             (HMENU)0x0,pHVar8,(LPVOID)0x0);
      if (hWnd != (HWND)0x0) {
        local_res10 = (longlong *)0x0;
        local_res18 = (longlong *)0x0;
        local_68 = uVar1;
        uStack_60 = uVar2;
        iVar6 = D3D11CreateDevice(0,1,0,0,&local_68,4,7,&local_res10,local_res8,&local_res18);
        if (-1 < iVar6) {
          local_150 = (longlong *)0x0;
          local_158 = (longlong *)0x0;
          iVar6 = (**(code **)*local_res10)(local_res10,&DAT_140474258,&local_158);
          if (-1 < iVar6) {
            local_res20 = (longlong *)0x0;
            iVar6 = (**(code **)(*local_158 + 0x38))(local_158,&local_res20);
            if (-1 < iVar6) {
              iVar6 = (**(code **)(*local_res20 + 0x30))(local_res20,&DAT_140474248,&local_150);
              (**(code **)(*local_res20 + 0x10))();
            }
            (**(code **)(*local_158 + 0x10))();
            if (-1 < iVar6) {
              local_108 = 0;
              uStack_dc = 0;
              uStack_cc = 0;
              local_c4 = 0;
              local_104 = 0;
              uStack_fc = 0x1c00000000;
              local_f4 = 0;
              local_e4 = 0x100000020;
              uStack_d8 = SUB84(hWnd,0);
              uStack_d4 = (undefined4)((ulonglong)hWnd >> 0x20);
              uStack_d0 = 1;
              uStack_ec = 1;
              local_148 = (longlong *)0x0;
              iVar6 = (**(code **)(*local_150 + 0x50))(local_150,local_res10,&local_108);
              (**(code **)(*local_150 + 0x10))();
              if (local_148 != (longlong *)0x0) {
                (**(code **)(*local_148 + 0x10))();
              }
              if (local_res18 != (longlong *)0x0) {
                (**(code **)(*local_res18 + 0x10))();
              }
              if (local_res10 != (longlong *)0x0) {
                (**(code **)(*local_res10 + 0x10))();
              }
              DestroyWindow(hWnd);
              if (iVar6 < 0) goto LAB_1400081f2;
              goto LAB_140008225;
            }
          }
        }
        if (local_res18 != (longlong *)0x0) {
          (**(code **)(*local_res18 + 0x10))();
        }
        if (local_res10 != (longlong *)0x0) {
          (**(code **)(*local_res10 + 0x10))();
        }
        DestroyWindow(hWnd);
      }
    }
LAB_1400081f2:
    iVar4 = GetMessageW(&local_140,(HWND)0x0,0,0);
    iVar6 = iVar5;
  } while( true );
}

