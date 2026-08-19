// Function: FUN_1404a2250
// Addr: 1404a2250
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2250(void)

{
  uint unaff_ESI;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

