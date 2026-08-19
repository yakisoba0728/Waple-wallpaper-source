// Function: FUN_1404b6cc4
// Addr: 1404b6cc4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6cc4(longlong param_1)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

