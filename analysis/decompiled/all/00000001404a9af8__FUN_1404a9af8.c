// Function: FUN_1404a9af8
// Addr: 1404a9af8
// Size: 1 bytes


void FUN_1404a9af8(byte *param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  uint *puVar3;
  char *pcVar4;
  char cVar5;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  char *unaff_RDI;
  char in_CF;
  
  cVar5 = (char)param_1;
  puVar3 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(-in_CF,(char)in_RAX));
  uVar2 = *puVar3;
  *unaff_RDI = *unaff_RDI + cVar5;
  uVar2 = ((uint)puVar3 | uVar2) + 0xe0000834 & 0x1550000d;
  bVar1 = *param_1;
  *param_1 = *param_1 + unaff_SPL;
  pcVar4 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar4 = *pcVar4 + param_2;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + '\x04' + CARRY1(bVar1,unaff_SPL)) + 0xf000a54U &
          0x255c000d;
  *param_1 = *param_1 + 0x24;
  *(char *)(ulonglong)(uVar2 | 0x4a9a2400) = *(char *)(ulonglong)(uVar2 | 0x4a9a2400) + (char)uVar2;
  *unaff_RDI = *unaff_RDI + cVar5;
  pcVar4 = (char *)(ulonglong)(uVar2 | 0x4a9a2400);
  *param_1 = *param_1 + 0x24;
  *pcVar4 = *pcVar4 + cVar5;
  *pcVar4 = *pcVar4 + (char)uVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

