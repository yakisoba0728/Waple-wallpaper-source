// Function: FUN_1403d2ee0
// Addr: 1403d2ee0
// Size: 508 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1403d2ee0(longlong param_1,undefined4 *param_2,undefined4 param_3,int *param_4,int *param_5
                  )

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  ulonglong local_68;
  
  local_68 = DAT_1404dc040 ^ (ulonglong)auStack_98;
  FUN_14039db30();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 2);
  EnterCriticalSection(lpCriticalSection);
  lVar1 = *(longlong *)(param_2 + 0xc);
  if (*(char *)((longlong)param_2 + 6) == '\0') {
    fVar4 = (float)(int)((*(int *)(param_1 + 0x28) >> 0x1f & 0xfffffffeU) + 1);
    fVar3 = (float)(int)((*(int *)(param_1 + 0x2c) >> 0x1f & 0xfffffffeU) + 1);
  }
  else {
    FUN_1402f0710(lVar1,&local_78,0);
    fVar3 = (float)local_74 * (float)local_74 + (float)local_78 * (float)local_78;
    if (fVar3 < 0.0) {
      fVar3 = (float)FUN_14041ad10();
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    fVar4 = fVar3 * DAT_1404925f0 *
            (float)(int)((*(int *)(param_1 + 0x28) >> 0x1f & 0xfffffffeU) + 1);
    fVar3 = (float)local_6c * (float)local_6c + (float)local_70 * (float)local_70;
    if (fVar3 < 0.0) {
      fVar3 = (float)FUN_14041ad10();
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    fVar3 = fVar3 * DAT_1404925f0 *
            (float)(int)((*(int *)(param_1 + 0x2c) >> 0x1f & 0xfffffffeU) + 1);
  }
  iVar2 = FUN_1402f12d0(lVar1,param_3,*param_2);
  if (iVar2 == 0) {
    *param_4 = *(int *)(*(longlong *)(lVar1 + 0x78) + 0x38) -
               *(int *)(*(longlong *)(lVar1 + 0x78) + 0x44);
    *param_5 = *(int *)(*(longlong *)(lVar1 + 0x78) + 0x48) +
               *(int *)(*(longlong *)(lVar1 + 0x78) + 0x3c);
    *param_4 = (int)((float)*param_4 * fVar4);
    *param_5 = (int)((float)*param_5 * fVar3);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar2 == 0;
}

