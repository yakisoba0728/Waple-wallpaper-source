// Function: FUN_1404b8a00
// Addr: 1404b8a00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8a00(char param_1)

{
  uint *in_RAX;
  char *unaff_RBX;
  
  *in_RAX = *in_RAX | (uint)in_RAX;
  *unaff_RBX = *unaff_RBX + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

