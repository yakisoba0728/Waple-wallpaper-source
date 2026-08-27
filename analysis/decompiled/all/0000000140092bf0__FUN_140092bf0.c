// Function: FUN_140092bf0
// Addr: 140092bf0
// Size: 271 bytes


longlong FUN_140092bf0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 8);
  *(longlong **)(param_2 + 8) = plVar1;
  (**(code **)(*plVar1 + 8))();
  lVar2 = *(longlong *)(param_1 + 0x40);
  plVar1 = *(longlong **)(lVar2 + 8);
  if (plVar1 != *(longlong **)(param_3 + 8)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x10))();
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    plVar1 = *(longlong **)(param_3 + 8);
    *(longlong **)(lVar2 + 8) = plVar1;
    (**(code **)(*plVar1 + 8))();
  }
  for (puVar4 = *(undefined8 **)(param_1 + 0x38); puVar4 != (undefined8 *)0x0;
      puVar4 = (undefined8 *)*puVar4) {
    (*(code *)puVar4[2])(1,param_1,*(undefined4 *)(puVar4 + 1));
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    plVar3 = *(longlong **)(plVar1[0xc] + 8);
    (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar1 + 0x70))(plVar1,param_3);
    lVar2 = plVar1[0xc];
    plVar1 = *(longlong **)(lVar2 + 8);
    if (plVar1 != *(longlong **)(param_3 + 8)) {
      puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x10))();
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      plVar1 = *(longlong **)(param_3 + 8);
      *(longlong **)(lVar2 + 8) = plVar1;
      (**(code **)(*plVar1 + 8))();
    }
    if ((plVar3 != (longlong *)0x0) &&
       (puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3), puVar4 != (undefined8 *)0x0))
    {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return param_2;
}

