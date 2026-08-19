// Function: FUN_1404ccc5c
// Addr: 1404ccc5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ccc5c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int in_EAX;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  undefined6 uVar6;
  byte bVar7;
  
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar5 = (char)((ulonglong)param_1 >> 8);
  cVar4 = (char)param_1;
  bVar7 = (byte)((ulonglong)param_2 >> 8) ^ bRam00000001757f9967;
  pcVar3 = (char *)((ulonglong)(in_EAX + 0xb0000734) + 0x210049ed);
  *pcVar3 = *pcVar3 + cVar5;
  uVar2 = in_EAX + 0x14050736;
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
  pcVar1 = (code *)swi(0x32);
  uVar2 = (*pcVar1)();
  pcVar3 = (char *)(ulonglong)(uVar2 ^ 0x3532eb00);
  pcVar3[0x21004ccb] = pcVar3[0x21004ccb] + cVar4;
  *pcVar3 = *pcVar3 + (char)uVar2;
  bVar7 = bVar7 ^ bRam00000001757fb78b;
  pcVar3[0x21004ccb] = pcVar3[0x21004ccb] + cVar4;
  *pcVar3 = *pcVar3 + (char)uVar2;
  pcVar3[-0x32ffcace] = pcVar3[-0x32ffcace] + bVar7;
  *(char *)CONCAT62(uVar6,CONCAT11(cVar5 + cVar4,cVar4)) =
       *(char *)CONCAT62(uVar6,CONCAT11(cVar5 + cVar4,cVar4)) + (char)((uVar2 ^ 0x3532eb00) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

