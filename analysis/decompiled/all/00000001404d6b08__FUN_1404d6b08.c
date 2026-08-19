// Function: FUN_1404d6b08
// Addr: 1404d6b08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d6abb) overlaps instruction at (ram,0x0001404d6aba)
    */

void FUN_1404d6b08(longlong param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong in_RAX;
  undefined7 uVar11;
  byte bVar12;
  byte bVar13;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  char unaff_R12B;
  byte abStack_10 [16];
  char *pcVar9;
  char *pcVar10;
  
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  cVar3 = (char)((ulonglong)param_1 >> 8);
  bVar12 = (byte)param_1;
  *param_4 = *param_4 + unaff_R12B;
  cVar4 = (char)in_RAX;
  *(char *)(in_RAX * 2) = *(char *)(in_RAX * 2) + cVar4;
  bVar2 = (byte)((ulonglong)in_RAX >> 8);
  pcVar9 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar2 + bVar13,cVar4));
  uVar11 = (undefined7)((ulonglong)pcVar9 >> 8);
  cVar5 = cVar4 + *pcVar9 + CARRY1(bVar2,bVar13);
  pcVar10 = (char *)CONCAT71(uVar11,cVar5);
  pcVar9 = pcVar10 + (longlong)param_2;
  cVar4 = *pcVar9;
  *pcVar9 = *pcVar9 + (char)param_2;
  if (!SCARRY1(cVar4,(char)param_2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*pcVar9 < '\0') {
    pcVar9 = (char *)(param_1 + 0x36 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
    *pcVar9 = *pcVar9 + cVar3;
  }
  *pcVar10 = *pcVar10 + bVar12;
  abStack_10[8] = 9;
  abStack_10[9] = 0;
  abStack_10[10] = 0x70;
  abStack_10[0xb] = 0x97;
  abStack_10[0xc] = 0xff;
  abStack_10[0xd] = 0xff;
  abStack_10[0xe] = 0xff;
  abStack_10[0xf] = 0xff;
  pcVar9 = (char *)(param_1 + 0x36 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar9 = *pcVar9 + cVar3;
  pcVar10[0x21004d69] = pcVar10[0x21004d69] + unaff_BH;
  *pcVar10 = *pcVar10 + cVar5;
  pcVar10[-0x69] = pcVar10[-0x69] + bVar13;
  pcVar9 = (char *)(param_1 + 0x36 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar9 = *pcVar9 + cVar3;
  pcVar10[0x21004d69] = pcVar10[0x21004d69] + unaff_BH;
  *(char *)((longlong)pcVar10 * 2) = *(char *)((longlong)pcVar10 * 2) + cVar5;
  pcVar10[8] = pcVar10[8] + unaff_BH;
  *pcVar10 = *pcVar10 + cVar5;
  abStack_10[0] = 9;
  abStack_10[1] = 0;
  abStack_10[2] = 0x70;
  abStack_10[3] = 0x97;
  abStack_10[4] = 0xff;
  abStack_10[5] = 0xff;
  abStack_10[6] = 0xff;
  abStack_10[7] = 0xff;
  pcVar9 = (char *)(param_1 + 0x36 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar9 = *pcVar9 + cVar3;
  pcVar10[0x1004d69] = pcVar10[0x1004d69] + unaff_BH;
  piVar7 = (int *)(CONCAT71(uVar11,cVar5) | 4);
  pbVar1 = abStack_10 + unaff_RSI;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar12;
  uVar6 = (int)piVar7 + *piVar7 + (uint)CARRY1(bVar2,bVar12);
  uVar8 = (ulonglong)uVar6 | 0xd2;
  *(byte *)(uVar8 + 0x21) = *(byte *)(uVar8 + 0x21) | bVar13;
  bVar2 = (byte)uVar8;
  *(byte *)(uVar8 * 2) = *(byte *)(uVar8 * 2) | bVar2;
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11((byte)(uVar6 >> 8) | bVar13,bVar2));
  bVar2 = bVar2 + *(char *)(ulonglong)uVar6;
  cVar3 = bVar2 + 0x54;
  pcVar9 = (char *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),cVar3);
  cVar4 = *pcVar9;
  cVar5 = *pcVar9;
  *pcVar9 = cVar5 + cVar3 + (0xab < bVar2);
  if (SCARRY1(cVar4,cVar3) == SCARRY1(cVar5 + cVar3,0xab < bVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  *pcVar9 = *pcVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

