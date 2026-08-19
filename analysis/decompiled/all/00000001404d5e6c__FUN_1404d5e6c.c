// Function: FUN_1404d5e6c
// Addr: 1404d5e6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5e6c(char param_1,longlong param_2,char param_3,char *param_4)

{
  char *pcVar1;
  longlong unaff_RSI;
  
  *param_4 = *param_4 + param_3;
  pcVar1 = (char *)(param_2 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

