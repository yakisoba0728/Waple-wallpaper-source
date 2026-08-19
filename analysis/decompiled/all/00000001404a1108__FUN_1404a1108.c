// Function: FUN_1404a1108
// Addr: 1404a1108
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1108(void)

{
  ulonglong in_RAX;
  uint *puVar1;
  
  puVar1 = (uint *)(in_RAX | 0xd4);
  *puVar1 = *puVar1 | (uint)puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

