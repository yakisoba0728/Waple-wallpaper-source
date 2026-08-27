// Function: FUN_140124750
// Addr: 140124750
// Size: 404 bytes


int FUN_140124750(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  HRESULT HVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_res20;
  longlong *local_48;
  longlong *local_40 [2];
  
  local_res20 = (longlong *)0x0;
  HVar2 = CoCreateInstance((IID *)&DAT_14042c360,(LPUNKNOWN)0x0,1,(IID *)&DAT_14048a180,&local_res20
                          );
  plVar4 = (longlong *)0x0;
  if (-1 < HVar2) {
    HVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_res20,&DAT_14048a130);
    plVar1 = local_res20;
    plVar4 = (longlong *)0x0;
    if (-1 < HVar2) {
      (**(code **)(*local_res20 + 8))(local_res20);
      plVar4 = plVar1;
    }
  }
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x10))();
    local_res20 = (longlong *)0x0;
  }
  if (-1 < HVar2) {
    local_48 = (longlong *)0x0;
    local_40[0] = (longlong *)0x0;
    HVar2 = (**(code **)*plVar4)(plVar4,&DAT_14048a190,&local_48);
    if (-1 < HVar2) {
      HVar2 = (**(code **)(*local_48 + 0x18))(local_48,&DAT_14042c370,&DAT_140489f60,local_40);
      if (-1 < HVar2) {
        iVar3 = (**(code **)(*local_48 + 0x18))
                          (local_48,&DAT_14042c380,&DAT_140489fa0,param_1 + 0x18);
        if (iVar3 < 0) {
          *(undefined8 *)(param_1 + 0x18) = 0;
        }
        HVar2 = (**(code **)(*local_40[0] + 0x48))(local_40[0],param_3);
        if (-1 < HVar2) {
          HVar2 = (**(code **)(*local_40[0] + 0x38))(local_40[0],0);
          if (-1 < HVar2) {
            *(longlong **)(param_1 + 0x10) = local_40[0];
            (**(code **)(*local_40[0] + 8))();
          }
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      local_48 = (longlong *)0x0;
    }
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    if (-1 < HVar2) {
      *(longlong **)(param_1 + 8) = plVar4;
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return HVar2;
}

