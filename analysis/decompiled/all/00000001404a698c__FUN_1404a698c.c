// Function: FUN_1404a698c
// Addr: 1404a698c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a698c(void)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX + 0x80000ec4;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

