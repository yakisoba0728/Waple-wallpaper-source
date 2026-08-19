// Function: FUN_1404d3004
// Addr: 1404d3004
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3004(void)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + 0x10049e1) = *(char *)(in_RAX + 0x10049e1) + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

