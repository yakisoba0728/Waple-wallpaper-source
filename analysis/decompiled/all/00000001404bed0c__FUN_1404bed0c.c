// Function: FUN_1404bed0c
// Addr: 1404bed0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bed0c(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint *in_RAX;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  undefined7 uVar10;
  byte bVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  int unaff_EBX;
  longlong unaff_RBP;
  undefined2 *unaff_RSI;
  ulonglong uVar15;
  undefined2 in_FS;
  undefined1 auStack_8 [8];
  byte *pbVar6;
  
  cVar12 = (char)((ulonglong)param_2 >> 8);
  bVar11 = (byte)param_2;
  uVar10 = (undefined7)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar1 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar1;
  *unaff_RSI = in_FS;
  pcVar8 = (char *)(unaff_RBP + 0x26 + (longlong)param_1 * 4);
  cVar3 = (char)((uint)unaff_EBX >> 8);
  *pcVar8 = *pcVar8 + cVar3;
  pcVar8 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar12,cVar1));
  *param_4 = *param_4 + (char)auStack_8;
  *pcVar8 = *pcVar8 + cVar1;
  *pcVar8 = *pcVar8 + cVar12;
  param_1[-0x6d] = param_1[-0x6d] + cVar3;
  (&stack0x00000043)[unaff_RBP * 8] = (&stack0x00000043)[unaff_RBP * 8] + (char)param_1;
  *param_1 = *param_1 + cVar3;
  uVar4 = unaff_EBX + 0x34050002;
  pbVar6 = (byte *)(ulonglong)uVar4;
  bVar2 = (byte)uVar4;
  *pbVar6 = *pbVar6 | bVar2;
  *(byte *)(unaff_RSI + 0x134a6c80) = *(char *)(unaff_RSI + 0x134a6c80) + bVar11;
  cVar14 = (char)(((ulonglong)pcVar8 & 0xffffffff) >> 8);
  pbVar6[0x1f] = pbVar6[0x1f] + cVar14;
  *param_1 = *param_1 + (char)auStack_8;
  *param_2 = *param_2 + bVar2;
  *pbVar6 = *pbVar6 + bVar2;
  pcVar7 = (char *)((ulonglong)uVar4 ^ 8);
  cVar3 = (char)pcVar7;
  *pcVar7 = *pcVar7 + cVar3;
  cVar13 = (char)((ulonglong)pcVar8 & 0xffffffff);
  cVar9 = (char)param_1 + cVar13;
  cVar1 = (char)auStack_8;
  pcVar7[0x1f] = pcVar7[0x1f] + cVar14;
  *(char *)CONCAT71(uVar10,cVar9) = *(char *)CONCAT71(uVar10,cVar9) + cVar1;
  *pcVar7 = *pcVar7 + cVar3;
  *pcVar7 = *pcVar7 + cVar3;
  cVar9 = cVar9 + cVar13;
  pcVar7[0x1f] = pcVar7[0x1f] + cVar14;
  *(char *)CONCAT71(uVar10,cVar9) = *(char *)CONCAT71(uVar10,cVar9) + cVar1;
  uVar5 = (int)pcVar7 + 0x34050002;
  pbVar6 = (byte *)(ulonglong)uVar5;
  *pbVar6 = *pbVar6 | (byte)uVar5;
  *(byte *)(unaff_RSI + -0x34c5ffed) = *(byte *)(unaff_RSI + -0x34c5ffed) & bVar11;
  pbVar6[(longlong)unaff_RSI * 8 + 0x13210049] =
       pbVar6[(longlong)unaff_RSI * 8 + 0x13210049] + bVar11;
  uVar4 = (int)unaff_RSI + (int)auStack_8;
  uVar5 = CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 | *(byte *)(ulonglong)uVar5) + 0x74000954;
  pcVar8 = (char *)(ulonglong)uVar4;
  pcVar7 = (char *)(ulonglong)uVar5;
  pcVar7[(longlong)param_2 * 4 + -0x131fffda] = pcVar7[(longlong)param_2 * 4 + -0x131fffda] + cVar13
  ;
  *param_4 = *param_4 + cVar1;
  *pcVar8 = *pcVar8 + (char)uVar4;
  pcVar7[(longlong)param_2 * 4 + 0x26] = pcVar7[(longlong)param_2 * 4 + 0x26] + cVar12;
  pcVar7[(longlong)param_2 * 4 + -0x131fffda] = pcVar7[(longlong)param_2 * 4 + -0x131fffda] + cVar13
  ;
  *param_4 = *param_4 + cVar1;
  *pcVar8 = *pcVar8 + (char)uVar4;
  *pcVar8 = *pcVar8 + (char)(uVar4 >> 8);
  uVar15 = (ulonglong)uVar4;
  pcVar8 = (char *)(uVar15 + 0x26 + (longlong)param_2 * 4);
  *pcVar8 = *pcVar8 + cVar12;
  pcVar7[uVar15 * 8 + 0x210049] = pcVar7[uVar15 * 8 + 0x210049] + bVar11;
  pcVar8 = (char *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + *pcVar7);
  pcVar8[CONCAT71(uVar10,cVar9)] = pcVar8[CONCAT71(uVar10,cVar9)] + cVar12;
  *pcVar8 = *pcVar8 + (char)(uVar5 >> 8);
  pcVar8[(longlong)param_2 * 4 + 0x26] = pcVar8[(longlong)param_2 * 4 + 0x26] + cVar12;
  pcVar8 = (char *)(uVar15 + 0x210049 + (longlong)pcVar8 * 8);
  *pcVar8 = *pcVar8 + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

