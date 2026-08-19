// Function: FUN_1404d4548
// Addr: 1404d4548
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4548(void)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + 0x48) = *(char *)(in_RAX + 0x48) + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

