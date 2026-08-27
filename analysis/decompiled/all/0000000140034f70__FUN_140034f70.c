// Function: FUN_140034f70
// Addr: 140034f70
// Size: 145 bytes


void FUN_140034f70(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_140034f70(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_140017240(param_3 + 0xc);
    FUN_140017240(param_3 + 8);
    FUN_140017240(param_3 + 4);
    thunk_FUN_14028af80(param_3,0x80);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

