// Function: FUN_1400dfb60
// Addr: 1400dfb60
// Size: 157 bytes


void FUN_1400dfb60(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1400dfb60(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_140017240(param_3 + 0x11);
    FUN_140017240(param_3 + 0xd);
    FUN_140017240(param_3 + 9);
    FUN_140017240(param_3 + 4);
    thunk_FUN_14028af80(param_3,0xb0);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

