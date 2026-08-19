// Function: FUN_1404ce240
// Addr: 1404ce240
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce240(undefined8 param_1,undefined2 param_2)

{
  char in_AL;
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + in_AL;
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

