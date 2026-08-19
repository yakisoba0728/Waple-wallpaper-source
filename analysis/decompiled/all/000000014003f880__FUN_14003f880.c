// Function: FUN_14003f880
// Addr: 14003f880
// Size: 430 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003f880(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 *****pppppuVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 local_res18;
  uint in_stack_fffffffffffffe98;
  undefined8 ****local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  int iStack_11c;
  longlong local_118 [2];
  uint local_108 [14];
  longlong alStack_d0 [9];
  longlong local_88;
  
  FUN_140049ab0(local_118,param_2,4);
  if (local_88 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    *(undefined ***)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)) =
         &PTR_UNWIND_INFO_140475ec8;
    *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118[0] + 4)) =
         *(int *)(local_118[0] + 4) + -0xb0;
                    /* WARNING: Subroutine does not return */
    FUN_14004a860(local_108);
  }
  plVar5 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  lVar9 = (longlong)*(int *)(local_118[0] + 4);
  if (*(uint *)((longlong)local_108 + lVar9) != 0) {
    uVar6 = 6;
    if (*(longlong *)((longlong)alStack_d0 + lVar9) != 0) {
      uVar6 = 2;
    }
    func_0x000140013c20((longlong)local_118 + lVar9,*(uint *)((longlong)local_108 + lVar9) | uVar6,0
                       );
    return;
  }
  if (*(longlong *)((longlong)alStack_d0 + lVar9 + 8) != 0) {
    FUN_140012ad0();
  }
  if ((*(byte *)((longlong)local_108 + (longlong)*(int *)(local_118[0] + 4)) & 6) == 0) {
    plVar5 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
    in_stack_fffffffffffffe98 = 0;
    (**(code **)(*plVar5 + 0x50))(plVar5,&local_138,0,1,1);
    plVar5 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
  }
  else {
    local_138 = _DAT_140492be0;
    uStack_130 = _UNK_140492be8;
    local_128 = 0;
    plVar5 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  uVar6 = (int)uStack_130 + (int)local_138;
  uStack_150 = 0;
  uVar8 = (ulonglong)uVar6;
  local_148 = 0;
  local_140 = 0xf;
  local_158 = (undefined8 *****)0x0;
  if (uVar6 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
    local_158._0_1_ = 0;
    local_148 = 0;
  }
  else {
    if (uVar6 < 0x10) {
      local_148 = uVar8;
      func_0x000140421870(&local_158,0,uVar8);
      return;
    }
    FUN_140016d90(&local_158,uVar8,local_res18,uVar8,in_stack_fffffffffffffe98 & 0xffffff00);
  }
  FUN_14004a9f0(local_118,0,0);
  pppppuVar7 = &local_158;
  if (0xf < local_140) {
    pppppuVar7 = (undefined8 *****)local_158;
  }
  FUN_14004ab20(local_118,pppppuVar7,uVar8);
  uVar1 = (undefined4)local_148;
  uVar2 = local_148._4_4_;
  uVar3 = (undefined4)local_140;
  uVar4 = local_140._4_4_;
  local_148 = 0;
  local_140 = 0xf;
  *param_1 = local_158;
  param_1[1] = uStack_150;
  local_158 = (undefined8 ****)((ulonglong)local_158 & 0xffffffffffffff00);
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined ***)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)) =
       &PTR_UNWIND_INFO_140475ec8;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118[0] + 4)) =
       *(int *)(local_118[0] + 4) + -0xb0;
                    /* WARNING: Subroutine does not return */
  FUN_14004a860(local_108);
}

