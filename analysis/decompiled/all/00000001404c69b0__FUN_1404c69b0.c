// Function: FUN_1404c69b0
// Addr: 1404c69b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c69b0(void)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

