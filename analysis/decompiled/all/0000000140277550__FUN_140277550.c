// Function: FUN_140277550
// Addr: 140277550
// Size: 326 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140277550(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  longlong lStack_20;
  longlong lStack_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)(param_2 + 0x10);
  FUN_14007ae70(plVar1,param_3,param_4);
  plVar2 = *(longlong **)((longlong)*(int *)(*plVar1 + 4) + 0x58 + param_2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (((*(int *)((longlong)*(int *)(*plVar1 + 4) + 0x20 + param_2) == 0) &&
      (plVar2 = *(longlong **)((longlong)*(int *)(*plVar1 + 4) + 0x60 + param_2),
      plVar2 != (longlong *)0x0)) && (plVar2 != plVar1)) {
    FUN_140012ad0();
  }
  lVar5 = *plVar1;
  if ((*(byte *)((longlong)*(int *)(lVar5 + 4) + 0x20 + param_2) & 6) == 0) {
    plVar2 = *(longlong **)((longlong)*(int *)(lVar5 + 4) + 0x58 + param_2);
    (**(code **)(*plVar2 + 0x50))(plVar2,&local_38,0,1,2);
    lVar5 = *plVar1;
  }
  else {
    local_38 = _DAT_140492be0;
    lStack_30 = _UNK_140492be8;
    local_28 = 0;
  }
  lVar5 = (longlong)*(int *)(lVar5 + 4);
  if ((*(int *)(lVar5 + 0x20 + param_2) == 0) && ((*(byte *)(lVar5 + 0x28 + param_2) & 2) != 0)) {
    iVar3 = (**(code **)(**(longlong **)(lVar5 + 0x58 + param_2) + 0x68))();
    if (iVar3 == -1) {
      uVar4 = func_0x000140013c20((longlong)*(int *)(*plVar1 + 4) + 0x10 + param_2,
                                  *(uint *)((longlong)*(int *)(*plVar1 + 4) + 0x20 + param_2) | 4,0)
      ;
      return uVar4;
    }
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*plVar1 + 4) + 0x58 + param_2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_1400f1310(plVar1,0,2);
  plVar2 = *(longlong **)((longlong)*(int *)(*plVar1 + 4) + 0x58 + param_2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (((*(int *)((longlong)*(int *)(*plVar1 + 4) + 0x20 + param_2) == 0) &&
      (plVar2 = *(longlong **)((longlong)*(int *)(*plVar1 + 4) + 0x60 + param_2),
      plVar2 != (longlong *)0x0)) && (plVar2 != plVar1)) {
    FUN_140012ad0();
  }
  lVar5 = *plVar1;
  if ((*(byte *)((longlong)*(int *)(lVar5 + 4) + 0x20 + param_2) & 6) == 0) {
    plVar2 = *(longlong **)((longlong)*(int *)(lVar5 + 4) + 0x58 + param_2);
    (**(code **)(*plVar2 + 0x50))(plVar2,&lStack_20,0,1,2);
    lVar5 = *plVar1;
  }
  else {
    lStack_20 = _DAT_140492be0;
    lStack_18 = _UNK_140492be8;
    uStack_10 = 0;
  }
  lVar5 = (longlong)*(int *)(lVar5 + 4);
  if ((*(int *)(lVar5 + 0x20 + param_2) == 0) && ((*(byte *)(lVar5 + 0x28 + param_2) & 2) != 0)) {
    iVar3 = (**(code **)(**(longlong **)(lVar5 + 0x58 + param_2) + 0x68))();
    if (iVar3 == -1) {
      func_0x000140013c20((longlong)*(int *)(*plVar1 + 4) + 0x10 + param_2,
                          *(uint *)((longlong)*(int *)(*plVar1 + 4) + 0x20 + param_2) | 4,0);
    }
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*plVar1 + 4) + 0x58 + param_2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  *(int *)(param_2 + 0x118) = (int)lStack_20 + (int)lStack_18;
  FUN_1400f1310(plVar1,lStack_30 + local_38,0);
  return (ulonglong)(uint)((int)local_38 + (int)lStack_30);
}

