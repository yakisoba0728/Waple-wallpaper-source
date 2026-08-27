// Function: FUN_1402d9774
// Addr: 1402d9774
// Size: 181 bytes


__acrt_ptd * FUN_1402d9774(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  
  dwErrCode = GetLastError();
  BVar1 = FlsSetValue(DAT_1404dc580,(PVOID)0xffffffffffffffff);
  if (BVar1 != 0) {
    lpFlsData = (__acrt_ptd *)_calloc_base(1);
    if (lpFlsData != (__acrt_ptd *)0x0) {
      BVar1 = FlsSetValue(DAT_1404dc580,lpFlsData);
      if (BVar1 == 0) {
        FlsSetValue(DAT_1404dc580,(PVOID)0x0);
        FUN_1402d9040(lpFlsData);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(lpFlsData);
        FUN_1402d9040(0);
      }
      SetLastError(dwErrCode);
      return lpFlsData;
    }
    FlsSetValue(DAT_1404dc580,(PVOID)0x0);
    FUN_1402d9040(0);
  }
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}

