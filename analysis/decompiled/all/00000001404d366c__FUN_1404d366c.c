// Function: FUN_1404d366c
// Addr: 1404d366c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d366c(int param_1)

{
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

