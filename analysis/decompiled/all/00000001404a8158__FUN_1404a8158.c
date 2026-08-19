// Function: FUN_1404a8158
// Addr: 1404a8158
// Size: 1 bytes


void FUN_1404a8158(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined3 uVar1;
  byte bVar2;
  uint in_EAX;
  byte *pbVar3;
  char *pcVar4;
  char cVar5;
  char unaff_SPL;
  char *unaff_RSI;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  pbVar3 = (byte *)((ulonglong)(in_EAX | 0x5000964) ^ 7);
  *pbVar3 = *pbVar3 + cVar5;
  uVar1 = (undefined3)((in_EAX | 0x5000964) >> 8);
  bVar2 = (byte)pbVar3 | *pbVar3;
  bVar2 = bVar2 | *(byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  pbVar3 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  *param_4 = *param_4 + unaff_SPL;
  *pbVar3 = *pbVar3 + bVar2;
  *pbVar3 = *pbVar3 + cVar5;
  bVar2 = bVar2 | *pbVar3 | *(byte *)(ulonglong)CONCAT31(uVar1,bVar2 | *pbVar3);
  pcVar4 = (char *)(ulonglong)CONCAT31(uVar1,bVar2);
  *param_4 = *param_4 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + param_1;
  *pcVar4 = *pcVar4 + bVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

