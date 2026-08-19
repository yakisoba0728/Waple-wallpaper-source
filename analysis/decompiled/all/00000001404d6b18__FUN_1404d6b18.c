// Function: FUN_1404d6b18
// Addr: 1404d6b18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d6abb) overlaps instruction at (ram,0x0001404d6aba)
    */

void FUN_1404d6b18(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  char *in_RAX;
  char cVar9;
  byte bVar10;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  byte abStack_10 [16];
  char *pcVar8;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  cVar9 = (char)((ulonglong)param_1 >> 8);
  bVar4 = (byte)param_1;
  pcVar8 = in_RAX + (longlong)param_2;
  cVar3 = *pcVar8;
  *pcVar8 = *pcVar8 + (char)param_2;
  if (!SCARRY1(cVar3,(char)param_2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*pcVar8 < '\0') {
    pcVar8 = (char *)(param_1 + 0x36 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
    *pcVar8 = *pcVar8 + cVar9;
  }
  *in_RAX = *in_RAX + bVar4;
  abStack_10[8] = 9;
  abStack_10[9] = 0;
  abStack_10[10] = 0x70;
  abStack_10[0xb] = 0x97;
  abStack_10[0xc] = 0xff;
  abStack_10[0xd] = 0xff;
  abStack_10[0xe] = 0xff;
  abStack_10[0xf] = 0xff;
  pcVar8 = (char *)(param_1 + 0x36 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar8 = *pcVar8 + cVar9;
  in_RAX[0x21004d69] = in_RAX[0x21004d69] + unaff_BH;
  cVar3 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar3;
  in_RAX[-0x69] = in_RAX[-0x69] + bVar10;
  pcVar8 = (char *)(param_1 + 0x36 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar8 = *pcVar8 + cVar9;
  in_RAX[0x21004d69] = in_RAX[0x21004d69] + unaff_BH;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + cVar3;
  in_RAX[8] = in_RAX[8] + unaff_BH;
  *in_RAX = *in_RAX + cVar3;
  abStack_10[0] = 9;
  abStack_10[1] = 0;
  abStack_10[2] = 0x70;
  abStack_10[3] = 0x97;
  abStack_10[4] = 0xff;
  abStack_10[5] = 0xff;
  abStack_10[6] = 0xff;
  abStack_10[7] = 0xff;
  pcVar8 = (char *)(param_1 + 0x36 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar8 = *pcVar8 + cVar9;
  in_RAX[0x1004d69] = in_RAX[0x1004d69] + unaff_BH;
  pbVar1 = abStack_10 + unaff_RSI;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  uVar6 = (int)(int *)((ulonglong)in_RAX | 4) + *(int *)((ulonglong)in_RAX | 4) +
          (uint)CARRY1(bVar2,bVar4);
  uVar7 = (ulonglong)uVar6 | 0xd2;
  *(byte *)(uVar7 + 0x21) = *(byte *)(uVar7 + 0x21) | bVar10;
  bVar4 = (byte)uVar7;
  *(byte *)(uVar7 * 2) = *(byte *)(uVar7 * 2) | bVar4;
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11((byte)(uVar6 >> 8) | bVar10,bVar4));
  bVar4 = bVar4 + *(char *)(ulonglong)uVar6;
  cVar5 = bVar4 + 0x54;
  pcVar8 = (char *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),cVar5);
  cVar3 = *pcVar8;
  cVar9 = *pcVar8;
  *pcVar8 = cVar9 + cVar5 + (0xab < bVar4);
  if (SCARRY1(cVar3,cVar5) == SCARRY1(cVar9 + cVar5,0xab < bVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  *pcVar8 = *pcVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

