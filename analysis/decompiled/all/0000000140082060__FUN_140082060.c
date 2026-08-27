// Function: FUN_140082060
// Addr: 140082060
// Size: 351 bytes


void FUN_140082060(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong local_a8 [7];
  longlong *local_70;
  longlong local_68 [7];
  longlong *local_30;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  local_70 = (longlong *)0x0;
  puVar2 = (undefined8 *)param_2[7];
  if (puVar2 != (undefined8 *)0x0) {
    local_70 = (longlong *)(**(code **)*puVar2)(puVar2,local_a8);
  }
  if ((local_70 == local_a8) ||
     (plVar5 = local_70, plVar3 = *(longlong **)(param_1 + 0x58),
     *(longlong **)(param_1 + 0x58) == plVar1)) {
    local_30 = (longlong *)0x0;
    if (local_70 != (longlong *)0x0) {
      if (local_70 == local_a8) {
        local_30 = (longlong *)(**(code **)(*local_70 + 8))(local_70,local_68);
        if (local_70 == (longlong *)0x0) goto LAB_14008213b;
        (**(code **)(*local_70 + 0x20))
                  (local_70,CONCAT71((int7)((ulonglong)local_a8 >> 8),local_70 != local_a8));
      }
      else {
        local_30 = local_70;
      }
      local_70 = (longlong *)0x0;
    }
LAB_14008213b:
    plVar5 = *(longlong **)(param_1 + 0x58);
    if (plVar5 != (longlong *)0x0) {
      if (plVar5 == plVar1) {
        local_70 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5,local_a8);
        plVar5 = *(longlong **)(param_1 + 0x58);
        if (plVar5 == (longlong *)0x0) goto LAB_140082176;
        (**(code **)(*plVar5 + 0x20))(plVar5,plVar5 != plVar1);
        plVar5 = local_70;
      }
      local_70 = plVar5;
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
LAB_140082176:
    if (local_30 == (longlong *)0x0) goto LAB_1400820b8;
    plVar5 = local_30;
    plVar3 = local_70;
    if (local_30 == local_68) {
      uVar4 = (**(code **)(*local_30 + 8))(local_30,plVar1);
      *(undefined8 *)(param_1 + 0x58) = uVar4;
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x20))
                  (local_30,CONCAT71((int7)((ulonglong)local_68 >> 8),local_30 != local_68));
      }
      goto LAB_1400820b8;
    }
  }
  local_70 = plVar3;
  *(longlong **)(param_1 + 0x58) = plVar5;
LAB_1400820b8:
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x20))
              (local_70,CONCAT71((int7)((ulonglong)local_a8 >> 8),local_70 != local_a8));
  }
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  return;
}

