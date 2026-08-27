// Function: FUN_14028fce0
// Addr: 14028fce0
// Size: 95 bytes


DWORD FUN_14028fce0(LPCWSTR param_1,LPCWSTR param_2)

{
  BOOLEAN BVar1;
  DWORD DVar2;
  
  BVar1 = CreateSymbolicLinkW(param_1,param_2,3);
  if (BVar1 != '\0') {
    return 0;
  }
  DVar2 = GetLastError();
  if (DVar2 == 0x57) {
    BVar1 = CreateSymbolicLinkW(param_1,param_2,1);
    if (BVar1 != '\0') {
      return 0;
    }
    DVar2 = GetLastError();
  }
  return DVar2;
}

