// Function: FUN_140056e20
// Addr: 140056e20
// Size: 130 bytes


void FUN_140056e20(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_140056e20(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_140017240(param_3 + 10);
    FUN_140017240(param_3 + 4);
    thunk_FUN_14028af80(param_3,0x78);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

