// Function: FUN_1404b28b4
// Addr: 1404b28b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b28b4(void)

{
  uint in_EAX;
  uint uVar1;
  char *pcVar2;
  longlong unaff_RSI;
  
  uVar1 = in_EAX | 0xc640874;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + (byte)uVar1;
  pcVar2 = (char *)(ulonglong)CONCAT31((int3)(uVar1 >> 8),(byte)uVar1 | *(byte *)(ulonglong)uVar1);
  *pcVar2 = *pcVar2 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

