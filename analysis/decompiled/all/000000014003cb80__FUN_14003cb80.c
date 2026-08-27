// Function: FUN_14003cb80
// Addr: 14003cb80
// Size: 115 bytes


HWND FUN_14003cb80(void)

{
  BOOL BVar1;
  HANDLE pvVar2;
  HWND pHVar3;
  
  pHVar3 = DAT_1404e5288;
  if (DAT_1404e5288 == (HWND)0x0) {
    BVar1 = IsWindow(DAT_1404e52a0);
    if ((BVar1 != 0) &&
       (pvVar2 = GetPropW(DAT_1404e52a0,L"WallpaperEngineParent"), pvVar2 == (HANDLE)0x1)) {
      if (DAT_1404e52a0 == (HWND)0x0) {
        return (HWND)0x0;
      }
      ShowWindow(DAT_1404e52a0,1);
      return DAT_1404e52a0;
    }
    DAT_1404e52a0 = (HWND)0x0;
    pHVar3 = (HWND)0x0;
  }
  return pHVar3;
}

