// Function: FUN_14007ae70
// Addr: 14007ae70
// Size: 55 bytes


longlong * FUN_14007ae70(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar3 = *param_1;
  if (*(int *)((longlong)*(int *)(lVar3 + 4) + 0x10 + (longlong)param_1) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(lVar3 + 4) + 0x50 + (longlong)param_1);
    if ((plVar1 != (longlong *)0x0) && (plVar1 != param_1)) {
      FUN_140012ad0();
      lVar3 = *param_1;
      if (*(int *)((longlong)*(int *)(lVar3 + 4) + 0x10 + (longlong)param_1) != 0)
      goto code_r0x00014007aef4;
    }
    uVar4 = 0;
    if ((0 < param_3) &&
       (plVar1 = *(longlong **)((longlong)*(int *)(lVar3 + 4) + 0x48 + (longlong)param_1),
       lVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3), uVar4 = 0, lVar3 != param_3))
    {
      uVar4 = 4;
    }
  }
  else {
code_r0x00014007aef4:
    uVar4 = 4;
  }
  lVar3 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar5 = 4;
  if (*(longlong *)(lVar3 + 0x48) != 0) {
    uVar5 = 0;
  }
  func_0x000140013c20(lVar3,uVar5 | *(uint *)(lVar3 + 0x10) | uVar4,0);
  lVar3 = (longlong)*(int *)(*param_1 + 4);
  if (((*(int *)(lVar3 + 0x10 + (longlong)param_1) == 0) &&
      ((*(byte *)(lVar3 + 0x18 + (longlong)param_1) & 2) != 0)) &&
     (iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x48 + (longlong)param_1) + 0x68))(), iVar2 == -1
     )) {
    lVar3 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    func_0x000140013c20(lVar3,*(uint *)(lVar3 + 0x10) | 4,0);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}

