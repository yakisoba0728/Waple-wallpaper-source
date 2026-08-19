// Function: FUN_1404c2c70
// Addr: 1404c2c70
// Size: 1 bytes


void FUN_1404c2c70(char param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar6;
  int in_EAX;
  uint uVar4;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  byte *unaff_RSI;
  byte in_CF;
  char *pcVar5;
  
  *(uint *)unaff_RSI = (*(int *)unaff_RSI - unaff_EBX) - (uint)in_CF;
  uVar4 = in_EAX + 0x12010f00;
  pcVar5 = (char *)(ulonglong)uVar4;
  *pcVar5 = *pcVar5 + param_1;
  *unaff_RSI = *unaff_RSI << 1 | (char)*unaff_RSI < '\0';
  pcVar5[(longlong)unaff_RSI * 2] = pcVar5[(longlong)unaff_RSI * 2];
  cVar6 = (char)(uVar4 >> 8);
  *pcVar5 = *pcVar5 + cVar6;
  *unaff_RSI = *unaff_RSI >> 1;
  *pcVar5 = *pcVar5 + cVar6;
  bVar3 = (byte)uVar4;
  *pcVar5 = *pcVar5 + bVar3;
  *(uint *)(pcVar5 + param_2) = *(uint *)(pcVar5 + param_2) & uVar4;
  pbVar1 = unaff_RSI + (longlong)&stack0x00000000;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  *pcVar5 = (*pcVar5 - bVar3) - CARRY1(bVar2,bVar3);
  pcVar5[0x29] = pcVar5[0x29] & (byte)unaff_EBX;
  pcVar5[CONCAT44(unaff_0000001c,unaff_EBX) * 2 + 0x29] =
       pcVar5[CONCAT44(unaff_0000001c,unaff_EBX) * 2 + 0x29] + (char)param_2;
  pcVar5[0x21004c2b] = pcVar5[0x21004c2b] + cVar6;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)param_2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

