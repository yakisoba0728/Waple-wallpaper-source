// Function: FUN_1404d4a9c
// Addr: 1404d4a9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4a9c(void)

{
  char *in_R9;
  char unaff_R12B;
  
  *in_R9 = *in_R9 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

