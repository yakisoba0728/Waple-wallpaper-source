// Function: FUN_1404c86a0
// Addr: 1404c86a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c86a0(void)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX + 0x50000664;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 ^ (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

