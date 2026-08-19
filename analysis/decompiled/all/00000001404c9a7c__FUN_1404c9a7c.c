// Function: FUN_1404c9a7c
// Addr: 1404c9a7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9a7c(void)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + 0x10049e1) = *(char *)(in_RAX + 0x10049e1) + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

