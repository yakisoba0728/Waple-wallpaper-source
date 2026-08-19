// Function: FUN_1404a1f30
// Addr: 1404a1f30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1f30(void)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

