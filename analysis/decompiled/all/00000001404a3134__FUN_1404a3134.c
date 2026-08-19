// Function: FUN_1404a3134
// Addr: 1404a3134
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3134(uint param_1)

{
  longlong unaff_RBP;
  
  *(uint *)(unaff_RBP + -0x2b72fff2) = *(uint *)(unaff_RBP + -0x2b72fff2) & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

