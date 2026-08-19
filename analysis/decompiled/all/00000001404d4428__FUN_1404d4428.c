// Function: FUN_1404d4428
// Addr: 1404d4428
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4428(void)

{
  char in_AL;
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

