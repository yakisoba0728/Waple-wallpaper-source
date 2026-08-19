// Function: FUN_1404a9260
// Addr: 1404a9260
// Size: 1 bytes


void FUN_1404a9260(ulonglong param_1)

{
  uint in_EAX;
  char *pcVar1;
  char unaff_SPL;
  
  pcVar1 = (char *)(param_1 & 0xffffffff);
  *(char *)(ulonglong)in_EAX = *(char *)(ulonglong)in_EAX + unaff_SPL;
  *pcVar1 = *pcVar1 + (char)in_EAX;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

