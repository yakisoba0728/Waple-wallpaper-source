// Function: FUN_1404a9ae8
// Addr: 1404a9ae8
// Size: 1 bytes


void FUN_1404a9ae8(byte *param_1,char param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 in_RAX;
  char *pcVar6;
  char cVar7;
  byte unaff_BH;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  char *unaff_RDI;
  
  cVar7 = (char)param_1;
  uVar5 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x21) | 0xd228900;
  pbVar1 = (byte *)((ulonglong)uVar5 + 0x210049ec);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  pbVar1 = (byte *)((ulonglong)uVar5 * 2);
  bVar3 = 0x21 - *pbVar1;
  uVar4 = CONCAT22((short)(uVar5 >> 0x10),
                   CONCAT11(-(0x21 < *pbVar1 || bVar3 < CARRY1(bVar2,unaff_BH)),
                            bVar3 - CARRY1(bVar2,unaff_BH)));
  uVar5 = *(uint *)(ulonglong)uVar4;
  *unaff_RDI = *unaff_RDI + cVar7;
  uVar5 = (uVar4 | uVar5) + 0xe0000834 & 0x1550000d;
  bVar2 = *param_1;
  *param_1 = *param_1 + unaff_SPL;
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar6 = *pcVar6 + param_2;
  uVar5 = CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + '\x04' + CARRY1(bVar2,unaff_SPL)) + 0xf000a54U &
          0x255c000d;
  *param_1 = *param_1 + 0x24;
  *(char *)(ulonglong)(uVar5 | 0x4a9a2400) = *(char *)(ulonglong)(uVar5 | 0x4a9a2400) + (char)uVar5;
  *unaff_RDI = *unaff_RDI + cVar7;
  pcVar6 = (char *)(ulonglong)(uVar5 | 0x4a9a2400);
  *param_1 = *param_1 + 0x24;
  *pcVar6 = *pcVar6 + cVar7;
  *pcVar6 = *pcVar6 + (char)uVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

