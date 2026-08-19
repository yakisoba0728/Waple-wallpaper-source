// Function: FUN_1404bed2c
// Addr: 1404bed2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bed2c(char *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined7 uVar1;
  char cVar2;
  byte bVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar9;
  undefined7 uVar10;
  byte bVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char *pcVar16;
  ulonglong uVar17;
  longlong unaff_RDI;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar12;
  
  uVar10 = (undefined7)((ulonglong)param_1 >> 8);
  cVar9 = (char)param_1;
  iVar4 = in_EAX + 0x70000634;
  uVar1 = (undefined7)((ulonglong)param_2 >> 8);
  bVar11 = (byte)iVar4;
  *(char *)(unaff_RDI + 0x4c002692) = *(char *)(unaff_RDI + 0x4c002692) + bVar11;
  cVar2 = in((short)iVar4);
  pcVar7 = (char *)(CONCAT71(uVar1,cVar2) & 0xffffffff);
  *param_4 = *param_4;
  *pcVar7 = *pcVar7 + cVar2;
  cVar13 = (char)((uint)iVar4 >> 8);
  pcVar7[-0x6e] = pcVar7[-0x6e] + cVar13;
  *(char *)(unaff_RDI + 0x4c002692) = *(char *)(unaff_RDI + 0x4c002692) + bVar11;
  bVar3 = in((short)iVar4);
  *param_4 = *param_4;
  uVar17 = CONCAT71(uVar1,bVar3 | *(byte *)((CONCAT71(uVar1,bVar3) & 0xffffffff) * 2));
  bVar11 = bVar11 | *(byte *)(unaff_RDI + (uVar17 & 0xffffffff));
  pcVar12 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar4 >> 8),bVar11);
  iVar4 = (int)uVar17;
  pcVar7 = (char *)(unaff_RBX & 0xffffffff);
  cVar2 = (char)((ulonglong)pcVar7 >> 8);
  param_1[-0x6d] = param_1[-0x6d] + cVar2;
  (&stack0x0000004b)[unaff_RBP * 8] = (&stack0x0000004b)[unaff_RBP * 8] + cVar9;
  *param_1 = *param_1 + cVar2;
  *pcVar7 = *pcVar7 + (char)pcVar7;
  *pcVar7 = *pcVar7 + cVar13;
  cVar2 = (char)((uint)(iVar4 + 0x30000634) >> 8);
  param_1[-0x6d] = param_1[-0x6d] + cVar2;
  (&stack0x0000004b)[unaff_RBP * 8] = (&stack0x0000004b)[unaff_RBP * 8] + cVar9;
  *param_1 = *param_1 + cVar2;
  uVar5 = iVar4 + 0x64050636;
  pbVar8 = (byte *)(ulonglong)uVar5;
  bVar3 = (byte)uVar5;
  *pbVar8 = *pbVar8 | bVar3;
  *(char *)(unaff_RSI + 0x2694d900) = *(char *)(unaff_RSI + 0x2694d900) + bVar11;
  cVar15 = (char)((unaff_RBX & 0xffffffff) >> 8);
  pbVar8[0x1f] = pbVar8[0x1f] + cVar15;
  *param_1 = *param_1;
  *pcVar12 = *pcVar12 + bVar3;
  *pbVar8 = *pbVar8 + bVar3;
  pcVar7 = (char *)((ulonglong)uVar5 ^ 8);
  cVar2 = (char)pcVar7;
  *pcVar7 = *pcVar7 + cVar2;
  cVar14 = (char)(unaff_RBX & 0xffffffff);
  cVar9 = cVar9 + cVar14;
  pcVar7[0x1f] = pcVar7[0x1f] + cVar15;
  *(undefined1 *)CONCAT71(uVar10,cVar9) = *(undefined1 *)CONCAT71(uVar10,cVar9);
  *pcVar7 = *pcVar7 + cVar2;
  *pcVar7 = *pcVar7 + cVar2;
  cVar9 = cVar9 + cVar14;
  pcVar7[0x1f] = pcVar7[0x1f] + cVar15;
  *(undefined1 *)CONCAT71(uVar10,cVar9) = *(undefined1 *)CONCAT71(uVar10,cVar9);
  uVar6 = (int)pcVar7 + 0x34050002;
  pbVar8 = (byte *)(ulonglong)uVar6;
  *pbVar8 = *pbVar8 | (byte)uVar6;
  *(byte *)(unaff_RSI + -0x698bffda) = *(byte *)(unaff_RSI + -0x698bffda) & bVar11;
  pbVar8[unaff_RSI * 8 + 0x13210049] = pbVar8[unaff_RSI * 8 + 0x13210049] + bVar11;
  uVar5 = (int)unaff_RSI + (int)&stack0x00000000;
  uVar6 = CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 | *(byte *)(ulonglong)uVar6) + 0x74000954;
  pcVar7 = (char *)(ulonglong)uVar5;
  pcVar16 = (char *)(ulonglong)uVar6;
  pcVar16[(longlong)pcVar12 * 4 + -0x131fffda] =
       pcVar16[(longlong)pcVar12 * 4 + -0x131fffda] + cVar14;
  *param_4 = *param_4;
  *pcVar7 = *pcVar7 + (char)uVar5;
  pcVar16[(longlong)pcVar12 * 4 + 0x26] = pcVar16[(longlong)pcVar12 * 4 + 0x26] + cVar13;
  pcVar16[(longlong)pcVar12 * 4 + -0x131fffda] =
       pcVar16[(longlong)pcVar12 * 4 + -0x131fffda] + cVar14;
  *param_4 = *param_4;
  *pcVar7 = *pcVar7 + (char)uVar5;
  *pcVar7 = *pcVar7 + (char)(uVar5 >> 8);
  uVar17 = (ulonglong)uVar5;
  pcVar7 = (char *)(uVar17 + 0x26 + (longlong)pcVar12 * 4);
  *pcVar7 = *pcVar7 + cVar13;
  pcVar16[uVar17 * 8 + 0x210049] = pcVar16[uVar17 * 8 + 0x210049] + bVar11;
  pcVar7 = (char *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + *pcVar16);
  pcVar7[CONCAT71(uVar10,cVar9)] = pcVar7[CONCAT71(uVar10,cVar9)] + cVar13;
  *pcVar7 = *pcVar7 + (char)(uVar6 >> 8);
  pcVar7[(longlong)pcVar12 * 4 + 0x26] = pcVar7[(longlong)pcVar12 * 4 + 0x26] + cVar13;
  pcVar7 = (char *)(uVar17 + 0x210049 + (longlong)pcVar7 * 8);
  *pcVar7 = *pcVar7 + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

