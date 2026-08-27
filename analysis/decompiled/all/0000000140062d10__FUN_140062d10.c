// Function: FUN_140062d10
// Addr: 140062d10
// Size: 304 bytes


undefined8 FUN_140062d10(void)

{
  DWORD DVar1;
  HMODULE hModule;
  INT_PTR IVar2;
  
  if (DAT_1404e8d20 != (HMODULE)0x0) {
    return 1;
  }
  hModule = LoadLibraryExW(L"cloneextensions64.dll",(HANDLE)0x0,0x1000);
  if (hModule == (HMODULE)0x0) {
    DVar1 = GetLastError();
    FUN_140098760("Error loading library %S (%i).\n",L"cloneextensions64.dll",DVar1);
    DAT_1404e8d20 = hModule;
    return 0;
  }
  DAT_1404e8d20 = hModule;
  DAT_1404e8d28 = GetProcAddress(hModule,"InitCloneSystem");
  DAT_1404e8d30 = GetProcAddress(DAT_1404e8d20,"ShutdownCloneSystem");
  DAT_1404e8d38 = GetProcAddress(DAT_1404e8d20,"CreateClone");
  DAT_1404e8d40 = GetProcAddress(DAT_1404e8d20,"DestroyClone");
  if ((((DAT_1404e8d28 != (FARPROC)0x0) && (DAT_1404e8d30 != (FARPROC)0x0)) &&
      (DAT_1404e8d38 != (FARPROC)0x0)) && (DAT_1404e8d40 != (FARPROC)0x0)) {
    IVar2 = (*DAT_1404e8d28)();
    if (-1 < (int)IVar2) {
      return 1;
    }
  }
  FreeLibrary(DAT_1404e8d20);
  DAT_1404e8d20 = (HMODULE)0x0;
  return 0;
}

