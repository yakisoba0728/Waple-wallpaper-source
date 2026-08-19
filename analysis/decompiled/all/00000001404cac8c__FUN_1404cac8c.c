// Function: FUN_1404cac8c
// Addr: 1404cac8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cac8c(void)

{
  char unaff_BL;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + 0x2a) = *(char *)(unaff_RSI + 0x2a) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

