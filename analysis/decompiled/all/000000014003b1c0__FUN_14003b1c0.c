// Function: FUN_14003b1c0
// Addr: 14003b1c0
// Size: 542 bytes


longlong * FUN_14003b1c0(longlong *param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 ****ppppuVar8;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8 [32];
  undefined8 ***local_2b8 [2];
  longlong local_2a8;
  ulonglong local_2a0;
  undefined8 local_298;
  undefined1 local_290 [592];
  undefined1 local_40;
  int local_3c;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140016600(local_2b8);
  ppppuVar8 = local_2b8;
  if (7 < local_2a0) {
    ppppuVar8 = (undefined8 ****)local_2b8[0];
  }
  local_298 = 0xffffffffffffffff;
  lVar5 = FUN_1402d6aa0(ppppuVar8);
  if ((lVar5 == 0) || (lVar5 != local_2a8)) {
    local_3c = 2;
  }
  else {
    FUN_140016600(local_2d8,local_2b8);
    local_2e0 = 1;
    local_2e8 = &DAT_140475590;
    FUN_14003b8e0(local_2b8,&local_2e8);
    ppppuVar8 = local_2b8;
    if (7 < local_2a0) {
      ppppuVar8 = (undefined8 ****)local_2b8[0];
    }
    local_3c = FUN_14028fe10(ppppuVar8,&local_298,local_290);
    if (local_3c == 0) {
      local_3c = FUN_14003ad90(local_298,local_290);
    }
    else if ((local_3c == 2) &&
            (puVar6 = (uint *)FUN_14003b970(&local_2e8,local_2d8,3), 1 < *puVar6)) {
      local_3c = 0x12;
    }
    FUN_140016770(local_2d8);
    if (local_3c == 0) {
      local_40 = 1;
      local_3c = 0;
      puVar7 = (undefined8 *)FUN_14028af20(0x58);
      *(undefined4 *)(puVar7 + 1) = 1;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
      *puVar7 = &PTR_FUN_140475598;
      FUN_14003b030(puVar7 + 2,local_2b8);
      *param_1 = (longlong)(puVar7 + 2);
      plVar4 = (longlong *)param_1[1];
      param_1[1] = (longlong)puVar7;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
      goto LAB_14003b39b;
    }
    if (local_3c == 0x12) {
      local_3c = 0;
    }
  }
  local_40 = 0;
LAB_14003b39b:
  iVar3 = local_3c;
  FUN_14028fdf0(local_298);
  FUN_140016770(local_2b8);
  param_3[1] = local_2e8._4_4_;
  *(undefined ***)(param_3 + 2) = &PTR_PTR_1404df530;
  *param_3 = iVar3;
  return param_1;
}

