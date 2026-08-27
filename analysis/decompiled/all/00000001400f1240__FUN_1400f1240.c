// Function: FUN_1400f1240
// Addr: 1400f1240
// Size: 298 bytes


longlong * FUN_1400f1240(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong local_28;
  longlong local_20;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (((*(int *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) == 0) &&
      (plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x50 + (longlong)param_1),
      plVar1 != (longlong *)0x0)) && (plVar1 != param_1)) {
    FUN_140012a00();
  }
  if ((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    (**(code **)(*plVar1 + 0x50))(plVar1,&local_28,param_2,param_3,2);
    lVar5 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    uVar4 = 2;
    if (local_28 + local_20 != -1) {
      uVar4 = 0;
    }
    uVar3 = 4;
    if (*(longlong *)(lVar5 + 0x48) != 0) {
      uVar3 = 0;
    }
    FUN_140013b50(lVar5,uVar3 | *(uint *)(lVar5 + 0x10) | uVar4,0);
  }
  lVar5 = (longlong)*(int *)(*param_1 + 4);
  if ((*(int *)(lVar5 + 0x10 + (longlong)param_1) == 0) &&
     ((*(byte *)(lVar5 + 0x18 + (longlong)param_1) & 2) != 0)) {
    iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x48 + (longlong)param_1) + 0x68))();
    if (iVar2 == -1) {
      lVar5 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
      FUN_140013b50(lVar5,*(uint *)(lVar5 + 0x10) | 4,0);
    }
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}

