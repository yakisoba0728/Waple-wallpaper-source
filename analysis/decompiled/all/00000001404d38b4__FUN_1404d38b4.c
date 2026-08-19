// Function: FUN_1404d38b4
// Addr: 1404d38b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d38b4(void)

{
  uint unaff_EBX;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

