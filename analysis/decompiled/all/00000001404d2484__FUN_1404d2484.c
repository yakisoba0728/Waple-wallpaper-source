// Function: FUN_1404d2484
// Addr: 1404d2484
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2484(longlong param_1)

{
  char in_AL;
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + in_AL;
  *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_1 + 0x39);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

