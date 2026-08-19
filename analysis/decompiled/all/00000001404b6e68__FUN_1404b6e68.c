// Function: FUN_1404b6e68
// Addr: 1404b6e68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6e68(void)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

