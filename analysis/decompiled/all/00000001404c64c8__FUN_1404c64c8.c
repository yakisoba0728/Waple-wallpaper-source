// Function: FUN_1404c64c8
// Addr: 1404c64c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c64c8(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  char *pcVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  undefined6 uVar8;
  byte unaff_BL;
  longlong unaff_RSI;
  byte *pbVar3;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  cVar5 = (char)param_2;
  uVar2 = in_EAX + 0xcf000974;
  pbVar3 = (byte *)(ulonglong)uVar2;
  bVar1 = (byte)uVar2;
  if (in_EAX < 0x30fff68c && uVar2 != 0) {
    *pbVar3 = *pbVar3 | bVar1;
    *(char *)(unaff_RSI + param_1) = *(char *)(unaff_RSI + param_1) + bVar6;
    *pbVar3 = *pbVar3 + cVar5;
    pbVar3 = (byte *)(((ulonglong)uVar2 | 0xe0) + 7);
    *pbVar3 = *pbVar3 | bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar7 = bVar6 + unaff_BL;
  if (CARRY1(bVar6,unaff_BL) || cVar7 == '\0') {
    pcVar4 = (char *)(ulonglong)
                     CONCAT22((short)(uVar2 >> 0x10),CONCAT11((char)(uVar2 >> 8) + cVar5,bVar1));
    *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,cVar5)) =
         *(char *)CONCAT62(uVar8,CONCAT11(cVar7,cVar5)) + bVar1;
    *pcVar4 = *pcVar4 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

