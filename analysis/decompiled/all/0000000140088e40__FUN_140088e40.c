// Function: FUN_140088e40
// Addr: 140088e40
// Size: 217 bytes


void FUN_140088e40(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_1400891b0(param_1,param_1,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    FUN_140086d30(plVar3 + 6);
    plVar3[6] = 0;
    if (plVar3[8] != 0) {
      FUN_140089280();
    }
    if ((plVar3[4] != 0) && (((byte)(int)plVar3[5] & 3) == 1)) {
      thunk_FUN_1402d9040();
    }
    thunk_FUN_14028af80(plVar3,0x58);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_14028af80(*param_1,0x58);
  return;
}

