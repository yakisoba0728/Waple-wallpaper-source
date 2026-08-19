// Function: FUN_1404a3800
// Addr: 1404a3800
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3800(void)

{
  longlong unaff_RBP;
  char in_CF;
  
  *(char *)(unaff_RBP + 6) = *(char *)(unaff_RBP + 6) + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

