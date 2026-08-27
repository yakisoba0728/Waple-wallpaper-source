// Function: FUN_1400846c0
// Addr: 1400846c0
// Size: 58 bytes


void FUN_1400846c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x2c8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x290));
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  return;
}

