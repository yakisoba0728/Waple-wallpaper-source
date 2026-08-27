// Function: FUN_1400fde30
// Addr: 1400fde30
// Size: 48 bytes


void FUN_1400fde30(HWND param_1)

{
  uint uVar1;
  
  uVar1 = GetWindowLongW(param_1,-0x10);
                    /* WARNING: Could not recover jumptable at 0x0001400fde59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowLongW(param_1,-0x10,uVar1 & 0xde33ffff);
  return;
}

