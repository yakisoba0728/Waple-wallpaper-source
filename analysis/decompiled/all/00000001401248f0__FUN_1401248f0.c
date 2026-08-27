// Function: FUN_1401248f0
// Addr: 1401248f0
// Size: 509 bytes


int FUN_1401248f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_res8 [4];
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_48 [2];
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  uVar6 = 0;
  local_res20 = (longlong *)0x0;
  local_res18 = (longlong *)0x0;
  iVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,&local_res20);
  if (-1 < iVar4) {
    uVar8 = 0;
    iVar5 = (**(code **)(*local_res20 + 0x18))(local_res20,1,&local_res18,0);
    uVar7 = local_res8[0];
    if (iVar5 == 0) {
      do {
        local_48[0] = (longlong *)0x0;
        iVar4 = (**(code **)(*local_res18 + 0x30))(local_res18,local_48);
        if (iVar4 < 0) {
          if (iVar4 == -0x7ffbfdf7) {
            iVar4 = 0;
            uVar7 = uVar8;
          }
        }
        else {
          uVar7 = 1;
        }
        if (local_48[0] != (longlong *)0x0) {
          (**(code **)(*local_48[0] + 0x10))();
        }
        uVar3 = uVar6;
        if (iVar4 < 0) {
LAB_140124a75:
          uVar8 = uVar3;
          (**(code **)(*local_res18 + 0x10))();
          goto LAB_140124a83;
        }
        if (uVar7 != 0) {
          iVar4 = (**(code **)(*local_res18 + 0x48))(local_res18,local_res8);
          if (-1 < iVar4) {
            uVar6 = (uint)(local_res8[0] == 0);
            uVar3 = (uint)(local_res8[0] == 0);
            if (-1 < iVar4) goto LAB_140124a07;
          }
          goto LAB_140124a75;
        }
LAB_140124a07:
        plVar2 = local_res18;
        if (uVar6 != 0) {
          (**(code **)(*local_res20 + 0x10))();
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
          goto LAB_140124a95;
        }
        (**(code **)(*local_res18 + 0x10))();
        iVar4 = (**(code **)(*local_res20 + 0x18))(local_res20,1,&local_res18,0);
      } while (iVar4 == 0);
      (**(code **)(*local_res20 + 0x10))();
    }
    else {
LAB_140124a83:
      (**(code **)(*local_res20 + 0x10))();
      if (uVar8 != 0) {
LAB_140124a95:
        if (-1 < iVar4) {
          return iVar4;
        }
      }
    }
  }
  iVar4 = (**(code **)(*param_2 + 0x20))(param_2,plVar1);
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return iVar4;
}

