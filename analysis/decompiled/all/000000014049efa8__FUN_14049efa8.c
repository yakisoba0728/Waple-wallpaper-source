// Function: FUN_14049efa8
// Addr: 14049efa8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049efa8(void)

{
  uint *in_RAX;
  uint unaff_EBX;
  
  *in_RAX = *in_RAX & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

