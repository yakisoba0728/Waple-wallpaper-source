// Function: FUN_1404c53dc
// Addr: 1404c53dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c53dc(void)

{
  ulonglong in_RAX;
  char unaff_BL;
  char *pcVar1;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(ulonglong)((uint)&stack0x00000000 | *(uint *)((in_RAX | 0x70) + 1));
  *pcVar1 = *pcVar1 + unaff_BL;
  pcVar1[unaff_RSI] = pcVar1[unaff_RSI] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

