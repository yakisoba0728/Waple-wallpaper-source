// Function: FUN_1403d3270
// Addr: 1403d3270
// Size: 92 bytes


bool FUN_1403d3270(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 8);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = FUN_1402efeb0(*(undefined8 *)(param_2 + 0x30),param_3,param_4);
  if (iVar1 != 0) {
    *param_5 = iVar1;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar1 != 0;
}

