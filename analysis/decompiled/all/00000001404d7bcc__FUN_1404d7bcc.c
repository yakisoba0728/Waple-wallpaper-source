// Function: FUN_1404d7bcc
// Addr: 1404d7bcc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7bcc(void)

{
  ulonglong in_RAX;
  uint *puVar1;
  
  puVar1 = (uint *)(in_RAX | 0x74);
  *puVar1 = *puVar1 | (uint)puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

