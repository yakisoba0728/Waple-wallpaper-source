// Function: FUN_1404af170
// Addr: 1404af170
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af170(void)

{
  int *in_RAX;
  int unaff_EBX;
  
  *in_RAX = *in_RAX + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

