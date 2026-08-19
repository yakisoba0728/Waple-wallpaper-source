// Function: FUN_1404d295c
// Addr: 1404d295c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d295c(undefined8 param_1,int param_2)

{
  int *unaff_RSI;
  byte in_CF;
  
  *unaff_RSI = (*unaff_RSI - param_2) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

