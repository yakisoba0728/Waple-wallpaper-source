// Function: FUN_1404aaef0
// Addr: 1404aaef0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aaef0(undefined4 param_1)

{
  char in_AL;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  
  *unaff_RSI = param_1;
  *(char *)(unaff_RDI + -0x76) = *(char *)(unaff_RDI + -0x76) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

