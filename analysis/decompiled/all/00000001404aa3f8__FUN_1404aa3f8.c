// Function: FUN_1404aa3f8
// Addr: 1404aa3f8
// Size: 1 bytes


void FUN_1404aa3f8(char *param_1)

{
  uint in_EAX;
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)(in_EAX | 0x4aa2b400);
  *param_1 = *param_1 + (char)((in_EAX | 0x4aa2b400) >> 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *pcVar1 = *pcVar1 + (char)in_EAX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

