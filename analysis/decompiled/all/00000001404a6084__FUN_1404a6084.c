// Function: FUN_1404a6084
// Addr: 1404a6084
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6084(void)

{
  char in_AL;
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

