// Function: FUN_140139460
// Addr: 140139460
// Size: 129 bytes


void FUN_140139460(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_1 + 8) + 8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = 0;
    }
    (**(code **)(*plVar1 + 0x38))(plVar1,lVar2);
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_1 + 8));
  }
  plVar1 = *(longlong **)(param_1 + 0x60);
  for (plVar3 = *(longlong **)(param_1 + 0x58); plVar3 != plVar1; plVar3 = plVar3 + 2) {
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar3 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x58) != *(longlong *)(param_1 + 0x60)) {
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x58);
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}

