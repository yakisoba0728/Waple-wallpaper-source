// Function: FUN_14003cb30
// Addr: 14003cb30
// Size: 75 bytes


bool FUN_14003cb30(void)

{
  BOOL BVar1;
  HANDLE pvVar2;
  
  if (DAT_1404e5288 != 0) {
    return true;
  }
  BVar1 = IsWindow(DAT_1404e52a0);
  if (BVar1 == 0) {
    return false;
  }
  pvVar2 = GetPropW(DAT_1404e52a0,L"WallpaperEngineParent");
  return pvVar2 == (HANDLE)0x1;
}

