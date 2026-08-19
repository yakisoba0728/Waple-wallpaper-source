// Function: FUN_1404a9a9c
// Addr: 1404a9a9c
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404a9adf) overlaps instruction at (ram,0x0001404a9add)
    */

void FUN_1404a9a9c(undefined8 param_1,char *param_2)

{
  uint uVar1;
  byte bVar4;
  int in_EAX;
  uint uVar2;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  char cVar9;
  char unaff_BH;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  char *unaff_RDI;
  bool bVar10;
  char *pcVar3;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  uVar8 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar7 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)((ulonglong)param_1 >> 8);
  bVar5 = (byte)param_1;
  uVar2 = in_EAX + 0x20000674;
  pcVar3 = (char *)(ulonglong)uVar2;
  pcVar3[0x21004a2b] = pcVar3[0x21004a2b] + cVar6;
  *pcVar3 = *pcVar3 + (char)uVar2;
  *pcVar3 = *pcVar3 + (char)(uVar2 >> 8);
  pcVar3[0x21004a2b] = pcVar3[0x21004a2b] + cVar6;
  uVar2 = in_EAX + 0x94050676;
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
  uVar2 = (uint)CONCAT71((uint7)(uint3)(uVar2 >> 8),0x21) | 0xd228900;
  pcVar3 = (char *)(ulonglong)uVar2;
  pcVar3[0x210049ec] = pcVar3[0x210049ec] + unaff_BH;
  *param_2 = *param_2 + '!';
  *pcVar3 = *pcVar3 + '!';
  bVar4 = (byte)(uVar2 >> 8);
  if (*pcVar3 == '\0') {
    pcVar3[0x210049ec] = pcVar3[0x210049ec] + unaff_BH;
  }
  else {
    pcVar3[-0x76fff2df] = pcVar3[-0x76fff2df] + cVar9;
    bVar5 = bVar5 & bRam000000018a3752e3;
    *(byte *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,bVar5))) =
         *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,bVar5))) + bVar4;
  }
  *pcVar3 = *pcVar3 + '!';
  pcVar3[-0x76fff2df] = pcVar3[-0x76fff2df] + cVar9;
  bVar5 = bVar5 & bRam000000018a3752f3;
  bVar10 = CARRY1(*(byte *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,bVar5))),bVar4);
  *(byte *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,bVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,bVar5))) + bVar4;
  bVar4 = 0x21 - *(byte *)((longlong)pcVar3 * 2);
  uVar1 = CONCAT22((short)(uVar2 >> 0x10),
                   CONCAT11(-(0x21 < *(byte *)((longlong)pcVar3 * 2) || bVar4 < bVar10),
                            bVar4 - bVar10));
  uVar2 = *(uint *)(ulonglong)uVar1;
  *unaff_RDI = *unaff_RDI + bVar5;
  uVar2 = (uVar1 | uVar2) + 0xe0000834 & 0x1550000d;
  bVar4 = *(byte *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,bVar5)));
  *(byte *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,bVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,bVar5))) + unaff_SPL;
  pcVar3 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar3 = *pcVar3 + (char)param_2;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + '\x04' + CARRY1(bVar4,unaff_SPL)) + 0xf000a54U &
          0x255c000d;
  *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,bVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,bVar5))) + '$';
  *(char *)(ulonglong)(uVar2 | 0x4a9a2400) = *(char *)(ulonglong)(uVar2 | 0x4a9a2400) + (char)uVar2;
  *unaff_RDI = *unaff_RDI + bVar5;
  pcVar3 = (char *)(ulonglong)(uVar2 | 0x4a9a2400);
  *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,bVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,bVar5))) + '$';
  *pcVar3 = *pcVar3 + bVar5;
  *pcVar3 = *pcVar3 + (char)uVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

