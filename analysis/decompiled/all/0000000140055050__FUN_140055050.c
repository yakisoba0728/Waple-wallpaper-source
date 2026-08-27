// Function: FUN_140055050
// Addr: 140055050
// Size: 716 bytes


void FUN_140055050(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_138 [7];
  longlong *local_100;
  longlong local_f8 [7];
  longlong *local_c0;
  longlong local_b8 [7];
  longlong *local_80;
  longlong local_78 [7];
  longlong *local_40;
  
  plVar1 = (longlong *)(param_1 + 0x80);
  local_100 = (longlong *)0x0;
  puVar3 = (undefined8 *)param_2[7];
  if (puVar3 != (undefined8 *)0x0) {
    local_100 = (longlong *)(**(code **)*puVar3)(puVar3,local_138);
  }
  plVar2 = (longlong *)(param_1 + 0xb8);
  if ((local_100 == local_138) ||
     (plVar6 = local_100, plVar4 = (longlong *)*plVar2, (longlong *)*plVar2 == plVar1)) {
    local_80 = (longlong *)0x0;
    if (local_100 != (longlong *)0x0) {
      if (local_100 == local_138) {
        local_80 = (longlong *)(**(code **)(*local_100 + 8))(local_100,local_b8);
        if (local_100 == (longlong *)0x0) goto LAB_1400551d3;
        (**(code **)(*local_100 + 0x20))
                  (local_100,CONCAT71((int7)((ulonglong)local_138 >> 8),local_100 != local_138));
      }
      else {
        local_80 = local_100;
      }
      local_100 = (longlong *)0x0;
    }
LAB_1400551d3:
    plVar6 = (longlong *)*plVar2;
    if (plVar6 != (longlong *)0x0) {
      if (plVar6 == plVar1) {
        local_100 = (longlong *)(**(code **)(*plVar6 + 8))(plVar6,local_138);
        plVar6 = (longlong *)*plVar2;
        if (plVar6 == (longlong *)0x0) goto LAB_14005520e;
        (**(code **)(*plVar6 + 0x20))(plVar6,plVar6 != plVar1);
        plVar6 = local_100;
      }
      local_100 = plVar6;
      *plVar2 = 0;
    }
LAB_14005520e:
    if (local_80 != (longlong *)0x0) {
      plVar6 = local_80;
      plVar4 = local_100;
      if (local_80 != local_b8) goto LAB_1400550c2;
      lVar5 = (**(code **)(*local_80 + 8))(local_80,plVar1);
      *plVar2 = lVar5;
      if (local_80 != (longlong *)0x0) {
        (**(code **)(*local_80 + 0x20))
                  (local_80,CONCAT71((int7)((ulonglong)local_b8 >> 8),local_80 != local_b8));
      }
    }
  }
  else {
LAB_1400550c2:
    local_100 = plVar4;
    *plVar2 = (longlong)plVar6;
  }
  if (local_100 != (longlong *)0x0) {
    (**(code **)(*local_100 + 0x20))
              (local_100,CONCAT71((int7)((ulonglong)local_138 >> 8),local_100 != local_138));
  }
  puVar3 = (undefined8 *)param_3[7];
  plVar1 = (longlong *)(param_1 + 0xc0);
  local_c0 = (longlong *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    local_c0 = (longlong *)(**(code **)*puVar3)(puVar3,local_f8);
  }
  plVar2 = (longlong *)(param_1 + 0xf8);
  if ((local_c0 == local_f8) ||
     (plVar6 = local_c0, plVar4 = (longlong *)*plVar2, (longlong *)*plVar2 == plVar1)) {
    local_40 = (longlong *)0x0;
    if (local_c0 != (longlong *)0x0) {
      if (local_c0 == local_f8) {
        local_40 = (longlong *)(**(code **)(*local_c0 + 8))(local_c0,local_78);
        if (local_c0 == (longlong *)0x0) goto LAB_14005529b;
        (**(code **)(*local_c0 + 0x20))
                  (local_c0,CONCAT71((int7)((ulonglong)local_f8 >> 8),local_c0 != local_f8));
      }
      else {
        local_40 = local_c0;
      }
      local_c0 = (longlong *)0x0;
    }
LAB_14005529b:
    plVar6 = (longlong *)*plVar2;
    if (plVar6 != (longlong *)0x0) {
      if (plVar6 == plVar1) {
        local_c0 = (longlong *)(**(code **)(*plVar6 + 8))(plVar6,local_f8);
        plVar6 = (longlong *)*plVar2;
        if (plVar6 == (longlong *)0x0) goto LAB_1400552d4;
        (**(code **)(*plVar6 + 0x20))(plVar6,plVar6 != plVar1);
        plVar6 = local_c0;
      }
      local_c0 = plVar6;
      *plVar2 = 0;
    }
LAB_1400552d4:
    if (local_40 == (longlong *)0x0) goto LAB_14005512e;
    plVar6 = local_40;
    plVar4 = local_c0;
    if (local_40 == local_78) {
      lVar5 = (**(code **)(*local_40 + 8))(local_40,plVar1);
      *plVar2 = lVar5;
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 0x20))
                  (local_40,CONCAT71((int7)((ulonglong)local_78 >> 8),local_40 != local_78));
      }
      goto LAB_14005512e;
    }
  }
  local_c0 = plVar4;
  *plVar2 = (longlong)plVar6;
LAB_14005512e:
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x20))
              (local_c0,CONCAT71((int7)((ulonglong)local_f8 >> 8),local_c0 != local_f8));
  }
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  plVar1 = (longlong *)param_3[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
    param_3[7] = 0;
  }
  return;
}

