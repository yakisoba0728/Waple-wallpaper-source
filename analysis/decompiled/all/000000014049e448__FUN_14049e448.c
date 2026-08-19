// Function: FUN_14049e448
// Addr: 14049e448
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e448(uint param_1)

{
  uint *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

