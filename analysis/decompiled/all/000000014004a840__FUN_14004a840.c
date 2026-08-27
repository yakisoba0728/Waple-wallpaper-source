// Function: FUN_14004a840
// Addr: 14004a840
// Size: 210 bytes


undefined8 * FUN_14004a840(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  
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
  if ((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,0,1,1);
  }
  else {
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_2;
}

