// Function: FUN_140277480
// Addr: 140277480
// Size: 536 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140277480(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  longlong local_20;
  longlong lStack_18;
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_2 + 0x10);
  FUN_14007ada0(plVar1,param_3,param_4);
  plVar2 = *(longlong **)((longlong)*(int *)(*plVar1 + 4) + 0x58 + param_2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (((*(int *)((longlong)*(int *)(*plVar1 + 4) + 0x20 + param_2) == 0) &&
      (plVar2 = *(longlong **)((longlong)*(int *)(*plVar1 + 4) + 0x60 + param_2),
      plVar2 != (longlong *)0x0)) && (plVar2 != plVar1)) {
    FUN_140012a00();
  }
  lVar4 = *plVar1;
  if ((*(byte *)((longlong)*(int *)(lVar4 + 4) + 0x20 + param_2) & 6) == 0) {
    plVar2 = *(longlong **)((longlong)*(int *)(lVar4 + 4) + 0x58 + param_2);
    (**(code **)(*plVar2 + 0x50))(plVar2,&local_38,0,1,2);
    lVar4 = *plVar1;
  }
  else {
    local_38 = _DAT_140492b10;
    lStack_30 = _UNK_140492b18;
    local_28 = 0;
  }
  lVar4 = (longlong)*(int *)(lVar4 + 4);
  if ((*(int *)(lVar4 + 0x20 + param_2) == 0) && ((*(byte *)(lVar4 + 0x28 + param_2) & 2) != 0)) {
    iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x58 + param_2) + 0x68))();
    if (iVar3 == -1) {
      FUN_140013b50((longlong)*(int *)(*plVar1 + 4) + 0x10 + param_2,
                    *(uint *)((longlong)*(int *)(*plVar1 + 4) + 0x20 + param_2) | 4,0);
    }
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*plVar1 + 4) + 0x58 + param_2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_1400f1240(plVar1,0,2);
  plVar2 = *(longlong **)((longlong)*(int *)(*plVar1 + 4) + 0x58 + param_2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (((*(int *)((longlong)*(int *)(*plVar1 + 4) + 0x20 + param_2) == 0) &&
      (plVar2 = *(longlong **)((longlong)*(int *)(*plVar1 + 4) + 0x60 + param_2),
      plVar2 != (longlong *)0x0)) && (plVar2 != plVar1)) {
    FUN_140012a00();
  }
  lVar4 = *plVar1;
  if ((*(byte *)((longlong)*(int *)(lVar4 + 4) + 0x20 + param_2) & 6) == 0) {
    plVar2 = *(longlong **)((longlong)*(int *)(lVar4 + 4) + 0x58 + param_2);
    (**(code **)(*plVar2 + 0x50))(plVar2,&local_20,0,1,2);
    lVar4 = *plVar1;
  }
  else {
    local_20 = _DAT_140492b10;
    lStack_18 = _UNK_140492b18;
    local_10 = 0;
  }
  lVar4 = (longlong)*(int *)(lVar4 + 4);
  if ((*(int *)(lVar4 + 0x20 + param_2) == 0) && ((*(byte *)(lVar4 + 0x28 + param_2) & 2) != 0)) {
    iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x58 + param_2) + 0x68))();
    if (iVar3 == -1) {
      FUN_140013b50((longlong)*(int *)(*plVar1 + 4) + 0x10 + param_2,
                    *(uint *)((longlong)*(int *)(*plVar1 + 4) + 0x20 + param_2) | 4,0);
    }
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*plVar1 + 4) + 0x58 + param_2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  *(int *)(param_2 + 0x118) = (int)local_20 + (int)lStack_18;
  FUN_1400f1240(plVar1,lStack_30 + local_38,0);
  return (int)local_38 + (int)lStack_30;
}

