// Function: FUN_1400ce520
// Addr: 1400ce520
// Size: 106 bytes


void FUN_1400ce520(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  FUN_1400caf90(param_1 + 0x70);
  FUN_140017240(param_1 + 0x20);
  if (param_2 != '\0') {
    thunk_FUN_14028af80(param_1,0xe0);
  }
  return;
}

