// Function: FUN_1404b9f0c
// Addr: 1404b9f0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9f0c(void)

{
  char unaff_BL;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + 0x21004b) = *(char *)(unaff_RSI + 0x21004b) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

