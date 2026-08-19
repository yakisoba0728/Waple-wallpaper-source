// Function: FUN_1404c5c48
// Addr: 1404c5c48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5c48(void)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX + 0x764;
  if (uVar1 != 0) {
    *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

