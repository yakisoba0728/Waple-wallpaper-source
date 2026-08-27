// Function: FUN_140101b30
// Addr: 140101b30
// Size: 72 bytes


void FUN_140101b30(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  FUN_14000d9e0(param_1 + 0x28);
  FUN_140031340(param_1 + 0x18);
  return;
}

