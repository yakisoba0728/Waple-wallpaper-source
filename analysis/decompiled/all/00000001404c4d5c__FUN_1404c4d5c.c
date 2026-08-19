// Function: FUN_1404c4d5c
// Addr: 1404c4d5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4d5c(void)

{
  int in_EAX;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

