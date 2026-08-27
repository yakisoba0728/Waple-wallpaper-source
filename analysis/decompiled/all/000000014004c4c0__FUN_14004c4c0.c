// Function: FUN_14004c4c0
// Addr: 14004c4c0
// Size: 170 bytes


longlong FUN_14004c4c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = FUN_1402924c0(param_2,param_3,0x40);
    if (lVar2 != 0) {
      FUN_14004c2f0(param_1,lVar2,1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8);
      local_10 = plVar1;
      (**(code **)(*plVar1 + 8))(plVar1);
      uVar3 = FUN_14004bce0(local_18);
      FUN_14004c1a0(param_1,uVar3);
      if (plVar1 != (longlong *)0x0) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      return param_1;
    }
  }
  return 0;
}

