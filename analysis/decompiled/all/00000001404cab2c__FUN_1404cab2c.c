// Function: FUN_1404cab2c
// Addr: 1404cab2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cab2c(char *param_1,char param_2)

{
  char in_AL;
  longlong unaff_RSI;
  
  *param_1 = *param_1 + in_AL;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

