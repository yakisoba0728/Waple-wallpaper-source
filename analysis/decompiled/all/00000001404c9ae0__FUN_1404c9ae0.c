// Function: FUN_1404c9ae0
// Addr: 1404c9ae0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9ae0(void)

{
  char *in_RAX;
  
  *in_RAX = *in_RAX - (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

