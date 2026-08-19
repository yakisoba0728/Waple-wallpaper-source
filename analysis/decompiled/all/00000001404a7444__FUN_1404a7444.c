// Function: FUN_1404a7444
// Addr: 1404a7444
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7444(void)

{
  int in_EAX;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

