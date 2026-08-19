// Function: FUN_1404cc8e0
// Addr: 1404cc8e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc8e0(int param_1)

{
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

