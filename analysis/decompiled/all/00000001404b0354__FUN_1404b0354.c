// Function: FUN_1404b0354
// Addr: 1404b0354
// Size: 1 bytes


void FUN_1404b0354(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  char cVar2;
  uint in_EAX;
  char *pcVar3;
  char cVar4;
  char cVar5;
  undefined6 uVar6;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar5 = (char)((ulonglong)param_2 >> 8);
  cVar4 = (char)param_1;
  *param_2 = *param_2 ^ (byte)((ulonglong)param_1 >> 8);
  uVar1 = (in_EAX | 0x5000e64) + 0x152a4100;
  pcVar3 = (char *)(ulonglong)uVar1;
  pcVar3[0x21004afd] = pcVar3[0x21004afd] + cVar4;
  cVar2 = (char)uVar1;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar5;
  cRam0000000155754473 = (char)param_2 - cRam0000000155754473;
  pcVar3[0x21004afd] = pcVar3[0x21004afd] + cVar4;
  *(char *)CONCAT62(uVar6,CONCAT11(cVar5,cRam0000000155754473)) =
       *(char *)CONCAT62(uVar6,CONCAT11(cVar5,cRam0000000155754473)) + cVar4;
  *pcVar3 = *pcVar3 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

