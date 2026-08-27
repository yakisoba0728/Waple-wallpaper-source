// Function: FUN_140092a80
// Addr: 140092a80
// Size: 356 bytes


longlong * FUN_140092a80(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  uint local_res8 [2];
  undefined8 local_48;
  undefined2 local_40;
  undefined4 local_3e;
  undefined2 local_3a;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  char local_20;
  undefined4 local_1e;
  undefined2 local_1a;
  undefined1 local_18 [16];
  
  local_res8[0] = 0;
  FUN_14004bf60(&local_28,param_1,0);
  if (local_20 != '\0') {
    plVar1 = *(longlong **)
              (*(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x40 + (longlong)param_1) + 8);
    local_30 = plVar1;
    (**(code **)(*plVar1 + 8))(plVar1);
    plVar2 = (longlong *)FUN_140092da0(&local_38);
    lVar5 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    local_3e = local_1e;
    local_38 = *(longlong *)(lVar5 + 0x48);
    local_3a = local_1a;
    local_48 = 0;
    local_40 = 1;
    local_30 = (longlong *)CONCAT62(CONCAT24(local_1a,local_1e),(ushort)(local_38 == 0));
    (**(code **)(*plVar2 + 0x28))(plVar2,local_18,&local_38,&local_48,lVar5,local_res8,param_2);
    if ((plVar1 != (longlong *)0x0) &&
       (puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1), puVar3 != (undefined8 *)0x0))
    {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  lVar5 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar4 = 4;
  if (*(longlong *)(lVar5 + 0x48) != 0) {
    uVar4 = 0;
  }
  FUN_140013b50(lVar5,uVar4 | *(uint *)(lVar5 + 0x10) | local_res8[0],0);
  plVar1 = *(longlong **)((longlong)*(int *)(*local_28 + 4) + 0x48 + (longlong)local_28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}

