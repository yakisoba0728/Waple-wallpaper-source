// Function: FUN_14005b490
// Addr: 14005b490
// Size: 272 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005b490(undefined8 param_1,undefined8 *param_2,int *param_3)

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
  uint auStack_108 [14];
  longlong alStack_d0 [9];
  longlong local_88;
  
  FUN_140049ab0(local_118,param_1,0x24);
  if (local_88 != 0) {
    plVar3 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar4 = (longlong)*(int *)(local_118[0] + 4);
    if (*(uint *)((longlong)auStack_108 + lVar4) != 0) {
      uVar1 = 6;
      if (*(longlong *)((longlong)alStack_d0 + lVar4) != 0) {
        uVar1 = 2;
      }
      func_0x000140013c20((longlong)local_118 + lVar4,
                          *(uint *)((longlong)auStack_108 + lVar4) | uVar1,0);
      return;
    }
    if (*(longlong *)((longlong)alStack_d0 + lVar4 + 8) != 0) {
      FUN_140012ad0();
    }
    if ((*(byte *)((longlong)auStack_108 + (longlong)*(int *)(local_118[0] + 4)) & 6) == 0) {
      plVar3 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
      (**(code **)(*plVar3 + 0x50))(plVar3,&local_138,0,1,1);
      plVar3 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
    }
    else {
      local_138 = _DAT_140492be0;
      uStack_130 = _UNK_140492be8;
      local_128 = 0;
      plVar3 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *param_3 = (int)local_138 + (int)uStack_130;
    FUN_14004a9f0(local_118,0,0);
    uVar2 = FUN_14028b190(*param_3);
    *param_2 = uVar2;
    plVar3 = (longlong *)FUN_14004ab20(local_118,uVar2,*param_3);
    if ((*(uint *)((longlong)*(int *)(*plVar3 + 4) + 0x10 + (longlong)plVar3) >> 2 & 1) != 0) {
      func_0x00014028b040(param_2);
    }
  }
  *(undefined ***)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)) =
       &PTR_UNWIND_INFO_140475ec8;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118[0] + 4)) =
       *(int *)(local_118[0] + 4) + -0xb0;
                    /* WARNING: Subroutine does not return */
  FUN_14004a860(auStack_108);
}

