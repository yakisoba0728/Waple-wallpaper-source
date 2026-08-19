// Function: FUN_1404a2e60
// Addr: 1404a2e60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2e60(void)

{
  uint unaff_EBX;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

