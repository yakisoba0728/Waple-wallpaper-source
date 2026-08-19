// Function: FUN_1404a71d0
// Addr: 1404a71d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a71d0(uint param_1)

{
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

