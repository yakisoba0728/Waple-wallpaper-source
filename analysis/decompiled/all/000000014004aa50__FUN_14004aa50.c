// Function: FUN_14004aa50
// Addr: 14004aa50
// Size: 234 bytes


longlong * FUN_14004aa50(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  param_1[1] = 0;
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar2 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  if (*(uint *)(lVar2 + 0x10) == 0) {
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      FUN_140012a00();
    }
    if ((*(int *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) == 0) &&
       (0 < param_3)) {
      plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
      lVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
      param_1[1] = lVar2;
      uVar4 = 0;
      if (lVar2 != param_3) {
        uVar4 = 3;
      }
    }
  }
  else {
    uVar3 = 6;
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      uVar3 = 2;
    }
    FUN_140013b50(lVar2,uVar3 | *(uint *)(lVar2 + 0x10),0);
  }
  lVar2 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar3 = 4;
  if (*(longlong *)(lVar2 + 0x48) != 0) {
    uVar3 = 0;
  }
  FUN_140013b50(lVar2,uVar3 | *(uint *)(lVar2 + 0x10) | uVar4,0);
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}

