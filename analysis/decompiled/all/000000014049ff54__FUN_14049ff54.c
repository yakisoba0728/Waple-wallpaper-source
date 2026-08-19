// Function: FUN_14049ff54
// Addr: 14049ff54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ff54(void)

{
  char unaff_SPL;
  char *in_R9;
  
  *in_R9 = *in_R9 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

