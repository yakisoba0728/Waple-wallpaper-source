// Function: FUN_14004a920
// Addr: 14004a920
// Size: 296 bytes


longlong * FUN_14004a920(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong local_48;
  longlong local_40;
  
  lVar2 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar3 = 4;
  if (*(longlong *)(lVar2 + 0x48) != 0) {
    uVar3 = 0;
  }
  FUN_140013b50(lVar2,*(uint *)(lVar2 + 0x10) & 0xfffffffe | uVar3,0);
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar2 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  if (*(uint *)(lVar2 + 0x10) == 0) {
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      FUN_140012a00();
    }
  }
  else {
    uVar3 = 6;
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      uVar3 = 2;
    }
    FUN_140013b50(lVar2,uVar3 | *(uint *)(lVar2 + 0x10),0);
  }
  uVar3 = 0;
  if ((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    (**(code **)(*plVar1 + 0x50))(plVar1,&local_48,param_2,param_3,1);
    uVar3 = 2;
    if (local_48 + local_40 != -1) {
      uVar3 = 0;
    }
  }
  lVar2 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar4 = 4;
  if (*(longlong *)(lVar2 + 0x48) != 0) {
    uVar4 = 0;
  }
  FUN_140013b50(lVar2,uVar4 | *(uint *)(lVar2 + 0x10) | uVar3,0);
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}

