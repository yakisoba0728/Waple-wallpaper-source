// Function: FUN_1400ddab0
// Addr: 1400ddab0
// Size: 164 bytes


void FUN_1400ddab0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_1400dfb60(param_1,param_1,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    FUN_140017240(plVar3 + 0x11);
    FUN_140017240(plVar3 + 0xd);
    FUN_140017240(plVar3 + 9);
    FUN_140017240(plVar3 + 4);
    thunk_FUN_14028af80(plVar3,0xb0);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_14028af80(*param_1,0xb0);
  return;
}

