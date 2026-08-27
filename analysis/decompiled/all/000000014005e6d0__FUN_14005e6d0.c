// Function: FUN_14005e6d0
// Addr: 14005e6d0
// Size: 1075 bytes


void FUN_14005e6d0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  float fVar8;
  undefined4 local_res8 [2];
  ulonglong in_stack_ffffffffffffff48;
  ulonglong uVar9;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 *local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (-1 < *(int *)(param_1 + 0x70)) {
    uVar9 = in_stack_ffffffffffffff48 & 0xffffffff00000000;
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x70))
                      (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0xa8),0,4,uVar9,
                       local_80);
    *(int *)(param_1 + 0x70) = iVar5;
    if (-1 < iVar5) {
      *local_80[0] = param_2;
      local_80[0][1] = *(undefined4 *)(param_1 + 0x108);
      local_80[0][2] = *(undefined4 *)(param_1 + 0x10c);
      iVar5 = FUN_1402c97a0();
      local_80[0][3] = (float)iVar5 / DAT_140492960;
      fVar8 = DAT_140492704;
      if (0.0 < *(float *)(param_1 + 0xc)) {
        fVar8 = *(float *)(param_1 + 8) / *(float *)(param_1 + 0xc);
      }
      local_80[0][4] = fVar8;
      local_80[0][5] = *(undefined4 *)(param_1 + 8);
      local_80[0][6] = *(undefined4 *)(param_1 + 0xc);
      uVar4 = *(undefined8 *)(param_1 + 0x130);
      *(undefined8 *)(local_80[0] + 8) = *(undefined8 *)(param_1 + 0x128);
      *(undefined8 *)(local_80[0] + 10) = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0x140);
      *(undefined8 *)(local_80[0] + 0xc) = *(undefined8 *)(param_1 + 0x138);
      *(undefined8 *)(local_80[0] + 0xe) = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0x150);
      *(undefined8 *)(local_80[0] + 0x10) = *(undefined8 *)(param_1 + 0x148);
      *(undefined8 *)(local_80[0] + 0x12) = uVar4;
      uVar6 = *(undefined4 *)(param_1 + 0x15c);
      uVar2 = *(undefined4 *)(param_1 + 0x160);
      uVar3 = *(undefined4 *)(param_1 + 0x164);
      local_80[0][0x14] = *(undefined4 *)(param_1 + 0x158);
      local_80[0][0x15] = uVar6;
      local_80[0][0x16] = uVar2;
      local_80[0][0x17] = uVar3;
      FUN_14005f730(&local_60);
      *(undefined8 *)(local_80[0] + 0x18) = local_60;
      *(undefined8 *)(local_80[0] + 0x1a) = uStack_58;
      *(undefined8 *)(local_80[0] + 0x1c) = local_50;
      *(undefined8 *)(local_80[0] + 0x1e) = uStack_48;
      *(undefined8 *)(local_80[0] + 0x20) = local_40;
      *(undefined8 *)(local_80[0] + 0x22) = uStack_38;
      local_80[0][0x24] = local_30;
      local_80[0][0x25] = uStack_2c;
      local_80[0][0x26] = uStack_28;
      local_80[0][0x27] = uStack_24;
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x78))
                (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0xa8),0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x160))(*(longlong **)(param_1 + 0x80),1,param_1)
    ;
    local_70 = 0;
    uStack_68 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x80) + 400))
              (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x28),&local_70);
    plVar1 = *(longlong **)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      (**(code **)(*plVar1 + 0x108))(plVar1,1,param_1 + 0x28,0);
    }
    else {
      (**(code **)(*plVar1 + 0x1a8))
                (plVar1,*(longlong *)(param_1 + 0x68),1,DAT_140492704,uVar9 & 0xffffffffffffff00);
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x108))
                (*(longlong **)(param_1 + 0x80),1,param_1 + 0x28,*(undefined8 *)(param_1 + 0x68));
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x120))
                (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0xc0),0);
    }
    iVar5 = *(int *)(param_1 + 0x118);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x158))
              (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0xa0));
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x118))
              (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0xb8),0,0xffffffff);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x88))
              (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0xe0));
    uVar6 = 1;
    if (1 < iVar5) {
      uVar6 = 4;
    }
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0xc0))(*(longlong **)(param_1 + 0x80),uVar6);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x38))
              (*(longlong **)(param_1 + 0x80),0,1,param_1 + 0xa8);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0xb0))
              (*(longlong **)(param_1 + 0x80),0,1,param_1 + 0xa8);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x80))
              (*(longlong **)(param_1 + 0x80),0,1,param_1 + 0xa8);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x58))
              (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 200),0,0);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0xb8))
              (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0xd8),0,0);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x48))
              (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0xd0),0,0);
    local_90 = *(undefined8 *)(param_1 + 0x90);
    local_88 = *(undefined8 *)(param_1 + 0x98);
    local_a8 = *(undefined8 *)(param_1 + 0x38);
    local_a0 = 0;
    uStack_98 = 0;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      uStack_98 = *(undefined8 *)(param_1 + 0x58);
      local_a0 = *(longlong *)(param_1 + 0x48);
    }
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x50))
              (*(longlong **)(param_1 + 0x80),0,2,&local_90);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x40))
              (*(longlong **)(param_1 + 0x80),0,3,&local_a8);
    lVar7 = 0x120;
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar7 = 0xb0;
    }
    local_res8[0] = 0;
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x90))
              (*(longlong **)(param_1 + 0x80),0,1,lVar7 + param_1,param_1 + 0x11c,local_res8);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x68))
              (*(longlong **)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x118),0);
    if (-1 < *(int *)(param_1 + 0x70)) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                        (*(longlong **)(param_1 + 0x20),0,0);
      *(undefined4 *)(param_1 + 0x70) = uVar6;
    }
  }
  return;
}

