// Function: FUN_1400c2a40
// Addr: 1400c2a40
// Size: 461 bytes


void FUN_1400c2a40(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong local_a8 [7];
  longlong *local_70;
  longlong local_68 [7];
  longlong *local_30;
  
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  puVar5 = *(undefined8 **)(lVar1 + 0x2a0);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_14028af20(0x60);
    *(undefined8 **)(lVar1 + 0x2a0) = puVar5;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
  }
  puVar2 = (undefined8 *)param_2[7];
  plVar4 = puVar5 + 4;
  local_70 = (longlong *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    local_70 = (longlong *)(**(code **)*puVar2)(puVar2,local_a8);
  }
  if ((local_70 != local_a8) && (plVar3 = (longlong *)puVar5[0xb], plVar3 != plVar4)) {
    puVar5[0xb] = local_70;
    local_70 = plVar3;
    goto LAB_1400c2bd1;
  }
  local_30 = (longlong *)0x0;
  if (local_70 != (longlong *)0x0) {
    plVar3 = local_70;
    if (local_70 == local_a8) {
      local_30 = (longlong *)(**(code **)(*local_70 + 8))(local_70,local_68);
      if (local_70 == (longlong *)0x0) goto LAB_1400c2b3e;
      (**(code **)(*local_70 + 0x20))
                (local_70,CONCAT71((int7)((ulonglong)local_a8 >> 8),local_70 != local_a8));
      plVar3 = local_30;
    }
    local_30 = plVar3;
    local_70 = (longlong *)0x0;
  }
LAB_1400c2b3e:
  plVar3 = (longlong *)puVar5[0xb];
  if (plVar3 != (longlong *)0x0) {
    if (plVar3 == plVar4) {
      local_70 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,local_a8);
      plVar3 = (longlong *)puVar5[0xb];
      if (plVar3 == (longlong *)0x0) goto LAB_1400c2b90;
      (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != plVar4);
      plVar3 = local_70;
    }
    local_70 = plVar3;
    puVar5[0xb] = 0;
  }
LAB_1400c2b90:
  if (local_30 != (longlong *)0x0) {
    if (local_30 == local_68) {
      uVar6 = (**(code **)(*local_30 + 8))(local_30,plVar4);
      puVar5[0xb] = uVar6;
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x20))
                  (local_30,CONCAT71((int7)((ulonglong)local_68 >> 8),local_30 != local_68));
      }
    }
    else {
      puVar5[0xb] = local_30;
    }
  }
LAB_1400c2bd1:
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x20))
              (local_70,CONCAT71((int7)((ulonglong)local_a8 >> 8),local_70 != local_a8));
  }
  plVar4 = (longlong *)param_2[7];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != param_2);
    param_2[7] = 0;
  }
  return;
}

