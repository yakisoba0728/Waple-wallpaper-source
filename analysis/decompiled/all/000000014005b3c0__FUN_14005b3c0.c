// Function: FUN_14005b3c0
// Addr: 14005b3c0
// Size: 484 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14005b3c0(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  int iStack_11c;
  longlong local_118 [2];
  uint local_108 [14];
  longlong alStack_d0 [9];
  longlong local_88;
  undefined **local_68 [12];
  
  FUN_1400499e0(local_118,param_1,0x24);
  if (local_88 != 0) {
    plVar3 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar4 = (longlong)*(int *)(local_118[0] + 4);
    if (*(uint *)((longlong)local_108 + lVar4) == 0) {
      if (*(longlong *)((longlong)alStack_d0 + lVar4 + 8) != 0) {
        FUN_140012a00();
      }
    }
    else {
      uVar1 = 6;
      if (*(longlong *)((longlong)alStack_d0 + lVar4) != 0) {
        uVar1 = 2;
      }
      FUN_140013b50((longlong)local_118 + lVar4,*(uint *)((longlong)local_108 + lVar4) | uVar1,0);
    }
    if ((*(byte *)((longlong)local_108 + (longlong)*(int *)(local_118[0] + 4)) & 6) == 0) {
      plVar3 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
      (**(code **)(*plVar3 + 0x50))(plVar3,&local_138,0,1,1);
      plVar3 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
    }
    else {
      local_138 = _DAT_140492b10;
      uStack_130 = _UNK_140492b18;
      local_128 = 0;
      plVar3 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *param_3 = (int)local_138 + (int)uStack_130;
    FUN_14004a920(local_118,0,0);
    uVar2 = thunk_FUN_14028af20(*param_3);
    *param_2 = uVar2;
    plVar3 = (longlong *)FUN_14004aa50(local_118,uVar2,*param_3);
    if ((*(uint *)((longlong)*(int *)(*plVar3 + 4) + 0x10 + (longlong)plVar3) >> 2 & 1) == 0) {
      uVar2 = 1;
      goto LAB_14005b51f;
    }
    thunk_FUN_14028af80(param_2);
  }
  uVar2 = 0;
LAB_14005b51f:
  *(undefined ***)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)) = &PTR_LAB_140475df8;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118[0] + 4)) =
       *(int *)(local_118[0] + 4) + -0xb0;
  FUN_14004a790(local_108);
  *(undefined ***)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)) = &PTR_LAB_140474098;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118[0] + 4)) =
       *(int *)(local_118[0] + 4) + -0x18;
  local_68[0] = std::ios_base::vftable;
  FUN_14028c430(local_68);
  return uVar2;
}

