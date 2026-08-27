// Function: FUN_14033bea0
// Addr: 14033bea0
// Size: 85 bytes


int FUN_14033bea0(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((uint)(*(longlong *)(param_1 + 0x18) - lVar2 >> 3) <= param_2) {
    piVar3 = *(int **)(param_1 + 8);
    if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
      *piVar3 = 0x82;
    }
    return 0;
  }
  iVar1 = *(int *)(lVar2 + 4 + (ulonglong)param_2 * 8);
  iVar4 = *(int *)(lVar2 + (ulonglong)param_2 * 8);
  if (iVar1 == 1) {
    iVar4 = iVar4 + (iVar4 >> 0x1f) + 0x2000 >> 0xe;
  }
  else if (iVar1 == 2) {
    return iVar4 << 0x10;
  }
  return iVar4;
}

