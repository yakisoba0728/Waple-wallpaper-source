// Function: FUN_14028bd40
// Addr: 14028bd40
// Size: 191 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028bd40(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10 [3];
  _FILETIME local_18 [2];
  
  if (DAT_1404dc040 != 0x2b992ddfa232) {
    _DAT_1404dc080 = ~DAT_1404dc040;
    return;
  }
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_res8);
  local_18[0] = local_res8;
  DVar1 = GetCurrentThreadId();
  local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
  DVar1 = GetCurrentProcessId();
  local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
  QueryPerformanceCounter(local_res10);
  DAT_1404dc040 =
       (local_res10[0].QuadPart << 0x20 ^ local_res10[0].QuadPart ^ (ulonglong)local_18[0] ^
       (ulonglong)local_18) & 0xffffffffffff;
  if (DAT_1404dc040 == 0x2b992ddfa232) {
    DAT_1404dc040 = 0x2b992ddfa233;
  }
  _DAT_1404dc080 = ~DAT_1404dc040;
  return;
}

