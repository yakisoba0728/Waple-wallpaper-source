// Function: FUN_140123230
// Addr: 140123230
// Size: 753 bytes


int FUN_140123230(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res18 [4];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_50 [24];
  
  plVar7 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  local_res18[0] = 0;
  plVar8 = (longlong *)0x0;
  plVar5 = (longlong *)0x0;
  plVar3 = (longlong *)0x0;
  iVar2 = (**(code **)(*param_3 + 0x110))(param_3,param_4,local_res18,&local_60);
  plVar4 = plVar7;
  plVar6 = plVar7;
  plVar9 = plVar7;
  if ((iVar2 < 0) || (plVar4 = plVar3, plVar6 = plVar5, plVar9 = plVar8, local_res18[0] == 0))
  goto LAB_1401234ca;
  local_58 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  iVar2 = (**(code **)(*local_60 + 0x110))(local_60,&local_58);
  plVar9 = plVar7;
  if ((-1 < iVar2) &&
     (iVar2 = (**(code **)(*local_58 + 0x40))(local_58,local_50), plVar9 = plVar8, -1 < iVar2)) {
    iVar2 = memcmp(&DAT_14042c320,local_50,0x10);
    if (iVar2 == 0) {
      iVar2 = MFCreateAudioRendererActivate(&local_68);
    }
    else {
      iVar2 = memcmp(&DAT_14042c330,local_50,0x10);
      if (iVar2 != 0) {
        iVar2 = -0x7fffbffb;
        goto LAB_14012332b;
      }
      iVar2 = MFCreateVideoRendererActivate(param_5,&local_68);
    }
    plVar1 = local_68;
    if (-1 < iVar2) {
      (**(code **)(*local_68 + 8))(local_68);
      plVar9 = plVar1;
    }
  }
LAB_14012332b:
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
    local_58 = (longlong *)0x0;
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
    local_68 = (longlong *)0x0;
  }
  plVar8 = local_60;
  if (-1 < iVar2) {
    local_78 = (longlong *)0x0;
    iVar2 = MFCreateTopologyNode(1,&local_78);
    plVar6 = plVar7;
    if ((((-1 < iVar2) &&
         (iVar2 = (**(code **)(*local_78 + 0xd8))(local_78,&DAT_1404742d8,param_2), plVar6 = plVar5,
         -1 < iVar2)) &&
        (iVar2 = (**(code **)(*local_78 + 0xd8))(local_78,&DAT_1404742c8,param_3), -1 < iVar2)) &&
       ((iVar2 = (**(code **)(*local_78 + 0xd8))(local_78,&DAT_1404742b8,plVar8), -1 < iVar2 &&
        (iVar2 = (**(code **)(*param_1 + 0x110))(param_1,local_78), plVar8 = local_78, -1 < iVar2)))
       ) {
      (**(code **)(*local_78 + 8))(local_78);
      plVar6 = plVar8;
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
      local_78 = (longlong *)0x0;
    }
    if (-1 < iVar2) {
      local_70 = (longlong *)0x0;
      iVar2 = MFCreateTopologyNode(0,&local_70);
      plVar4 = plVar7;
      if (((-1 < iVar2) &&
          (iVar2 = (**(code **)(*local_70 + 0x108))(local_70,plVar9), plVar4 = plVar3, -1 < iVar2))
         && ((iVar2 = (**(code **)(*local_70 + 0xa8))(local_70,&DAT_1404742a8,0), -1 < iVar2 &&
             ((iVar2 = (**(code **)(*local_70 + 0xa8))(local_70,&DAT_140474298,0), -1 < iVar2 &&
              (iVar2 = (**(code **)(*param_1 + 0x110))(param_1,local_70), plVar5 = local_70,
              -1 < iVar2)))))) {
        (**(code **)(*local_70 + 8))(local_70);
        plVar4 = plVar5;
      }
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 0x10))();
        local_70 = (longlong *)0x0;
      }
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*plVar6 + 0x140))(plVar6,0,plVar4,0);
      }
    }
  }
LAB_1401234ca:
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
    local_60 = (longlong *)0x0;
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return iVar2;
}

