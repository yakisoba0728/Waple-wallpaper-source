// Function: FUN_1402f4b80
// Addr: 1402f4b80
// Size: 97 bytes


undefined8 FUN_1402f4b80(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      return 6;
    }
  }
  else if (param_2 == 0x756e6963) {
    uVar2 = FUN_1402f6cf0();
    return uVar2;
  }
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + *(int *)(param_1 + 0x38);
    while( true ) {
      if (plVar1 <= plVar3) {
        return 6;
      }
      if (*(int *)(*plVar3 + 8) == param_2) break;
      plVar3 = plVar3 + 1;
    }
    *(longlong *)(param_1 + 0x88) = *plVar3;
    return 0;
  }
  return 0x26;
}

