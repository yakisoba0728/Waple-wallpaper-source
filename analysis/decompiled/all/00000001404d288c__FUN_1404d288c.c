// Function: FUN_1404d288c
// Addr: 1404d288c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d288c(undefined8 param_1,uint param_2)

{
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

