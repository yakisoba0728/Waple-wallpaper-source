// Function: FUN_1404d7888
// Addr: 1404d7888
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7888(byte *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  byte bVar14;
  byte *in_RAX;
  undefined7 uVar15;
  int *piVar12;
  byte bVar16;
  byte bVar17;
  undefined6 uVar18;
  char unaff_BL;
  byte unaff_BH;
  undefined1 *puVar19;
  byte *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  byte in_AF;
  bool bVar20;
  bool bVar21;
  byte in_TF;
  byte in_IF;
  bool in_OF;
  bool bVar22;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar10;
  char *pcVar11;
  byte *pbVar13;
  
  uVar18 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar17 = (byte)((ulonglong)param_2 >> 8);
  bVar16 = (byte)param_2;
  cVar8 = (char)param_1;
  if (in_OF) {
    pcVar11 = (char *)(unaff_RDI + 0x4d + (longlong)unaff_RSI * 2);
    *pcVar11 = *pcVar11 + bVar16;
    cVar5 = (char)((ulonglong)in_RAX >> 8);
    *param_1 = *param_1 + cVar5;
    bVar7 = (byte)in_RAX;
    *in_RAX = *in_RAX + bVar7;
    in_RAX[0x7c] = in_RAX[0x7c] + cVar5;
    param_1[0x7c] = param_1[0x7c] + bVar17;
    pcVar11 = (char *)(unaff_RDI + 0x4d + (longlong)unaff_RSI * 2);
    *pcVar11 = *pcVar11 + bVar16;
    bVar16 = *param_1;
    *param_1 = *param_1 + bVar7;
    *in_RAX = (*in_RAX - cVar8) - CARRY1(bVar16,bVar7);
    *in_RAX = *in_RAX + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar22 = SCARRY1(*unaff_RSI,unaff_BH);
  *unaff_RSI = *unaff_RSI + unaff_BH;
  bVar21 = (char)*unaff_RSI < '\0';
  bVar20 = *unaff_RSI == 0;
  puVar19 = (undefined1 *)register0x00000020;
  if (!bVar20 && bVar22 == bVar21) {
    in_RAX[unaff_RDI * 2] = in_RAX[unaff_RDI * 2] + bVar16;
    *param_4 = *param_4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    bVar7 = (byte)in_RAX;
    if (bVar20 || bVar22 != bVar21) {
      *(char *)(unaff_RDI + -0x4c) = *(char *)(unaff_RDI + -0x4c) + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in_RAX[unaff_RDI * 2] = in_RAX[unaff_RDI * 2] + bVar16;
    *param_4 = *param_4 + unaff_R12B;
    *in_RAX = *in_RAX + bVar7;
    bVar14 = *in_RAX;
    *in_RAX = *in_RAX + bVar17;
    uVar15 = (undefined7)((ulonglong)in_RAX >> 8);
    if (*in_RAX == 0 || SCARRY1(bVar14,bVar17) != (char)*in_RAX < '\0') {
      *param_2 = *param_2 + bVar7;
      bVar20 = CARRY1(*in_RAX,bVar7);
      *in_RAX = *in_RAX + bVar7;
    }
    else {
      bVar20 = CARRY1(*unaff_RSI,bVar17);
      bVar14 = *unaff_RSI;
      *unaff_RSI = *unaff_RSI + bVar17;
      if (*unaff_RSI != 0 && SCARRY1(bVar14,bVar17) == (char)*unaff_RSI < '\0') {
        *in_RAX = *in_RAX + cVar8;
        if (-1 < (char)*in_RAX) {
          *param_1 = *param_1 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        in_RAX[0x4d] = unaff_BH;
        *param_1 = *param_1 + bVar7;
        *(byte *)((longlong)in_RAX * 2) = *(byte *)((longlong)in_RAX * 2) | bVar7;
        param_2[0x60037004] = param_2[0x60037004] | bVar17;
        bVar17 = bVar17 + *in_RAX;
        uRam00000001347279c0 = uRam00000001347279c0 & (uint)puVar19;
        uVar10 = (uint)CONCAT71(uVar15,bVar7 + *in_RAX);
        uVar9 = uVar10 + 0x80011e4;
        bVar20 = 0xf7ffee1b < uVar10 || CARRY4(uVar9,(uint)CARRY1(bVar7,*in_RAX));
        uVar9 = uVar9 + CARRY1(bVar7,*in_RAX);
        pbVar13 = (byte *)(ulonglong)uVar9;
        *(undefined1 **)(puVar19 + -8) = puVar19;
        bVar14 = *pbVar13;
        bVar4 = (byte)uVar9;
        bVar7 = *pbVar13;
        *pbVar13 = bVar7 + bVar4 + bVar20;
        bVar1 = unaff_RSI[-0x6036ffc9];
        unaff_RSI[-0x6036ffc9] =
             (byte)(CONCAT11(CARRY1(bVar14,bVar4) || CARRY1(bVar7 + bVar4,bVar20),bVar1) >> 5) |
             bVar1 << 4;
        cVar5 = bVar4 + unaff_BL;
        pcVar11 = (char *)(ulonglong)CONCAT31((int3)(uVar9 >> 8),cVar5);
        bVar7 = (byte)(uVar9 >> 8);
        if (-1 < cVar5) {
          *param_1 = *param_1 + bVar7;
          *unaff_RSI = *unaff_RSI + cVar5;
          *pcVar11 = *pcVar11 + cVar5;
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar2 = (undefined2)(uVar9 >> 0x10);
        bVar14 = bVar7 + bVar17;
        cVar6 = cVar5 + *(char *)(ulonglong)CONCAT22(uVar2,CONCAT11(bVar14,cVar5)) +
                CARRY1(bVar7,bVar17);
        cVar5 = bVar14 * '\x02';
        uVar9 = CONCAT22(uVar2,CONCAT11(cVar5,cVar6));
        piVar12 = (int *)(ulonglong)uVar9;
        *piVar12 = *piVar12 + uVar9 + (uint)CARRY1(bVar14,bVar14);
        pbVar13 = (byte *)((longlong)piVar12 + CONCAT62(uVar18,CONCAT11(bVar17,bVar16)));
        bVar7 = *pbVar13;
        *pbVar13 = *pbVar13 + bVar16;
        unaff_RSI[unaff_RDI + 0x379ca500] =
             unaff_RSI[unaff_RDI + 0x379ca500] + unaff_BL + CARRY1(bVar7,bVar16);
        uVar3 = (undefined3)(uVar9 >> 8);
        bVar7 = cVar6 + unaff_BL;
        pbVar13 = (byte *)(ulonglong)CONCAT31(uVar3,bVar7);
        if (-1 < (char)bVar7) {
          *param_1 = *param_1 + cVar5;
          *pbVar13 = *pbVar13 + bVar7;
          bVar7 = *pbVar13;
          bVar17 = *pbVar13;
          *pbVar13 = *pbVar13 + bVar16;
          *(ulonglong *)(puVar19 + -0x10) =
               (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1(bVar17,bVar16) * 0x800 |
               (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
               (ulonglong)((char)*pbVar13 < '\0') * 0x80 | (ulonglong)(*pbVar13 == 0) * 0x40 |
               (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*pbVar13) & 1U) == 0) * 4 |
               (ulonglong)CARRY1(bVar7,bVar16) | (ulonglong)(in_ID & 1) * 0x200000 |
               (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
               (ulonglong)(in_AC & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar14 = *pbVar13;
        *param_1 = *param_1 + cVar5;
        *(byte *)CONCAT62(uVar18,CONCAT11(bVar17,bVar16 + bVar14)) =
             *(byte *)CONCAT62(uVar18,CONCAT11(bVar17,bVar16 + bVar14)) | bVar7;
        *pbVar13 = *pbVar13 + cVar8;
        pcVar11 = (char *)((ulonglong)CONCAT31(uVar3,bVar7) ^ 0x14);
        cVar8 = (char)pcVar11;
        pcVar11[-0x4dffc84b] = pcVar11[-0x4dffc84b] + cVar8;
        pcVar11[0x21004d79] = pcVar11[0x21004d79] + cVar5;
        *pcVar11 = *pcVar11 + cVar8;
        pcVar11[-0x4dffc84b] = pcVar11[-0x4dffc84b] + cVar8;
        pcVar11[0x21004d79] = pcVar11[0x21004d79] + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(undefined1 **)(puVar19 + -8) = puVar19;
    bVar22 = SCARRY1(bVar7,*in_RAX) != SCARRY1(bVar7 + *in_RAX,bVar20);
    cVar5 = bVar7 + *in_RAX + bVar20;
    in_RAX = (byte *)CONCAT71(uVar15,cVar5);
    bVar21 = cVar5 < '\0';
    bVar20 = cVar5 == '\0';
    puVar19 = puVar19 + -8;
    if (!bVar22) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}

