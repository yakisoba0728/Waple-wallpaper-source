// Function: FUN_1404b6c38
// Addr: 1404b6c38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b6cc6) overlaps instruction at (ram,0x0001404b6cc5)
    */

void FUN_1404b6c38(undefined8 param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined3 uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  char cVar12;
  int *in_RAX;
  char *pcVar11;
  char cVar13;
  char cVar16;
  longlong lVar14;
  undefined6 uVar17;
  char *pcVar15;
  byte bVar18;
  char cVar19;
  undefined6 uVar20;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST5;
  char *pcVar9;
  byte *pbVar10;
  
  uVar20 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar19 = (char)((ulonglong)param_2 >> 8);
  bVar18 = (byte)param_2;
  lVar14 = *(longlong *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 0x21;
  uVar8 = (((int)in_RAX - *in_RAX) - (uint)in_CF) + 0x93e4d802;
  uVar17 = (undefined6)((ulonglong)lVar14 >> 0x10);
  cVar13 = (char)lVar14;
  cVar16 = (char)((ulonglong)lVar14 >> 8) + unaff_BL;
  pcVar9 = (char *)CONCAT62(uVar17,CONCAT11(cVar16,cVar13));
  *(short *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (short)ROUND(in_ST1);
  pcVar11 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4b + unaff_RBP * 2);
  *pcVar11 = *pcVar11 + unaff_BL;
  cVar12 = (char)(uVar8 >> 8);
  *pcVar9 = *pcVar9 + cVar12;
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + (char)uVar8;
  uVar4 = (undefined3)(uVar8 >> 8);
  cVar5 = (char)uVar8 + unaff_BL;
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar4,cVar5);
  *(short *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (short)ROUND(in_ST2);
  pcVar15 = (char *)CONCAT62(uVar17,CONCAT11(cVar16 + unaff_BL,cVar13));
  *(short *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (short)ROUND(in_ST3);
  pcVar11 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4b + unaff_RBP * 2);
  *pcVar11 = *pcVar11 + unaff_BL;
  *pcVar15 = *pcVar15 + cVar12;
  *pcVar9 = *pcVar9 + cVar5;
  bVar6 = cVar5 + cVar12 + unaff_BL;
  uVar8 = CONCAT31(uVar4,bVar6);
  pbVar10 = (byte *)(ulonglong)uVar8;
  *(short *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (short)ROUND(in_ST5);
  pbVar10[0x6b] = pbVar10[0x6b] + cVar13;
  bVar1 = *param_4;
  *param_4 = *param_4 + bVar6;
  *unaff_RSI = *unaff_RSI + bVar6 + CARRY1(bVar1,bVar6);
  *pbVar10 = *pbVar10 + bVar18;
  if (*pbVar10 == 0) {
    pbVar10 = (byte *)(ulonglong)(uVar8 + 0xa0000568);
  }
  bVar1 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar18;
  bVar6 = *pbVar10;
  bVar7 = (byte)pbVar10;
  bVar2 = *pbVar10;
  *pbVar10 = bVar2 + bVar7 + CARRY1(bVar1,bVar18);
  *(char *)(param_2 + 0x2a21e00c) =
       *(char *)(param_2 + 0x2a21e00c) + cVar19 +
       (CARRY1(bVar6,bVar7) || CARRY1(bVar2 + bVar7,CARRY1(bVar1,bVar18)));
  cVar19 = cVar19 - unaff_RSI[(longlong)pcVar15];
  cRam00000000e04b71f9 = cRam00000000e04b71f9 + bVar7;
  if (pcVar15 != (char *)0x1) {
    *param_4 = *param_4 - 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar10[-0x5bffe41e] = pbVar10[-0x5bffe41e] + cVar19;
  iVar3 = *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(byte *)CONCAT62(uVar20,CONCAT11(cVar19,bVar18)) =
       *(char *)CONCAT62(uVar20,CONCAT11(cVar19,bVar18)) + bVar7;
  *pbVar10 = *pbVar10 + bVar7;
  pcVar11 = (char *)((ulonglong)pbVar10 ^ 0xe);
  cVar5 = (char)((ulonglong)pbVar10 >> 8);
  pcVar11[-0x4fffe41e] = pcVar11[-0x4fffe41e] + cVar5;
  if (iVar3 * 0x21 == 1) {
    pcVar11 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x521004b +
                      unaff_RBP * 2);
    *pcVar11 = *pcVar11 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar11 = *pcVar11 + (char)pcVar11;
  *(char *)(unaff_RDI + -0x33ffe41d) = *(char *)(unaff_RDI + -0x33ffe41d) + unaff_BH;
  cRam00000000bf001be3 = cRam00000000bf001be3 + -0x1d;
  cRam000000007e0037c6 = cRam000000007e0037c6 + unaff_BH;
  if (*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 0x21 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

