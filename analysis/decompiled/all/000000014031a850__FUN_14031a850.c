// Function: FUN_14031a850
// Addr: 14031a850
// Size: 155 bytes


int FUN_14031a850(byte *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (param_2 <= *piVar2) {
    return **(int **)(param_1 + 8) << 0x10;
  }
  bVar1 = *param_1;
  if (1 < bVar1) {
    iVar3 = 1;
    do {
      lVar4 = (longlong)iVar3;
      if (param_2 <= piVar2[lVar4]) {
        iVar3 = FUN_1402f20b0(param_2 - piVar2[lVar4 + -1],
                              *(int *)(*(longlong *)(param_1 + 8) + lVar4 * 4) -
                              *(int *)(*(longlong *)(param_1 + 8) + -4 + lVar4 * 4),
                              piVar2[lVar4] - piVar2[lVar4 + -1]);
        return (iVar3 + *(int *)(*(longlong *)(param_1 + 8) + -4 + lVar4 * 4)) * 0x10000;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)bVar1);
  }
  return *(int *)(*(longlong *)(param_1 + 8) + -4 + (ulonglong)bVar1 * 4) << 0x10;
}

