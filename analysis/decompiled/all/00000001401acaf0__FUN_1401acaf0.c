// Function: FUN_1401acaf0
// Addr: 1401acaf0
// Size: 90 bytes


void FUN_1401acaf0(longlong param_1)

{
  longlong *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x60);
  if (plVar1 != *(longlong **)(param_1 + 0x60)) {
    if (*(longlong *)(plVar1[3] + 8) != 0) {
      FUN_1402eea60();
    }
    func_0x00014028b040(plVar1[3],0x48);
    return;
  }
  func_0x00014028b040(*(undefined8 *)(param_1 + 0x10));
  return;
}

