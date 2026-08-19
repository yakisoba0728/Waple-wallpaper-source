// Function: FUN_1404a405c
// Addr: 1404a405c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a405c(uint param_1)

{
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

