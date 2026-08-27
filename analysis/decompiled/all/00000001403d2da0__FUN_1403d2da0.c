// Function: FUN_1403d2da0
// Addr: 1403d2da0
// Size: 314 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1403d2da0(longlong param_1,uint *param_2,undefined4 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  int local_48 [2];
  undefined1 local_40 [8];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_1404dc040 ^ (ulonglong)auStack_68;
  FUN_14039db30();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 2);
  EnterCriticalSection(lpCriticalSection);
  if (*(char *)((longlong)param_2 + 6) == '\0') {
    fVar2 = (float)(int)((*(int *)(param_1 + 0x2c) >> 0x1f & 0xfffffffeU) + 1);
  }
  else {
    FUN_1402f0710(*(undefined8 *)(param_2 + 0xc),local_40,0);
    fVar2 = (float)local_34 * (float)local_34 + (float)local_38 * (float)local_38;
    if (fVar2 < 0.0) {
      fVar2 = (float)FUN_14041ad10();
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar2 = fVar2 * DAT_1404925f0 *
            (float)(int)((*(int *)(param_1 + 0x2c) >> 0x1f & 0xfffffffeU) + 1);
  }
  iVar1 = FUN_1402eff30(*(undefined8 *)(param_2 + 0xc),param_3,*param_2 | 0x10,local_48);
  if (iVar1 == 0) {
    local_48[0] = 0x200 - local_48[0] >> 10;
    iVar1 = (int)((float)local_48[0] * fVar2);
  }
  else {
    iVar1 = 0;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar1;
}

