// Function: FUN_140198d00
// Addr: 140198d00
// Size: 285 bytes


void FUN_140198d00(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(byte *)(param_1 + 0x468) = *(byte *)(param_1 + 0x468) & 0xfb | 2;
  if (*(byte *)(*(longlong *)(param_1 + 0xd8) + 0x1ad) < 3) {
    plVar2 = *(longlong **)(param_1 + 0x440);
    lVar3 = plVar2[1];
    plVar1 = (longlong *)(lVar3 + 0x50);
    *plVar1 = *plVar1 + 8;
    **(longlong **)(lVar3 + 0x50) = (longlong)plVar2;
    (**(code **)(*plVar2 + 0x48))();
    FUN_140155fc0(*(undefined8 *)(param_1 + 0x458));
    (**(code **)(**(longlong **)(param_1 + 0x448) + 8))();
    FUN_140157430(*(undefined8 *)(param_1 + 0x458));
    plVar1 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x440) + 8) + 0x50);
    *plVar1 = *plVar1 + -8;
    plVar2 = *(longlong **)(param_1 + 0x438);
    lVar3 = plVar2[1];
    plVar1 = (longlong *)(lVar3 + 0x50);
    *plVar1 = *plVar1 + 8;
    **(longlong **)(lVar3 + 0x50) = (longlong)plVar2;
    (**(code **)(*plVar2 + 0x48))();
    FUN_140155fc0(*(undefined8 *)(param_1 + 0x460));
    (**(code **)(**(longlong **)(param_1 + 0x448) + 8))();
    FUN_140157430(*(undefined8 *)(param_1 + 0x460));
    plVar1 = *(longlong **)(param_1 + 0x438);
    *(longlong *)(plVar1[1] + 0x50) = *(longlong *)(plVar1[1] + 0x50) + -8;
    if ((longlong *)**(longlong **)(plVar1[1] + 0x50) == (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x50))(plVar1);
    }
    else {
      (**(code **)(*(longlong *)**(longlong **)(plVar1[1] + 0x50) + 0x48))();
    }
  }
  FUN_140155fc0(*(undefined8 *)(param_1 + 0x450));
  (**(code **)(**(longlong **)(param_1 + 0x448) + 8))();
  FUN_140157430(*(undefined8 *)(param_1 + 0x450));
  return;
}

