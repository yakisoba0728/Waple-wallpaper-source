// Function: FUN_1402901f0
// Addr: 1402901f0
// Size: 59 bytes


ulonglong FUN_1402901f0(LPCWSTR param_1,DWORD param_2,LPWSTR param_3)

{
  DWORD DVar1;
  
  DVar1 = GetFullPathNameW(param_1,param_2,param_3,(LPWSTR *)0x0);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    return (ulonglong)DVar1 << 0x20;
  }
  return (ulonglong)DVar1;
}

