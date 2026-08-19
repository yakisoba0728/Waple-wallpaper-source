// Function: FUN_1404b1e7c
// Addr: 1404b1e7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1e7c(void)

{
  longlong in_RAX;
  byte in_CF;
  
  *(byte *)(in_RAX + 0x16) = *(byte *)(in_RAX + 0x16) << 1 | in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

