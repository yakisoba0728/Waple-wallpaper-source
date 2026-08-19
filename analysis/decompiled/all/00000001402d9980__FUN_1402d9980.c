// Function: FUN_1402d9980
// Addr: 1402d9980
// Size: 4 bytes


void FUN_1402d9980(void)

{
  longlong lVar1;
  
  if (DAT_1404dc650 == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = func_0x0001402dc1c8();
  }
  if (lVar1 != -1) {
    if (lVar1 == 0) {
      lVar1 = FUN_1402d9844();
      if (lVar1 == 0) goto code_r0x0001402d99bc;
    }
    return;
  }
code_r0x0001402d99bc:
                    /* WARNING: Subroutine does not return */
  FUN_1402c98b4();
}

