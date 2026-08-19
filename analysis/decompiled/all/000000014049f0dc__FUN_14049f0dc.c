// Function: FUN_14049f0dc
// Addr: 14049f0dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f0dc(int param_1)

{
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

