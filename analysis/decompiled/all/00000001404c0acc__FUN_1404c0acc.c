// Function: FUN_1404c0acc
// Addr: 1404c0acc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0acc(void)

{
  char unaff_BH;
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

