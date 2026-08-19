// Function: FUN_1404a4a98
// Addr: 1404a4a98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4a98(void)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  in(0xbf);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

