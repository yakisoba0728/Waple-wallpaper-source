// Function: FUN_140056cf0
// Addr: 140056cf0
// Size: 121 bytes


void FUN_140056cf0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_140056e20(param_1,param_1,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    FUN_140017240(plVar3 + 10);
    FUN_140017240(plVar3 + 4);
    thunk_FUN_14028af80(plVar3,0x78);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_14028af80(*param_1,0x78);
  return;
}

