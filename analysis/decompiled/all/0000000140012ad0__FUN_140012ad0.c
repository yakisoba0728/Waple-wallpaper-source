// Function: FUN_140012ad0
// Addr: 140012ad0
// Size: 13 bytes


longlong * FUN_140012ad0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong *plStack_18;
  char cStack_10;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    func_0x0001400110b0(&plStack_18,param_1);
    if (cStack_10 != '\0') {
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
      func_0x000140013c20(lVar3,uVar4 | *(uint *)(lVar3 + 0x10) | uVar5,0);
    }
    plVar1 = plStack_18;
    lVar3 = (longlong)*(int *)(*plStack_18 + 4);
    if ((*(int *)(lVar3 + 0x10 + (longlong)plStack_18) == 0) &&
       ((*(byte *)(lVar3 + 0x18 + (longlong)plStack_18) & 2) != 0)) {
      iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x48 + (longlong)plStack_18) + 0x68))();
      if (iVar2 == -1) {
        lVar3 = (longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1;
        func_0x000140013c20(lVar3,*(uint *)(lVar3 + 0x10) | 4,0);
      }
    }
    plVar1 = *(longlong **)((longlong)*(int *)(*plStack_18 + 4) + 0x48 + (longlong)plStack_18);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return param_1;
}

