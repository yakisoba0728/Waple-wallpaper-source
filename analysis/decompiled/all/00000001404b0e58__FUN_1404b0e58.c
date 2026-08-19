// Function: FUN_1404b0e58
// Addr: 1404b0e58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0e58(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar6;
  uint in_EAX;
  uint uVar4;
  char unaff_SPL;
  char *pcVar5;
  
  uVar4 = in_EAX + 0x159e7100 + (uint)((in_EAX & 0x100) != 0);
  pcVar5 = (char *)(ulonglong)uVar4;
  pcVar5[0xd] = pcVar5[0xd] + (char)(uVar4 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  bVar3 = (byte)uVar4;
  *pcVar5 = *pcVar5 + bVar3;
  pbVar1 = (byte *)(pcVar5 + -0x62);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  uVar4 = uVar4 + 0x159e7100 + (uint)CARRY1(bVar2,bVar3);
  pcVar5 = (char *)((ulonglong)uVar4 + 0xd);
  cVar6 = (char)(uVar4 >> 8);
  *pcVar5 = *pcVar5 + cVar6;
  *param_4 = *param_4 + unaff_SPL;
  pcVar5 = (char *)((ulonglong)uVar4 * 2);
  *pcVar5 = *pcVar5 + param_1;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),
                   CONCAT11((cVar6 + (char)((ulonglong)param_2 >> 8)) * '\x02',(char)uVar4)) +
          0x6d40000;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

