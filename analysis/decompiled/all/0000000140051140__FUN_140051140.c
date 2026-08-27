// Function: FUN_140051140
// Addr: 140051140
// Size: 325 bytes


undefined8 * FUN_140051140(undefined8 *param_1,uint *param_2,uint *param_3)

{
  short sVar1;
  longlong lVar2;
  uint *local_38;
  longlong local_30;
  undefined1 local_28;
  uint *local_20;
  longlong local_18;
  
  local_18 = *(longlong *)(param_3 + 4);
  local_20 = param_3;
  if (7 < *(ulonglong *)(param_3 + 6)) {
    local_20 = *(uint **)param_3;
  }
  if (((local_18 == 0) ||
      (((3 < local_18 * 2 && ((*local_20 & 0xffffffdf) - 0x3a0041 < 0x1a)) ||
       ((short)*local_20 == 0x5c)))) || ((short)*local_20 == 0x2f)) {
    FUN_140016600();
    FUN_140015460(param_1,param_3);
    return param_1;
  }
  local_30 = *(longlong *)(param_2 + 4);
  if (7 < *(ulonglong *)(param_2 + 6)) {
    param_2 = *(uint **)param_2;
  }
  if (local_30 == 2) {
    if (0x19 < (*param_2 & 0xffffffdf) - 0x3a0041) {
LAB_140051240:
      sVar1 = *(short *)((longlong)param_2 + local_30 * 2 + -2);
      if ((sVar1 != 0x5c) && (sVar1 != 0x2f)) {
        local_28 = 1;
        lVar2 = 1;
        goto LAB_1400511ca;
      }
    }
  }
  else if (local_30 != 0) goto LAB_140051240;
  local_28 = 0;
  lVar2 = 0;
LAB_1400511ca:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  local_38 = param_2;
  FUN_140050f70(param_1,lVar2 + local_30 + local_18,&local_38);
  return param_1;
}

