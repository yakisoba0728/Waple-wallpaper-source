// Function: FUN_140141030
// Addr: 140141030
// Size: 99 bytes


void FUN_140141030(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  plVar3 = (longlong *)*param_1;
  if (plVar3 != plVar1) {
    do {
      plVar2 = (longlong *)plVar3[7];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar3);
        plVar3[7] = 0;
      }
      plVar3 = plVar3 + 8;
    } while (plVar3 != plVar1);
    param_1[1] = *param_1;
  }
  return;
}

