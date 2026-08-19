// Function: FUN_1404ce364
// Addr: 1404ce364
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
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001404ce45b */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1404ce364(longlong param_1,char *param_2,char param_3,char param_4)

{
  byte bVar1;
  short in_AX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  uint *puVar7;
  byte bVar8;
  char cVar9;
  char cVar13;
  ulonglong uVar10;
  longlong lVar11;
  char *pcVar12;
  undefined6 uVar14;
  byte bVar15;
  char *pcVar16;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_BPL;
  undefined7 unaff_00000029;
  uint *unaff_RSI;
  byte *unaff_RDI;
  char in_R10B;
  char unaff_R12B;
  char unaff_R13B;
  char unaff_R15B;
  undefined2 in_ES;
  char in_ZF;
  undefined1 in_OF;
  
  uVar2 = (uint)in_AX;
  pcVar5 = (char *)(ulonglong)uVar2;
  uVar10 = param_1 - 1;
  if (uVar10 == 0) {
    *pcVar5 = *pcVar5;
    *unaff_RSI = *unaff_RSI;
    *(char *)(param_1 + 0xa004ce1) = *(char *)(param_1 + 0xa004ce1) + unaff_R12B;
    *(char *)((longlong)unaff_RSI + 2) = *(char *)((longlong)unaff_RSI + 2) + unaff_BL;
    *(char *)(param_1 + 0x2e0207) = *(char *)(param_1 + 0x2e0207) + (char)((ushort)in_AX >> 8);
    *pcVar5 = *pcVar5 + (char)in_AX;
    bVar15 = (byte)param_2;
    uVar4 = uVar2 + *(uint *)((longlong)pcVar5 * 2);
    uVar3 = uVar4 + CARRY1((byte)iRam0000000000000000,bVar15);
    unaff_RSI = (uint *)(ulonglong)
                        ((int)unaff_RSI + *(int *)((longlong)unaff_RSI + (ulonglong)uVar3) +
                        (uint)(CARRY4(uVar2,*(uint *)((longlong)pcVar5 * 2)) ||
                              CARRY4(uVar4,(uint)CARRY1((byte)iRam0000000000000000,bVar15))));
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar15;
    bVar8 = *unaff_RDI;
    uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
    pcVar5 = (char *)CONCAT62(uVar14,CONCAT11(0x2b,bVar15));
    bVar1 = (byte)uVar3;
    uVar2 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11((char)(uVar3 >> 8) + bVar1,bVar1));
    pbVar6 = (byte *)(ulonglong)uVar2;
    lVar11 = (ulonglong)bVar8 - 1;
    if (lVar11 == 0) {
      *pbVar6 = *pbVar6;
      *unaff_RSI = *unaff_RSI;
      unaff_BPL = unaff_BPL + param_4;
      pcVar12 = (char *)((ulonglong)bVar8 - 2);
      if (pcVar12 == (char *)0x0) {
        *(byte *)(unaff_RSI + (longlong)pcVar5) = (char)unaff_RSI[(longlong)pcVar5] + bVar1;
        pcVar5[(longlong)pbVar6] = pcVar5[(longlong)pbVar6] + bVar1;
        bVar8 = *pbVar6 + CARRY1((byte)iRam0000000000000000,bVar15);
        *pcVar5 = *pcVar5 + bVar15;
        register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
        pcVar5 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar1 | *pbVar6);
        param_2 = (char *)CONCAT62(uVar14,CONCAT11(*(char *)((ulonglong)bVar8 * 2) + '+',bVar15));
        *param_2 = *param_2 + bVar15;
        in_OF = false;
        bVar8 = bVar8 ^ (byte)*unaff_RSI;
        uVar10 = (ulonglong)bVar8;
        in_ZF = bVar8 == 0;
        goto code_r0x0001404ce3b3;
      }
      *pcVar12 = *pcVar12 + -0x2b;
      puVar7 = (uint *)((longlong)pbVar6 * 2 + 0x21);
      *puVar7 = *puVar7 >> 1 | (uint)((*puVar7 & 1) != 0) << 0x1f;
    }
    else {
      pbVar6[-0x4a] = pbVar6[-0x4a] + bVar15;
      pbVar6 = (byte *)(ulonglong)(uVar2 - *(int *)pbVar6);
      *pbVar6 = *pbVar6 + unaff_R13B;
      pcVar12 = (char *)(ulonglong)((uint)lVar11 ^ (uint)pcVar5);
      *pcVar12 = *pcVar12 + unaff_R12B;
    }
    if (pcVar12 != (char *)0x0) {
      cVar9 = (char)pcVar12;
      *pcVar5 = *pcVar5 + cVar9;
      pcVar12[3] = pcVar12[3] + (char)unaff_RDI;
      uVar14 = (undefined6)((ulonglong)pcVar12 >> 0x10);
      cVar13 = (char)((ulonglong)pcVar12 >> 8) + (char)*unaff_RSI;
      pcVar5 = (char *)(CONCAT62(uVar14,CONCAT11(cVar13,cVar9)) + 4);
      *pcVar5 = *pcVar5 + '+';
      pcVar5 = (char *)CONCAT62(uVar14,CONCAT11(cVar13 + (char)*unaff_RSI,cVar9));
      *pbVar6 = *pbVar6 + (char)pbVar6;
      *pcVar5 = *pcVar5 + bVar15;
      *unaff_RDI = *unaff_RDI + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar8 = (char)pbVar6 + 0x60;
    puVar7 = (uint *)CONCAT71((int7)((ulonglong)pbVar6 >> 8),bVar8);
    uVar2 = (uint)pcVar5 + *(int *)((longlong)puVar7 + 2);
    pcVar16 = (char *)(ulonglong)uVar2;
    *(byte *)puVar7 = (byte)*puVar7 ^ bVar8;
    cVar9 = (char)uVar2;
    *(byte *)((longlong)puVar7 + -0x4a) = *(byte *)((longlong)puVar7 + -0x4a) + cVar9;
    uVar4 = (uint)puVar7;
    uVar2 = uVar4 - *puVar7;
    pcVar5 = (char *)(ulonglong)uVar2;
    if ((int)*puVar7 <= (int)uVar4) {
      *pcVar5 = *pcVar5 + unaff_R13B;
      *unaff_RSI = *unaff_RSI;
      pcVar12 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + 0x4004ce3);
      *pcVar12 = *pcVar12 + param_3;
      *(undefined2 *)pcVar5 = in_ES;
      iRam0000000000000000 = CONCAT31(iRam0000000000000000._1_3_,(byte)iRam0000000000000000 + cVar9)
      ;
      uRam00000001460eed63 =
           uRam00000001460eed63 | CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + *pcVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar10 = 0;
    if ((int)*puVar7 <= (int)uVar4) {
      iRam0000000000000000 = iRam0000000000000000 + (uint)(uVar4 < *puVar7);
      pcVar5 = (char *)(ulonglong)(uVar2 + 0x5420900);
    }
  }
  else {
code_r0x0001404ce3b3:
    lVar11 = uVar10 - 1;
    if (lVar11 == 0 || in_ZF != '\0') {
      if ((bool)in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_RSI = *unaff_RSI ^ (uint)lVar11;
    lVar11 = CONCAT71((int7)((ulonglong)lVar11 >> 8),(char)lVar11 + unaff_R15B) + -1;
    if (lVar11 == 0) {
      *(char *)unaff_RSI = (char)*unaff_RSI + (char)pcVar5;
      uRam00000001460eecd7 = uRam00000001460eecd7 | 0x11002e02;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char **)((longlong)register0x00000020 + -8) = pcVar5;
    pcVar16 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x2b,(char)param_2));
    pcVar12 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4c);
    *pcVar12 = *pcVar12 + (char)lVar11;
    *pcVar5 = *pcVar5 + (char)((ulonglong)lVar11 >> 8);
    uVar2 = (uint)lVar11 ^ (uint)pcVar16;
    pcVar12 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + -0x1d);
    *pcVar12 = *pcVar12 + in_R10B;
    *pcVar16 = *pcVar16 + param_4;
    *(undefined1 **)((longlong)register0x00000020 + -0x10) =
         (undefined1 *)((longlong)register0x00000020 + -8);
    pcVar12 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + 3);
    *pcVar12 = *pcVar12 + unaff_BH;
    uVar10 = (ulonglong)
             CONCAT22((short)(uVar2 >> 0x10),
                      CONCAT11((char)(uVar2 >> 8) + (char)*unaff_RSI,(char)uVar2));
    pcVar12 = (char *)(CONCAT71(unaff_00000029,unaff_BPL) + 5);
    *pcVar12 = *pcVar12 + unaff_BH;
  }
  pcVar12 = (char *)CONCAT62((int6)(uVar10 >> 0x10),
                             CONCAT11((char)(uVar10 >> 8) + (char)*unaff_RSI,(char)uVar10));
  *pcVar5 = *pcVar5 + (char)pcVar5;
  *pcVar12 = *pcVar12 + (char)pcVar16;
  uRam00000001458eed3b = uRam00000001458eed3b | (uint)pcVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

