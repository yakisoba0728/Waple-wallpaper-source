// Function: FUN_1404b26b8
// Addr: 1404b26b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b26b8(undefined8 param_1,int param_2)

{
  longlong unaff_RSI;
  int *unaff_RDI;
  
  *(char *)(unaff_RSI + 3) = *(char *)(unaff_RSI + 3) + (char)((uint)(param_2 + *unaff_RDI) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

