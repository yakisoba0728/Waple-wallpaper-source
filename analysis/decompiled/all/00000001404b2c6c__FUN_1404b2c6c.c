// Function: FUN_1404b2c6c
// Addr: 1404b2c6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2c6c(void)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

