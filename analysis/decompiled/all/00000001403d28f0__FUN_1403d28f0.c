// Function: FUN_1403d28f0
// Addr: 1403d28f0
// Size: 287 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1403d28f0(undefined8 param_1,longlong param_2,char *param_3,uint param_4,int *param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  size_t _MaxCount;
  undefined1 auStack_d8 [32];
  char local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_d8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 8);
  _MaxCount = (size_t)param_4;
  EnterCriticalSection(lpCriticalSection);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  pcVar4 = param_3;
  if (-1 < (int)param_4) {
    uVar2 = 0x7f;
    if ((int)param_4 < 0x80) {
      uVar2 = param_4;
    }
    _MaxCount = (size_t)uVar2;
    strncpy(local_b8,param_3,(ulonglong)uVar2);
    if (0x7f < _MaxCount) {
                    /* WARNING: Subroutine does not return */
      FUN_1402ed4d0();
    }
    local_b8[_MaxCount] = '\0';
    pcVar4 = local_b8;
  }
  iVar3 = FUN_1402f0550(uVar1,pcVar4);
  *param_5 = iVar3;
  if (iVar3 == 0) {
    iVar3 = FUN_1402f0170(uVar1,0,local_b8,0x80);
    if ((iVar3 == 0) && ((int)_MaxCount < 0)) {
      iVar3 = strcmp(local_b8,param_3);
    }
    else {
      iVar3 = strncmp(local_b8,param_3,_MaxCount);
    }
    if (iVar3 == 0) {
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return true;
    }
  }
  iVar3 = *param_5;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar3 != 0;
}

