// Function: FUN_140012a00
// Addr: 140012a00
// Size: 221 bytes


longlong * FUN_140012a00(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong *local_18;
  char local_10;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    FUN_140010fe0(&local_18,param_1);
    if (local_10 != '\0') {
      iVar2 = (**(code **)(*plVar1 + 0x68))(plVar1);
      uVar5 = 4;
      if (iVar2 != -1) {
        uVar5 = 0;
      }
      lVar3 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
      uVar4 = 4;
      if (*(longlong *)(lVar3 + 0x48) != 0) {
        uVar4 = 0;
      }
      FUN_140013b50(lVar3,uVar4 | *(uint *)(lVar3 + 0x10) | uVar5,0);
    }
    plVar1 = local_18;
    lVar3 = (longlong)*(int *)(*local_18 + 4);
    if ((*(int *)(lVar3 + 0x10 + (longlong)local_18) == 0) &&
       ((*(byte *)(lVar3 + 0x18 + (longlong)local_18) & 2) != 0)) {
      iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x48 + (longlong)local_18) + 0x68))();
      if (iVar2 == -1) {
        lVar3 = (longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1;
        FUN_140013b50(lVar3,*(uint *)(lVar3 + 0x10) | 4,0);
      }
    }
    plVar1 = *(longlong **)((longlong)*(int *)(*local_18 + 4) + 0x48 + (longlong)local_18);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return param_1;
}

