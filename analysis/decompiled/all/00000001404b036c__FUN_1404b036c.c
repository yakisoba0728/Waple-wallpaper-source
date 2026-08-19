// Function: FUN_1404b036c
// Addr: 1404b036c
// Size: 1 bytes


void FUN_1404b036c(undefined8 param_1,byte *param_2)

{
  int in_EAX;
  char *pcVar1;
  
  *param_2 = *param_2 ^ (byte)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(ulonglong)(in_EAX + 0x152a4100U);
  pcVar1[0x21004afd] = pcVar1[0x21004afd] + (char)param_1;
  *param_2 = *param_2 + (char)param_1;
  *pcVar1 = *pcVar1 + (char)(in_EAX + 0x152a4100U);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

