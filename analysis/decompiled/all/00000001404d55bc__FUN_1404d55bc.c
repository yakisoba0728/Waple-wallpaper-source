// Function: FUN_1404d55bc
// Addr: 1404d55bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d55bc(void)

{
  char *in_R9;
  char unaff_R12B;
  
  *in_R9 = *in_R9 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

