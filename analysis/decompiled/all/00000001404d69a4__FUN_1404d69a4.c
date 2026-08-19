// Function: FUN_1404d69a4
// Addr: 1404d69a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d69a4(undefined8 param_1,uint param_2)

{
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

