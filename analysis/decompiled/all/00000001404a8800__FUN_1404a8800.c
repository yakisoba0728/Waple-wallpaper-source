// Function: FUN_1404a8800
// Addr: 1404a8800
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8800(void)

{
  longlong in_RAX;
  
  *(uint *)(in_RAX + 6) = *(uint *)(in_RAX + 6) & (uint)in_RAX;
  *(char *)(in_RAX + 0x34) = *(char *)(in_RAX + 0x34) + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

