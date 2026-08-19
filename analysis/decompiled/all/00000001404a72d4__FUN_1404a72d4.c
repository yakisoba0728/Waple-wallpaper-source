// Function: FUN_1404a72d4
// Addr: 1404a72d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a72d4(void)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX + 0xd1000764;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

