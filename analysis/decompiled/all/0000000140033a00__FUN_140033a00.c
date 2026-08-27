// Function: FUN_140033a00
// Addr: 140033a00
// Size: 297 bytes


void FUN_140033a00(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_48 [7];
  longlong *local_10;
  
  plVar1 = (longlong *)param_1[7];
  if ((plVar1 != param_1) && ((longlong *)param_2[7] != param_2)) {
    param_1[7] = param_2[7];
    param_2[7] = (longlong)plVar1;
    return;
  }
  local_10 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_1) {
      local_10 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_48);
      plVar1 = (longlong *)param_1[7];
      if (plVar1 == (longlong *)0x0) goto LAB_140033a84;
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
      plVar1 = local_10;
    }
    local_10 = plVar1;
    param_1[7] = 0;
  }
LAB_140033a84:
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      lVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      param_1[7] = lVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 == (longlong *)0x0) goto LAB_140033abe;
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    }
    else {
      param_1[7] = (longlong)plVar1;
    }
    param_2[7] = 0;
  }
LAB_140033abe:
  if (local_10 != (longlong *)0x0) {
    if (local_10 == local_48) {
      lVar2 = (**(code **)(*local_10 + 8))(local_10,param_2);
      param_2[7] = lVar2;
      if (local_10 != (longlong *)0x0) {
        (**(code **)(*local_10 + 0x20))
                  (local_10,CONCAT71((int7)((ulonglong)local_48 >> 8),local_10 != local_48));
        return;
      }
    }
    else {
      param_2[7] = (longlong)local_10;
    }
  }
  return;
}

