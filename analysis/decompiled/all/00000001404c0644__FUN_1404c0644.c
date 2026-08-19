// Function: FUN_1404c0644
// Addr: 1404c0644
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0644(void)

{
  int in_EAX;
  uint uVar1;
  byte in_CF;
  
  uVar1 = in_EAX + 0x8000f78 + (uint)in_CF;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 - (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

