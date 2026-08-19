// Function: FUN_1404aa0fc
// Addr: 1404aa0fc
// Size: 1 bytes


void FUN_1404aa0fc(char *param_1)

{
  char cVar2;
  uint in_EAX;
  byte *pbVar1;
  byte unaff_BH;
  char unaff_SPL;
  char in_AF;
  byte bVar3;
  
  bVar3 = (byte)((in_EAX | 0xdc3e100) >> 8);
  cVar2 = bVar3 + unaff_BH;
  bVar3 = (cVar2 < '\0') << 7 | (cVar2 == '\0') << 6 | in_AF << 4 |
          ((POPCOUNT(cVar2) & 1U) == 0) << 2 | 2U | CARRY1(bVar3,unaff_BH);
  pbVar1 = (byte *)(ulonglong)
                   CONCAT22((short)((in_EAX | 0xdc3e100) >> 0x10),CONCAT11(bVar3,(char)in_EAX));
  *param_1 = *param_1 + unaff_SPL;
  *pbVar1 = *pbVar1 & (byte)param_1;
  *pbVar1 = *pbVar1 + bVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

