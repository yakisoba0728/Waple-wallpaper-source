// Function: FUN_1404ae8d8
// Addr: 1404ae8d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae8d8(void)

{
  char unaff_SPL;
  char *in_R9;
  
  *in_R9 = *in_R9 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

