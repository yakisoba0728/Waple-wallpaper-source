// Function: FUN_1404a70c4
// Addr: 1404a70c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a70c4(uint param_1)

{
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

