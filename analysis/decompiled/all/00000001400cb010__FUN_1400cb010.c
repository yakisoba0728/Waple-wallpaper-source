// Function: FUN_1400cb010
// Addr: 1400cb010
// Size: 317 bytes


longlong * FUN_1400cb010(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_a8 [7];
  longlong *local_70;
  longlong local_68 [7];
  longlong *local_30;
  
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_70 = (longlong *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    local_70 = (longlong *)(**(code **)*puVar1)(puVar1,local_a8);
  }
  if ((local_70 == local_a8) ||
     (plVar4 = local_70, plVar2 = (longlong *)param_1[7], (longlong *)param_1[7] == param_1)) {
    local_30 = (longlong *)0x0;
    if (local_70 != (longlong *)0x0) {
      if (local_70 == local_a8) {
        local_30 = (longlong *)(**(code **)(*local_70 + 8))(local_70,local_68);
        if (local_70 == (longlong *)0x0) goto LAB_1400cb0c9;
        (**(code **)(*local_70 + 0x20))
                  (local_70,CONCAT71((int7)((ulonglong)local_a8 >> 8),local_70 != local_a8));
      }
      else {
        local_30 = local_70;
      }
      local_70 = (longlong *)0x0;
    }
LAB_1400cb0c9:
    plVar4 = (longlong *)param_1[7];
    if (plVar4 != (longlong *)0x0) {
      if (plVar4 == param_1) {
        local_70 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4,local_a8);
        plVar4 = (longlong *)param_1[7];
        if (plVar4 == (longlong *)0x0) goto LAB_1400cb104;
        (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != param_1);
        plVar4 = local_70;
      }
      local_70 = plVar4;
      param_1[7] = 0;
    }
LAB_1400cb104:
    if (local_30 == (longlong *)0x0) goto LAB_1400cb05e;
    plVar4 = local_30;
    plVar2 = local_70;
    if (local_30 == local_68) {
      lVar3 = (**(code **)(*local_30 + 8))(local_30,param_1);
      param_1[7] = lVar3;
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x20))
                  (local_30,CONCAT71((int7)((ulonglong)local_68 >> 8),local_30 != local_68));
      }
      goto LAB_1400cb05e;
    }
  }
  local_70 = plVar2;
  param_1[7] = (longlong)plVar4;
LAB_1400cb05e:
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x20))
              (local_70,CONCAT71((int7)((ulonglong)local_a8 >> 8),local_70 != local_a8));
  }
  return param_1;
}

