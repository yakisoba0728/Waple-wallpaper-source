// Function: FUN_140183550
// Addr: 140183550
// Size: 185 bytes


void FUN_140183550(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((param_2 == 0) && (plVar2 = (longlong *)param_1[0x620], plVar2 != (longlong *)0x0)) {
    lVar3 = plVar2[1];
    plVar1 = (longlong *)(lVar3 + 0x50);
    *plVar1 = *plVar1 + 8;
    **(longlong **)(lVar3 + 0x50) = (longlong)plVar2;
    (**(code **)(*plVar2 + 0x48))();
  }
  if ((*(uint *)(*param_1 + 0xe0) >> 5 & 1) != 0) {
    (**(code **)(*(longlong *)param_1[0x2a5] + 0x120))((longlong *)param_1[0x2a5],1);
  }
  FUN_14018aac0(*param_1,param_2);
  if ((param_2 == 0) && (plVar2 = (longlong *)param_1[0x620], plVar2 != (longlong *)0x0)) {
    *(longlong *)(plVar2[1] + 0x50) = *(longlong *)(plVar2[1] + 0x50) + -8;
    if ((longlong *)**(longlong **)(plVar2[1] + 0x50) == (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2);
    }
    else {
      (**(code **)(*(longlong *)**(longlong **)(plVar2[1] + 0x50) + 0x48))();
    }
    (**(code **)(*(longlong *)param_1[0x620] + 0x10))();
  }
  return;
}

