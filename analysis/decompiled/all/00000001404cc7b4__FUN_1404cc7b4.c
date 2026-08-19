// Function: FUN_1404cc7b4
// Addr: 1404cc7b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cc7e9) overlaps instruction at (ram,0x0001404cc7e3)
    */

void FUN_1404cc7b4(char *param_1,byte *param_2)

{
  byte bVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar8;
  int in_EAX;
  uint uVar4;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar9;
  byte bVar10;
  byte bVar11;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uStack_8;
  byte *pbVar5;
  
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  bVar10 = (byte)param_2;
  uVar4 = in_EAX + 0x3600470;
  *param_2 = *param_2 ^ (byte)uVar4;
  uStack_8 = (ulonglong)uVar4;
  uVar2 = (undefined3)(uVar4 >> 8);
  cVar8 = ((byte)uVar4 & bVar10) * '\x02';
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar2,cVar8);
  *pcVar9 = *pcVar9 + cVar8;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  bVar3 = cVar8 + 2;
  uVar4 = CONCAT31(uVar2,bVar3);
  pbVar5 = (byte *)(ulonglong)uVar4;
  *(char *)((longlong)&uStack_8 + unaff_RSI) = *(char *)((longlong)&uStack_8 + unaff_RSI) + bVar3;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar3;
  pcVar9 = param_1 + -1;
  if (pcVar9 == (char *)0x0 || *pbVar5 == 0) {
    uVar4 = uVar4 ^ 0x351c2a00;
    pcVar6 = (char *)(ulonglong)uVar4;
    pcVar6[unaff_RBP * 8 + 0x210049] = pcVar6[unaff_RBP * 8 + 0x210049] + (char)(uVar4 >> 8);
    cVar8 = *pcVar6;
    *pcVar6 = *pcVar6 + bVar3;
    pcVar9 = param_1 + -2;
    if (pcVar9 != (char *)0x0 && *pcVar6 != '\0') {
      if (!SCARRY1(cVar8,bVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar4 = uVar4 + 0x351fa000;
      param_1[0x1e] = param_1[0x1e] + (char)(uVar4 >> 8);
      pcVar6 = (char *)(ulonglong)(uVar4 ^ 0x4cc71800);
      cVar8 = (char)((uVar4 ^ 0x4cc71800) >> 8);
      *pcVar9 = *pcVar9 + cVar8;
      *pcVar6 = *pcVar6 + (char)uVar4;
      pcVar6[0x6100351f] = pcVar6[0x6100351f] + cVar8;
      bRam000000018d13e023 = bRam000000018d13e023 & bVar11;
      *pcVar9 = *pcVar9 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *pbVar5 = *pbVar5 + (char)pcVar9 + CARRY1(bVar1,bVar3);
    *pbVar5 = *pbVar5 + bVar10;
    *pbVar5 = *pbVar5 | bVar3;
  }
  pbVar7 = (byte *)(ulonglong)(uVar4 ^ 0x351c2a00);
  pbVar7[unaff_RBP * 8 + 0x10010049] =
       pbVar7[unaff_RBP * 8 + 0x10010049] + (char)((uVar4 ^ 0x351c2a00) >> 8);
  *pbVar7 = *pbVar7 | (byte)uVar4;
  pbVar5 = pbVar7 + (longlong)pcVar9;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar10;
  pbVar7[unaff_RDI] = pbVar7[unaff_RDI] + bVar11 + CARRY1(bVar1,bVar10);
  *pbVar7 = *pbVar7 + bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

