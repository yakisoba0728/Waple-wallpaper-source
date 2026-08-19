// Function: FUN_1404a1a84
// Addr: 1404a1a84
// Size: 1 bytes


void FUN_1404a1a84(ulonglong param_1)

{
  uint in_EAX;
  char *pcVar1;
  char unaff_SPL;
  char *unaff_RSI;
  
  pcVar1 = (char *)(param_1 & 0xffffffff);
  *(char *)((longlong)pcVar1 * 2) = *(char *)((longlong)pcVar1 * 2) - (char)pcVar1;
  *(char *)(ulonglong)in_EAX = *(char *)(ulonglong)in_EAX + unaff_SPL;
  *unaff_RSI = *unaff_RSI + (char)in_EAX;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

