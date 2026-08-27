// Function: FUN_1403d2ce0
// Addr: 1403d2ce0
// Size: 190 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1403d2ce0(undefined8 param_1,longlong param_2,undefined4 param_3,char *param_4,int param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  undefined1 auStack_c8 [32];
  char local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_1404dc040 ^ (ulonglong)auStack_c8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 8);
  EnterCriticalSection(lpCriticalSection);
  if (param_5 == 0) {
    iVar1 = FUN_1402f0170(*(undefined8 *)(param_2 + 0x30),param_3,local_a8,0x80);
    if ((iVar1 == 0) && (local_a8[0] != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    iVar1 = FUN_1402f0170(*(undefined8 *)(param_2 + 0x30),param_3,param_4);
    bVar2 = iVar1 == 0;
    if ((iVar1 == 0) && (*param_4 == '\0')) {
      bVar2 = false;
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return bVar2;
}

