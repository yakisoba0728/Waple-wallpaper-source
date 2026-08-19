// Function: FUN_14049f15c
// Addr: 14049f15c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f15c(void)

{
  int in_EAX;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

