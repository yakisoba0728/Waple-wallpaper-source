// Function: FUN_1404af8fc
// Addr: 1404af8fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404af916) overlaps instruction at (ram,0x0001404af913)
    */

void FUN_1404af8fc(char *param_1,char param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  byte bVar11;
  undefined8 in_RAX;
  undefined7 uVar13;
  int *piVar7;
  ulonglong uVar8;
  byte bVar12;
  char *pcVar10;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  byte *unaff_RSI;
  undefined4 *unaff_RDI;
  char in_AF;
  byte *pbVar9;
  
  uVar13 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (char)in_RAX - 0x10;
  *(uint *)(unaff_RSI + 0x12) = *(uint *)(unaff_RSI + 0x12) & (uint)param_1;
  unaff_RSI[-0x78] = unaff_RSI[-0x78] + (char)param_1;
  bVar2 = bVar2 | *(byte *)CONCAT71(uVar13,bVar2);
  piVar7 = (int *)CONCAT71(uVar13,bVar2);
  bVar12 = (byte)((ulonglong)unaff_RBX >> 8);
  if (-1 < (char)bVar2) {
    cRam00000001754b0579 = cRam00000001754b0579 + bVar12;
    in(0x1a);
    cRam00000001654b14ed = cRam00000001654b14ed + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = (int)piVar7 - *piVar7 & 0x1d001cc4;
  if (uVar6 != 0) {
    cRam00000001484b1b89 = cRam00000001484b1b89 + param_2;
    *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 & uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1;
  uVar8 = (ulonglong)((ushort)(CONCAT11(in_AF << 4,bVar12) | 0x4400) | 0x200) & 0xffffffffffffff08;
  pcVar10 = (char *)(uVar8 + unaff_RBP * 8);
  *pcVar10 = *pcVar10 + (char)(uVar8 >> 8);
  bVar12 = bVar12 & 8;
  bVar2 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + bVar12;
  bVar3 = CARRY1(bVar2,bVar12) + 7;
  pbVar9 = (byte *)CONCAT71(0x9f4200,bVar3);
  bVar2 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar3;
  bVar11 = ((char)*pbVar9 < '\0') << 7 | (*pbVar9 == 0) << 6 | in_AF << 4 |
           ((POPCOUNT(*pbVar9) & 1U) == 0) << 2 | 2U | CARRY1(bVar2,bVar3);
  bVar4 = bVar3 + CARRY1(bVar2,bVar3);
  pbRam0021004af8640014 =
       (byte *)CONCAT71((int7)(CONCAT62(0x9f42,CONCAT11(bVar11,bVar3)) >> 8),bVar4);
  bVar2 = *pbRam0021004af8640014;
  *pbRam0021004af8640014 = *pbRam0021004af8640014 + bVar4;
  *unaff_RDI = *(undefined4 *)unaff_RSI;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)unaff_RBX - bVar12) & 0xffffffff;
  bVar12 = (byte)uVar8;
  bVar1 = CARRY1(bVar12,CARRY1(bVar2,bVar4));
  cVar5 = bVar12 + CARRY1(bVar2,bVar4);
  bVar12 = (cVar5 < '\0') << 7 | (cVar5 == '\0') << 6 | in_AF << 4 |
           ((POPCOUNT(cVar5) & 1U) == 0) << 2 | 2U | bVar1;
  bVar11 = cVar5 + bVar1 ^ bVar11;
  pcVar10 = (char *)CONCAT71((int7)(CONCAT62((int6)(uVar8 >> 0x10),CONCAT11(bVar12,cVar5)) >> 8),
                             bVar11);
  *param_1 = *param_1;
  *pcVar10 = *pcVar10 + bVar11;
  pbVar9 = (byte *)(pcVar10 + -0x6d);
  bVar2 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar12;
  unaff_RDI[1] = *(undefined4 *)(unaff_RSI + 4);
  *param_1 = *param_1 + (bVar4 + CARRY1(bVar11,CARRY1(bVar2,bVar12)) & 0xf8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

