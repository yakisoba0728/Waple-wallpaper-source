// Function: FUN_1402906a0
// Addr: 1402906a0
// Size: 72 bytes


DWORD FUN_1402906a0(HANDLE param_1,LPVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD local_res20 [2];
  
  BVar1 = DeviceIoControl(param_1,0x900a8,(LPVOID)0x0,0,param_2,param_3,local_res20,
                          (LPOVERLAPPED)0x0);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  return DVar2;
}

