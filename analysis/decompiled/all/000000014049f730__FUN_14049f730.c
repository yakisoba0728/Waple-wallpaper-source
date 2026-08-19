// Function: FUN_14049f730
// Addr: 14049f730
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f730(int param_1)

{
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

