// Function: FUN_1404a5e40
// Addr: 1404a5e40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5e40(void)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX + 0xf0000b64;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

