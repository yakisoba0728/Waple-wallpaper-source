// Function: FUN_14033bfd0
// Addr: 14033bfd0
// Size: 76 bytes


int FUN_14033bfd0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    piVar2 = *(int **)(param_1 + 8);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      *piVar2 = 0xa1;
    }
    return 0;
  }
  *(int **)(param_1 + 0x18) = (int *)(lVar1 + -8);
  iVar3 = *(int *)(lVar1 + -8);
  if (*(int *)(lVar1 + -4) == 1) {
    iVar3 = iVar3 + (iVar3 >> 0x1f) + 0x2000 >> 0xe;
  }
  else if (*(int *)(lVar1 + -4) == 2) {
    return iVar3 << 0x10;
  }
  return iVar3;
}

