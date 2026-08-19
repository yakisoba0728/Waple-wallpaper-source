// Function: FUN_14049f640
// Addr: 14049f640
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f640(uint param_1)

{
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

