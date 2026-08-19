// Function: FUN_14003cc50
// Addr: 14003cc50
// Size: 21 bytes


longlong FUN_14003cc50(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_1404e5358;
  if (DAT_1404e5358 == 0) {
    iVar1 = (*DAT_140426af0)(DAT_1404e5370);
    if ((iVar1 != 0) &&
       (lVar2 = (*DAT_1404269a8)(DAT_1404e5370,L"WallpaperEngineParent"), lVar2 == 1)) {
      if (DAT_1404e5370 == 0) {
        return 0;
      }
      (*DAT_140426af8)(DAT_1404e5370,1);
      return DAT_1404e5370;
    }
    DAT_1404e5370 = 0;
    lVar2 = 0;
  }
  return lVar2;
}

