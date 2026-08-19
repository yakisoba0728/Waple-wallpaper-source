// Function: FUN_1404abf28
// Addr: 1404abf28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abf28(void)

{
  longlong in_RAX;
  char unaff_BH;
  
  *(byte *)(in_RAX + -0x5f58fff1) = *(byte *)(in_RAX + -0x5f58fff1) & 0xf;
  *(char *)(in_RAX + 0x10049ec) = *(char *)(in_RAX + 0x10049ec) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

