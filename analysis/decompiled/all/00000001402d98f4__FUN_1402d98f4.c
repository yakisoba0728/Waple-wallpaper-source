// Function: FUN_1402d98f4
// Addr: 1402d98f4
// Size: 144 bytes


PVOID FUN_1402d98f4(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  PVOID pvVar2;
  
  pvVar2 = (PVOID)0x0;
  if (DAT_1404e484c == '\0') {
    dwErrCode = GetLastError();
    pvVar1 = pvVar2;
    if (DAT_1404dc580 != 0xffffffff) {
      pvVar1 = FlsGetValue(DAT_1404dc580);
    }
    if ((pvVar1 != (PVOID)0xffffffffffffffff) && (pvVar2 = pvVar1, pvVar1 == (PVOID)0x0)) {
      pvVar2 = (PVOID)FUN_1402d9774();
    }
    SetLastError(dwErrCode);
  }
  else {
    pvVar1 = pvVar2;
    if (DAT_1404dc580 != 0xffffffff) {
      pvVar1 = (PVOID)FUN_1402dc100();
    }
    if ((pvVar1 != (PVOID)0xffffffffffffffff) && (pvVar2 = pvVar1, pvVar1 == (PVOID)0x0)) {
      pvVar2 = (PVOID)FUN_1402d9774();
    }
  }
  return pvVar2;
}

