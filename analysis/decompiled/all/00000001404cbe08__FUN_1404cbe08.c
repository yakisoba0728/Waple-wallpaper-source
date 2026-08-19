// Function: FUN_1404cbe08
// Addr: 1404cbe08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbe80) overlaps instruction at (ram,0x0001404cbe7f)
    */

void FUN_1404cbe08(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined3 uVar5;
  uint *puVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint *in_RAX;
  int *piVar12;
  undefined7 uVar16;
  ulonglong uVar15;
  char cVar17;
  undefined7 uVar18;
  byte bVar19;
  byte bVar20;
  undefined6 uVar21;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint uVar22;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  bool bVar23;
  undefined *puStack_8;
  char *pcVar13;
  byte *pbVar14;
  
  uVar21 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar20 = (byte)((ulonglong)param_2 >> 8);
  bVar19 = (byte)param_2;
  uVar18 = (undefined7)((ulonglong)param_1 >> 8);
  cVar17 = (char)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar9 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar9;
  if ((POPCOUNT((char)*in_RAX) & 1U) != 0) {
    uVar10 = *in_RAX;
    *(char *)in_RAX = (char)*in_RAX + cVar9;
    if (SCARRY1((char)uVar10,cVar9) == (char)*in_RAX < '\0') {
      unaff_RSI[0x7c] = unaff_RSI[0x7c] + cVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar13 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x7b);
  *pcVar13 = *pcVar13 + (char)((ulonglong)in_RAX >> 8);
  pbVar3 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  puStack_8 = &UNK_1404cbe1a;
  piVar12 = (int *)func_0x00015365be63();
  *piVar12 = *piVar12 + (int)piVar12;
  uVar16 = (undefined7)((ulonglong)piVar12 >> 8);
  bVar7 = (char)piVar12 + 0x22;
  pcVar13 = (char *)CONCAT71(uVar16,bVar7);
  *pcVar13 = *pcVar13 + bVar7;
  pcVar13 = (char *)CONCAT71(uVar16,bVar7 & bVar19);
  *pcVar13 = *pcVar13 + cVar17;
  *pcVar13 = *pcVar13 + (bVar7 & bVar19);
  *(char *)CONCAT71(uVar18,cVar17) =
       *(char *)CONCAT71(uVar18,cVar17) + (char)((ulonglong)piVar12 >> 8);
  uVar10 = (int)pcVar13 + 0x74050002;
  pbVar14 = (byte *)(ulonglong)uVar10;
  bVar8 = (byte)uVar10;
  *pbVar14 = *pbVar14 | bVar8;
  pbVar1 = pbVar3 + (longlong)&stack0x00000000;
  bVar7 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  uVar5 = (undefined3)(uVar10 >> 8);
  if (SCARRY1(bVar7,unaff_BH) == (char)*pbVar1 < '\0') {
    pbVar14[(longlong)pbVar3 * 8 + 0x210049] = pbVar14[(longlong)pbVar3 * 8 + 0x210049] + cVar17;
    cVar9 = bVar8 + *pbVar14;
    uVar2 = CONCAT31(uVar5,cVar9);
    pcVar13 = (char *)(ulonglong)uVar2;
    pcVar13[CONCAT71(uVar18,cVar17)] = pcVar13[CONCAT71(uVar18,cVar17)] + bVar20;
    pbVar1 = pbVar3 + (longlong)&stack0x00000000;
    bVar7 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BH;
    if (SCARRY1(bVar7,unaff_BH) == (char)*pbVar1 < '\0') {
      pcVar13[(longlong)pbVar3 * 8 + 0x210049] = pcVar13[(longlong)pbVar3 * 8 + 0x210049] + cVar17;
      *pcVar13 = *pcVar13 + cVar9;
      pbVar1 = pbVar3 + (longlong)&stack0x00000000;
      bVar7 = *pbVar1;
      *pbVar1 = *pbVar1 + unaff_BH;
      if (SCARRY1(bVar7,unaff_BH) == (char)*pbVar1 < '\0') {
        pcVar13[(longlong)pbVar3 * 8 + 0x21190049] =
             pcVar13[(longlong)pbVar3 * 8 + 0x21190049] + cVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar7 = *(byte *)CONCAT71(uVar18,cVar17);
      bVar8 = (byte)(uVar10 >> 8);
      *(byte *)CONCAT71(uVar18,cVar17) = *(char *)CONCAT71(uVar18,cVar17) + bVar8;
      uVar10 = (uint)CARRY1(bVar7,bVar8);
      uVar4 = uVar2 + *(uint *)((longlong)pcVar13 * 2);
      iVar11 = uVar4 + uVar10;
      uVar22 = (uint)&stack0x00000000;
      bVar7 = (char)iVar11 +
              (CARRY4(uVar22,uVar22) ||
              CARRY4(uVar22 * 2,
                     (uint)(CARRY4(uVar2,*(uint *)((longlong)pcVar13 * 2)) || CARRY4(uVar4,uVar10)))
              );
      uVar10 = CONCAT22((short)((uint)iVar11 >> 0x10),
                        CONCAT11((byte)((uint)iVar11 >> 8) | bVar7,bVar7)) + 0x34ec1e00;
      unaff_RDI[-0x12] = unaff_RDI[-0x12] + (char)(uVar10 >> 8);
      *(char *)CONCAT71(uVar18,cVar17) = *(char *)CONCAT71(uVar18,cVar17) + unaff_R12B;
      *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + (char)uVar10;
      *pbVar3 = *pbVar3 + unaff_BL;
      in(CONCAT11(bVar20,bVar19));
      uVar10 = in(CONCAT11(bVar20,bVar19));
      pcVar13 = (char *)(ulonglong)uVar10;
      *(char *)CONCAT71(uVar18,cVar17) = *(char *)CONCAT71(uVar18,cVar17) + unaff_R12B;
      *pcVar13 = *pcVar13 + cVar17;
      *pcVar13 = *pcVar13 + (char)uVar10;
      cVar9 = in(0x14);
      pcVar13 = (char *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),cVar9);
      *pcVar13 = *pcVar13 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar13 = *pcVar13 + cVar17;
    uVar15 = (ulonglong)CONCAT31(uVar5,cVar9) ^ 0x1e;
  }
  else {
    bVar23 = *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) < '\0';
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 1 | bVar23;
    if (bVar23 != *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) < '\0') {
      *pbVar3 = *pbVar3 >> 1;
      pbVar14[0x21000000] = pbVar14[0x21000000] + bVar19;
    }
    uVar4 = CONCAT31(uVar5,bVar8 & bVar19);
    uVar15 = (ulonglong)uVar4;
    pbVar1 = (byte *)(uVar15 + 0x21000000);
    bVar7 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar19;
    puVar6 = (uint *)(uVar15 * 2);
    uVar10 = *puVar6;
    uVar2 = *puVar6;
    *puVar6 = (uVar2 - uVar4) - (uint)CARRY1(bVar7,bVar19);
    *(uint *)(pbVar3 + CONCAT62(uVar21,CONCAT11(bVar20,bVar19))) =
         (*(int *)(pbVar3 + CONCAT62(uVar21,CONCAT11(bVar20,bVar19))) - (int)&puStack_8) -
         (uint)(uVar10 < uVar4 || uVar2 - uVar4 < (uint)CARRY1(bVar7,bVar19));
    pbVar3[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
         pbVar3[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] | bVar20;
  }
  *(char *)(uVar15 - 0x15) = *(char *)(uVar15 - 0x15) + (char)uVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

