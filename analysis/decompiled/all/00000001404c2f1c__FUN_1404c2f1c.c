// Function: FUN_1404c2f1c
// Addr: 1404c2f1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2f1c(void)

{
  longlong unaff_RSI;
  
  *(undefined1 *)(unaff_RSI + 0x29) = *(undefined1 *)(unaff_RSI + 0x29);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

