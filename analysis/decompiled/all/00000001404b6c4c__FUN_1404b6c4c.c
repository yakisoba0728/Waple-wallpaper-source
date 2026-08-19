// Function: FUN_1404b6c4c
// Addr: 1404b6c4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b6cc6) overlaps instruction at (ram,0x0001404b6cc5)
    */

void FUN_1404b6c4c(undefined8 param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined3 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  char cVar11;
  int *in_RAX;
  char *pcVar10;
  int iVar12;
  char *pcVar13;
  byte bVar14;
  char cVar15;
  undefined6 uVar16;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST4;
  longlong unaff_retaddr;
  char *pcVar8;
  byte *pbVar9;
  
  uVar16 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar15 = (char)((ulonglong)param_2 >> 8);
  bVar14 = (byte)param_2;
  uVar7 = ((int)in_RAX - *in_RAX) - (uint)in_CF;
  iVar12 = *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 0x21;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
  uVar3 = (undefined3)(uVar7 >> 8);
  cVar4 = (char)uVar7 + unaff_BL;
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar3,cVar4);
  *(short *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (short)ROUND(in_ST1);
  pcVar13 = (char *)(ulonglong)
                    CONCAT22((short)((uint)iVar12 >> 0x10),
                             CONCAT11((char)((uint)iVar12 >> 8) + unaff_BL,(char)iVar12));
  *(short *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (short)ROUND(in_ST2);
  pcVar10 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4b + unaff_RBP * 2);
  *pcVar10 = *pcVar10 + unaff_BL;
  cVar11 = (char)(uVar7 >> 8);
  *pcVar13 = *pcVar13 + cVar11;
  *pcVar8 = *pcVar8 + cVar4;
  bVar5 = cVar4 + cVar11 + unaff_BL;
  uVar7 = CONCAT31(uVar3,bVar5);
  pbVar9 = (byte *)(ulonglong)uVar7;
  *(short *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (short)ROUND(in_ST4);
  pbVar9[0x6b] = pbVar9[0x6b] + (char)iVar12;
  bVar1 = *param_4;
  *param_4 = *param_4 + bVar5;
  *unaff_RSI = *unaff_RSI + bVar5 + CARRY1(bVar1,bVar5);
  *pbVar9 = *pbVar9 + bVar14;
  if (*pbVar9 == 0) {
    pbVar9 = (byte *)(ulonglong)(uVar7 + 0xa0000568);
  }
  bVar1 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar14;
  *(longlong *)(unaff_retaddr + -8) = unaff_retaddr;
  bVar5 = *pbVar9;
  bVar6 = (byte)pbVar9;
  bVar2 = *pbVar9;
  *pbVar9 = bVar2 + bVar6 + CARRY1(bVar1,bVar14);
  *(char *)(param_2 + 0x2a21e00c) =
       *(char *)(param_2 + 0x2a21e00c) + cVar15 +
       (CARRY1(bVar5,bVar6) || CARRY1(bVar2 + bVar6,CARRY1(bVar1,bVar14)));
  cVar15 = cVar15 - unaff_RSI[(longlong)pcVar13];
  cRam00000000e04b71f9 = cRam00000000e04b71f9 + bVar6;
  if (pcVar13 != (char *)0x1) {
    *param_4 = *param_4 + (char)unaff_retaddr + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar9[-0x5bffe41e] = pbVar9[-0x5bffe41e] + cVar15;
  iVar12 = *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(byte *)CONCAT62(uVar16,CONCAT11(cVar15,bVar14)) =
       *(char *)CONCAT62(uVar16,CONCAT11(cVar15,bVar14)) + bVar6;
  *pbVar9 = *pbVar9 + bVar6;
  pcVar10 = (char *)((ulonglong)pbVar9 ^ 0xe);
  cVar4 = (char)((ulonglong)pbVar9 >> 8);
  pcVar10[-0x4fffe41e] = pcVar10[-0x4fffe41e] + cVar4;
  if (iVar12 * 0x21 == 1) {
    pcVar10 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x521004b +
                      unaff_RBP * 2);
    *pcVar10 = *pcVar10 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar10 = *pcVar10 + (char)pcVar10;
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

