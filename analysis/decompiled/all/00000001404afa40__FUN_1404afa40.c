// Function: FUN_1404afa40
// Addr: 1404afa40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afa40(char *param_1)

{
  char in_AL;
  char unaff_SPL;
  longlong unaff_RBP;
  
  *param_1 = *param_1 + unaff_SPL;
  *(char *)(unaff_RBP + -0x4d) = *(char *)(unaff_RBP + -0x4d) + in_AL + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

