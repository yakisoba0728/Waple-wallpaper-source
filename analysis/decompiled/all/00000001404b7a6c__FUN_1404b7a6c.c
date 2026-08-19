// Function: FUN_1404b7a6c
// Addr: 1404b7a6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7a6c(void)

{
  longlong unaff_RBX;
  char unaff_SPL;
  char *in_R9;
  
  *(int *)(unaff_RBX + 0x7828001d) = -*(int *)(unaff_RBX + 0x7828001d);
  *in_R9 = *in_R9 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

