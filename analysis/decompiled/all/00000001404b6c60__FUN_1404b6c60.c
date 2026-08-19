// Function: FUN_1404b6c60
// Addr: 1404b6c60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b6cc6) overlaps instruction at (ram,0x0001404b6cc5)
    */

void FUN_1404b6c60(undefined8 param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  char *in_RAX;
  char *pcVar7;
  uint uVar8;
  byte bVar9;
  char cVar10;
  undefined6 uVar11;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  float10 in_ST1;
  longlong unaff_retaddr;
  byte *pbVar6;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)((ulonglong)param_2 >> 8);
  bVar9 = (byte)param_2;
  uVar8 = *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 0x21;
  *in_RAX = *in_RAX + (char)in_RAX;
  bVar4 = (char)in_RAX + (char)((ulonglong)in_RAX >> 8) + unaff_BL;
  pbVar6 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4);
  *(short *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (short)ROUND(in_ST1);
  pbVar6[0x6b] = pbVar6[0x6b] + (char)uVar8;
  bVar1 = *param_4;
  *param_4 = *param_4 + bVar4;
  *unaff_RSI = *unaff_RSI + bVar4 + CARRY1(bVar1,bVar4);
  *pbVar6 = *pbVar6 + bVar9;
  if (*pbVar6 == 0) {
    pbVar6 = (byte *)(ulonglong)((int)pbVar6 + 0xa0000568);
  }
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar9;
  *(longlong *)(unaff_retaddr + -8) = unaff_retaddr;
  bVar4 = *pbVar6;
  bVar5 = (byte)pbVar6;
  bVar2 = *pbVar6;
  *pbVar6 = bVar2 + bVar5 + CARRY1(bVar1,bVar9);
  *(char *)(param_2 + 0x2a21e00c) =
       *(char *)(param_2 + 0x2a21e00c) + cVar10 +
       (CARRY1(bVar4,bVar5) || CARRY1(bVar2 + bVar5,CARRY1(bVar1,bVar9)));
  cVar10 = cVar10 - unaff_RSI[uVar8];
  cRam00000000e04b71f9 = cRam00000000e04b71f9 + bVar5;
  if ((ulonglong)uVar8 != 1) {
    *param_4 = *param_4 + (char)unaff_retaddr + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar6[-0x5bffe41e] = pbVar6[-0x5bffe41e] + cVar10;
  iVar3 = *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(byte *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) + bVar5;
  *pbVar6 = *pbVar6 + bVar5;
  pcVar7 = (char *)((ulonglong)pbVar6 ^ 0xe);
  cVar10 = (char)((ulonglong)pbVar6 >> 8);
  pcVar7[-0x4fffe41e] = pcVar7[-0x4fffe41e] + cVar10;
  if (iVar3 * 0x21 == 1) {
    pcVar7 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x521004b +
                     unaff_RBP * 2);
    *pcVar7 = *pcVar7 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar7 = *pcVar7 + (char)pcVar7;
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

