// Function: FUN_14049ed24
// Addr: 14049ed24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ed24(void)

{
  uint *unaff_RBX;
  uint unaff_ESP;
  
  *unaff_RBX = *unaff_RBX & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

