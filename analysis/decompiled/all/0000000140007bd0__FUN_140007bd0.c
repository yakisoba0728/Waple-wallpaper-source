// Function: FUN_140007bd0
// Addr: 140007bd0
// Size: 81 bytes


longlong FUN_140007bd0(undefined4 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = DAT_1404e8c30;
  if (DAT_1404e8c30 == 0) {
    (*DAT_1404266a0)(0);
    lVar2 = (*DAT_140426698)(0,0,L"cxWallpaperEngineGlobalMutex");
    if (param_1 != (undefined4 *)0x0) {
      uVar1 = (*DAT_1404266a8)();
      *param_1 = uVar1;
    }
  }
  return lVar2;
}

