// Function: FUN_14049ea3c
// Addr: 14049ea3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ea3c(void)

{
  char *in_RAX;
  char *pcVar1;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar1 = (char *)((ulonglong)in_RAX & 0xfffffffffffffffd);
  *pcVar1 = *pcVar1 + (char)pcVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

