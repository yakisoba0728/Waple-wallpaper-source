// Function: FUN_14049e198
// Addr: 14049e198
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e198(void)

{
  int in_EAX;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

