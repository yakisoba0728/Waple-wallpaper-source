// Function: FUN_1404c9b14
// Addr: 1404c9b14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9b14(longlong param_1)

{
  char in_AL;
  char in_AH;
  longlong unaff_RSI;
  char *unaff_RDI;
  
  *(char *)(param_1 + unaff_RSI) = *(char *)(param_1 + unaff_RSI) + in_AH + in_AL;
  *unaff_RDI = *unaff_RDI + -0x32;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

