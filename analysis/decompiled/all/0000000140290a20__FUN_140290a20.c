// Function: FUN_140290a20
// Addr: 140290a20
// Size: 200 bytes


DWORD FUN_140290a20(FILETIME param_1,undefined8 param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  HANDLE hFile;
  FILETIME local_res8;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_20 = 0x2000000;
  local_28 = 0x20;
  local_18 = 0;
  uStack_10 = 0;
  local_res8 = param_1;
  hFile = (HANDLE)CreateFile2(param_2,0x100,7,3,&local_28);
  if ((hFile == (HANDLE)0xffffffffffffffff) && (DVar1 = GetLastError(), DVar1 != 0)) {
    return DVar1;
  }
  BVar2 = SetFileTime(hFile,(FILETIME *)0x0,(FILETIME *)0x0,&local_res8);
  if (BVar2 == 0) {
    DVar1 = GetLastError();
    if (hFile == (HANDLE)0xffffffffffffffff) {
      return DVar1;
    }
    BVar2 = CloseHandle(hFile);
    if (BVar2 != 0) {
      return DVar1;
    }
  }
  else if ((hFile == (HANDLE)0xffffffffffffffff) || (BVar2 = CloseHandle(hFile), BVar2 != 0)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402c97e4();
}

