// Function: FUN_1400fe9b0
// Addr: 1400fe9b0
// Size: 56 bytes


void FUN_1400fe9b0(longlong param_1,undefined1 param_2)

{
  BOOL BVar1;
  
  *(undefined1 *)(param_1 + 9) = param_2;
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x168));
  if (BVar1 != 0) {
    FUN_140100720(param_1,0x40,0);
    return;
  }
  return;
}

