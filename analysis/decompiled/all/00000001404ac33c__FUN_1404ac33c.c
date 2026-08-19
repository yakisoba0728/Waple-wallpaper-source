// Function: FUN_1404ac33c
// Addr: 1404ac33c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac33c(int param_1)

{
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

