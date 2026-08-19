// Function: FUN_1404becbc
// Addr: 1404becbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404becbc(char *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 in_RAX;
  undefined7 uVar9;
  longlong lVar7;
  byte bVar10;
  char cVar11;
  undefined7 uVar12;
  byte bVar13;
  char cVar14;
  undefined6 uVar15;
  char cVar16;
  char cVar17;
  ulonglong unaff_RBX;
  undefined8 *puVar18;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char *pcVar19;
  ulonglong uVar20;
  longlong unaff_RDI;
  char in_SF;
  char in_OF;
  undefined8 *unaff_retaddr;
  undefined8 auStack_10 [2];
  char *pcVar6;
  byte *pbVar8;
  
  uVar15 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar14 = (char)((ulonglong)param_2 >> 8);
  uVar12 = (undefined7)((ulonglong)param_1 >> 8);
  bVar10 = (byte)param_1;
  if (in_OF == in_SF) {
    pbVar8 = (byte *)(unaff_RBX + 0x7c01004b + unaff_RBP * 8);
    bVar2 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar10;
    *(char *)(unaff_RBX - 0x18) =
         *(char *)(unaff_RBX - 0x18) +
         (char)((int)in_RAX + 0x2f87c00 + (uint)CARRY1(bVar2,bVar10) >> 8);
    puVar18 = auStack_10 + 1;
    cVar14 = '\x05';
    do {
      unaff_retaddr = unaff_retaddr + -1;
      puVar18 = puVar18 + -1;
      *puVar18 = *unaff_retaddr;
      cVar14 = cVar14 + -1;
    } while ('\0' < cVar14);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar1 = in((short)param_2);
  pcVar6 = (char *)CONCAT71(uVar9,cVar1);
  *param_4 = *param_4;
  *pcVar6 = *pcVar6 + cVar1;
  pcVar6[-0x6e] = pcVar6[-0x6e] + cVar14;
  *(char *)(unaff_RDI + 0x4c002692) = *(char *)(unaff_RDI + 0x4c002692) + (byte)param_2;
  bVar2 = in((short)param_2);
  *param_4 = *param_4;
  lVar7 = CONCAT71(uVar9,bVar2 | *(byte *)(CONCAT71(uVar9,bVar2) * 2));
  bVar13 = (byte)param_2 | *(byte *)(unaff_RDI + lVar7);
  iVar3 = (int)lVar7;
  pcVar6 = (char *)(unaff_RBX & 0xffffffff);
  cVar1 = (char)((ulonglong)pcVar6 >> 8);
  param_1[-0x6d] = param_1[-0x6d] + cVar1;
  (&stack0x0000004b)[unaff_RBP * 8] = (&stack0x0000004b)[unaff_RBP * 8] + bVar10;
  *param_1 = *param_1 + cVar1;
  *pcVar6 = *pcVar6 + (char)pcVar6;
  *pcVar6 = *pcVar6 + cVar14;
  cVar1 = (char)((uint)(iVar3 + 0x30000634) >> 8);
  param_1[-0x6d] = param_1[-0x6d] + cVar1;
  (&stack0x0000004b)[unaff_RBP * 8] = (&stack0x0000004b)[unaff_RBP * 8] + bVar10;
  *param_1 = *param_1 + cVar1;
  uVar4 = iVar3 + 0x64050636;
  pbVar8 = (byte *)(ulonglong)uVar4;
  bVar2 = (byte)uVar4;
  *pbVar8 = *pbVar8 | bVar2;
  *(char *)(unaff_RSI + 0x2694d900) = *(char *)(unaff_RSI + 0x2694d900) + bVar13;
  cVar17 = (char)((unaff_RBX & 0xffffffff) >> 8);
  pbVar8[0x1f] = pbVar8[0x1f] + cVar17;
  *param_1 = *param_1;
  *(byte *)CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) =
       *(char *)CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) + bVar2;
  *pbVar8 = *pbVar8 + bVar2;
  pcVar6 = (char *)((ulonglong)uVar4 ^ 8);
  cVar1 = (char)pcVar6;
  *pcVar6 = *pcVar6 + cVar1;
  cVar16 = (char)(unaff_RBX & 0xffffffff);
  cVar11 = bVar10 + cVar16;
  pcVar6[0x1f] = pcVar6[0x1f] + cVar17;
  *(undefined1 *)CONCAT71(uVar12,cVar11) = *(undefined1 *)CONCAT71(uVar12,cVar11);
  *pcVar6 = *pcVar6 + cVar1;
  *pcVar6 = *pcVar6 + cVar1;
  cVar11 = cVar11 + cVar16;
  pcVar6[0x1f] = pcVar6[0x1f] + cVar17;
  *(undefined1 *)CONCAT71(uVar12,cVar11) = *(undefined1 *)CONCAT71(uVar12,cVar11);
  uVar5 = (int)pcVar6 + 0x34050002;
  pbVar8 = (byte *)(ulonglong)uVar5;
  *pbVar8 = *pbVar8 | (byte)uVar5;
  *(byte *)(unaff_RSI + -0x698bffda) = *(byte *)(unaff_RSI + -0x698bffda) & bVar13;
  pbVar8[unaff_RSI * 8 + 0x13210049] = pbVar8[unaff_RSI * 8 + 0x13210049] + bVar13;
  uVar4 = (int)unaff_RSI + (int)&stack0x00000000;
  uVar5 = CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 | *(byte *)(ulonglong)uVar5) + 0x74000954;
  pcVar6 = (char *)(ulonglong)uVar4;
  pcVar19 = (char *)(ulonglong)uVar5;
  pcVar19[CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) * 4 + -0x131fffda] =
       pcVar19[CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) * 4 + -0x131fffda] + cVar16;
  *param_4 = *param_4;
  *pcVar6 = *pcVar6 + (char)uVar4;
  pcVar19[CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) * 4 + 0x26] =
       pcVar19[CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) * 4 + 0x26] + cVar14;
  pcVar19[CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) * 4 + -0x131fffda] =
       pcVar19[CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) * 4 + -0x131fffda] + cVar16;
  *param_4 = *param_4;
  *pcVar6 = *pcVar6 + (char)uVar4;
  *pcVar6 = *pcVar6 + (char)(uVar4 >> 8);
  uVar20 = (ulonglong)uVar4;
  pcVar6 = (char *)(uVar20 + 0x26 + CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) * 4);
  *pcVar6 = *pcVar6 + cVar14;
  pcVar19[uVar20 * 8 + 0x210049] = pcVar19[uVar20 * 8 + 0x210049] + bVar13;
  pcVar6 = (char *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + *pcVar19);
  pcVar6[CONCAT71(uVar12,cVar11)] = pcVar6[CONCAT71(uVar12,cVar11)] + cVar14;
  *pcVar6 = *pcVar6 + (char)(uVar5 >> 8);
  pcVar6[CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) * 4 + 0x26] =
       pcVar6[CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) * 4 + 0x26] + cVar14;
  pcVar6 = (char *)(uVar20 + 0x210049 + (longlong)pcVar6 * 8);
  *pcVar6 = *pcVar6 + bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

