// Function: FUN_1404beddc
// Addr: 1404beddc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404beddd) overlaps instruction at (ram,0x0001404beddc)
    */

void FUN_1404beddc(undefined1 *param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  uint *in_RAX;
  char *pcVar6;
  char cVar7;
  undefined7 uVar8;
  byte bVar9;
  char cVar10;
  char unaff_BL;
  char unaff_BH;
  char *pcVar11;
  ulonglong unaff_RSI;
  ulonglong uVar12;
  byte *pbVar5;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  bVar9 = (byte)param_2;
  uVar8 = (undefined7)((ulonglong)param_1 >> 8);
  cVar7 = (char)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar2;
  if ((byte)*in_RAX == 0) {
    uRam000000017450ed80 = uRam000000017450ed80 & (uint)in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX | bVar2;
    *(char *)(unaff_RSI + 0x2694d900) = *(char *)(unaff_RSI + 0x2694d900) + bVar9;
    *(byte *)((longlong)in_RAX + 0x1f) = *(byte *)((longlong)in_RAX + 0x1f) + unaff_BH;
    *param_1 = *param_1;
    *param_2 = *param_2 + bVar2;
    *(byte *)in_RAX = (byte)*in_RAX + bVar2;
    pcVar4 = (char *)((ulonglong)in_RAX ^ 8);
    *pcVar4 = *pcVar4 + (char)pcVar4;
    pcVar11 = (char *)((ulonglong)pcVar4 & 0xffffffff);
    cVar7 = cVar7 + unaff_BL;
    pcVar11[0x1f] = pcVar11[0x1f] + unaff_BH;
    *(undefined1 *)CONCAT71(uVar8,cVar7) = *(undefined1 *)CONCAT71(uVar8,cVar7);
    *pcVar11 = *pcVar11 + (char)pcVar11;
    *pcVar11 = *pcVar11 + (char)pcVar11;
    cVar7 = cVar7 + unaff_BL;
    pcVar11[0x1f] = pcVar11[0x1f] + unaff_BH;
    *(undefined1 *)CONCAT71(uVar8,cVar7) = *(undefined1 *)CONCAT71(uVar8,cVar7);
    uVar3 = (int)pcVar4 + 0x34050002;
    pbVar5 = (byte *)(ulonglong)uVar3;
    *pbVar5 = *pbVar5 | (byte)uVar3;
    *(byte *)(unaff_RSI - 0x698bffda) = *(byte *)(unaff_RSI - 0x698bffda) & bVar9;
    pbVar5[unaff_RSI * 8 + 0x13210049] = pbVar5[unaff_RSI * 8 + 0x13210049] + bVar9;
    uVar1 = (int)unaff_RSI + (int)&stack0x00000000;
    in_RAX = (uint *)(ulonglong)uVar1;
    unaff_RSI = (ulonglong)
                (CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *(byte *)(ulonglong)uVar3) + 0x74000954);
    pcVar4 = (char *)((unaff_RSI - 0x131fffda) + (longlong)param_2 * 4);
    *pcVar4 = *pcVar4 + unaff_BL;
    *param_4 = *param_4;
    *(byte *)in_RAX = (byte)*in_RAX + (char)uVar1;
    pcVar4 = (char *)(unaff_RSI + 0x26 + (longlong)param_2 * 4);
    *pcVar4 = *pcVar4 + cVar10;
    pcVar4 = (char *)((unaff_RSI - 0x131fffda) + (longlong)param_2 * 4);
    *pcVar4 = *pcVar4 + unaff_BL;
  }
  pcVar4 = (char *)((unaff_RSI - 0x131fffda) + (longlong)param_2 * 4);
  *pcVar4 = *pcVar4 + unaff_BL;
  *param_4 = *param_4;
  *(byte *)in_RAX = (byte)*in_RAX + (char)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (char)((ulonglong)in_RAX >> 8);
  pcVar6 = (char *)(unaff_RSI & 0xffffffff);
  uVar12 = (ulonglong)in_RAX & 0xffffffff;
  pcVar4 = (char *)(uVar12 + 0x26 + (longlong)param_2 * 4);
  *pcVar4 = *pcVar4 + cVar10;
  pcVar6[uVar12 * 8 + 0x210049] = pcVar6[uVar12 * 8 + 0x210049] + bVar9;
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)pcVar6 >> 8),(char)pcVar6 + *pcVar6);
  pcVar4[CONCAT71(uVar8,cVar7)] = pcVar4[CONCAT71(uVar8,cVar7)] + cVar10;
  *pcVar4 = *pcVar4 + (char)((ulonglong)pcVar6 >> 8);
  pcVar4[(longlong)param_2 * 4 + 0x26] = pcVar4[(longlong)param_2 * 4 + 0x26] + cVar10;
  pcVar4 = (char *)(uVar12 + 0x210049 + (longlong)pcVar4 * 8);
  *pcVar4 = *pcVar4 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

