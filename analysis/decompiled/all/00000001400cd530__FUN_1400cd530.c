// Function: FUN_1400cd530
// Addr: 1400cd530
// Size: 101 bytes


void FUN_1400cd530(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x58));
    *(undefined8 *)(param_2 + 0x90) = 0;
  }
  plVar1 = *(longlong **)(param_2 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x18));
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  thunk_FUN_14028af80(param_2,0xa0);
  return;
}

