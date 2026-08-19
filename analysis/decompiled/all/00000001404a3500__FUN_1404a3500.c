// Function: FUN_1404a3500
// Addr: 1404a3500
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3500(undefined8 param_1)

{
  char in_AL;
  byte *unaff_RSI;
  longlong unaff_RDI;
  
  *unaff_RSI = *unaff_RSI | in_AL + 100U;
  *(char *)(unaff_RDI + 8) = *(char *)(unaff_RDI + 8) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

