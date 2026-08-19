// Function: FUN_140032090
// Addr: 140032090
// Size: 134 bytes


void FUN_140032090(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_38 [8];
  longlong *plStack_30;
  char acStack_28 [16];
  
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar4 = *param_1;
  if (*(int *)((longlong)*(int *)(lVar4 + 4) + 0x10 + (longlong)param_1) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(lVar4 + 4) + 0x50 + (longlong)param_1);
    if ((plVar1 != (longlong *)0x0) && (plVar1 != param_1)) {
      FUN_140012ad0(plVar1);
      lVar4 = *param_1;
      uVar5 = 0;
      if (*(int *)((longlong)*(int *)(lVar4 + 4) + 0x10 + (longlong)param_1) != 0)
      goto LAB_1400321c8;
    }
    plVar1 = *(longlong **)
              (*(longlong *)((longlong)*(int *)(lVar4 + 4) + 0x40 + (longlong)param_1) + 8);
    plStack_30 = plVar1;
    (**(code **)(*plVar1 + 8))(plVar1);
    plVar2 = (longlong *)func_0x0001400333f0(auStack_38);
    if (plVar1 != (longlong *)0x0) {
      puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    auStack_38[0] = 0;
    lVar4 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    plStack_30 = *(longlong **)(lVar4 + 0x48);
    (**(code **)(*plVar2 + 0x30))
              (plVar2,acStack_28,auStack_38,lVar4,*(undefined1 *)(lVar4 + 0x58),param_2);
    uVar5 = 0;
    if (acStack_28[0] != '\0') {
      uVar5 = 4;
    }
  }
  else {
    uVar5 = 0;
  }
LAB_1400321c8:
  lVar4 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar6 = 4;
  if (*(longlong *)(lVar4 + 0x48) != 0) {
    uVar6 = 0;
  }
  func_0x000140013c20(lVar4,uVar5 | uVar6 | *(uint *)(lVar4 + 0x10),0);
  return;
}

