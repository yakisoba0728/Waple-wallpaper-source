// Function: FUN_1404aa3c8
// Addr: 1404aa3c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa3c8(void)

{
  char *pcVar1;
  undefined1 in_AL;
  ulonglong unaff_RSI;
  
  pcVar1 = (char *)((unaff_RSI & 0xffffffff) + 0x21004a);
  uRamf27000000021004a = in_AL;
  *pcVar1 = *pcVar1 + (char)((unaff_RSI & 0xffffffff) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

