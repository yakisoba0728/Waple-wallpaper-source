// Function: FUN_1400ce6e0
// Addr: 1400ce6e0
// Size: 106 bytes


void FUN_1400ce6e0(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 200);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 200) = 0;
  }
  FUN_1400caf90(param_1 + 0x78);
  FUN_140017240(param_1 + 0x28);
  if (param_2 != '\0') {
    thunk_FUN_14028af80(param_1,0xe8);
  }
  return;
}

