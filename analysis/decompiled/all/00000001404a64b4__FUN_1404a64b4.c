// Function: FUN_1404a64b4
// Addr: 1404a64b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a64b4(byte *param_1,uint *param_2)

{
  byte bVar1;
  undefined2 uVar3;
  byte bVar4;
  uint uVar5;
  byte bVar9;
  uint uVar6;
  char cVar8;
  byte bVar10;
  char *in_RAX;
  byte *pbVar11;
  byte bVar12;
  char cVar13;
  undefined6 uVar14;
  uint unaff_ESI;
  ulonglong uVar15;
  bool bVar16;
  char in_AF;
  byte bVar2;
  uint *puVar7;
  
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar13 = (char)((ulonglong)param_2 >> 8);
  bVar12 = (byte)param_2;
  cVar8 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar8;
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + bVar12;
  uVar5 = (uint)in_RAX ^ 0x351f0009;
  puVar7 = (uint *)(ulonglong)uVar5;
  *puVar7 = *puVar7 | uVar5;
  *param_1 = *param_1 + cVar8;
  uVar5 = uVar5 | *(uint *)((longlong)puVar7 * 2);
  uVar15 = (ulonglong)(unaff_ESI | (uint)&stack0x00000000);
  bVar4 = (char)uVar5 + 0x34;
  uVar6 = CONCAT31((int3)(uVar5 >> 8),bVar4);
  puVar7 = (uint *)(ulonglong)uVar6;
  *puVar7 = *puVar7 | uVar6;
  uVar3 = (undefined2)(uVar5 >> 0x10);
  puVar7 = (uint *)((ulonglong)
                    CONCAT22(uVar3,CONCAT11(((int)*puVar7 < 0) << 7 | (*puVar7 == 0) << 6 |
                                            in_AF << 4 | ((POPCOUNT(*puVar7 & 0xff) & 1U) == 0) << 2
                                            ,bVar4)) | 0x200);
  *puVar7 = *puVar7 | (uint)puVar7;
  bVar10 = *param_1;
  bVar9 = (byte)((ulonglong)puVar7 >> 8);
  *param_1 = *param_1 + bVar9;
  pbVar11 = (byte *)((longlong)puVar7 * 2);
  bVar1 = *pbVar11;
  bVar2 = *pbVar11;
  *pbVar11 = bVar2 + bVar4 + CARRY1(bVar10,bVar9);
  pbVar11 = (byte *)((longlong)param_2 + uVar15 * 2);
  *pbVar11 = *pbVar11 + cVar13 + (CARRY1(bVar1,bVar4) || CARRY1(bVar2 + bVar4,CARRY1(bVar10,bVar9)))
  ;
  param_1 = param_1 + uVar15 * 2;
  *param_1 = *param_1 | bVar9;
  puVar7 = (uint *)((ulonglong)
                    CONCAT22(uVar3,CONCAT11(((char)*param_1 < '\0') << 7 | (*param_1 == 0) << 6 |
                                            in_AF << 4 | ((POPCOUNT(*param_1) & 1U) == 0) << 2,bVar4
                                           )) | 0x200);
  uVar6 = (uint)puVar7;
  *puVar7 = *puVar7 | uVar6;
  *puVar7 = *puVar7 | uVar6;
  *puVar7 = *puVar7 & uVar6;
  uVar6 = *puVar7;
  *(byte *)puVar7 = (byte)*puVar7 + bVar4;
  bVar10 = ((char)(byte)*puVar7 < '\0') << 7 | ((byte)*puVar7 == 0) << 6 | in_AF << 4 |
           ((POPCOUNT((byte)*puVar7) & 1U) == 0) << 2 | 2U | CARRY1((byte)uVar6,bVar4);
  uVar5 = CONCAT22(uVar3,CONCAT11(bVar10,bVar4));
  puVar7 = (uint *)(ulonglong)uVar5;
  *puVar7 = *puVar7 | uVar5;
  *puVar7 = *puVar7 | uVar5;
  uVar6 = *param_2;
  pbVar11 = (byte *)(ulonglong)uVar6;
  *puVar7 = *puVar7 & uVar5;
  bVar4 = bVar4 + (char)*puVar7;
  uVar5 = CONCAT22(uVar3,CONCAT11(bVar10 + cVar13,bVar4));
  puVar7 = (uint *)(ulonglong)uVar5;
  *puVar7 = *puVar7 | uVar5;
  puVar7 = (uint *)((ulonglong)
                    CONCAT22(uVar3,CONCAT11(((int)*puVar7 < 0) << 7 | (*puVar7 == 0) << 6 |
                                            in_AF << 4 | ((POPCOUNT(*puVar7 & 0xff) & 1U) == 0) << 2
                                            ,bVar4)) | 0x200);
  *puVar7 = *puVar7 | (uint)puVar7;
  *pbVar11 = *pbVar11 + (char)((ulonglong)puVar7 >> 8);
  *(byte *)puVar7 = (char)*puVar7 + bVar4;
  *(char *)((longlong)puVar7 + -0x60fff6ca) = *(char *)((longlong)puVar7 + -0x60fff6ca) + bVar12;
  *puVar7 = *puVar7 | (uint)puVar7;
  bVar10 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar4;
  uVar5 = *puVar7;
  bVar16 = CARRY1((byte)*param_2,bVar12);
  *(byte *)param_2 = (byte)*param_2 + bVar12;
  bVar1 = bVar4 + (char)*puVar7;
  cVar13 = cVar13 + *(byte *)(CONCAT71((int7)((ulonglong)puVar7 >> 8),bVar1 + bVar16) +
                             (longlong)param_2) +
           (CARRY1(bVar4,(byte)*puVar7) || CARRY1(bVar1,bVar16));
  cVar8 = *(char *)CONCAT62(uVar14,CONCAT11(cVar13,bVar12));
  *(byte *)CONCAT62(uVar14,CONCAT11(cVar13,bVar12)) =
       *(char *)CONCAT62(uVar14,CONCAT11(cVar13,bVar12)) + bVar12;
  if (CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + (char)uVar5 + CARRY1(bVar10,bVar4)) != 1 &&
      *(char *)CONCAT62(uVar14,CONCAT11(cVar13,bVar12)) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(cVar8,bVar12)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

