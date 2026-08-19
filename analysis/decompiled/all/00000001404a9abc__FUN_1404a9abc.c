// Function: FUN_1404a9abc
// Addr: 1404a9abc
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404a9adf) overlaps instruction at (ram,0x0001404a9add)
    */

void FUN_1404a9abc(undefined8 param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar4;
  byte *in_RAX;
  byte bVar5;
  undefined7 uVar6;
  char cVar7;
  char unaff_BH;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  char *unaff_RDI;
  bool bVar8;
  char *pcVar3;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  bVar5 = (byte)param_1;
  *in_RAX = *in_RAX | (byte)in_RAX;
  uVar2 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x21) | 0xd228900;
  pcVar3 = (char *)(ulonglong)uVar2;
  pcVar3[0x210049ec] = pcVar3[0x210049ec] + unaff_BH;
  *param_2 = *param_2 + '!';
  *pcVar3 = *pcVar3 + '!';
  bVar4 = (byte)(uVar2 >> 8);
  if (*pcVar3 == '\0') {
    pcVar3[0x210049ec] = pcVar3[0x210049ec] + unaff_BH;
  }
  else {
    pcVar3[-0x76fff2df] = pcVar3[-0x76fff2df] + cVar7;
    bVar5 = bVar5 & bRam000000018a3752e3;
    *(byte *)CONCAT71(uVar6,bVar5) = *(char *)CONCAT71(uVar6,bVar5) + bVar4;
  }
  *pcVar3 = *pcVar3 + '!';
  pcVar3[-0x76fff2df] = pcVar3[-0x76fff2df] + cVar7;
  bVar5 = bVar5 & bRam000000018a3752f3;
  bVar8 = CARRY1(*(byte *)CONCAT71(uVar6,bVar5),bVar4);
  *(byte *)CONCAT71(uVar6,bVar5) = *(char *)CONCAT71(uVar6,bVar5) + bVar4;
  bVar4 = 0x21 - *(byte *)((longlong)pcVar3 * 2);
  uVar1 = CONCAT22((short)(uVar2 >> 0x10),
                   CONCAT11(-(0x21 < *(byte *)((longlong)pcVar3 * 2) || bVar4 < bVar8),bVar4 - bVar8
                           ));
  uVar2 = *(uint *)(ulonglong)uVar1;
  *unaff_RDI = *unaff_RDI + bVar5;
  uVar2 = (uVar1 | uVar2) + 0xe0000834 & 0x1550000d;
  bVar4 = *(byte *)CONCAT71(uVar6,bVar5);
  *(byte *)CONCAT71(uVar6,bVar5) = *(char *)CONCAT71(uVar6,bVar5) + unaff_SPL;
  pcVar3 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar3 = *pcVar3 + (char)param_2;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + '\x04' + CARRY1(bVar4,unaff_SPL)) + 0xf000a54U &
          0x255c000d;
  *(char *)CONCAT71(uVar6,bVar5) = *(char *)CONCAT71(uVar6,bVar5) + '$';
  *(char *)(ulonglong)(uVar2 | 0x4a9a2400) = *(char *)(ulonglong)(uVar2 | 0x4a9a2400) + (char)uVar2;
  *unaff_RDI = *unaff_RDI + bVar5;
  pcVar3 = (char *)(ulonglong)(uVar2 | 0x4a9a2400);
  *(char *)CONCAT71(uVar6,bVar5) = *(char *)CONCAT71(uVar6,bVar5) + '$';
  *pcVar3 = *pcVar3 + bVar5;
  *pcVar3 = *pcVar3 + (char)uVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

