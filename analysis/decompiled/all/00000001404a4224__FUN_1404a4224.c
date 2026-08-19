// Function: FUN_1404a4224
// Addr: 1404a4224
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4224(char *param_1,char *param_2)

{
  char in_AL;
  int unaff_EBX;
  int *unaff_RSI;
  
  param_1[0x4a] = param_1[0x4a] + in_AL;
  *param_1 = *param_1 + in_AL;
  *param_1 = *param_1 + (char)param_1;
  *unaff_RSI = *unaff_RSI + unaff_EBX;
  *param_2 = *param_2 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

