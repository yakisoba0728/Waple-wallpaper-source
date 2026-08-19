// Function: FUN_1404d791c
// Addr: 1404d791c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d797a) overlaps instruction at (ram,0x0001404d7979)
    */

void FUN_1404d791c(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  undefined3 uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  byte bVar16;
  uint *in_RAX;
  undefined7 uVar17;
  int *piVar14;
  byte bVar18;
  byte bVar19;
  undefined6 uVar20;
  char unaff_BL;
  byte unaff_BH;
  undefined1 *puVar21;
  undefined1 *puVar22;
  longlong unaff_RBP;
  byte *unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  bool bVar23;
  byte in_AF;
  bool in_ZF;
  char in_SF;
  byte in_TF;
  byte in_IF;
  char in_OF;
  bool bVar24;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar12;
  char *pcVar13;
  byte *pbVar15;
  
  uVar20 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar19 = (byte)((ulonglong)param_2 >> 8);
  bVar18 = (byte)param_2;
  cVar9 = (char)((ulonglong)param_1 >> 8);
  pcVar13 = (char *)(unaff_RDI + 1);
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  puVar21 = (undefined1 *)register0x00000020;
  if (in_ZF || in_OF != in_SF) {
code_r0x0001404d7955:
    bVar10 = (byte)in_RAX;
    if (!(bool)in_SF) {
      *param_1 = *param_1 + bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)((longlong)in_RAX + 0x4d) = unaff_BH;
    *param_1 = *param_1 + bVar10;
    *(byte *)((longlong)in_RAX * 2) = *(byte *)((longlong)in_RAX * 2) | bVar10;
    param_2[0x60037004] = param_2[0x60037004] | bVar19;
    bVar19 = bVar19 + (byte)*in_RAX;
    uRam00000001347279c0 = uRam00000001347279c0 & (uint)puVar21;
    uVar6 = (uint)CARRY1(bVar10,(byte)*in_RAX);
    uVar12 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar10 + (byte)*in_RAX);
    uVar11 = uVar12 + 0x80011e4;
    bVar24 = 0xf7ffee1b < uVar12 || CARRY4(uVar11,uVar6);
    uVar11 = uVar11 + uVar6;
    pbVar15 = (byte *)(ulonglong)uVar11;
    *(undefined1 **)(puVar21 + -8) = puVar21;
    bVar16 = *pbVar15;
    bVar8 = (byte)uVar11;
    bVar10 = *pbVar15;
    *pbVar15 = bVar10 + bVar8 + bVar24;
    bVar2 = unaff_RSI[-0x6036ffc9];
    unaff_RSI[-0x6036ffc9] =
         (byte)(CONCAT11(CARRY1(bVar16,bVar8) || CARRY1(bVar10 + bVar8,bVar24),bVar2) >> 5) |
         bVar2 << 4;
    cVar9 = bVar8 + unaff_BL;
    pcVar13 = (char *)(ulonglong)CONCAT31((int3)(uVar11 >> 8),cVar9);
    bVar10 = (byte)(uVar11 >> 8);
    if (cVar9 < '\0') {
      uVar4 = (undefined2)(uVar11 >> 0x10);
      bVar16 = bVar10 + bVar19;
      cVar7 = cVar9 + *(char *)(ulonglong)CONCAT22(uVar4,CONCAT11(bVar16,cVar9)) +
              CARRY1(bVar10,bVar19);
      cVar9 = bVar16 * '\x02';
      uVar6 = CONCAT22(uVar4,CONCAT11(cVar9,cVar7));
      piVar14 = (int *)(ulonglong)uVar6;
      *piVar14 = *piVar14 + uVar6 + (uint)CARRY1(bVar16,bVar16);
      pbVar15 = (byte *)((longlong)piVar14 + CONCAT62(uVar20,CONCAT11(bVar19,bVar18)));
      bVar10 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar18;
      *(byte *)((longlong)(unaff_RDI + 0xde72941) + (longlong)unaff_RSI) =
           *(byte *)((longlong)(unaff_RDI + 0xde72941) + (longlong)unaff_RSI) + unaff_BL +
           CARRY1(bVar10,bVar18);
      uVar5 = (undefined3)(uVar6 >> 8);
      bVar10 = cVar7 + unaff_BL;
      pbVar15 = (byte *)(ulonglong)CONCAT31(uVar5,bVar10);
      if ((char)bVar10 < '\0') {
        bVar16 = *pbVar15;
        *param_1 = *param_1 + cVar9;
        *(byte *)CONCAT62(uVar20,CONCAT11(bVar19,bVar18 + bVar16)) =
             *(byte *)CONCAT62(uVar20,CONCAT11(bVar19,bVar18 + bVar16)) | bVar10;
        *pbVar15 = *pbVar15 + (char)param_1;
        pcVar13 = (char *)((ulonglong)CONCAT31(uVar5,bVar10) ^ 0x14);
        cVar7 = (char)pcVar13;
        pcVar13[-0x4dffc84b] = pcVar13[-0x4dffc84b] + cVar7;
        pcVar13[0x21004d79] = pcVar13[0x21004d79] + cVar9;
        *pcVar13 = *pcVar13 + cVar7;
        pcVar13[-0x4dffc84b] = pcVar13[-0x4dffc84b] + cVar7;
        pcVar13[0x21004d79] = pcVar13[0x21004d79] + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_1 = *param_1 + cVar9;
      *pbVar15 = *pbVar15 + bVar10;
      bVar10 = *pbVar15;
      bVar19 = *pbVar15;
      *pbVar15 = *pbVar15 + bVar18;
      *(ulonglong *)(puVar21 + -0x10) =
           (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1(bVar19,bVar18) * 0x800 |
           (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
           (ulonglong)((char)*pbVar15 < '\0') * 0x80 | (ulonglong)(*pbVar15 == 0) * 0x40 |
           (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*pbVar15) & 1U) == 0) * 4 |
           (ulonglong)CARRY1(bVar10,bVar18) | (ulonglong)(in_ID & 1) * 0x200000 |
           (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
           (ulonglong)(in_AC & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1 + bVar10;
    *unaff_RSI = *unaff_RSI + cVar9;
    *pcVar13 = *pcVar13 + cVar9;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)in_RAX = (byte)*in_RAX + cVar9;
  if ((char)(byte)*in_RAX < '\0') {
    *in_RAX = *in_RAX & (uint)param_1;
    in_RAX = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (byte)*in_RAX);
    pbVar15 = (byte *)((longlong)param_2 * 2);
    bVar24 = false;
    *pbVar15 = *pbVar15 | bVar18;
    bVar10 = *pbVar15;
    goto code_r0x0001404d7978;
  }
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *(byte *)in_RAX = (byte)*in_RAX + (char)in_RAX;
  bVar10 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  if (*unaff_RSI == 0 || SCARRY1(bVar10,unaff_BH) != (char)*unaff_RSI < '\0') {
    *pcVar13 = *pcVar13 + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    *(char *)(unaff_RBP + 0x7e) = *(char *)(unaff_RBP + 0x7e) + cVar9;
    *(byte *)in_RAX = (byte)*in_RAX + cVar9;
    cVar7 = (char)((ulonglong)in_RAX >> 8);
    if ((char)(byte)*in_RAX < '\0') {
      *(byte *)((longlong)in_RAX + 0x4d) = unaff_BH;
      *param_1 = *param_1 + cVar7;
      goto code_r0x0001404d7985;
    }
    *param_1 = *param_1 + cVar7;
    *param_2 = *param_2 + (char)in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX + (char)in_RAX;
    uVar17 = (undefined7)((ulonglong)in_RAX >> 8);
    cVar7 = in(7);
    in_RAX = (uint *)CONCAT71(uVar17,cVar7);
    bVar10 = *unaff_RSI;
    bVar16 = *unaff_RSI;
    *unaff_RSI = *unaff_RSI + bVar19;
    if (*unaff_RSI != 0 && SCARRY1(bVar16,bVar19) == (char)*unaff_RSI < '\0') break;
    register0x00000020 = (BADSPACEBASE *)(puVar21 + -8);
    *(undefined1 **)(puVar21 + -8) = puVar21;
    cVar3 = cVar7 + (byte)*in_RAX;
    bVar24 = SCARRY1(cVar7,(byte)*in_RAX) != SCARRY1(cVar3,CARRY1(bVar10,bVar19));
    bVar10 = cVar3 + CARRY1(bVar10,bVar19);
    in_RAX = (uint *)CONCAT71(uVar17,bVar10);
code_r0x0001404d7978:
    if (!bVar24) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar10 < 0x80) {
      halt_baddata();
    }
    *(byte *)in_RAX = (byte)*in_RAX + cVar9;
    puVar21 = (undefined1 *)register0x00000020;
  }
  bVar24 = SCARRY1(*unaff_RSI,unaff_BH);
  *unaff_RSI = *unaff_RSI + unaff_BH;
  bVar10 = *unaff_RSI;
  do {
    if (bVar10 == 0 || bVar24 != (char)bVar10 < '\0') {
      *(char *)(unaff_RDI + -0x12) = *(char *)(unaff_RDI + -0x12) + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar15 = (byte *)((longlong)in_RAX + (longlong)pcVar13 * 2);
    *pbVar15 = *pbVar15 + bVar18;
    *param_4 = *param_4 + unaff_R12B;
    *(byte *)in_RAX = (byte)*in_RAX + (char)in_RAX;
    uVar6 = *in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX + bVar19;
    if ((byte)*in_RAX == 0 || SCARRY1((byte)uVar6,bVar19) != (char)(byte)*in_RAX < '\0') {
code_r0x0001404d7985:
      bVar10 = (byte)in_RAX;
      *param_2 = *param_2 + bVar10;
      bVar23 = CARRY1((byte)*in_RAX,bVar10);
      *(byte *)in_RAX = (byte)*in_RAX + bVar10;
      puVar22 = puVar21;
    }
    else {
      bVar23 = CARRY1(*unaff_RSI,bVar19);
      bVar10 = *unaff_RSI;
      *unaff_RSI = *unaff_RSI + bVar19;
      puVar22 = puVar21;
      if (*unaff_RSI != 0 && SCARRY1(bVar10,bVar19) == (char)*unaff_RSI < '\0') {
        *(byte *)in_RAX = (byte)*in_RAX + (char)param_1;
        in_SF = (char)(byte)*in_RAX < '\0';
        goto code_r0x0001404d7955;
      }
    }
    puVar21 = puVar22 + -8;
    *(undefined1 **)(puVar22 + -8) = puVar22;
    cVar9 = (char)in_RAX + (byte)*in_RAX;
    bVar24 = SCARRY1((char)in_RAX,(byte)*in_RAX) != SCARRY1(cVar9,bVar23);
    bVar10 = cVar9 + bVar23;
    in_RAX = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar10);
    if (!bVar24) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}

