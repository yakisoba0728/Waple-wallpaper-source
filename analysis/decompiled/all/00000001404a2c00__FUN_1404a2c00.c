// Function: FUN_1404a2c00
// Addr: 1404a2c00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2c00(char *param_1,char param_2)

{
  char *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  
  param_1[5] = (byte)param_1[5] >> 1;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)(unaff_RBX + unaff_RBP) = *(char *)(unaff_RBX + unaff_RBP) + param_2;
  *param_1 = *param_1 + -8;
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

