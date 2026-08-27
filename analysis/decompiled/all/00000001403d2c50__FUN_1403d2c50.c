// Function: FUN_1403d2c50
// Addr: 1403d2c50
// Size: 129 bytes


undefined4 FUN_1403d2c50(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 local_res8 [2];
  
  FUN_14039db30();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 8);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = FUN_1402f0250(*(undefined8 *)(param_2 + 0x30),param_3,param_4,
                        *(int *)(param_1 + 0x68) == 0,local_res8);
  if (iVar1 != 0) {
    local_res8[0] = 0;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return local_res8[0];
}

