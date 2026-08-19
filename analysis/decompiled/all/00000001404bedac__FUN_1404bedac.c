// Function: FUN_1404bedac
// Addr: 1404bedac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bedcd) overlaps instruction at (ram,0x0001404bedcc)
    */

void FUN_1404bedac(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  uint *in_RAX;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  undefined7 uVar8;
  byte bVar9;
  char cVar10;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar11;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar12;
  bool in_SF;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  bVar9 = (byte)param_2;
  uVar8 = (undefined7)((ulonglong)param_1 >> 8);
  cVar7 = (char)param_1;
  if (in_SF) {
    puVar11 = &stack0xfffffffffffffff8;
    uVar3 = (uint)in_RAX;
    *in_RAX = *in_RAX | uVar3;
    if (*in_RAX != 0) goto code_r0x0001404bedd2;
    *in_RAX = *in_RAX & uVar3;
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
    pbVar4 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x6c9effda);
    *pbVar4 = *pbVar4 ^ bVar9;
    (&stack0x00000043)[unaff_RBP * 8] = (&stack0x00000043)[unaff_RBP * 8] + cVar7;
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    uVar3 = uVar3 + 0x34050002;
    pbVar4 = (byte *)(ulonglong)uVar3;
    bVar1 = (byte)uVar3;
    *pbVar4 = *pbVar4 | bVar1;
    *(char *)(unaff_RSI + 0x2694d900) = *(char *)(unaff_RSI + 0x2694d900) + bVar9;
    pbVar4[0x1f] = pbVar4[0x1f] + unaff_BH;
    *param_1 = *param_1 + (char)&stack0xfffffffffffffff8;
    *param_2 = *param_2 + bVar1;
    *pbVar4 = *pbVar4 + bVar1;
    in_RAX = (uint *)((ulonglong)uVar3 ^ 8);
    cVar2 = (char)in_RAX;
    *(char *)in_RAX = (char)*in_RAX + cVar2;
    cVar7 = cVar7 + unaff_BL;
    register0x00000020 = (BADSPACEBASE *)((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff);
    *(char *)((longlong)in_RAX + 0x1f) = *(char *)((longlong)in_RAX + 0x1f) + unaff_BH;
    *(char *)CONCAT71(uVar8,cVar7) = *(char *)CONCAT71(uVar8,cVar7) + (char)register0x00000020;
    *(char *)in_RAX = (char)*in_RAX + cVar2;
    *(char *)in_RAX = (char)*in_RAX + cVar2;
    cVar7 = cVar7 + unaff_BL;
    *(char *)((longlong)in_RAX + 0x1f) = *(char *)((longlong)in_RAX + 0x1f) + unaff_BH;
  }
  *(char *)CONCAT71(uVar8,cVar7) = *(char *)CONCAT71(uVar8,cVar7) + (char)register0x00000020;
  uVar3 = (int)in_RAX + 0x34050002;
  pbVar4 = (byte *)(ulonglong)uVar3;
  *pbVar4 = *pbVar4 | (byte)uVar3;
  *(byte *)(unaff_RSI - 0x698bffda) = *(byte *)(unaff_RSI - 0x698bffda) & bVar9;
  pbVar4[unaff_RSI * 8 + 0x13210049] = pbVar4[unaff_RSI * 8 + 0x13210049] + bVar9;
  in_RAX = (uint *)(ulonglong)(uint)((int)unaff_RSI + (int)register0x00000020);
  unaff_RSI = (ulonglong)
              (CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *(byte *)(ulonglong)uVar3) + 0x74000954);
  puVar11 = (undefined1 *)register0x00000020;
code_r0x0001404bedd2:
  pcVar6 = (char *)((unaff_RSI - 0x131fffda) + (longlong)param_2 * 4);
  *pcVar6 = *pcVar6 + unaff_BL;
  *param_4 = *param_4 + (char)puVar11;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar6 = (char *)(unaff_RSI + 0x26 + (longlong)param_2 * 4);
  *pcVar6 = *pcVar6 + cVar10;
  pcVar6 = (char *)((unaff_RSI - 0x131fffda) + (longlong)param_2 * 4);
  *pcVar6 = *pcVar6 + unaff_BL;
  *param_4 = *param_4 + (char)puVar11;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)((ulonglong)in_RAX >> 8);
  pcVar5 = (char *)(unaff_RSI & 0xffffffff);
  uVar12 = (ulonglong)in_RAX & 0xffffffff;
  pcVar6 = (char *)(uVar12 + 0x26 + (longlong)param_2 * 4);
  *pcVar6 = *pcVar6 + cVar10;
  pcVar5[uVar12 * 8 + 0x210049] = pcVar5[uVar12 * 8 + 0x210049] + bVar9;
  pcVar6 = (char *)CONCAT71((int7)((ulonglong)pcVar5 >> 8),(char)pcVar5 + *pcVar5);
  pcVar6[CONCAT71(uVar8,cVar7)] = pcVar6[CONCAT71(uVar8,cVar7)] + cVar10;
  *pcVar6 = *pcVar6 + (char)((ulonglong)pcVar5 >> 8);
  pcVar6[(longlong)param_2 * 4 + 0x26] = pcVar6[(longlong)param_2 * 4 + 0x26] + cVar10;
  pcVar6 = (char *)(uVar12 + 0x210049 + (longlong)pcVar6 * 8);
  *pcVar6 = *pcVar6 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

