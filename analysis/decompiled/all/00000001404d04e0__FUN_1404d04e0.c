// Function: FUN_1404d04e0
// Addr: 1404d04e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d04e0(void)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + -0x7fd1ffd5) = *(char *)(in_RAX + -0x7fd1ffd5) + 'X';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

