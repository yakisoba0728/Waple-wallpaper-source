// Function: FUN_1404ceb68
// Addr: 1404ceb68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ceb68(char *param_1)

{
  char *pcVar1;
  int in_EAX;
  uint uVar2;
  char unaff_BH;
  longlong unaff_RSI;
  
  uVar2 = in_EAX + 0x50000674;
  *(char *)(unaff_RSI + 0x33) = *(char *)(unaff_RSI + 0x33) + unaff_BH;
  if (*(char *)(ulonglong)uVar2 <= (char)uVar2) {
    *param_1 = *param_1 + (char)(uVar2 >> 8);
    pcVar1 = (char *)((longlong)(ulonglong)uVar2 * 2);
    *pcVar1 = *pcVar1 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

