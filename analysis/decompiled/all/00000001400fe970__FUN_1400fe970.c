// Function: FUN_1400fe970
// Addr: 1400fe970
// Size: 56 bytes


void FUN_1400fe970(longlong param_1,undefined1 param_2)

{
  BOOL BVar1;
  
  *(undefined1 *)(param_1 + 8) = param_2;
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x168));
  if (BVar1 != 0) {
    FUN_140100720(param_1,0x80,0);
    return;
  }
  return;
}

