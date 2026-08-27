// Function: FUN_14028fd70
// Addr: 14028fd70
// Size: 92 bytes


DWORD FUN_14028fd70(LPCWSTR param_1,LPCWSTR param_2)

{
  BOOLEAN BVar1;
  DWORD DVar2;
  
  BVar1 = CreateSymbolicLinkW(param_1,param_2,2);
  if (BVar1 != '\0') {
    return 0;
  }
  DVar2 = GetLastError();
  if (DVar2 == 0x57) {
    BVar1 = CreateSymbolicLinkW(param_1,param_2,0);
    if (BVar1 != '\0') {
      return 0;
    }
    DVar2 = GetLastError();
  }
  return DVar2;
}

