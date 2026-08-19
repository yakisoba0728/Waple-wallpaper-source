// Function: FUN_1404cc7a4
// Addr: 1404cc7a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cc7e9) overlaps instruction at (ram,0x0001404cc7e3)
    */

void FUN_1404cc7a4(uint *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char cVar10;
  byte *in_RAX;
  int *piVar6;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar11;
  byte bVar12;
  byte bVar13;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  byte in_CF;
  byte *pbVar7;
  
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  *(uint *)unaff_RDI = (*(int *)unaff_RDI - (int)&stack0x00000000) - (uint)in_CF;
  piVar6 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX);
  uVar5 = *param_1;
  uVar4 = (uint)piVar6;
  *param_1 = *param_1 - uVar4;
  uVar5 = (uVar4 - *piVar6) - (uint)(uVar5 < uVar4) | 0x9e00bf0;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  bVar12 = (char)param_2 + *(char *)((ulonglong)uVar5 + 0x20);
  *unaff_RSI = *unaff_RSI >> 1;
  uVar2 = (undefined3)(uVar5 >> 8);
  cVar10 = (char)uVar5 * '\x02';
  pcVar11 = (char *)(ulonglong)CONCAT31(uVar2,cVar10);
  *pcVar11 = *pcVar11 + cVar10;
  *(char *)param_1 = (char)*param_1 + (char)(uVar5 >> 8);
  bVar3 = cVar10 + 2;
  uVar5 = CONCAT31(uVar2,bVar3);
  pbVar7 = (byte *)(ulonglong)uVar5;
  unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + bVar3;
  bVar1 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar3;
  pcVar11 = (char *)((longlong)param_1 + -1);
  if (pcVar11 == (char *)0x0 || *pbVar7 == 0) {
    uVar5 = uVar5 ^ 0x351c2a00;
    pcVar8 = (char *)(ulonglong)uVar5;
    pcVar8[unaff_RBP * 8 + 0x210049] = pcVar8[unaff_RBP * 8 + 0x210049] + (char)(uVar5 >> 8);
    cVar10 = *pcVar8;
    *pcVar8 = *pcVar8 + bVar3;
    pcVar11 = (char *)((longlong)param_1 + -2);
    if (pcVar11 != (char *)0x0 && *pcVar8 != '\0') {
      if (!SCARRY1(cVar10,bVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar5 = uVar5 + 0x351fa000;
      *(char *)((longlong)param_1 + 0x1e) = *(char *)((longlong)param_1 + 0x1e) + (char)(uVar5 >> 8)
      ;
      pcVar8 = (char *)(ulonglong)(uVar5 ^ 0x4cc71800);
      cVar10 = (char)((uVar5 ^ 0x4cc71800) >> 8);
      *pcVar11 = *pcVar11 + cVar10;
      *pcVar8 = *pcVar8 + (char)uVar5;
      pcVar8[0x6100351f] = pcVar8[0x6100351f] + cVar10;
      bRam000000018d13e023 = bRam000000018d13e023 & bVar13;
      *pcVar11 = *pcVar11 + (char)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *pbVar7 = *pbVar7 + (char)pcVar11 + CARRY1(bVar1,bVar3);
    *pbVar7 = *pbVar7 + bVar12;
    *pbVar7 = *pbVar7 | bVar3;
  }
  pbVar9 = (byte *)(ulonglong)(uVar5 ^ 0x351c2a00);
  pbVar9[unaff_RBP * 8 + 0x10010049] =
       pbVar9[unaff_RBP * 8 + 0x10010049] + (char)((uVar5 ^ 0x351c2a00) >> 8);
  *pbVar9 = *pbVar9 | (byte)uVar5;
  pbVar7 = pbVar9 + (longlong)pcVar11;
  bVar1 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar12;
  unaff_RDI[(longlong)pbVar9] = unaff_RDI[(longlong)pbVar9] + bVar13 + CARRY1(bVar1,bVar12);
  *pbVar9 = *pbVar9 + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

