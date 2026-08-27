// Function: FUN_14039db30
// Addr: 14039db30
// Size: 153 bytes


undefined8 FUN_14039db30(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x38)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 8);
    EnterCriticalSection(lpCriticalSection);
    FUN_14039d7d0(param_1,*(undefined8 *)(param_2 + 0x30));
    if (param_2 + 0x3cU <= param_2 + 0x43cU) {
      FUN_1404217a0(param_2 + 0x3cU,0xffffffff,0x400);
    }
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x10);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 1;
  }
  return 0;
}

