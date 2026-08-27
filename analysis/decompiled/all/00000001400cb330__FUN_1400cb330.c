// Function: FUN_1400cb330
// Addr: 1400cb330
// Size: 124 bytes


void FUN_1400cb330(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x90) {
    plVar1 = *(longlong **)(param_1 + 0x88);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    plVar1 = *(longlong **)(param_1 + 0x48);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  return;
}

