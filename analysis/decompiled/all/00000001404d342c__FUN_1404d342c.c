// Function: FUN_1404d342c
// Addr: 1404d342c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d342c(undefined8 param_1,char param_2)

{
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

