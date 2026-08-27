// Function: FUN_140256200
// Addr: 140256200
// Size: 365 bytes


longlong * FUN_140256200(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_a8 [7];
  longlong *local_70;
  longlong local_68 [7];
  longlong *local_30;
  
  do {
    if (param_2 == 0) {
      return param_3;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    local_70 = (longlong *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      local_70 = (longlong *)(**(code **)*puVar1)(puVar1,local_a8);
    }
    if ((local_70 == local_a8) ||
       (plVar4 = local_70, plVar2 = (longlong *)param_3[7], (longlong *)param_3[7] == param_3)) {
      local_30 = (longlong *)0x0;
      if (local_70 != (longlong *)0x0) {
        if (local_70 == local_a8) {
          local_30 = (longlong *)(**(code **)(*local_70 + 8))(local_70,local_68);
          if (local_70 == (longlong *)0x0) goto LAB_1402562e9;
          (**(code **)(*local_70 + 0x20))(local_70,local_70 != local_a8);
        }
        else {
          local_30 = local_70;
        }
        local_70 = (longlong *)0x0;
      }
LAB_1402562e9:
      plVar4 = (longlong *)param_3[7];
      if (plVar4 != (longlong *)0x0) {
        if (plVar4 == param_3) {
          local_70 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4,local_a8);
          plVar4 = (longlong *)param_3[7];
          if (plVar4 == (longlong *)0x0) goto LAB_140256324;
          (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != param_3);
          plVar4 = local_70;
        }
        local_70 = plVar4;
        param_3[7] = 0;
      }
LAB_140256324:
      if (local_30 != (longlong *)0x0) {
        plVar4 = local_30;
        plVar2 = local_70;
        if (local_30 != local_68) goto LAB_140256264;
        lVar3 = (**(code **)(*local_30 + 8))(local_30,param_3);
        param_3[7] = lVar3;
        if (local_30 != (longlong *)0x0) {
          (**(code **)(*local_30 + 0x20))(local_30,local_30 != local_68);
        }
      }
    }
    else {
LAB_140256264:
      local_70 = plVar2;
      param_3[7] = (longlong)plVar4;
    }
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x20))(local_70,local_70 != local_a8);
    }
    param_3 = param_3 + 8;
    param_1 = param_1 + 0x40;
    param_2 = param_2 + -1;
  } while( true );
}

