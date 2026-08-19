// Function: FUN_1404a649c
// Addr: 1404a649c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a649c(undefined8 param_1,uint *param_2)

{
  byte bVar1;
  undefined2 uVar3;
  byte bVar4;
  uint uVar5;
  byte bVar10;
  uint uVar6;
  char cVar9;
  byte bVar11;
  undefined8 in_RAX;
  uint *puVar7;
  byte *pbVar12;
  byte *pbVar13;
  byte bVar14;
  byte bVar15;
  char cVar16;
  undefined6 uVar17;
  uint unaff_ESI;
  ulonglong uVar18;
  bool bVar19;
  char in_AF;
  byte bVar2;
  uint *puVar8;
  
  uVar17 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar15 = (byte)((ulonglong)param_2 >> 8);
  bVar14 = (byte)param_2;
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x35,(char)in_RAX));
  *puVar7 = *puVar7 | (uint)puVar7;
  puVar8 = (uint *)((ulonglong)&stack0x00000000 & 0xffffffff);
  pbVar12 = (byte *)(ulonglong)*param_2;
  *puVar8 = *puVar8 & (uint)&stack0x00000000;
  uVar6 = *puVar8;
  bVar11 = (byte)((ulonglong)puVar8 >> 8);
  cVar9 = bVar11 + bVar15;
  puVar8 = (uint *)CONCAT62((int6)((ulonglong)puVar8 >> 0x10),CONCAT11(cVar9,(char)uVar6));
  cRam00000001756964bb = cRam00000001756964bb + bVar15 + CARRY1(bVar11,bVar15);
  *puVar8 = *puVar8 | (uint)puVar8;
  *pbVar12 = *pbVar12 + cVar9;
  *(char *)puVar8 = (char)*puVar8 + (char)uVar6;
  *(byte *)puVar8 = (char)*puVar8 + bVar14;
  uVar5 = (uint)puVar8 ^ 0x351f0009;
  puVar8 = (uint *)(ulonglong)uVar5;
  *puVar8 = *puVar8 | uVar5;
  *pbVar12 = *pbVar12 + cVar9;
  uVar5 = uVar5 | *(uint *)((longlong)puVar8 * 2);
  uVar18 = (ulonglong)(unaff_ESI | (uint)puVar7);
  bVar4 = (char)uVar5 + 0x34;
  uVar6 = CONCAT31((int3)(uVar5 >> 8),bVar4);
  puVar8 = (uint *)(ulonglong)uVar6;
  *puVar8 = *puVar8 | uVar6;
  uVar3 = (undefined2)(uVar5 >> 0x10);
  puVar8 = (uint *)((ulonglong)
                    CONCAT22(uVar3,CONCAT11(((int)*puVar8 < 0) << 7 | (*puVar8 == 0) << 6 |
                                            in_AF << 4 | ((POPCOUNT(*puVar8 & 0xff) & 1U) == 0) << 2
                                            ,bVar4)) | 0x200);
  *puVar8 = *puVar8 | (uint)puVar8;
  bVar11 = *pbVar12;
  bVar10 = (byte)((ulonglong)puVar8 >> 8);
  *pbVar12 = *pbVar12 + bVar10;
  pbVar13 = (byte *)((longlong)puVar8 * 2);
  bVar1 = *pbVar13;
  bVar2 = *pbVar13;
  *pbVar13 = bVar2 + bVar4 + CARRY1(bVar11,bVar10);
  pbVar13 = (byte *)((longlong)param_2 + uVar18 * 2);
  *pbVar13 = *pbVar13 + bVar15 +
             (CARRY1(bVar1,bVar4) || CARRY1(bVar2 + bVar4,CARRY1(bVar11,bVar10)));
  pbVar12 = pbVar12 + uVar18 * 2;
  *pbVar12 = *pbVar12 | bVar10;
  puVar8 = (uint *)((ulonglong)
                    CONCAT22(uVar3,CONCAT11(((char)*pbVar12 < '\0') << 7 | (*pbVar12 == 0) << 6 |
                                            in_AF << 4 | ((POPCOUNT(*pbVar12) & 1U) == 0) << 2,bVar4
                                           )) | 0x200);
  uVar6 = (uint)puVar8;
  *puVar8 = *puVar8 | uVar6;
  *puVar8 = *puVar8 | uVar6;
  *puVar8 = *puVar8 & uVar6;
  uVar6 = *puVar8;
  *(byte *)puVar8 = (byte)*puVar8 + bVar4;
  bVar11 = ((char)(byte)*puVar8 < '\0') << 7 | ((byte)*puVar8 == 0) << 6 | in_AF << 4 |
           ((POPCOUNT((byte)*puVar8) & 1U) == 0) << 2 | 2U | CARRY1((byte)uVar6,bVar4);
  uVar5 = CONCAT22(uVar3,CONCAT11(bVar11,bVar4));
  puVar8 = (uint *)(ulonglong)uVar5;
  *puVar8 = *puVar8 | uVar5;
  *puVar8 = *puVar8 | uVar5;
  uVar6 = *param_2;
  pbVar13 = (byte *)(ulonglong)uVar6;
  *puVar8 = *puVar8 & uVar5;
  bVar4 = bVar4 + (char)*puVar8;
  uVar5 = CONCAT22(uVar3,CONCAT11(bVar11 + bVar15,bVar4));
  puVar8 = (uint *)(ulonglong)uVar5;
  *puVar8 = *puVar8 | uVar5;
  puVar8 = (uint *)((ulonglong)
                    CONCAT22(uVar3,CONCAT11(((int)*puVar8 < 0) << 7 | (*puVar8 == 0) << 6 |
                                            in_AF << 4 | ((POPCOUNT(*puVar8 & 0xff) & 1U) == 0) << 2
                                            ,bVar4)) | 0x200);
  *puVar8 = *puVar8 | (uint)puVar8;
  *pbVar13 = *pbVar13 + (char)((ulonglong)puVar8 >> 8);
  *(byte *)puVar8 = (char)*puVar8 + bVar4;
  *(char *)((longlong)puVar8 + -0x60fff6ca) = *(char *)((longlong)puVar8 + -0x60fff6ca) + bVar14;
  *puVar8 = *puVar8 | (uint)puVar8;
  bVar11 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar4;
  uVar5 = *puVar8;
  bVar19 = CARRY1((byte)*param_2,bVar14);
  *(byte *)param_2 = (byte)*param_2 + bVar14;
  *(ulonglong *)(((ulonglong)puVar7 & 0xffffffff) - 8) = (ulonglong)puVar7 & 0xffffffff;
  bVar1 = bVar4 + (char)*puVar8;
  cVar16 = bVar15 + *(byte *)(CONCAT71((int7)((ulonglong)puVar8 >> 8),bVar1 + bVar19) +
                             (longlong)param_2) +
           (CARRY1(bVar4,(byte)*puVar8) || CARRY1(bVar1,bVar19));
  cVar9 = *(char *)CONCAT62(uVar17,CONCAT11(cVar16,bVar14));
  *(byte *)CONCAT62(uVar17,CONCAT11(cVar16,bVar14)) =
       *(char *)CONCAT62(uVar17,CONCAT11(cVar16,bVar14)) + bVar14;
  if (CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + (char)uVar5 + CARRY1(bVar11,bVar4)) != 1 &&
      *(char *)CONCAT62(uVar17,CONCAT11(cVar16,bVar14)) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(cVar9,bVar14)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

