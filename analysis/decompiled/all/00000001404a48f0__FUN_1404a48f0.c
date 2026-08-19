// Function: FUN_1404a48f0
// Addr: 1404a48f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a48f0(void)

{
  char unaff_BL;
  longlong unaff_RBP;
  bool in_OF;
  
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + 0x2800079e) = *(char *)(unaff_RBP + 0x2800079e) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

