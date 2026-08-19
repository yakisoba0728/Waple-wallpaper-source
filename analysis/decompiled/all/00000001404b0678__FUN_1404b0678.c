// Function: FUN_1404b0678
// Addr: 1404b0678
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0678(void)

{
  uint uVar1;
  char in_CF;
  
  LOCK();
  cRam0000000155cbfe80 = cRam0000000155cbfe80 + in_CF;
  UNLOCK();
  uVar1 = (int)&stack0x00000000 + 0x2221004b;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

