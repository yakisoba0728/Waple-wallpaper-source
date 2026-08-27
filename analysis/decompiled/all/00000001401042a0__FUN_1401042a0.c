// Function: FUN_1401042a0
// Addr: 1401042a0
// Size: 106 bytes


void FUN_1401042a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x80));
    *(undefined8 *)(param_2 + 0xb8) = 0;
  }
  FUN_14000d9e0(param_2 + 0x58);
  FUN_140031340(param_2 + 0x48);
  FUN_140017240(param_2 + 0x10);
  thunk_FUN_14028af80(param_2,0xc0);
  return;
}

