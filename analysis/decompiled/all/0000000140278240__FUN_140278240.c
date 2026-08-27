// Function: FUN_140278240
// Addr: 140278240
// Size: 128 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140278240(LPCWSTR param_1)

{
  HANDLE hFile;
  _FILETIME local_res10 [3];
  
  hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    return DAT_1404929d0;
  }
  GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,local_res10);
  CloseHandle(hFile);
  return (double)(longlong)local_res10[0] / _DAT_140492880 - _DAT_1404928b8;
}

