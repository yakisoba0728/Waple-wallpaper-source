// Function: FUN_1404ccc70
// Addr: 1404ccc70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ccc70(undefined8 param_1,undefined8 param_2)

{
  int in_EAX;
  uint uVar1;
  char cVar3;
  char cVar4;
  undefined6 uVar5;
  byte bVar6;
  char *pcVar2;
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar3 = (char)param_1;
  uVar1 = in_EAX + 0xcd000864;
  pcVar2 = (char *)(ulonglong)uVar1;
  bVar6 = (byte)((ulonglong)param_2 >> 8) ^ bRam00000001757fb77b;
  pcVar2[0x21004ccb] = pcVar2[0x21004ccb] + cVar3;
  *pcVar2 = *pcVar2 + (char)uVar1;
  cVar4 = (char)((ulonglong)param_1 >> 8) + cVar3;
  bVar6 = bVar6 ^ bRam00000001757fb78b;
  pcVar2[0x21004ccb] = pcVar2[0x21004ccb] + cVar3;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x32ffcace] = pcVar2[-0x32ffcace] + bVar6;
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar3)) + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

