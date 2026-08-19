// Function: FUN_1404d6ad0
// Addr: 1404d6ad0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6ad0(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar9;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  byte abStack_8 [8];
  char cVar3;
  char *pcVar8;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  cRam0000000042009ad2 = cRam0000000042009ad2 + 'i';
  cRam0000000021004d71 = cRam0000000021004d71 + unaff_BH;
  cRam0000000021004d69 = cRam0000000021004d69 + 'i';
  abStack_8[0] = 9;
  abStack_8[1] = 0;
  abStack_8[2] = 0x70;
  abStack_8[3] = 0x97;
  abStack_8[4] = 0xff;
  abStack_8[5] = 0xff;
  abStack_8[6] = 0xff;
  abStack_8[7] = 0xff;
  pcVar8 = (char *)(param_1 + 0x36 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar8 = *pcVar8 + (char)((ulonglong)param_1 >> 8);
  cRam0000000022009ad2 = cRam0000000022009ad2 + unaff_BH;
  pbVar1 = abStack_8 + unaff_RSI;
  bVar4 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_1;
  uVar6 = iRam0000000021004d6d + 0x21004d6d + (uint)CARRY1(bVar4,(byte)param_1);
  uVar7 = (ulonglong)uVar6 | 0xd2;
  *(byte *)(uVar7 + 0x21) = *(byte *)(uVar7 + 0x21) | bVar9;
  bVar4 = (byte)uVar7;
  *(byte *)(uVar7 * 2) = *(byte *)(uVar7 * 2) | bVar4;
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11((byte)(uVar6 >> 8) | bVar9,bVar4));
  bVar4 = bVar4 + *(char *)(ulonglong)uVar6;
  cVar5 = bVar4 + 0x54;
  pcVar8 = (char *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),cVar5);
  cVar2 = *pcVar8;
  cVar3 = *pcVar8;
  *pcVar8 = cVar3 + cVar5 + (0xab < bVar4);
  if (SCARRY1(cVar2,cVar5) == SCARRY1(cVar3 + cVar5,0xab < bVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  *pcVar8 = *pcVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

