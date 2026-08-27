// Function: FUN_140088b50
// Addr: 140088b50
// Size: 334 bytes


longlong * FUN_140088b50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  
  bVar4 = FUN_140013490((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,10);
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  iVar6 = *(int *)(*param_1 + 4);
  if (*(int *)((longlong)iVar6 + 0x10 + (longlong)param_1) == 0) {
    plVar1 = *(longlong **)((longlong)iVar6 + 0x50 + (longlong)param_1);
    if ((plVar1 != (longlong *)0x0) && (plVar1 != param_1)) {
      FUN_140012a00();
      iVar6 = *(int *)(*param_1 + 4);
      if (*(int *)((longlong)iVar6 + 0x10 + (longlong)param_1) != 0) goto LAB_140088c0b;
    }
    uVar5 = (uint)bVar4;
    plVar1 = *(longlong **)((longlong)iVar6 + 0x48 + (longlong)param_1);
    if ((*(longlong *)plVar1[8] == 0) || (piVar2 = (int *)plVar1[0xb], *piVar2 < 1)) {
      uVar5 = (**(code **)(*plVar1 + 0x18))(plVar1,bVar4);
    }
    else {
      *piVar2 = *piVar2 + -1;
      pbVar3 = *(byte **)plVar1[8];
      *(byte **)plVar1[8] = pbVar3 + 1;
      *pbVar3 = bVar4;
    }
    uVar8 = 4;
    if (uVar5 != 0xffffffff) {
      uVar8 = 0;
    }
  }
  else {
LAB_140088c0b:
    uVar8 = 4;
  }
  lVar7 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar5 = 4;
  if (*(longlong *)(lVar7 + 0x48) != 0) {
    uVar5 = 0;
  }
  FUN_140013b50(lVar7,uVar5 | *(uint *)(lVar7 + 0x10) | uVar8,0);
  lVar7 = (longlong)*(int *)(*param_1 + 4);
  if (((*(int *)(lVar7 + 0x10 + (longlong)param_1) == 0) &&
      ((*(byte *)(lVar7 + 0x18 + (longlong)param_1) & 2) != 0)) &&
     (iVar6 = (**(code **)(**(longlong **)(lVar7 + 0x48 + (longlong)param_1) + 0x68))(), iVar6 == -1
     )) {
    lVar7 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    FUN_140013b50(lVar7,*(uint *)(lVar7 + 0x10) | 4,0);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140012a00(param_1);
  return param_1;
}

