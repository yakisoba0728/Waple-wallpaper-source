// Function: FUN_140290af0
// Addr: 140290af0
// Size: 74 bytes


DWORD FUN_140290af0(HANDLE param_1,LPVOID param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = DeviceIoControl(param_1,0x900a4,param_2,*(ushort *)((longlong)param_2 + 4) + 8,(LPVOID)0x0
                          ,0,(LPDWORD)0x0,(LPOVERLAPPED)0x0);
  if (BVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140290b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = GetLastError();
  return DVar2;
}

