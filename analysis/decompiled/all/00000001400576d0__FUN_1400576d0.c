// Function: FUN_1400576d0
// Addr: 1400576d0
// Size: 73 bytes


HMODULE FUN_1400576d0(LPCWSTR param_1)

{
  DWORD DVar1;
  HMODULE pHVar2;
  
  pHVar2 = LoadLibraryExW(param_1,(HANDLE)0x0,0x1000);
  if (pHVar2 == (HMODULE)0x0) {
    DVar1 = GetLastError();
    FUN_140098760("Error loading library %S (%i).\n",param_1,DVar1);
  }
  return pHVar2;
}

