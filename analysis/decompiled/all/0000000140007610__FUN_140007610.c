// Function: FUN_140007610
// Addr: 140007610
// Size: 134 bytes


undefined8 FUN_140007610(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
  if (DAT_1404e7e88 == '\0') {
    LOCK();
    DAT_1404e7e88 = '\x01';
    UNLOCK();
    cVar1 = FUN_140006f30(param_1,param_2,param_1);
    if (cVar1 == '\0') {
      FUN_140006f30();
    }
    hModule = LoadLibraryW(L"steammdmp64.dll");
    if ((hModule == (HMODULE)0x0) &&
       (hModule = LoadLibraryExW(L"steammdmp64.dll",(HANDLE)0x0,0x1000), hModule == (HMODULE)0x0)) {
      return 0;
    }
    pFVar2 = GetProcAddress(hModule,"WriteSteamMiniDump");
    if (pFVar2 != (FARPROC)0x0) {
      (*pFVar2)((ulonglong)*(uint *)*param_1,param_1);
    }
  }
  return 0;
}

