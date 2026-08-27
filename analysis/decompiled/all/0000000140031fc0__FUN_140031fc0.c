// Function: FUN_140031fc0
// Addr: 140031fc0
// Size: 451 bytes


longlong * FUN_140031fc0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  char local_28 [16];
  
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar5 = *param_1;
  if (*(int *)((longlong)*(int *)(lVar5 + 4) + 0x10 + (longlong)param_1) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(lVar5 + 4) + 0x50 + (longlong)param_1);
    if ((plVar1 != (longlong *)0x0) && (plVar1 != param_1)) {
      FUN_140012a00(plVar1);
      lVar5 = *param_1;
      uVar6 = 0;
      if (*(int *)((longlong)*(int *)(lVar5 + 4) + 0x10 + (longlong)param_1) != 0)
      goto LAB_1400320f8;
    }
    plVar1 = *(longlong **)
              (*(longlong *)((longlong)*(int *)(lVar5 + 4) + 0x40 + (longlong)param_1) + 8);
    local_30 = plVar1;
    (**(code **)(*plVar1 + 8))(plVar1);
    plVar3 = (longlong *)FUN_140033320(local_38);
    if (plVar1 != (longlong *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    local_38[0] = 0;
    lVar5 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    local_30 = *(longlong **)(lVar5 + 0x48);
    (**(code **)(*plVar3 + 0x30))
              (plVar3,local_28,local_38,lVar5,*(undefined1 *)(lVar5 + 0x58),param_2);
    uVar6 = 0;
    if (local_28[0] != '\0') {
      uVar6 = 4;
    }
  }
  else {
    uVar6 = 0;
  }
LAB_1400320f8:
  lVar5 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar7 = 4;
  if (*(longlong *)(lVar5 + 0x48) != 0) {
    uVar7 = 0;
  }
  FUN_140013b50(lVar5,uVar6 | uVar7 | *(uint *)(lVar5 + 0x10),0);
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

