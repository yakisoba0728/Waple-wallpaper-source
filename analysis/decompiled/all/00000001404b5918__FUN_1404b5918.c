// Function: FUN_1404b5918
// Addr: 1404b5918
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5918(void)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + 0x1004b57) = *(char *)(in_RAX + 0x1004b57) + '\x1a';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

