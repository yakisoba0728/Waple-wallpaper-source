// Function: FUN_1400891b0
// Addr: 1400891b0
// Size: 206 bytes


void FUN_1400891b0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1400891b0(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_140086d30(param_3 + 6);
    param_3[6] = 0;
    if (param_3[8] != 0) {
      FUN_140089280();
    }
    if ((param_3[4] != 0) && (((byte)(int)param_3[5] & 3) == 1)) {
      thunk_FUN_1402d9040();
    }
    thunk_FUN_14028af80(param_3,0x58);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

