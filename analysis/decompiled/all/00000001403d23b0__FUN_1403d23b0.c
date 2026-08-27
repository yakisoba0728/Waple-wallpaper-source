// Function: FUN_1403d23b0
// Addr: 1403d23b0
// Size: 411 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1403d23b0(longlong param_1,longlong param_2,int *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_78;
  FUN_14039db30();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 8);
  EnterCriticalSection(lpCriticalSection);
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (*(char *)(param_2 + 6) == '\0') {
    fVar5 = (float)(int)((*(int *)(param_1 + 0x2c) >> 0x1f & 0xfffffffeU) + 1);
  }
  else {
    FUN_1402f0710(lVar1,local_58,0);
    fVar5 = (float)local_4c * (float)local_4c + (float)local_50 * (float)local_50;
    if (fVar5 < 0.0) {
      fVar5 = (float)FUN_14041ad10();
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    fVar5 = fVar5 * DAT_1404925f0 *
            (float)(int)((*(int *)(param_1 + 0x2c) >> 0x1f & 0xfffffffeU) + 1);
  }
  if (*(short *)(lVar1 + 0x68) == 0) {
    iVar2 = *(int *)(*(longlong *)(lVar1 + 0x80) + 0x24);
    *param_3 = iVar2;
    iVar4 = *(int *)(*(longlong *)(lVar1 + 0x80) + 0x28);
    param_3[1] = iVar4;
    iVar4 = (*(int *)(*(longlong *)(lVar1 + 0x80) + 0x2c) - iVar2) + iVar4;
  }
  else {
    iVar2 = FUN_1402f21c0((int)*(short *)(lVar1 + 0x6a),
                          *(undefined4 *)(*(longlong *)(lVar1 + 0x80) + 0x20));
    *param_3 = iVar2;
    iVar3 = FUN_1402f21c0((int)*(short *)(lVar1 + 0x6c),
                          *(undefined4 *)(*(longlong *)(lVar1 + 0x80) + 0x20));
    iVar2 = *param_3;
    param_3[1] = iVar3;
    iVar4 = FUN_1402f21c0((int)*(short *)(lVar1 + 0x6e),
                          *(undefined4 *)(*(longlong *)(lVar1 + 0x80) + 0x20));
    iVar4 = (iVar3 - iVar2) + iVar4;
  }
  *param_3 = (int)((float)*param_3 * fVar5);
  param_3[1] = (int)((float)param_3[1] * fVar5);
  param_3[2] = (int)((float)iVar4 * fVar5);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}

