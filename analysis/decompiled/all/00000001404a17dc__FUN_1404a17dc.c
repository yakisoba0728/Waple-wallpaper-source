// Function: FUN_1404a17dc
// Addr: 1404a17dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a17dc(void)

{
  int in_EAX;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

