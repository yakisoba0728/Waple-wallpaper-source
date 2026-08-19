// Function: FUN_14049f2fc
// Addr: 14049f2fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f2fc(void)

{
  uint *in_RAX;
  uint unaff_EBX;
  
  *in_RAX = *in_RAX & unaff_EBX;
  *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

