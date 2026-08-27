// Function: FUN_14000ffb0
// Addr: 14000ffb0
// Size: 371 bytes


undefined8 * FUN_14000ffb0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *local_18;
  char local_10;
  
  *param_1 = param_2;
  plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x48 + (longlong)param_2);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(int *)((longlong)*(int *)(*param_2 + 4) + 0x10 + (longlong)param_2) != 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x50 + (longlong)param_2);
  if ((plVar1 != (longlong *)0x0) && (plVar1 != param_2)) {
    plVar2 = *(longlong **)((longlong)*(int *)(*plVar1 + 4) + 0x48 + (longlong)plVar1);
    if (plVar2 != (longlong *)0x0) {
      FUN_14000ffb0(&local_18,plVar1);
      if (local_10 != '\0') {
        iVar3 = (**(code **)(*plVar2 + 0x68))(plVar2);
        uVar6 = 4;
        if (iVar3 != -1) {
          uVar6 = 0;
        }
        lVar4 = (longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1;
        uVar5 = 4;
        if (*(longlong *)(lVar4 + 0x48) != 0) {
          uVar5 = 0;
        }
        FUN_140013b50(lVar4,uVar5 | *(uint *)(lVar4 + 0x10) | uVar6,0);
      }
      plVar1 = local_18;
      lVar4 = (longlong)*(int *)(*local_18 + 4);
      if ((*(int *)(lVar4 + 0x10 + (longlong)local_18) == 0) &&
         ((*(byte *)(lVar4 + 0x18 + (longlong)local_18) & 2) != 0)) {
        iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x48 + (longlong)local_18) + 0x68))();
        if (iVar3 == -1) {
          lVar4 = (longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1;
          FUN_140013b50(lVar4,*(uint *)(lVar4 + 0x10) | 4,0);
        }
      }
      plVar1 = *(longlong **)((longlong)*(int *)(*local_18 + 4) + 0x48 + (longlong)local_18);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
    }
    *(bool *)(param_1 + 1) =
         *(int *)((longlong)*(int *)(*param_2 + 4) + 0x10 + (longlong)param_2) == 0;
    return param_1;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

