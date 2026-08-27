// Function: FUN_1403d31c0
// Addr: 1403d31c0
// Size: 167 bytes


uint FUN_1403d31c0(undefined8 param_1,longlong param_2,uint param_3,undefined4 *param_4,uint param_5
                  ,int *param_6,uint param_7)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 8);
  EnterCriticalSection(lpCriticalSection);
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = FUN_1402f0060(*(undefined8 *)(param_2 + 0x30),*param_4);
      *param_6 = iVar1;
      if (iVar1 == 0) break;
      param_4 = (undefined4 *)((longlong)param_4 + (ulonglong)param_5);
      param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar2;
}

