// Function: FUN_1404a0e28
// Addr: 1404a0e28
// Size: 1 bytes


void FUN_1404a0e28(uint param_1)

{
  uint in_EAX;
  longlong unaff_RSI;
  
  param_1 = param_1 + *(int *)(ulonglong)param_1;
  *(char *)(ulonglong)in_EAX = *(char *)(ulonglong)in_EAX + (char)(param_1 >> 8);
  *(char *)(unaff_RSI + 1) = *(char *)(unaff_RSI + 1) + (char)in_EAX;
  *(char *)(ulonglong)param_1 = *(char *)(ulonglong)param_1 + (char)param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

