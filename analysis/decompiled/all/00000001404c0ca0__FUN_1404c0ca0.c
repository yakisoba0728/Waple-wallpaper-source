// Function: FUN_1404c0ca0
// Addr: 1404c0ca0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c0cb3) overlaps instruction at (ram,0x0001404c0cb2)
    */

void FUN_1404c0ca0(uint param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  undefined3 uVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  undefined8 in_RAX;
  char *pcVar11;
  uint *puVar12;
  int *piVar14;
  uint uVar16;
  char *pcVar17;
  byte bVar18;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  longlong unaff_RDI;
  char in_R11B;
  char unaff_R12B;
  byte *pbVar13;
  undefined7 uVar15;
  
  bVar18 = (byte)param_2;
  pbVar13 = unaff_RSI + 1;
  bVar5 = *unaff_RSI;
  uVar15 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar11 = (char *)CONCAT71(uVar15,bVar5);
  param_1 = param_1 | *(uint *)((longlong)pcVar11 * 2 + 0x21);
  pcVar17 = (char *)(ulonglong)param_1;
  *param_2 = *param_2 | bVar5;
  *pcVar11 = *pcVar11 + (char)param_1;
  if (*pcVar11 < '\0') {
    pcVar11 = (char *)CONCAT71(uVar15,bVar5 * '\x02');
    pcVar17 = (char *)(ulonglong)(param_1 | *(uint *)((longlong)pcVar11 * 2 + 0x21));
  }
  else {
    pcVar11[-0x7dffd75a] = pcVar11[-0x7dffd75a] + unaff_BH;
    unaff_RDI = unaff_RDI + 4;
    pbVar13 = unaff_RSI + 5;
    *pcVar11 = *pcVar11 - bVar5;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) >> 4 |
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 4;
    *pcVar17 = *pcVar17 + (char)((ulonglong)in_RAX >> 8);
  }
  bVar5 = (byte)pcVar11;
  *pcVar11 = *pcVar11 + bVar5;
  pcVar11[-0x7dffd75a] = pcVar11[-0x7dffd75a] + unaff_BH;
  pbVar2 = (byte *)(unaff_RDI + 4);
  pbVar1 = pbVar13 + 4;
  *pcVar11 = *pcVar11 - bVar5;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) >> 4 |
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 4;
  *pcVar17 = *pcVar17 + (char)((ulonglong)pcVar11 >> 8);
  *param_2 = *param_2 | bVar5;
  *pcVar11 = *pcVar11 + (char)pcVar17;
  uVar15 = (undefined7)((ulonglong)pcVar11 >> 8);
  pcVar11 = (char *)((ulonglong)pcVar11 ^ 0x16);
  pbVar13[-0x54] = pbVar13[-0x54] + unaff_BL;
  *pcVar11 = *pcVar11 - (char)pcVar11;
  cVar6 = (char)pcVar11 + (char)((ulonglong)pcVar17 >> 8);
  pcVar11 = (char *)CONCAT71(uVar15,cVar6);
  uVar16 = (uint)pcVar17 | *(uint *)((longlong)pcVar11 * 2 + 0x21);
  *pcVar11 = *pcVar11 + cVar6;
  pbVar13[-0x54] = pbVar13[-0x54] + unaff_BL;
  *pcVar11 = *pcVar11 - cVar6;
  cVar6 = cVar6 + (char)(uVar16 >> 8);
  uVar16 = uVar16 | *(uint *)(CONCAT71(uVar15,cVar6) * 2 + 1);
  puVar12 = (uint *)CONCAT71(uVar15,cVar6 + -6);
  pbVar13 = (byte *)((ulonglong)uVar16 + (longlong)puVar12);
  bVar5 = *pbVar13;
  *pbVar13 = *pbVar13 + unaff_BL;
  bVar9 = bRam00000001619c195d;
  uVar3 = (uint)puVar12 - *puVar12;
  uVar10 = (uVar3 - CARRY1(bVar5,unaff_BL)) + (int)pbVar1 +
           (uint)((uint)puVar12 < *puVar12 || uVar3 < CARRY1(bVar5,unaff_BL));
  pcVar17 = (char *)(ulonglong)CONCAT31((int3)(uVar16 >> 8),bRam00000001619c195d);
  bVar8 = (byte)uVar10;
  bRam00000001619c195d = bRam00000001619c195d + (char)uVar16;
  *(byte *)((ulonglong)uVar10 * 2) = *(byte *)((ulonglong)uVar10 * 2) | bVar8;
  param_2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] |
       (byte)((ulonglong)param_2 >> 8);
  uVar4 = (undefined3)(uVar10 >> 8);
  bVar7 = bVar8 + 0x34;
  pbVar13 = (byte *)(ulonglong)CONCAT31(uVar4,bVar7);
  *pbVar13 = *pbVar13 & bVar7;
  pcVar17[-0x56bfffd8] = pcVar17[-0x56bfffd8] + (char)(uVar16 >> 8);
  bVar5 = *pbVar13;
  *pbVar13 = *pbVar13 - bVar7;
  bVar8 = (bVar8 + 0x28) - (bVar5 < bVar7);
  *pcVar17 = *pcVar17 + unaff_R12B;
  bVar5 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar9;
  *(char *)(ulonglong)CONCAT31(uVar4,bVar8) =
       (*(char *)(ulonglong)CONCAT31(uVar4,bVar8) - bVar8) - CARRY1(bVar5,bVar9);
  uVar3 = CONCAT31(uVar4,bVar8 - 0x2c);
  piVar14 = (int *)(ulonglong)uVar3;
  *piVar14 = (*piVar14 - uVar3) - (uint)(0x2b < bVar8);
  *(byte *)piVar14 = (char)*piVar14 - (bVar8 - 0x2c);
  bVar9 = bVar8 - 0x38;
  pbVar13 = (byte *)(ulonglong)CONCAT31(uVar4,bVar9);
  *pcVar17 = *pcVar17 + unaff_R12B;
  *param_2 = *param_2 + bVar9;
  *pbVar13 = *pbVar13 + bVar9;
  *pbVar13 = *pbVar13 - bVar9;
  *pcVar17 = *pcVar17 + unaff_R12B;
  *pbVar13 = *pbVar13 + bVar9;
  pbVar13[-0x57] = pbVar13[-0x57] + bVar9;
  *pbVar13 = *pbVar13 - bVar9;
  *pcVar17 = *pcVar17 + unaff_R12B;
  *pbVar1 = *pbVar1 + bVar9;
  bVar5 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar9;
  *pbVar13 = (*pbVar13 - bVar9) - CARRY1(bVar5,bVar9);
  bVar5 = (byte)(uVar10 >> 8);
  uVar3 = CONCAT22((short)(uVar10 >> 0x10),CONCAT11(bVar5 + bVar18,bVar9));
  piVar14 = (int *)(ulonglong)uVar3;
  *piVar14 = (*piVar14 - uVar3) - (uint)CARRY1(bVar5,bVar18);
  *(byte *)piVar14 = (char)*piVar14 - bVar9;
  cVar6 = bVar8 + 0xbc;
  pcVar11 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar6);
  *pcVar17 = *pcVar17 + unaff_R12B;
  *pcVar11 = *pcVar11 + cVar6;
  *pcVar11 = *pcVar11 + bVar18;
  *pcVar11 = *pcVar11 - cVar6;
  *pcVar17 = *pcVar17 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

