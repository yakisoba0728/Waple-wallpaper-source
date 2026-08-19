// Function: FUN_1404d4a78
// Addr: 1404d4a78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4a78(uint param_1)

{
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

