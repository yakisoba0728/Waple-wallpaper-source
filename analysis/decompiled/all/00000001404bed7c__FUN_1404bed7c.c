// Function: FUN_1404bed7c
// Addr: 1404bed7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bed7c(undefined8 param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char cVar6;
  undefined7 uVar7;
  byte bVar8;
  char cVar9;
  char unaff_BL;
  char unaff_BH;
  longlong unaff_RSI;
  char *pcVar10;
  ulonglong uVar11;
  byte *pbVar5;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  uVar2 = in_EAX + 0x834;
  cVar6 = (char)param_1 + unaff_BL;
  pcVar4 = (char *)(ulonglong)uVar2;
  pcVar4[0x1f] = pcVar4[0x1f] + unaff_BH;
  *(undefined1 *)CONCAT71(uVar7,cVar6) = *(undefined1 *)CONCAT71(uVar7,cVar6);
  *param_2 = *param_2 + (char)uVar2;
  *pcVar4 = *pcVar4 + (char)uVar2;
  pcVar4 = (char *)((ulonglong)uVar2 ^ 8);
  cVar1 = (char)pcVar4;
  *pcVar4 = *pcVar4 + cVar1;
  cVar6 = cVar6 + unaff_BL;
  pcVar4[0x1f] = pcVar4[0x1f] + unaff_BH;
  *(undefined1 *)CONCAT71(uVar7,cVar6) = *(undefined1 *)CONCAT71(uVar7,cVar6);
  *pcVar4 = *pcVar4 + cVar1;
  *pcVar4 = *pcVar4 + cVar1;
  cVar6 = cVar6 + unaff_BL;
  pcVar4[0x1f] = pcVar4[0x1f] + unaff_BH;
  *(undefined1 *)CONCAT71(uVar7,cVar6) = *(undefined1 *)CONCAT71(uVar7,cVar6);
  uVar3 = (int)pcVar4 + 0x34050002;
  pbVar5 = (byte *)(ulonglong)uVar3;
  *pbVar5 = *pbVar5 | (byte)uVar3;
  *(byte *)(unaff_RSI + -0x698bffda) = *(byte *)(unaff_RSI + -0x698bffda) & bVar8;
  pbVar5[unaff_RSI * 8 + 0x13210049] = pbVar5[unaff_RSI * 8 + 0x13210049] + bVar8;
  uVar2 = (int)unaff_RSI + (int)&stack0x00000000;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *(byte *)(ulonglong)uVar3) + 0x74000954;
  pcVar4 = (char *)(ulonglong)uVar2;
  pcVar10 = (char *)(ulonglong)uVar3;
  pcVar10[(longlong)param_2 * 4 + -0x131fffda] =
       pcVar10[(longlong)param_2 * 4 + -0x131fffda] + unaff_BL;
  *param_4 = *param_4;
  *pcVar4 = *pcVar4 + (char)uVar2;
  pcVar10[(longlong)param_2 * 4 + 0x26] = pcVar10[(longlong)param_2 * 4 + 0x26] + cVar9;
  pcVar10[(longlong)param_2 * 4 + -0x131fffda] =
       pcVar10[(longlong)param_2 * 4 + -0x131fffda] + unaff_BL;
  *param_4 = *param_4;
  *pcVar4 = *pcVar4 + (char)uVar2;
  *pcVar4 = *pcVar4 + (char)(uVar2 >> 8);
  uVar11 = (ulonglong)uVar2;
  pcVar4 = (char *)(uVar11 + 0x26 + (longlong)param_2 * 4);
  *pcVar4 = *pcVar4 + cVar9;
  pcVar10[uVar11 * 8 + 0x210049] = pcVar10[uVar11 * 8 + 0x210049] + bVar8;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + *pcVar10);
  pcVar4[CONCAT71(uVar7,cVar6)] = pcVar4[CONCAT71(uVar7,cVar6)] + cVar9;
  *pcVar4 = *pcVar4 + (char)(uVar3 >> 8);
  pcVar4[(longlong)param_2 * 4 + 0x26] = pcVar4[(longlong)param_2 * 4 + 0x26] + cVar9;
  pcVar4 = (char *)(uVar11 + 0x210049 + (longlong)pcVar4 * 8);
  *pcVar4 = *pcVar4 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

