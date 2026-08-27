// Function: FUN_14017e540
// Addr: 14017e540
// Size: 116 bytes


void FUN_14017e540(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xd8) {
    plVar1 = *(longlong **)(param_1 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x80));
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    FUN_1400caf90(param_1 + 0x68);
    FUN_140017240(param_1 + 0x18);
  }
  return;
}

