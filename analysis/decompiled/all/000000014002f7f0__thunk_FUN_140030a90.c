// Function: thunk_FUN_140030a90
// Addr: 14002f7f0
// Size: 5 bytes


void thunk_FUN_140030a90(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_140034f70(param_1,param_1,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    FUN_140017240(plVar3 + 0xc);
    FUN_140017240(plVar3 + 8);
    FUN_140017240(plVar3 + 4);
    thunk_FUN_14028af80(plVar3,0x80);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_14028af80(*param_1,0x80);
  return;
}

