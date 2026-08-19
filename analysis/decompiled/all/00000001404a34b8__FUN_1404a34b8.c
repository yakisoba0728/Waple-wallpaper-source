// Function: FUN_1404a34b8
// Addr: 1404a34b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a34b8(void)

{
  char in_AH;
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + 2) = *(char *)(unaff_RBP + 2) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

