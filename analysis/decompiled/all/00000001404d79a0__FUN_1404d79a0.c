// Function: FUN_1404d79a0
// Addr: 1404d79a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d79a0(char *param_1,longlong param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  byte bVar13;
  byte *in_RAX;
  int *piVar12;
  byte bVar14;
  byte bVar15;
  undefined6 uVar16;
  char unaff_BL;
  char *unaff_RSI;
  longlong unaff_RDI;
  bool bVar17;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  
  uVar16 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar15 = (byte)((ulonglong)param_2 >> 8);
  bVar14 = (byte)param_2;
  in_RAX[0x1004d78] = in_RAX[0x1004d78] + (char)param_1;
  bVar7 = (byte)in_RAX;
  *(byte *)((longlong)in_RAX * 2) = *(byte *)((longlong)in_RAX * 2) | bVar7;
  *(byte *)(param_2 + 0x60037004) = *(byte *)(param_2 + 0x60037004) | bVar15;
  bVar15 = bVar15 + *in_RAX;
  uRam00000001347279c0 = uRam00000001347279c0 & (uint)&stack0x00000000;
  uVar9 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar7 + *in_RAX);
  uVar8 = uVar9 + 0x80011e4;
  bVar17 = 0xf7ffee1b < uVar9 || CARRY4(uVar8,(uint)CARRY1(bVar7,*in_RAX));
  uVar8 = uVar8 + CARRY1(bVar7,*in_RAX);
  pbVar10 = (byte *)(ulonglong)uVar8;
  bVar7 = *pbVar10;
  bVar4 = (byte)uVar8;
  bVar13 = *pbVar10;
  *pbVar10 = bVar13 + bVar4 + bVar17;
  bVar1 = unaff_RSI[-0x6036ffc9];
  unaff_RSI[-0x6036ffc9] =
       (byte)(CONCAT11(CARRY1(bVar7,bVar4) || CARRY1(bVar13 + bVar4,bVar17),bVar1) >> 5) |
       bVar1 << 4;
  cVar5 = bVar4 + unaff_BL;
  pcVar11 = (char *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),cVar5);
  bVar7 = (byte)(uVar8 >> 8);
  if (-1 < cVar5) {
    *param_1 = *param_1 + bVar7;
    *unaff_RSI = *unaff_RSI + cVar5;
    *pcVar11 = *pcVar11 + cVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar2 = (undefined2)(uVar8 >> 0x10);
  bVar13 = bVar7 + bVar15;
  cVar6 = cVar5 + *(char *)(ulonglong)CONCAT22(uVar2,CONCAT11(bVar13,cVar5)) + CARRY1(bVar7,bVar15);
  cVar5 = bVar13 * '\x02';
  uVar8 = CONCAT22(uVar2,CONCAT11(cVar5,cVar6));
  piVar12 = (int *)(ulonglong)uVar8;
  *piVar12 = *piVar12 + uVar8 + (uint)CARRY1(bVar13,bVar13);
  pbVar10 = (byte *)((longlong)piVar12 + CONCAT62(uVar16,CONCAT11(bVar15,bVar14)));
  bVar7 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar14;
  unaff_RSI[unaff_RDI + 0x379ca500] =
       unaff_RSI[unaff_RDI + 0x379ca500] + unaff_BL + CARRY1(bVar7,bVar14);
  uVar3 = (undefined3)(uVar8 >> 8);
  bVar7 = cVar6 + unaff_BL;
  pcVar11 = (char *)(ulonglong)CONCAT31(uVar3,bVar7);
  if (-1 < (char)bVar7) {
    *param_1 = *param_1 + cVar5;
    *pcVar11 = *pcVar11 + bVar7;
    *pcVar11 = *pcVar11 + bVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar6 = *pcVar11;
  *param_1 = *param_1 + cVar5;
  *(byte *)CONCAT62(uVar16,CONCAT11(bVar15,bVar14 + cVar6)) =
       *(byte *)CONCAT62(uVar16,CONCAT11(bVar15,bVar14 + cVar6)) | bVar7;
  *pcVar11 = *pcVar11 + (char)param_1;
  pcVar11 = (char *)((ulonglong)CONCAT31(uVar3,bVar7) ^ 0x14);
  cVar6 = (char)pcVar11;
  pcVar11[-0x4dffc84b] = pcVar11[-0x4dffc84b] + cVar6;
  pcVar11[0x21004d79] = pcVar11[0x21004d79] + cVar5;
  *pcVar11 = *pcVar11 + cVar6;
  pcVar11[-0x4dffc84b] = pcVar11[-0x4dffc84b] + cVar6;
  pcVar11[0x21004d79] = pcVar11[0x21004d79] + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

