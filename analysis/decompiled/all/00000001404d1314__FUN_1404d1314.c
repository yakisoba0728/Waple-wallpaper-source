// Function: FUN_1404d1314
// Addr: 1404d1314
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1314(char param_1,char *param_2)

{
  longlong unaff_RBP;
  longlong in_R10;
  char unaff_R12B;
  
  *(char *)(unaff_RBP + 0x12) = *(char *)(unaff_RBP + 0x12) - param_1;
  param_2[in_R10 + 0x4d] = param_2[in_R10 + 0x4d] + unaff_R12B;
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

