// Function: FUN_1404c29e4
// Addr: 1404c29e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c29e4(uint *param_1,char *param_2,char param_3)

{
  char *in_RAX;
  longlong unaff_RBX;
  uint unaff_EBP;
  char unaff_R12B;
  char unaff_R13B;
  char in_CF;
  
  *(char *)param_1 = ((char)*param_1 - (char)((ulonglong)param_1 >> 8)) - in_CF;
  *in_RAX = *in_RAX + unaff_R13B;
  *param_1 = *param_1 & unaff_EBP;
  *(char *)(unaff_RBX + 0x21) = *(char *)(unaff_RBX + 0x21) + unaff_R12B;
  *param_2 = *param_2 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

