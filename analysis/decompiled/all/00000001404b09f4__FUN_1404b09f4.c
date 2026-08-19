// Function: FUN_1404b09f4
// Addr: 1404b09f4
// Size: 1 bytes


void FUN_1404b09f4(char *param_1,char param_2)

{
  byte *pbVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  longlong unaff_RDI;
  char *pcVar4;
  
  pbVar1 = (byte *)(unaff_RDI + -0x781cffeb);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 << 1 | (char)bVar2 < '\0';
  uVar3 = in_EAX + 0x4b08d400 + (uint)((char)bVar2 < '\0');
  pcVar4 = (char *)(ulonglong)uVar3;
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  *pcVar4 = *pcVar4 + param_2;
  *pcVar4 = *pcVar4 + (char)uVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

