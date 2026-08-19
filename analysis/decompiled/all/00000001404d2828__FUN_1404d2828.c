// Function: FUN_1404d2828
// Addr: 1404d2828
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2828(void)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  func_0x0001614d755f();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

