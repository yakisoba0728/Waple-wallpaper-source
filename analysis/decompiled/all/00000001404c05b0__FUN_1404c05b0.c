// Function: FUN_1404c05b0
// Addr: 1404c05b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c05b0(void)

{
  int unaff_EBP;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

