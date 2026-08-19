// Function: FUN_1404b1dd4
// Addr: 1404b1dd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1dd4(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  char cVar6;
  longlong in_RAX;
  byte unaff_BH;
  longlong unaff_RSI;
  
  uVar5 = *(uint *)(unaff_RSI + 0x16);
  pbVar1 = (byte *)(in_RAX + -0x37ffe9b2);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  cVar4 = ((char)in_RAX + -0x4b) - CARRY1(bVar2,unaff_BH);
  cVar6 = (char)((ulonglong)in_RAX >> 8);
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + cVar6;
  pcVar3 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4) * 2);
  *pcVar3 = *pcVar3 + (char)uVar5;
  uVar5 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((cVar6 + (char)((ulonglong)param_2 >> 8)) * '\x02',cVar4)) +
          0x6d40000;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

