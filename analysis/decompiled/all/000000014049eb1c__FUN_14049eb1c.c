// Function: FUN_14049eb1c
// Addr: 14049eb1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049eb1c(void)

{
  uint unaff_EBP;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

