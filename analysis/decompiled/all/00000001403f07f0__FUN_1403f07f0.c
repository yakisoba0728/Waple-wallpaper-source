// Function: FUN_1403f07f0
// Addr: 1403f07f0
// Size: 100 bytes


void FUN_1403f07f0(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x28);
    if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x28))) {
      iVar2 = (int)(((longlong)*(int *)(param_1 + 0x28) * (longlong)iVar2) / (longlong)iVar1);
    }
  }
  *param_2 = iVar2;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
    if ((iVar2 != 0) && (iVar2 != *(int *)(param_1 + 0x2c))) {
      *param_3 = (int)(((longlong)*(int *)(param_1 + 0x2c) * (longlong)*param_3) / (longlong)iVar2);
      return;
    }
  }
  *param_3 = *param_3;
  return;
}

