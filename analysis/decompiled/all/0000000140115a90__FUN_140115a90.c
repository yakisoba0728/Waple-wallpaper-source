// Function: FUN_140115a90
// Addr: 140115a90
// Size: 246 bytes


void FUN_140115a90(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x180);
  if (lVar2 != 0) {
    if (((char)param_3 < '\0') &&
       (plVar3 = *(longlong **)(lVar2 + 0x30f8), plVar3 != (longlong *)0x0)) {
      lVar4 = plVar3[1];
      plVar1 = (longlong *)(lVar4 + 0x50);
      *plVar1 = *plVar1 + 8;
      **(longlong **)(lVar4 + 0x50) = (longlong)plVar3;
      (**(code **)(*plVar3 + 0x48))();
      (**(code **)(**(longlong **)(lVar2 + 0x1528) + 0x118))
                (*(longlong **)(lVar2 + 0x1528),0,0,0,DAT_140492704);
      (**(code **)(**(longlong **)(lVar2 + 0x1528) + 0x120))(*(longlong **)(lVar2 + 0x1528),1,0);
      plVar3 = *(longlong **)(lVar2 + 0x30f8);
      *(longlong *)(plVar3[1] + 0x50) = *(longlong *)(plVar3[1] + 0x50) + -8;
      if ((longlong *)**(longlong **)(plVar3[1] + 0x50) == (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x50))(plVar3);
      }
      else {
        (**(code **)(*(longlong *)**(longlong **)(plVar3[1] + 0x50) + 0x48))();
      }
      (**(code **)(**(longlong **)(lVar2 + 0x30f8) + 0x20))();
    }
    *(uint *)(lVar2 + 0x128) = ~param_3 & (param_2 | *(uint *)(lVar2 + 0x128));
  }
  *(uint *)(param_1 + 0x248) = ~param_3 & (param_2 | *(uint *)(param_1 + 0x248));
  return;
}

