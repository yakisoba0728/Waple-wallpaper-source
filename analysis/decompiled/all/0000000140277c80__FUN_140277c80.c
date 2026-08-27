// Function: FUN_140277c80
// Addr: 140277c80
// Size: 622 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140277c80(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined8 ****ppppuVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *****pppppuVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 local_res20;
  uint in_stack_fffffffffffffe98;
  undefined8 ****local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  int iStack_11c;
  longlong local_118 [2];
  uint local_108 [14];
  longlong alStack_d0 [9];
  longlong local_88;
  undefined **local_68 [12];
  
  FUN_1400499e0(local_118,param_2,4);
  if (local_88 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    plVar4 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    lVar7 = (longlong)*(int *)(local_118[0] + 4);
    if (*(uint *)((longlong)local_108 + lVar7) == 0) {
      if (*(longlong *)((longlong)alStack_d0 + lVar7 + 8) != 0) {
        FUN_140012a00();
      }
    }
    else {
      uVar3 = 6;
      if (*(longlong *)((longlong)alStack_d0 + lVar7) != 0) {
        uVar3 = 2;
      }
      FUN_140013b50((longlong)local_118 + lVar7,*(uint *)((longlong)local_108 + lVar7) | uVar3,0);
    }
    if ((*(byte *)((longlong)local_108 + (longlong)*(int *)(local_118[0] + 4)) & 6) == 0) {
      plVar4 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
      in_stack_fffffffffffffe98 = 0;
      (**(code **)(*plVar4 + 0x50))(plVar4,&local_138,0,1,1);
      plVar4 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
    }
    else {
      local_138 = _DAT_140492b10;
      uStack_130 = _UNK_140492b18;
      local_128 = 0;
      plVar4 = *(longlong **)((longlong)alStack_d0 + (longlong)*(int *)(local_118[0] + 4));
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    local_148 = 0;
    uStack_150 = 0;
    uVar3 = (int)uStack_130 + (int)local_138;
    if (param_3 < (uint)((int)uStack_130 + (int)local_138)) {
      uVar3 = param_3;
    }
    uStack_140 = 0xf;
    local_158 = (undefined8 *****)0x0;
    uVar6 = (ulonglong)uVar3;
    if (uVar3 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
      local_158._0_1_ = 0;
      local_148 = uVar6;
    }
    else if (uVar3 < 0x10) {
      local_148 = uVar6;
      FUN_1404217a0(&local_158,0,uVar6);
      *(undefined1 *)((longlong)&local_158 + uVar6) = 0;
    }
    else {
      FUN_140016cc0(&local_158,uVar6,local_res20,uVar6,in_stack_fffffffffffffe98 & 0xffffff00);
    }
    FUN_14004a920(local_118,0,0);
    pppppuVar5 = &local_158;
    if (0xf < uStack_140) {
      pppppuVar5 = (undefined8 *****)local_158;
    }
    FUN_14004aa50(local_118,pppppuVar5,uVar6);
    uVar2 = uStack_140;
    uVar6 = local_148;
    ppppuVar1 = local_158;
    local_148 = 0;
    uStack_140 = 0xf;
    local_158 = (undefined8 ****)((ulonglong)local_158 & 0xffffffffffffff00);
    *param_1 = ppppuVar1;
    param_1[1] = uStack_150;
    param_1[2] = uVar6;
    param_1[3] = uVar2;
  }
  *(undefined ***)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)) = &PTR_LAB_140475df8;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118[0] + 4)) =
       *(int *)(local_118[0] + 4) + -0xb0;
  FUN_14004a790(local_108);
  *(undefined ***)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)) = &PTR_LAB_140474098;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118[0] + 4)) =
       *(int *)(local_118[0] + 4) + -0x18;
  local_68[0] = std::ios_base::vftable;
  FUN_14028c430(local_68);
  return param_1;
}

