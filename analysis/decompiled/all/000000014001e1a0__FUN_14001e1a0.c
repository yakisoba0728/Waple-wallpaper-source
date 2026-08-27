// Function: FUN_14001e1a0
// Addr: 14001e1a0
// Size: 282 bytes


undefined8 FUN_14001e1a0(void)

{
  BOOL BVar1;
  WNDCLASSW local_58;
  
  if (DAT_1404e5278 != (HWND)0x0) {
    BVar1 = IsWindow(DAT_1404e5278);
    if (BVar1 != 0) {
      DestroyWindow(DAT_1404e5278);
    }
  }
  DAT_1404e5278 = (HWND)0x0;
  if (((byte)DAT_1404df540 & 1) == 0) {
    if (DAT_1404e8f1c == 0) {
      local_58.style = 0;
      local_58._4_4_ = 0;
      local_58.cbClsExtra = 0;
      local_58.cbWndExtra = 0;
      local_58.hInstance = (HINSTANCE)0x0;
      local_58.lpszClassName = L"WPETrayWindow";
      local_58.hbrBackground = (HBRUSH)0x0;
      local_58.lpszMenuName = (LPCWSTR)0x0;
      local_58.lpfnWndProc = FUN_14001fd20;
      local_58.hIcon = (HICON)0x0;
      local_58.hCursor = (HCURSOR)0x0;
      DAT_1404e8f1c = RegisterClassW(&local_58);
    }
    DAT_1404e5278 =
         CreateWindowExW(0,(LPCWSTR)(ulonglong)DAT_1404e8f1c,L"",0,0,0,0,0,(HWND)0x0,(HMENU)0x0,
                         DAT_1404e8b80,(LPVOID)0x0);
    BVar1 = IsWindow(DAT_1404e5278);
    if (BVar1 != 0) {
      FUN_14003d930(DAT_1404df54c);
      return 1;
    }
  }
  DAT_1404e5278 = (HWND)0x0;
  return 0;
}

