// Function: FUN_1400fe770
// Addr: 1400fe770
// Size: 97 bytes


void FUN_1400fe770(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    plVar1 = (longlong *)(param_1 + 0x100);
    if (0xf < *(ulonglong *)(param_1 + 0x118)) {
      plVar1 = (longlong *)*plVar1;
    }
    func_0x000140421ed0(plVar1);
    return;
  }
  return;
}

