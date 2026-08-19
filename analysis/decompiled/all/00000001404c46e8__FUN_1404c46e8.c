// Function: FUN_1404c46e8
// Addr: 1404c46e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c46e8(void)

{
  uint in_EAX;
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

