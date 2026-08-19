// Function: FUN_1404bed5c
// Addr: 1404bed5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bed5c(char *param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *in_RAX;
  char *pcVar6;
  char cVar7;
  undefined7 uVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char *pcVar13;
  ulonglong uVar14;
  byte *pbVar5;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  bVar9 = (byte)param_2;
  uVar8 = (undefined7)((ulonglong)param_1 >> 8);
  cVar7 = (char)param_1;
  *(byte *)(unaff_RBX + -0x6c9effda) = *(byte *)(unaff_RBX + -0x6c9effda) ^ bVar9;
  (&stack0x0000004b)[unaff_RBP * 8] = (&stack0x0000004b)[unaff_RBP * 8] + cVar7;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + cVar10;
  cVar2 = (char)((ulonglong)unaff_RBX >> 8);
  param_1[-0x6d] = param_1[-0x6d] + cVar2;
  (&stack0x0000004b)[unaff_RBP * 8] = (&stack0x0000004b)[unaff_RBP * 8] + cVar7;
  *param_1 = *param_1 + cVar2;
  uVar3 = (int)unaff_RBX + 0x34050002;
  pbVar5 = (byte *)(ulonglong)uVar3;
  bVar1 = (byte)uVar3;
  *pbVar5 = *pbVar5 | bVar1;
  *(char *)(unaff_RSI + 0x2694d900) = *(char *)(unaff_RSI + 0x2694d900) + bVar9;
  cVar12 = (char)(((ulonglong)in_RAX & 0xffffffff) >> 8);
  pbVar5[0x1f] = pbVar5[0x1f] + cVar12;
  *param_1 = *param_1;
  *param_2 = *param_2 + bVar1;
  *pbVar5 = *pbVar5 + bVar1;
  pcVar6 = (char *)((ulonglong)uVar3 ^ 8);
  cVar2 = (char)pcVar6;
  *pcVar6 = *pcVar6 + cVar2;
  cVar11 = (char)((ulonglong)in_RAX & 0xffffffff);
  cVar7 = cVar7 + cVar11;
  pcVar6[0x1f] = pcVar6[0x1f] + cVar12;
  *(undefined1 *)CONCAT71(uVar8,cVar7) = *(undefined1 *)CONCAT71(uVar8,cVar7);
  *pcVar6 = *pcVar6 + cVar2;
  *pcVar6 = *pcVar6 + cVar2;
  cVar7 = cVar7 + cVar11;
  pcVar6[0x1f] = pcVar6[0x1f] + cVar12;
  *(undefined1 *)CONCAT71(uVar8,cVar7) = *(undefined1 *)CONCAT71(uVar8,cVar7);
  uVar4 = (int)pcVar6 + 0x34050002;
  pbVar5 = (byte *)(ulonglong)uVar4;
  *pbVar5 = *pbVar5 | (byte)uVar4;
  *(byte *)(unaff_RSI + -0x698bffda) = *(byte *)(unaff_RSI + -0x698bffda) & bVar9;
  pbVar5[unaff_RSI * 8 + 0x13210049] = pbVar5[unaff_RSI * 8 + 0x13210049] + bVar9;
  uVar3 = (int)unaff_RSI + (int)&stack0x00000000;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(byte)uVar4 | *(byte *)(ulonglong)uVar4) + 0x74000954;
  pcVar6 = (char *)(ulonglong)uVar3;
  pcVar13 = (char *)(ulonglong)uVar4;
  pcVar13[(longlong)param_2 * 4 + -0x131fffda] =
       pcVar13[(longlong)param_2 * 4 + -0x131fffda] + cVar11;
  *param_4 = *param_4;
  *pcVar6 = *pcVar6 + (char)uVar3;
  pcVar13[(longlong)param_2 * 4 + 0x26] = pcVar13[(longlong)param_2 * 4 + 0x26] + cVar10;
  pcVar13[(longlong)param_2 * 4 + -0x131fffda] =
       pcVar13[(longlong)param_2 * 4 + -0x131fffda] + cVar11;
  *param_4 = *param_4;
  *pcVar6 = *pcVar6 + (char)uVar3;
  *pcVar6 = *pcVar6 + (char)(uVar3 >> 8);
  uVar14 = (ulonglong)uVar3;
  pcVar6 = (char *)(uVar14 + 0x26 + (longlong)param_2 * 4);
  *pcVar6 = *pcVar6 + cVar10;
  pcVar13[uVar14 * 8 + 0x210049] = pcVar13[uVar14 * 8 + 0x210049] + bVar9;
  pcVar6 = (char *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *pcVar13);
  pcVar6[CONCAT71(uVar8,cVar7)] = pcVar6[CONCAT71(uVar8,cVar7)] + cVar10;
  *pcVar6 = *pcVar6 + (char)(uVar4 >> 8);
  pcVar6[(longlong)param_2 * 4 + 0x26] = pcVar6[(longlong)param_2 * 4 + 0x26] + cVar10;
  pcVar6 = (char *)(uVar14 + 0x210049 + (longlong)pcVar6 * 8);
  *pcVar6 = *pcVar6 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

