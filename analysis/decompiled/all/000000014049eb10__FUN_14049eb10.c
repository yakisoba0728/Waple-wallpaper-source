// Function: FUN_14049eb10
// Addr: 14049eb10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049eb10(byte *param_1)

{
  char *in_RAX;
  
  *param_1 = *param_1 & (byte)in_RAX;
  *in_RAX = *in_RAX - (byte)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

