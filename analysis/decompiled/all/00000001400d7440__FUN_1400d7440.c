// Function: FUN_1400d7440
// Addr: 1400d7440
// Size: 841 bytes


void FUN_1400d7440(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  longlong local_res8;
  longlong local_res18;
  longlong local_res20;
  ulonglong in_stack_ffffffffffffffb8;
  ulonglong local_38;
  undefined8 uStack_30;
  
  pbVar5 = (byte *)(param_1 + 0x14);
  local_res8 = 0;
  local_res18 = 0;
  local_res20 = 0;
  *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x30) = param_1;
  bVar1 = *pbVar5;
  while (bVar1 != 0xff) {
    plVar2 = *(longlong **)
              (*(longlong *)(*(longlong *)(param_1 + 8) + 0x58) + (ulonglong)(*pbVar5 & 0xf) * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,*pbVar5);
    }
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x40000000) == 0) {
    if (*(longlong *)(param_3 + 0x10) != 0) {
      local_res8 = *(longlong *)(param_3 + 0x38);
      local_38 = 0;
      uStack_30 = 0;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
      in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffb8 & 0xffffffff00000000;
      iVar4 = (**(code **)(*plVar2 + 0x70))
                        (plVar2,local_res8,0,4,in_stack_ffffffffffffffb8,&local_38);
      if (-1 < iVar4) {
        in_stack_ffffffffffffffb8 = local_38;
        FUN_1400d8300(param_1,param_2,*(undefined1 *)(param_1 + 0x105),
                      *(undefined8 *)(param_1 + 0x110),local_38);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
        (**(code **)(*plVar2 + 0x78))(plVar2,local_res8,0);
      }
    }
    if (*(longlong *)(param_3 + 0x20) != 0) {
      local_res18 = *(longlong *)(param_3 + 0x40);
      local_38 = 0;
      uStack_30 = 0;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
      in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffb8 & 0xffffffff00000000;
      iVar4 = (**(code **)(*plVar2 + 0x70))
                        (plVar2,local_res18,0,4,in_stack_ffffffffffffffb8,&local_38);
      if (-1 < iVar4) {
        in_stack_ffffffffffffffb8 = local_38;
        FUN_1400d8300(param_1,param_2,*(undefined1 *)(param_1 + 0x119),
                      *(undefined8 *)(param_1 + 0x128),local_38);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
        (**(code **)(*plVar2 + 0x78))(plVar2,local_res18,0);
      }
    }
    if (*(longlong *)(param_3 + 0x30) != 0) {
      local_res20 = *(longlong *)(param_3 + 0x48);
      local_38 = 0;
      uStack_30 = 0;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
      iVar4 = (**(code **)(*plVar2 + 0x70))
                        (plVar2,local_res20,0,4,in_stack_ffffffffffffffb8 & 0xffffffff00000000,
                         &local_38);
      if (-1 < iVar4) {
        FUN_1400d8300(param_1,param_2,*(undefined1 *)(param_1 + 0x131),
                      *(undefined8 *)(param_1 + 0x140),local_38);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
        (**(code **)(*plVar2 + 0x78))(plVar2,local_res20,0);
      }
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
    (**(code **)(*plVar2 + 0x58))(plVar2,*(undefined8 *)(param_1 + 0xd8),0,0);
    if (*(longlong *)(param_3 + 8) != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
      (**(code **)(*plVar2 + 0x38))(plVar2,0,1);
    }
    if (local_res8 != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
      (**(code **)(*plVar2 + 0x38))(plVar2,1,1,&local_res8);
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
    lVar3 = *plVar2;
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      (**(code **)(lVar3 + 0xb8))();
    }
    else {
      (**(code **)(lVar3 + 0xb8))(plVar2,*(longlong *)(param_1 + 0xe0),0,0);
      if (*(longlong *)(param_3 + 0x18) != 0) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
        (**(code **)(*plVar2 + 0xb0))(plVar2,0,1);
      }
      if (local_res18 != 0) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
        (**(code **)(*plVar2 + 0xb0))(plVar2,1,1,&local_res18);
      }
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
    (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined8 *)(param_1 + 0xe8),0,0);
    if (*(longlong *)(param_3 + 0x28) != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
      (**(code **)(*plVar2 + 0x80))(plVar2,0,1,param_3 + 0x28);
    }
    if (local_res20 != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
      (**(code **)(*plVar2 + 0x80))(plVar2,1,1,&local_res20);
    }
  }
  return;
}

