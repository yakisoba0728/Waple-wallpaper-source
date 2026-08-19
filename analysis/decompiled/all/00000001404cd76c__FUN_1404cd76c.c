// Function: FUN_1404cd76c
// Addr: 1404cd76c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd76c(void)

{
  uint in_EAX;
  longlong unaff_RSI;
  
  uRam000000017451d774 = uRam000000017451d774 & in_EAX;
  *(undefined1 *)(unaff_RSI + 0x41) = *(undefined1 *)(unaff_RSI + 0x41);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

