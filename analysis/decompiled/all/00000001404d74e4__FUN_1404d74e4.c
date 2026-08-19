// Function: FUN_1404d74e4
// Addr: 1404d74e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d74e4(void)

{
  uint unaff_EBX;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

