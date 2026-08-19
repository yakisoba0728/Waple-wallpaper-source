// Function: FUN_1404d6ab8
// Addr: 1404d6ab8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6ab8(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  char *in_RAX;
  ulonglong uVar6;
  char cVar8;
  byte bVar9;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  bool in_OF;
  byte abStack_8 [8];
  char *pcVar7;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  cVar8 = (char)((ulonglong)param_1 >> 8);
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar7 = (char *)(param_1 + 0x36 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar7 = *pcVar7 + cVar8;
  in_RAX[0x21004d69] = in_RAX[0x21004d69] + unaff_BH;
  cVar2 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar2;
  in_RAX[-0x69] = in_RAX[-0x69] + bVar9;
  pcVar7 = (char *)(param_1 + 0x36 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar7 = *pcVar7 + cVar8;
  in_RAX[0x21004d69] = in_RAX[0x21004d69] + unaff_BH;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + cVar2;
  in_RAX[8] = in_RAX[8] + unaff_BH;
  *in_RAX = *in_RAX + cVar2;
  abStack_8[0] = 9;
  abStack_8[1] = 0;
  abStack_8[2] = 0x70;
  abStack_8[3] = 0x97;
  abStack_8[4] = 0xff;
  abStack_8[5] = 0xff;
  abStack_8[6] = 0xff;
  abStack_8[7] = 0xff;
  pcVar7 = (char *)(param_1 + 0x36 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar7 = *pcVar7 + cVar8;
  in_RAX[0x1004d69] = in_RAX[0x1004d69] + unaff_BH;
  pbVar1 = abStack_8 + unaff_RSI;
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_1;
  uVar5 = (int)(int *)((ulonglong)in_RAX | 4) + *(int *)((ulonglong)in_RAX | 4) +
          (uint)CARRY1(bVar3,(byte)param_1);
  uVar6 = (ulonglong)uVar5 | 0xd2;
  *(byte *)(uVar6 + 0x21) = *(byte *)(uVar6 + 0x21) | bVar9;
  bVar3 = (byte)uVar6;
  *(byte *)(uVar6 * 2) = *(byte *)(uVar6 * 2) | bVar3;
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11((byte)(uVar5 >> 8) | bVar9,bVar3));
  bVar3 = bVar3 + *(char *)(ulonglong)uVar5;
  cVar4 = bVar3 + 0x54;
  pcVar7 = (char *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar4);
  cVar8 = *pcVar7;
  cVar2 = *pcVar7;
  *pcVar7 = cVar2 + cVar4 + (0xab < bVar3);
  if (SCARRY1(cVar8,cVar4) == SCARRY1(cVar2 + cVar4,0xab < bVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  *pcVar7 = *pcVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

