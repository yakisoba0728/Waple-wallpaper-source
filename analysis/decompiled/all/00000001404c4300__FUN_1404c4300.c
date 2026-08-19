// Function: FUN_1404c4300
// Addr: 1404c4300
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4300(undefined8 param_1,int param_2)

{
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

