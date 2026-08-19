// Function: FUN_1404c64e4
// Addr: 1404c64e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c64e4(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 in_RAX;
  undefined7 uVar6;
  char *pcVar5;
  char cVar7;
  byte unaff_BH;
  char unaff_R12B;
  
  cVar7 = (char)param_2;
  bVar4 = (byte)in_RAX;
  pcVar5 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar7,bVar4));
  uVar2 = *(uint *)((longlong)pcVar5 * 2 + 0x21);
  *pcVar5 = *pcVar5 + bVar4;
  uVar6 = (undefined7)((ulonglong)pcVar5 >> 8);
  bVar3 = bVar4 * '\x02';
  if (!CARRY1(bVar4,bVar4) && bVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = (byte)uVar2;
  if (CARRY1(unaff_BH,bVar4) || (byte)(unaff_BH + bVar4) == '\0') {
    pcVar5 = (char *)CONCAT71(uVar6,bVar3 + bVar4);
    *pcVar5 = *pcVar5 + (char)*(undefined4 *)((longlong)pcVar5 * 2 + 1) + CARRY1(bVar3,bVar4);
    *pcVar5 = *pcVar5 + cVar7;
    pcVar5 = (char *)(CONCAT71(uVar6,bVar3 + bVar4) ^ 0xe);
    *pcVar5 = *pcVar5 + cVar7;
    pbVar1 = (byte *)((CONCAT71(uVar6,(char)pcVar5) | 0xe0) + 7);
    *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + unaff_R12B;
  *(char *)CONCAT71(uVar6,bVar3) = *(char *)CONCAT71(uVar6,bVar3) + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

