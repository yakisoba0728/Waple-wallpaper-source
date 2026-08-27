// Function: FUN_1402f8f80
// Addr: 1402f8f80
// Size: 118 bytes


void FUN_1402f8f80(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar1 < 0) {
    iVar3 = iVar1;
    if (iVar1 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  else {
    iVar3 = iVar2 - iVar1;
    if (iVar1 < 1) {
      iVar3 = iVar2;
    }
  }
  if (param_2 == 0) {
    param_2 = (iVar3 * 0xc) / 10;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10) / 2;
  *(int *)(param_1 + 0x18) = (param_2 - iVar3) / 2;
  return;
}

