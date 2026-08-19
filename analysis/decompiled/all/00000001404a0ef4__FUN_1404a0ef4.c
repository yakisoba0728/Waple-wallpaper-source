// Function: FUN_1404a0ef4
// Addr: 1404a0ef4
// Size: 1 bytes


void FUN_1404a0ef4(char *param_1)

{
  uint uVar1;
  char *unaff_RSI;
  
  uVar1 = in(0x49);
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

