// Function: FUN_1404a0e54
// Addr: 1404a0e54
// Size: 1 bytes


void FUN_1404a0e54(uint param_1)

{
  uint in_EAX;
  char *pcVar1;
  
  param_1 = param_1 + *(int *)(ulonglong)param_1;
  pcVar1 = (char *)(ulonglong)param_1;
  *(char *)(ulonglong)in_EAX = *(char *)(ulonglong)in_EAX + (char)(param_1 >> 8);
  *pcVar1 = *pcVar1 + (char)in_EAX;
  *pcVar1 = *pcVar1 + (char)param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

