// Function: FUN_1404ce38c
// Addr: 1404ce38c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ce4d4) overlaps instruction at (ram,0x0001404ce4d3)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ce3dd) */
/* WARNING: Removing unreachable block (ram,0x0001404ce469) */
/* WARNING: Removing unreachable block (ram,0x0001404ce473) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4bf) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4d2) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4cb) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4cd) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4d3) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4da) */
/* WARNING: Removing unreachable block (ram,0x0001404ce4e8) */
/* WARNING: Removing unreachable block (ram,0x0001404ce3c2) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001404ce45b */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1404ce38c(longlong param_1,undefined8 param_2,char param_3,char param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  char *pcVar4;
  byte *pbVar5;
  byte bVar7;
  char cVar8;
  char cVar12;
  char *pcVar9;
  longlong lVar10;
  undefined6 uVar13;
  ulonglong uVar11;
  byte bVar14;
  uint uVar15;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_BPL;
  undefined7 unaff_00000029;
  uint *unaff_RSI;
  char *unaff_RDI;
  char in_R10B;
  char unaff_R12B;
  char unaff_R13B;
  char unaff_R15B;
  undefined2 in_ES;
  uint *puVar6;
  char *pcVar16;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar14 = (byte)param_2;
  pcVar4 = (char *)CONCAT62(uVar13,CONCAT11(0x2b,bVar14));
  bVar2 = (byte)in_RAX;
  pbVar5 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + bVar2,bVar2));
  if (param_1 + -1 == 0) {
    *pbVar5 = *pbVar5;
    *unaff_RSI = *unaff_RSI;
    unaff_BPL = unaff_BPL + param_4;
    pcVar9 = (char *)(param_1 + -2);
    if (pcVar9 == (char *)0x0) {
      *(byte *)(unaff_RSI + (longlong)pcVar4) = (char)unaff_RSI[(longlong)pcVar4] + bVar2;
      pcVar4[(longlong)pbVar5] = pcVar4[(longlong)pbVar5] + bVar2;
      bVar7 = *pbVar5 + CARRY1((byte)iRam0000000000000000,bVar14);
      *pcVar4 = *pcVar4 + bVar14;
      bVar1 = *pbVar5;
      pcVar4 = (char *)CONCAT71((int7)((ulonglong)pbVar5 >> 8),bVar2 | bVar1);
      pcVar9 = (char *)CONCAT62(uVar13,CONCAT11(*(char *)((ulonglong)bVar7 * 2) + '+',bVar14));
      *pcVar9 = *pcVar9 + bVar14;
      bVar7 = bVar7 ^ (byte)*unaff_RSI;
      lVar10 = (ulonglong)bVar7 - 1;
      if (lVar10 == 0 || bVar7 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *unaff_RSI = *unaff_RSI ^ (uint)lVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      lVar10 = CONCAT71((int7)((ulonglong)lVar10 >> 8),(char)lVar10 + unaff_R15B) + -1;
      if (lVar10 == 0) {
        *(byte *)unaff_RSI = (char)*unaff_RSI + (bVar2 | bVar1);
        uRam00000001460eecd7 = uRam00000001460eecd7 | 0x11002e02;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pcVar16 = (char *)CONCAT62(uVar13,CONCAT11(0x2b,bVar14));
      pcVar9 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4c);
      *pcVar9 = *pcVar9 + (char)lVar10;
      *pcVar4 = *pcVar4 + (char)((ulonglong)lVar10 >> 8);
      uVar15 = (uint)lVar10 ^ (uint)pcVar16;
      pcVar9 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x1d);
      *pcVar9 = *pcVar9 + in_R10B;
      *pcVar16 = *pcVar16 + param_4;
      pcVar9 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + 3);
      *pcVar9 = *pcVar9 + unaff_BH;
      uVar11 = (ulonglong)
               CONCAT22((short)(uVar15 >> 0x10),
                        CONCAT11((char)(uVar15 >> 8) + (char)*unaff_RSI,(char)uVar15));
      pcVar9 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + 5);
      *pcVar9 = *pcVar9 + unaff_BH;
      goto code_r0x0001404ce42f;
    }
    *pcVar9 = *pcVar9 + -0x2b;
    puVar6 = (uint *)((longlong)pbVar5 * 2 + 0x21);
    *puVar6 = *puVar6 >> 1 | (uint)((*puVar6 & 1) != 0) << 0x1f;
  }
  else {
    pbVar5[-0x4a] = pbVar5[-0x4a] + bVar14;
    pbVar5 = (byte *)(ulonglong)(uint)((int)pbVar5 - *(int *)pbVar5);
    *pbVar5 = *pbVar5 + unaff_R13B;
    pcVar9 = (char *)(ulonglong)((uint)(param_1 + -1) ^ (uint)pcVar4);
    *pcVar9 = *pcVar9 + unaff_R12B;
  }
  if (pcVar9 != (char *)0x0) {
    cVar8 = (char)pcVar9;
    *pcVar4 = *pcVar4 + cVar8;
    pcVar9[3] = pcVar9[3] + (char)unaff_RDI;
    uVar13 = (undefined6)((ulonglong)pcVar9 >> 0x10);
    cVar12 = (char)((ulonglong)pcVar9 >> 8) + (char)*unaff_RSI;
    pcVar4 = (char *)(CONCAT62(uVar13,CONCAT11(cVar12,cVar8)) + 4);
    *pcVar4 = *pcVar4 + '+';
    pcVar4 = (char *)CONCAT62(uVar13,CONCAT11(cVar12 + (char)*unaff_RSI,cVar8));
    *pbVar5 = *pbVar5 + (char)pbVar5;
    *pcVar4 = *pcVar4 + bVar14;
    *unaff_RDI = *unaff_RDI + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = (char)pbVar5 + 0x60;
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)pbVar5 >> 8),bVar2);
  uVar15 = (uint)pcVar4 + *(int *)((longlong)puVar6 + 2);
  pcVar16 = (char *)(ulonglong)uVar15;
  *(byte *)puVar6 = (byte)*puVar6 ^ bVar2;
  cVar8 = (char)uVar15;
  *(byte *)((longlong)puVar6 + -0x4a) = *(byte *)((longlong)puVar6 + -0x4a) + cVar8;
  uVar3 = (uint)puVar6;
  uVar15 = uVar3 - *puVar6;
  pcVar4 = (char *)(ulonglong)uVar15;
  if ((int)*puVar6 <= (int)uVar3) {
    *pcVar4 = *pcVar4 + unaff_R13B;
    *unaff_RSI = *unaff_RSI;
    pcVar9 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + 0x4004ce3);
    *pcVar9 = *pcVar9 + param_3;
    *(undefined2 *)pcVar4 = in_ES;
    iRam0000000000000000 = CONCAT31(iRam0000000000000000._1_3_,(byte)iRam0000000000000000 + cVar8);
    uRam00000001460eed63 =
         uRam00000001460eed63 | CONCAT31((int3)(uVar15 >> 8),(char)uVar15 + *pcVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar11 = 0;
  if ((int)*puVar6 <= (int)uVar3) {
    iRam0000000000000000 = iRam0000000000000000 + (uint)(uVar3 < *puVar6);
    pcVar4 = (char *)(ulonglong)(uVar15 + 0x5420900);
  }
code_r0x0001404ce42f:
  pcVar9 = (char *)CONCAT62((int6)(uVar11 >> 0x10),
                            CONCAT11((char)(uVar11 >> 8) + (char)*unaff_RSI,(char)uVar11));
  *pcVar4 = *pcVar4 + (char)pcVar4;
  *pcVar9 = *pcVar9 + (char)pcVar16;
  uRam00000001458eed3b = uRam00000001458eed3b | (uint)pcVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

