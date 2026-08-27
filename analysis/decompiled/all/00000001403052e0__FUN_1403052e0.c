// Function: FUN_1403052e0
// Addr: 1403052e0
// Size: 87 bytes


void FUN_1403052e0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      lVar4 = (longlong)iVar5;
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar4 * 4);
      if (((iVar2 < *(int *)(*(longlong *)(param_1 + 0x40) + lVar4 * 4)) && (param_2 < iVar2)) &&
         (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + lVar4 * 8), lVar3 = lVar4,
         lVar4 != 0)) {
        do {
          *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + param_3;
          plVar1 = (longlong *)(lVar3 + 0x20);
          lVar3 = *plVar1;
        } while (*plVar1 != lVar4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x2c));
  }
  return;
}

