// Function: FUN_1404a1dd0
// Addr: 1404a1dd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1dd0(void)

{
  uint *in_RAX;
  char *in_R9;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *in_R9 = *in_R9 + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

