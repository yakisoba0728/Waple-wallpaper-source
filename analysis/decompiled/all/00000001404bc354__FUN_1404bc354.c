// Function: FUN_1404bc354
// Addr: 1404bc354
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc354(void)

{
  char in_AL;
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + -0x38) = *(char *)(unaff_RBP + -0x38) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

