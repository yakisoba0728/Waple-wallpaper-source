// Function: FUN_140092b50
// Addr: 140092b50
// Size: 52 bytes


longlong * FUN_140092b50(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  uint local_res8 [2];
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined4 uStack_3e;
  undefined2 uStack_3a;
  longlong lStack_38;
  longlong *plStack_30;
  longlong *local_28;
  char cStack_20;
  undefined4 uStack_1e;
  undefined2 uStack_1a;
  undefined1 auStack_18 [16];
  
  local_res8[0] = 0;
  FUN_14004c030(&local_28,param_1,0);
  if (cStack_20 != '\0') {
    plVar1 = *(longlong **)
              (*(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x40 + (longlong)param_1) + 8);
    plStack_30 = plVar1;
    (**(code **)(*plVar1 + 8))(plVar1);
    plVar2 = (longlong *)FUN_140092e70(&lStack_38);
    lVar5 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    uStack_3e = uStack_1e;
    lStack_38 = *(longlong *)(lVar5 + 0x48);
    uStack_3a = uStack_1a;
    uStack_48 = 0;
    uStack_40 = 1;
    plStack_30 = (longlong *)CONCAT62(CONCAT24(uStack_1a,uStack_1e),(ushort)(lStack_38 == 0));
    (**(code **)(*plVar2 + 0x28))(plVar2,auStack_18,&lStack_38,&uStack_48,lVar5,local_res8,param_2);
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
  func_0x000140013c20(lVar5,uVar4 | *(uint *)(lVar5 + 0x10) | local_res8[0],0);
  plVar1 = *(longlong **)((longlong)*(int *)(*local_28 + 4) + 0x48 + (longlong)local_28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}

