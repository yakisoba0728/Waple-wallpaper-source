// Function: FUN_14033e170
// Addr: 14033e170
// Size: 158 bytes


void FUN_14033e170(undefined8 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = *(int *)(param_1 + 9);
    iVar2 = *(int *)(param_1 + 3);
    if (param_2 == iVar1 + iVar2) {
      uVar3 = *param_1;
      iVar4 = FUN_14033d600(param_1 + 3,param_3,0,iVar2,0,uVar3);
      if ((iVar4 != 0) ||
         (iVar4 = FUN_14033d600(param_1 + 9,param_3,iVar2,iVar1,0,uVar3), iVar4 != 0)) {
        *(int *)(param_1 + 1) = iVar4;
      }
    }
  }
  return;
}

