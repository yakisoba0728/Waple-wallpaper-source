// Function: FUN_1404b57f4
// Addr: 1404b57f4
// Size: 1 bytes


void FUN_1404b57f4(char *param_1,int *param_2)

{
  int in_EAX;
  uint uVar1;
  byte *pbVar2;
  
  *param_2 = *param_2 + (int)param_1;
  uVar1 = in_EAX + 0x6420a00;
  pbVar2 = (byte *)(ulonglong)uVar1;
  *pbVar2 = *pbVar2 << 1 | (char)*pbVar2 < '\0';
  *pbVar2 = *pbVar2 ^ (byte)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  *pbVar2 = *pbVar2 - (char)param_1;
  *pbVar2 = *pbVar2 + (char)((ulonglong)param_1 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

