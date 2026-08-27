// Function: FUN_1403d2550
// Addr: 1403d2550
// Size: 167 bytes


undefined8
FUN_1403d2550(undefined8 param_1,undefined4 *param_2,undefined4 param_3,uint param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  FUN_14039db30();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 2);
  EnterCriticalSection(lpCriticalSection);
  lVar1 = *(longlong *)(param_2 + 0xc);
  iVar3 = FUN_1402f12d0(lVar1,param_3,*param_2);
  if (((iVar3 == 0) && (lVar2 = *(longlong *)(lVar1 + 0x78), *(int *)(lVar2 + 0x60) == 0x6f75746c))
     && (param_4 < *(ushort *)(lVar2 + 0x9a))) {
    uVar4 = 1;
    *param_5 = *(undefined4 *)((ulonglong)param_4 * 8 + *(longlong *)(lVar2 + 0xa0));
    *param_6 = *(undefined4 *)
                (*(longlong *)(*(longlong *)(lVar1 + 0x78) + 0xa0) + 4 + (ulonglong)param_4 * 8);
  }
  else {
    uVar4 = 0;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar4;
}

