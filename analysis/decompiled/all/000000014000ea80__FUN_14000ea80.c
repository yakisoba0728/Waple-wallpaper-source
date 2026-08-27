// Function: FUN_14000ea80
// Addr: 14000ea80
// Size: 396 bytes


longlong * FUN_14000ea80(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  longlong *local_28;
  char local_20;
  char local_18 [16];
  
  FUN_14000ffb0(&local_28,param_1);
  uVar6 = 0;
  if (local_20 != '\0') {
    plVar1 = *(longlong **)
              (*(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x40 + (longlong)param_1) + 8);
    local_30 = plVar1;
    (**(code **)(*plVar1 + 8))(plVar1);
    plVar3 = (longlong *)FUN_14000f9f0(local_38);
    if (plVar1 != (longlong *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    local_38[0] = 0;
    lVar7 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    local_30 = *(longlong **)(lVar7 + 0x48);
    (**(code **)(*plVar3 + 0x48))
              (plVar3,local_18,local_38,lVar7,*(undefined2 *)(lVar7 + 0x58),param_2);
    uVar6 = 0;
    if (local_18[0] != '\0') {
      uVar6 = 4;
    }
  }
  lVar7 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar5 = 4;
  if (*(longlong *)(lVar7 + 0x48) != 0) {
    uVar5 = 0;
  }
  FUN_140013b50(lVar7,uVar5 | *(uint *)(lVar7 + 0x10) | uVar6,0);
  lVar7 = (longlong)*(int *)(*local_28 + 4);
  if ((*(int *)(lVar7 + 0x10 + (longlong)local_28) == 0) &&
     ((*(byte *)(lVar7 + 0x18 + (longlong)local_28) & 2) != 0)) {
    iVar2 = (**(code **)(**(longlong **)(lVar7 + 0x48 + (longlong)local_28) + 0x68))();
    if (iVar2 == -1) {
      lVar7 = (longlong)*(int *)(*local_28 + 4) + (longlong)local_28;
      FUN_140013b50(lVar7,*(uint *)(lVar7 + 0x10) | 4,0);
    }
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*local_28 + 4) + 0x48 + (longlong)local_28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}

