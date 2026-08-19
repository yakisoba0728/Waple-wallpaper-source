// Function: FUN_1404a554c
// Addr: 1404a554c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a554c(uint param_1)

{
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

