// Function: FUN_140124570
// Addr: 140124570
// Size: 247 bytes


int FUN_140124570(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res8 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  longlong alStack_28 [2];
  
  plVar1 = (longlong *)param_1[0x14];
  if (plVar1 == (longlong *)0x0) {
    return -0x7fff0001;
  }
  iVar3 = 0;
  local_res8[0] = 0;
  local_res20 = 0;
  local_res18 = 0;
  iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,local_res8,&local_res20,&local_res18,0);
  while( true ) {
    if (iVar2 < 0) {
      return iVar3;
    }
    iVar3 = (**(code **)(*(longlong *)param_1[0x14] + 0x60))
                      ((longlong *)param_1[0x14],local_res8[0],local_res20,local_res18);
    if (local_res8[0] == 1) {
      alStack_28[0] = 0;
      (*DAT_1404267f0)(param_1[0xe],0x40a,0,0,1,0,alStack_28);
      if (alStack_28[0] == 1) {
        return 0;
      }
      alStack_28[0] = 0;
      (**(code **)(*(longlong *)param_1[0x13] + 0x70))((longlong *)param_1[0x13],alStack_28,1,0,0);
    }
    else if ((local_res8[0] == 2) || (local_res8[0] == 3)) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    else if (local_res8[0] == 10) {
      (**(code **)(*(longlong *)param_1[0x16] + 0x20))
                ((longlong *)param_1[0x16],(longlong)param_1 + 0x24);
      if ((0 < *(int *)((longlong)param_1 + 0x24)) && (0 < (int)param_1[5])) {
        (**(code **)(*param_1 + 0xa8))(param_1,*(undefined8 *)((longlong)param_1 + 0x1c));
      }
      (*DAT_140426af8)(param_1[0xe],4);
    }
    else if (local_res8[0] == 0xe) {
      (*DAT_140426af8)(param_1[0xe],4);
    }
    if (iVar3 < 0) break;
    iVar2 = (**(code **)(*(longlong *)param_1[0x14] + 0x40))
                      ((longlong *)param_1[0x14],local_res8,&local_res20,&local_res18,0);
  }
  return iVar3;
}

