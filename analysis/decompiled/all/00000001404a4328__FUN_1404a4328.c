// Function: FUN_1404a4328
// Addr: 1404a4328
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4328(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX | 0x21500c70;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

