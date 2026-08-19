// Function: FUN_1404d278c
// Addr: 1404d278c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d278c(char *param_1,char param_2)

{
  int *unaff_RSI;
  
  in(0xe);
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 + param_2;
  *unaff_RSI = *unaff_RSI + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

