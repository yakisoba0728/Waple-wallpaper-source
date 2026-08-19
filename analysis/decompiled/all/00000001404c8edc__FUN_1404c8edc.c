// Function: FUN_1404c8edc
// Addr: 1404c8edc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8edc(void)

{
  char in_AL;
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

