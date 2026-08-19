// Function: FUN_1404d0538
// Addr: 1404d0538
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0538(longlong param_1,undefined8 param_2,char param_3)

{
  char *in_R10;
  char unaff_R14B;
  longlong unaff_R15;
  
  *(char *)(param_1 + 4) = *(char *)(param_1 + 4) - (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_R15 + 4) = *(char *)(unaff_R15 + 4) + unaff_R14B;
  *in_R10 = *in_R10 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

