// Function: FUN_1404b0f68
// Addr: 1404b0f68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0f68(void)

{
  char unaff_SPL;
  char *in_R9;
  
  *in_R9 = *in_R9 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

