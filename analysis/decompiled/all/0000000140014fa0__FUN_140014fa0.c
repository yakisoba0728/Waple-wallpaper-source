// Function: FUN_140014fa0
// Addr: 140014fa0
// Size: 110 bytes


undefined8 FUN_140014fa0(DWORD param_1,undefined8 param_2)

{
  undefined8 uVar1;
  HLOCAL local_res18 [2];
  
  FormatMessageW(0x13ff,(LPCVOID)0x0,param_1,0,(LPWSTR)local_res18,0,(va_list *)0x0);
  if (local_res18[0] == (HLOCAL)0x0) {
    return 0;
  }
  uVar1 = FUN_1402d6aa0(local_res18[0]);
  FUN_140016ae0(param_2,local_res18[0],uVar1);
  LocalFree(local_res18[0]);
  return 1;
}

