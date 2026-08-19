// Function: FUN_1404d4740
// Addr: 1404d4740
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4740(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong unaff_RBP;
  char *in_R10;
  
  *(char *)(unaff_RBP + 0x46) = *(char *)(unaff_RBP + 0x46) + (char)((ulonglong)param_2 >> 8);
  *in_R10 = *in_R10 + param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

