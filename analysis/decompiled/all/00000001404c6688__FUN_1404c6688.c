// Function: FUN_1404c6688
// Addr: 1404c6688
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6688(void)

{
  int *in_RAX;
  int unaff_EBX;
  
  *in_RAX = *in_RAX + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

