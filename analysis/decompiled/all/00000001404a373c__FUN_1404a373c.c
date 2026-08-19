// Function: FUN_1404a373c
// Addr: 1404a373c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a373c(void)

{
  char unaff_BH;
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

