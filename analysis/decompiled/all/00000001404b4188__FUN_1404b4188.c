// Function: FUN_1404b4188
// Addr: 1404b4188
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4188(void)

{
  char unaff_BL;
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + -0x38) = *(char *)(unaff_RBP + -0x38) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

