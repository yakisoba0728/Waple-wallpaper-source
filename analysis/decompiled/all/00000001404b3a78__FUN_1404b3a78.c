// Function: FUN_1404b3a78
// Addr: 1404b3a78
// Size: 1 bytes


void FUN_1404b3a78(char param_1,char *param_2,char param_3,char *param_4)

{
  byte bVar1;
  uint uVar3;
  undefined8 in_RAX;
  byte *pbVar4;
  char unaff_SPL;
  byte in_CF;
  byte bVar2;
  char *pcVar5;
  
  pbVar4 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x46);
  bVar1 = *pbVar4;
  bVar2 = *pbVar4;
  *pbVar4 = (bVar2 + 0xba) - in_CF;
  uVar3 = in((short)param_2);
  pcVar5 = (char *)(ulonglong)uVar3;
  *pcVar5 = (*pcVar5 - param_3) - (bVar1 < 0x46 || (byte)(bVar2 + 0xba) < in_CF);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + param_1;
  *pcVar5 = *pcVar5 + (char)uVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

