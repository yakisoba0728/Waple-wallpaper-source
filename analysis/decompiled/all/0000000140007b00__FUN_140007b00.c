// Function: FUN_140007b00
// Addr: 140007b00
// Size: 81 bytes


HANDLE FUN_140007b00(DWORD *param_1)

{
  DWORD DVar1;
  HANDLE pvVar2;
  
  pvVar2 = DAT_1404e8b60;
  if (DAT_1404e8b60 == (HANDLE)0x0) {
    SetLastError(0);
    pvVar2 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,0,L"cxWallpaperEngineGlobalMutex");
    if (param_1 != (DWORD *)0x0) {
      DVar1 = GetLastError();
      *param_1 = DVar1;
    }
  }
  return pvVar2;
}

