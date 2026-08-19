// Function: FUN_1404a26bc
// Addr: 1404a26bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a26bc(void)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

