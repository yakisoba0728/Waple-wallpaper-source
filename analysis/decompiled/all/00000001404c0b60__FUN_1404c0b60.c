// Function: FUN_1404c0b60
// Addr: 1404c0b60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0b60(char param_1)

{
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + -0x38) = *(char *)(unaff_RBP + -0x38) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

