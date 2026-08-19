// Function: FUN_1404bed8c
// Addr: 1404bed8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bed8c(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint *in_RAX;
  undefined7 uVar6;
  byte bVar7;
  char cVar8;
  char unaff_BL;
  char unaff_BH;
  char *pcVar9;
  longlong unaff_RSI;
  char *pcVar10;
  ulonglong uVar11;
  char *pcVar4;
  byte *pbVar5;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  bVar7 = (byte)param_2;
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar2 = (char)in_RAX + (char)*in_RAX;
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  pcVar4[param_1] = pcVar4[param_1] + cVar8;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar9 = (char *)((ulonglong)pcVar4 & 0xffffffff);
  cVar2 = (char)param_1 + unaff_BL;
  pcVar9[0x1f] = pcVar9[0x1f] + unaff_BH;
  *(undefined1 *)CONCAT71(uVar6,cVar2) = *(undefined1 *)CONCAT71(uVar6,cVar2);
  *pcVar9 = *pcVar9 + (char)pcVar9;
  *pcVar9 = *pcVar9 + (char)pcVar9;
  cVar2 = cVar2 + unaff_BL;
  pcVar9[0x1f] = pcVar9[0x1f] + unaff_BH;
  *(undefined1 *)CONCAT71(uVar6,cVar2) = *(undefined1 *)CONCAT71(uVar6,cVar2);
  uVar3 = (int)pcVar4 + 0x34050002;
  pbVar5 = (byte *)(ulonglong)uVar3;
  *pbVar5 = *pbVar5 | (byte)uVar3;
  *(byte *)(unaff_RSI + -0x698bffda) = *(byte *)(unaff_RSI + -0x698bffda) & bVar7;
  pbVar5[unaff_RSI * 8 + 0x13210049] = pbVar5[unaff_RSI * 8 + 0x13210049] + bVar7;
  uVar1 = (int)unaff_RSI + (int)&stack0x00000000;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *(byte *)(ulonglong)uVar3) + 0x74000954;
  pcVar4 = (char *)(ulonglong)uVar1;
  pcVar10 = (char *)(ulonglong)uVar3;
  pcVar10[param_2 * 4 + -0x131fffda] = pcVar10[param_2 * 4 + -0x131fffda] + unaff_BL;
  *param_4 = *param_4;
  *pcVar4 = *pcVar4 + (char)uVar1;
  pcVar10[param_2 * 4 + 0x26] = pcVar10[param_2 * 4 + 0x26] + cVar8;
  pcVar10[param_2 * 4 + -0x131fffda] = pcVar10[param_2 * 4 + -0x131fffda] + unaff_BL;
  *param_4 = *param_4;
  *pcVar4 = *pcVar4 + (char)uVar1;
  *pcVar4 = *pcVar4 + (char)(uVar1 >> 8);
  uVar11 = (ulonglong)uVar1;
  pcVar4 = (char *)(uVar11 + 0x26 + param_2 * 4);
  *pcVar4 = *pcVar4 + cVar8;
  pcVar10[uVar11 * 8 + 0x210049] = pcVar10[uVar11 * 8 + 0x210049] + bVar7;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + *pcVar10);
  pcVar4[CONCAT71(uVar6,cVar2)] = pcVar4[CONCAT71(uVar6,cVar2)] + cVar8;
  *pcVar4 = *pcVar4 + (char)(uVar3 >> 8);
  pcVar4[param_2 * 4 + 0x26] = pcVar4[param_2 * 4 + 0x26] + cVar8;
  pcVar4 = (char *)(uVar11 + 0x210049 + (longlong)pcVar4 * 8);
  *pcVar4 = *pcVar4 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

