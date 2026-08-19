// Function: FUN_14003cc00
// Addr: 14003cc00
// Size: 75 bytes


bool FUN_14003cc00(void)

{
  longlong lVar1;
  int iVar2;
  
  if (DAT_1404e5358 != 0) {
    return true;
  }
  iVar2 = (*DAT_140426af0)(DAT_1404e5370);
  if (iVar2 == 0) {
    return false;
  }
  lVar1 = (*DAT_1404269a8)(DAT_1404e5370,L"WallpaperEngineParent");
  return lVar1 == 1;
}

