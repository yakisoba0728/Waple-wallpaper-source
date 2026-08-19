// Function: FUN_1404d79b4
// Addr: 1404d79b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d79b4(char *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined3 uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  byte bVar14;
  byte *in_RAX;
  int *piVar13;
  byte bVar15;
  byte bVar16;
  undefined6 uVar17;
  char unaff_BL;
  char *unaff_RSI;
  longlong unaff_RDI;
  bool bVar18;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  
  uVar17 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar16 = (byte)((ulonglong)param_2 >> 8);
  bVar15 = (byte)param_2;
  uRam00000001347279c0 = uRam00000001347279c0 & (uint)&stack0x00000000;
  uVar2 = (uint)CARRY1((byte)in_RAX,*in_RAX);
  uVar10 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + *in_RAX);
  uVar9 = uVar10 + 0x80011e4;
  bVar18 = 0xf7ffee1b < uVar10 || CARRY4(uVar9,uVar2);
  uVar9 = uVar9 + uVar2;
  pbVar11 = (byte *)(ulonglong)uVar9;
  bVar8 = *pbVar11;
  bVar5 = (byte)uVar9;
  bVar14 = *pbVar11;
  *pbVar11 = bVar14 + bVar5 + bVar18;
  bVar1 = unaff_RSI[-0x6036ffc9];
  unaff_RSI[-0x6036ffc9] =
       (byte)(CONCAT11(CARRY1(bVar8,bVar5) || CARRY1(bVar14 + bVar5,bVar18),bVar1) >> 5) |
       bVar1 << 4;
  cVar6 = bVar5 + unaff_BL;
  pcVar12 = (char *)(ulonglong)CONCAT31((int3)(uVar9 >> 8),cVar6);
  bVar8 = (byte)(uVar9 >> 8);
  if (-1 < cVar6) {
    *param_1 = *param_1 + bVar8;
    *unaff_RSI = *unaff_RSI + cVar6;
    *pcVar12 = *pcVar12 + cVar6;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = (undefined2)(uVar9 >> 0x10);
  bVar14 = bVar8 + bVar16;
  cVar7 = cVar6 + *(char *)(ulonglong)CONCAT22(uVar3,CONCAT11(bVar14,cVar6)) + CARRY1(bVar8,bVar16);
  cVar6 = bVar14 * '\x02';
  uVar2 = CONCAT22(uVar3,CONCAT11(cVar6,cVar7));
  piVar13 = (int *)(ulonglong)uVar2;
  *piVar13 = *piVar13 + uVar2 + (uint)CARRY1(bVar14,bVar14);
  pbVar11 = (byte *)((longlong)piVar13 + param_2);
  bVar8 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar15;
  unaff_RSI[unaff_RDI + 0x379ca500] =
       unaff_RSI[unaff_RDI + 0x379ca500] + unaff_BL + CARRY1(bVar8,bVar15);
  uVar4 = (undefined3)(uVar2 >> 8);
  bVar8 = cVar7 + unaff_BL;
  pcVar12 = (char *)(ulonglong)CONCAT31(uVar4,bVar8);
  if (-1 < (char)bVar8) {
    *param_1 = *param_1 + cVar6;
    *pcVar12 = *pcVar12 + bVar8;
    *pcVar12 = *pcVar12 + bVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar7 = *pcVar12;
  *param_1 = *param_1 + cVar6;
  *(byte *)CONCAT62(uVar17,CONCAT11(bVar16,bVar15 + cVar7)) =
       *(byte *)CONCAT62(uVar17,CONCAT11(bVar16,bVar15 + cVar7)) | bVar8;
  *pcVar12 = *pcVar12 + (char)param_1;
  pcVar12 = (char *)((ulonglong)CONCAT31(uVar4,bVar8) ^ 0x14);
  cVar7 = (char)pcVar12;
  pcVar12[-0x4dffc84b] = pcVar12[-0x4dffc84b] + cVar7;
  pcVar12[0x21004d79] = pcVar12[0x21004d79] + cVar6;
  *pcVar12 = *pcVar12 + cVar7;
  pcVar12[-0x4dffc84b] = pcVar12[-0x4dffc84b] + cVar7;
  pcVar12[0x21004d79] = pcVar12[0x21004d79] + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

