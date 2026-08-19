// Function: FUN_1404b6420
// Addr: 1404b6420
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b6507) overlaps instruction at (ram,0x0001404b6506)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b6572) */
/* WARNING: Removing unreachable block (ram,0x0001404b6562) */
/* WARNING: Removing unreachable block (ram,0x0001404b6582) */
/* WARNING: Removing unreachable block (ram,0x0001404b6567) */
/* WARNING: Removing unreachable block (ram,0x0001404b6796) */
/* WARNING: Removing unreachable block (ram,0x0001404b67af) */
/* WARNING: Removing unreachable block (ram,0x0001404b67a7) */
/* WARNING: Removing unreachable block (ram,0x0001404b682c) */
/* WARNING: Removing unreachable block (ram,0x0001404b67b2) */
/* WARNING: Removing unreachable block (ram,0x0001404b67c9) */
/* WARNING: Removing unreachable block (ram,0x0001404b67bf) */
/* WARNING: Removing unreachable block (ram,0x0001404b67ee) */
/* WARNING: Removing unreachable block (ram,0x0001404b67d3) */

void FUN_1404b6420(undefined8 param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined3 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char cVar19;
  undefined8 in_RAX;
  undefined7 uVar22;
  char *pcVar13;
  uint *puVar14;
  byte *pbVar15;
  int *piVar16;
  byte bVar20;
  byte *pbVar17;
  byte bVar21;
  uint *puVar18;
  byte bVar25;
  ulonglong uVar23;
  byte *pbVar24;
  byte bVar26;
  byte bVar28;
  undefined2 uVar27;
  char unaff_BL;
  byte bVar29;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  byte bVar30;
  undefined **ppuVar31;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar32;
  ulonglong uStack_10;
  undefined *puStack_8;
  
  bVar5 = bRam34001b6efb001b6e;
  uVar22 = (undefined7)((ulonglong)in_RAX >> 8);
  puVar14 = (uint *)CONCAT71(uVar22,bRam34001b6efb001b6e);
  *puVar14 = *puVar14 & (uint)puVar14;
  *(byte *)puVar14 = (char)*puVar14 + bVar5;
  bVar5 = bRam34001b6efb001b6e;
  puVar14 = (uint *)CONCAT71(uVar22,bRam34001b6efb001b6e);
  uVar23 = (ulonglong)*(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *puVar14 = *puVar14 & (uint)puVar14;
  bVar6 = (char)((ulonglong)in_RAX >> 8) * '\x02';
  pbVar24 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar6,bVar5));
  *pbVar24 = *pbVar24 | bVar5;
  bVar28 = (byte)((ulonglong)param_2 >> 8);
  unaff_RSI[(longlong)pbVar24] = unaff_RSI[(longlong)pbVar24] + bVar28;
  pbVar17 = pbVar24 + -0x4ffe492;
  bVar5 = *pbVar17;
  *pbVar17 = *pbVar17 + bVar6;
  uVar27 = SUB82(param_2,0);
  out(*unaff_RSI,uVar27);
  uVar8 = ((int)pbVar24 - *(int *)pbVar24) - (uint)CARRY1(bVar5,bVar6);
  pcVar13 = (char *)((ulonglong)uVar8 ^ 99);
  *param_4 = *param_4;
  *param_2 = *param_2 + (char)pcVar13;
  *pcVar13 = *pcVar13 + (char)pcVar13;
  uVar4 = in(8);
  uVar10 = CONCAT31((int3)(uVar8 >> 8),uVar4);
  pbVar17 = (byte *)((longlong)(ulonglong)uVar10 + -0x4ffe492);
  bVar5 = *pbVar17;
  bVar6 = (byte)(uVar8 >> 8);
  *pbVar17 = *pbVar17 + bVar6;
  pbVar17 = unaff_RSI + 2;
  out(unaff_RSI[1],uVar27);
  iVar9 = (uVar10 - *(int *)(ulonglong)uVar10) - (uint)CARRY1(bVar5,bVar6);
  *param_4 = *param_4;
  uVar3 = (undefined3)((uint)iVar9 >> 8);
  bVar5 = ((byte)iVar9 ^ 99) + 2;
  pcVar13 = (char *)(ulonglong)CONCAT31(uVar3,bVar5);
  pbVar17[(longlong)&stack0x00000000] = pbVar17[(longlong)&stack0x00000000] + bVar5;
  *pcVar13 = *pcVar13 + bVar5;
  pbVar24 = (byte *)(uVar23 - 1);
  if (pbVar24 == (byte *)0x0 || *pcVar13 == '\0') {
    while (pbVar24 != (byte *)0x0) {
      pbVar24 = pbVar24 + -1;
      out(*(undefined4 *)pbVar17,uVar27);
      pbVar17 = pbVar17 + 4;
    }
    pbVar15 = pbVar17 + 1;
    *unaff_RDI = *pbVar17;
    puStack_8 = &UNK_1404b647e;
    pcVar13 = (char *)func_0x0001406c64c7();
    *pcVar13 = *pcVar13 + (char)pcVar13;
    pbVar24 = pbVar24 + -1;
    if (pbVar24 == (byte *)0x0 || *pcVar13 == '\0') {
      while (pbVar24 != (byte *)0x0) {
        pbVar24 = pbVar24 + -1;
        out(*(undefined4 *)pbVar15,(short)param_2);
        pbVar15 = pbVar15 + 4;
      }
      unaff_RDI[1] = *pbVar15;
      puStack_8 = &UNK_1404b648e;
      puVar14 = (uint *)func_0x00014b4c64d7();
      *puVar14 = *puVar14 | (uint)puVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x0001404b64f1:
    uVar10 = (int)pcVar13 + 0x74050002;
    *(byte *)(ulonglong)uVar10 = *(byte *)(ulonglong)uVar10 | (byte)uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar5 = bVar5 ^ 6;
  bVar6 = bVar5 * '\x02';
  pcVar13 = (char *)(ulonglong)CONCAT31(uVar3,bVar6);
  bVar26 = (byte)param_2;
  uVar27 = (undefined2)((uint)iVar9 >> 0x10);
  bVar21 = (byte)pbVar24;
  cVar7 = (char)((uint)iVar9 >> 8);
  if (SCARRY1(bVar5,bVar5)) {
    pcVar13 = (char *)(ulonglong)CONCAT22(uVar27,CONCAT11(cVar7 + bVar26,bVar6));
    if (!SCARRY1(cVar7,bVar26)) {
      *pcVar13 = *pcVar13 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RDI[(longlong)param_2 * 4 + 0x4a] = unaff_RDI[(longlong)param_2 * 4 + 0x4a] + bVar21;
    *pbVar24 = *pbVar24 + cVar7 + bVar26;
    goto code_r0x0001404b64f1;
  }
  *param_4 = *param_4;
  *pcVar13 = *pcVar13 + bVar6;
  cVar19 = cVar7 + bVar26;
  uVar10 = CONCAT22(uVar27,CONCAT11(cVar19,bVar6));
  pbVar15 = (byte *)(ulonglong)uVar10;
  if (!SCARRY1(cVar7,bVar26)) {
    *pbVar15 = *pbVar15 | bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar25 = (byte)((ulonglong)pbVar24 >> 8);
  bVar29 = unaff_BL + bVar25;
  if (!SCARRY1(unaff_BL,bVar25)) {
    halt_baddata();
  }
  *pbVar15 = *pbVar15 + bVar21;
  param_4[in_FS_OFFSET] = param_4[in_FS_OFFSET];
  *pbVar15 = *pbVar15 + bVar6;
  uVar3 = (undefined3)(uVar10 >> 8);
  cVar7 = bVar5 * '\x04';
  if (SCARRY1(bVar6,bVar6)) {
    uVar10 = CONCAT22(uVar27,CONCAT11(cVar19 + bVar26,cVar7));
    if (SCARRY1(cVar19,bVar26)) {
      unaff_RDI[(longlong)param_2 * 4 + 0x4a] = unaff_RDI[(longlong)param_2 * 4 + 0x4a] + bVar21;
      *pbVar24 = *pbVar24 + cVar7;
      halt_baddata();
    }
    uVar8 = CONCAT31((int3)(uVar10 >> 8),cVar7 + *(char *)(ulonglong)uVar10);
    uVar10 = uVar8 + 0x80000854;
    pbVar15 = pbVar17;
    if (uVar8 < 0x7ffff7ac) goto code_r0x0001404b6543;
    *param_4 = *param_4;
  }
  else {
    pbVar15 = (byte *)((ulonglong)CONCAT31(uVar3,cVar7) | 0xc0);
    uRam0000000194506540 = uRam0000000194506540 & (uint)pbVar15;
    *pbVar15 = *pbVar15 | (byte)pbVar15;
    param_2[0x1b] = param_2[0x1b];
    pbVar15 = unaff_RSI + 3;
    uVar10 = CONCAT31(uVar3,*pbVar17);
    *pbVar24 = *pbVar24 + cVar19;
code_r0x0001404b6543:
    param_2[(longlong)pbVar15 * 2 + 0x6454001b] =
         param_2[(longlong)pbVar15 * 2 + 0x6454001b] + bVar25;
    *param_4 = *param_4;
    uVar10 = uVar10 + 0x74050002;
    *(uint *)(ulonglong)uVar10 = *(uint *)(ulonglong)uVar10 | uVar10;
    pbVar17 = pbVar15 + 1;
    uVar10 = CONCAT31((int3)(uVar10 >> 8),*pbVar15);
  }
  piVar16 = (int *)(ulonglong)uVar10;
  param_2[0x68001b72] = param_2[0x68001b72] + unaff_BH;
  param_4[in_FS_OFFSET] = param_4[in_FS_OFFSET];
  *(char *)piVar16 = (char)*piVar16 + (char)uVar10;
  pbVar15 = (byte *)(param_2 + (longlong)pbVar17 * 2 + 0x72ba001b);
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar25;
  uVar10 = (uVar10 - *piVar16) - (uint)CARRY1(bVar5,bVar25);
  puVar14 = (uint *)(ulonglong)uVar10;
  puStack_8 = (undefined *)0x21004b64;
  bVar6 = (byte)uVar10;
  *(byte *)puVar14 = (char)*puVar14 + bVar6;
  pbVar15 = (byte *)((longlong)puVar14 + -0x53ffe48e);
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar6;
  bVar20 = (byte)(uVar10 >> 8);
  if (!CARRY1(bVar5,bVar6)) {
    *pbVar24 = *pbVar24 + bVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar30 = (byte)&puStack_8;
  *param_4 = *param_4 + bVar30;
  *(byte *)puVar14 = (char)*puVar14 + bVar6;
  pbVar15 = (byte *)((longlong)puVar14 + 0x73);
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar20;
  uVar12 = *puVar14;
  uVar8 = *puVar14;
  uVar11 = (uVar10 - uVar8) - (uint)CARRY1(bVar5,bVar20);
  puVar14 = (uint *)(ulonglong)uVar11;
  if (uVar11 == 0) {
code_r0x0001404b6615:
    *(byte *)(in_FS_OFFSET + (longlong)puVar14) =
         *(byte *)(in_FS_OFFSET + (longlong)puVar14) | (byte)puVar14;
    *(char *)(unaff_RBP + 0x1b) = *(char *)(unaff_RBP + 0x1b) + bVar28;
    *unaff_RDI = *unaff_RDI + bVar25;
    bVar32 = *unaff_RDI == 0;
  }
  else {
    uVar2 = *puVar14;
    *param_4 = *param_4 + bVar30;
    uVar10 = ((uVar11 - uVar2) -
             (uint)(uVar10 < uVar12 || uVar10 - uVar8 < (uint)CARRY1(bVar5,bVar20))) + 0x74050002;
    *(byte *)(ulonglong)uVar10 = *(byte *)(ulonglong)uVar10 | (byte)uVar10;
    pcVar13 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,bVar29)) +
                      CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,bVar29)));
    *pcVar13 = *pcVar13 + bVar28;
    iVar9 = 0x210049ec;
    bVar5 = (char)uRam00000000210049ec - 0x14;
    cVar7 = bVar5 + bVar26;
    uRam00000000210049ec = CONCAT31(uRam00000000210049ec._1_3_,cVar7);
    if (cVar7 == '\0') {
      uVar10 = (uint)CARRY1(bVar5,bVar26);
      iVar9 = (0x210049ec - uRam00000000210049ec) - uVar10;
      iVar9 = CONCAT31((int3)((uint)iVar9 >> 8),
                       (char)iVar9 + 'b' +
                       (0x210049ec < uRam00000000210049ec ||
                       0x210049ec - uRam00000000210049ec < uVar10));
code_r0x0001404b65e2:
      *pbVar24 = *pbVar24 + bVar30;
      uVar10 = iVar9 + 0x64050002;
      *(byte *)(ulonglong)uVar10 = *(byte *)(ulonglong)uVar10 | (byte)uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,bVar29)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,bVar29)) + unaff_BH;
    if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,bVar29)) == '\0')
    goto code_r0x0001404b65e2;
    bVar32 = CARRY1(bRam00000000420093d8,unaff_BH);
    bRam00000000420093d8 = bRam00000000420093d8 + unaff_BH;
    cVar7 = (-bRam00000000420093d8 - 0x14) - bVar32;
    uVar10 = (int)CONCAT71((int7)(CONCAT62(0x2100,CONCAT11(-(0xec < bRam00000000420093d8 ||
                                                            (byte)(-bRam00000000420093d8 - 0x14) <
                                                            bVar32),cVar7)) >> 8),cVar7) + 0xa74;
    cVar7 = (char)uVar10;
    if (uVar10 == 0) {
      *unaff_RDI = *unaff_RDI + bVar25;
      if (*unaff_RDI != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_2 = *param_2 + bVar26;
      iVar9 = 0;
      goto code_r0x0001404b65e2;
    }
    *param_4 = *param_4 + bVar30;
    *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + cVar7;
    *unaff_RDI = *unaff_RDI + bVar25;
    if (*unaff_RDI != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar13 = (char *)(unaff_RBP + 0x1b + (longlong)pbVar17 * 2);
    *pcVar13 = *pcVar13 + unaff_BH;
    uVar10 = CONCAT22((short)(uVar10 >> 0x10),CONCAT11((char)(uVar10 >> 8) + unaff_BH,cVar7));
    param_4[in_FS_OFFSET] = param_4[in_FS_OFFSET] + bVar30;
    *pbVar17 = *pbVar17 + cVar7;
    *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + cVar7;
    cVar7 = in(4);
    puVar14 = (uint *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),cVar7);
    *(byte *)puVar14 = (byte)*puVar14 + cVar7;
    bVar32 = (byte)*puVar14 == 0;
    if (!bVar32) {
      *(byte *)puVar14 = (byte)*puVar14 + cVar7;
      goto code_r0x0001404b6615;
    }
  }
  if (bVar32) {
    *param_2 = *param_2 + bVar26;
    *pbVar24 = *pbVar24 + bVar30;
    bVar5 = (byte)puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + bVar5;
    uVar10 = *puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + bVar5;
    if ((byte)*puVar14 == 0) {
      *unaff_RDI = *unaff_RDI + bVar25;
      ppuVar31 = &puStack_8;
      if (*unaff_RDI == 0) {
        *param_2 = *param_2 + bVar26;
        bVar6 = *pbVar24;
        *pbVar24 = *pbVar24 + bVar30;
        bVar20 = bVar5 - *(byte *)((longlong)puVar14 * 2);
        puVar14 = (uint *)CONCAT62((int6)((ulonglong)puVar14 >> 0x10),
                                   CONCAT11(-(bVar5 < *(byte *)((longlong)puVar14 * 2) ||
                                             bVar20 < CARRY1(bVar6,bVar30)),
                                            bVar20 - CARRY1(bVar6,bVar30)));
        goto code_r0x0001404b663a;
      }
    }
    else {
      uVar10 = (uint)CARRY1((byte)uVar10,bVar5);
      uVar8 = (uint)puVar14 - *puVar14;
      uVar12 = uVar8 - uVar10;
      ppuVar31 = (undefined **)&uStack_10;
      uStack_10 = (ulonglong)uVar12;
      iVar9 = uVar12 + 0x1421004a + (uint)((uint)puVar14 < *puVar14 || uVar8 < uVar10);
      puVar14 = (uint *)(ulonglong)CONCAT31((int3)((uint)iVar9 >> 8),(char)iVar9 + -0xc);
    }
  }
  else {
code_r0x0001404b663a:
    uVar10 = (uint)puVar14 | *puVar14;
    bVar32 = 0x5ffff7cb < uVar10;
    uVar10 = uVar10 + 0xa0000834;
    puVar14 = (uint *)(ulonglong)uVar10;
    ppuVar31 = &puStack_8;
    if (bVar32 || uVar10 == 0) goto code_r0x0001404b665e;
    bVar32 = CARRY1(unaff_BH,bVar21);
    unaff_BH = unaff_BH + bVar21;
    if (bVar32 || unaff_BH == 0) {
      bVar32 = CARRY1(*param_4,bVar30);
      *param_4 = *param_4 + bVar30;
      ppuVar31 = &puStack_8;
      goto code_r0x0001404b665e;
    }
    *(byte *)((longlong)puVar14 + 0x15) = *(byte *)((longlong)puVar14 + 0x15) + bVar26;
    ppuVar31 = &puStack_8;
  }
  bVar5 = *pbVar24;
  bVar6 = (byte)ppuVar31;
  *pbVar24 = *pbVar24 + bVar6;
  *(char *)((longlong)ppuVar31 + (longlong)pbVar17 * 8) =
       *(char *)((longlong)ppuVar31 + (longlong)pbVar17 * 8) + bVar26;
  uVar8 = (uint)CONCAT71((int7)((ulonglong)puVar14 >> 8),
                         (char)puVar14 + '\x04' + CARRY1(bVar5,bVar6));
  uVar10 = uVar8 + 0xcf000a54;
  puVar14 = (uint *)(ulonglong)uVar10;
  if (uVar8 < 0x30fff5ac && uVar10 != 0) {
    pbVar24 = unaff_RDI + (longlong)pbVar17 * 2;
    bVar32 = CARRY1(*pbVar24,bVar29);
    *pbVar24 = *pbVar24 + bVar29;
code_r0x0001404b665e:
    uVar10 = ((int)puVar14 - *puVar14) - (uint)bVar32;
    pbVar24 = (byte *)(ulonglong)uVar10;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)ppuVar31;
    *pbVar24 = *pbVar24 + (byte)uVar10;
    if (CARRY1(unaff_BH,bVar21) || (byte)(unaff_BH + bVar21) == '\0') {
      *pbVar24 = *pbVar24 | (byte)uVar10;
      uVar10 = CONCAT31((int3)(uVar10 >> 8),uRam50001b76cf001b76) + 0x21004a;
      pbVar17 = (byte *)(ulonglong)uVar10;
      bVar5 = *pbVar17;
      *pbVar17 = *pbVar17 + (byte)uVar10;
      uVar10 = CONCAT31((int3)(uVar10 >> 8),uRam50001b76cf001b76) + 0x1821004a +
               (uint)CARRY1(bVar5,(byte)uVar10);
      *(byte *)(ulonglong)uVar10 = *(byte *)(ulonglong)uVar10 | (byte)uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar17 = unaff_RDI + (longlong)pbVar17 * 2;
    bVar5 = *pbVar17;
    *pbVar17 = *pbVar17 + bVar29;
    uVar10 = (uVar10 - *(int *)pbVar24) - (uint)CARRY1(bVar5,bVar29);
    pcVar13 = (char *)(ulonglong)uVar10;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)ppuVar31;
    *pcVar13 = *pcVar13 + bVar21;
    *pcVar13 = *pcVar13 + (char)uVar10;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)puVar14 = (byte)*puVar14 | (byte)uVar10;
  uVar10 = CONCAT22((short)(uVar10 >> 0x10),
                    CONCAT11(((char)(uVar10 >> 8) + bVar28) * '\x02',(byte)uVar10));
  uVar10 = uVar10 | *(uint *)(ulonglong)uVar10;
  piVar16 = (int *)(ulonglong)uVar10;
  param_2[(longlong)pbVar24] = param_2[(longlong)pbVar24] + bVar26;
  *(byte *)((longlong)piVar16 + (longlong)pbVar24) =
       *(byte *)((longlong)piVar16 + (longlong)pbVar24) + bVar28;
  pbVar15 = (byte *)((longlong)piVar16 + -0x30ffe48a);
  bVar5 = *pbVar15;
  bVar20 = (byte)(uVar10 >> 8);
  *pbVar15 = *pbVar15 + bVar20;
  if (CARRY1(bVar5,bVar20) || *pbVar15 == 0) {
    halt_baddata();
  }
  *(char *)((longlong)piVar16 + 0x15) = *(char *)((longlong)piVar16 + 0x15) + bVar26;
  *pbVar24 = *pbVar24 + bVar6;
  *(char *)piVar16 = (char)*piVar16 + (char)uVar10;
  pbVar15 = (byte *)((longlong)piVar16 + -0x30ffe48a);
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar20;
  if (!CARRY1(bVar5,bVar20) && *pbVar15 != 0) {
    *(char *)((longlong)piVar16 + 0x15) = *(char *)((longlong)piVar16 + 0x15) + bVar26;
    bVar5 = *pbVar24;
    *pbVar24 = *pbVar24 + bVar6;
    *(byte *)piVar16 = ((char)*piVar16 - bVar21) - CARRY1(bVar5,bVar6);
    *(byte *)piVar16 = (char)*piVar16 + bVar29;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar10 = (uVar10 - *piVar16) - (uint)CARRY1(bVar5,bVar20);
  piVar16 = (int *)(ulonglong)uVar10;
  bVar5 = (byte)uVar10;
  if (-1 < (char)(bVar5 - *unaff_RDI)) {
    pcVar13 = (char *)(uVar23 + 0x48 + (longlong)pbVar17 * 8);
    *pcVar13 = *pcVar13 + bVar29;
    *pbVar24 = *pbVar24 + (char)(uVar10 >> 8);
    *(byte *)piVar16 = (char)*piVar16 + bVar21;
    *(byte *)piVar16 = (char)*piVar16 + bVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar10 = (uVar10 - *piVar16) - (uint)(bVar5 < *unaff_RDI);
  pbVar15 = (byte *)(ulonglong)uVar10;
  bVar5 = (byte)uVar10;
  if (-1 < (char)(bVar5 - unaff_RDI[1])) {
    pcVar13 = (char *)(uVar23 + 0x48 + (longlong)pbVar17 * 8);
    *pcVar13 = *pcVar13 + bVar29;
    bVar21 = (byte)(uVar10 >> 8);
    *pbVar24 = *pbVar24 + bVar21;
    *pbVar15 = *pbVar15 + bVar5;
    pbVar1 = pbVar15 + -0x51ffe488;
    bVar32 = CARRY1(*pbVar1,bVar5);
    *pbVar1 = *pbVar1 + bVar5;
    if ((char)*pbVar1 < '\0') goto code_r0x0001404b670a;
    pcVar13 = (char *)(uVar23 + 0x48 + (longlong)pbVar17 * 8);
    *pcVar13 = *pcVar13 + bVar29;
    bVar29 = *pbVar24;
    *pbVar24 = *pbVar24 + bVar21;
    pbVar15 = (byte *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),bVar5 + 6 + CARRY1(bVar29,bVar21));
    *(char *)((longlong)ppuVar31 + (longlong)pbVar17 * 2) =
         *(char *)((longlong)ppuVar31 + (longlong)pbVar17 * 2) + bVar26;
  }
  *pbVar15 = *pbVar15 | (byte)pbVar15;
  (unaff_RDI + 2)[(longlong)pbVar24] = (unaff_RDI + 2)[(longlong)pbVar24] + bVar28;
  *(byte *)ppuVar31 = *(char *)ppuVar31 + (byte)pbVar15;
  pbVar15 = (byte *)(ulonglong)((int)pbVar15 + 0x1b7a5000);
  pbVar1 = (byte *)(unaff_RBP + 0x7a);
  bVar32 = CARRY1(*pbVar1,bVar28);
  *pbVar1 = *pbVar1 + bVar28;
code_r0x0001404b670a:
  iVar9 = ((int)pbVar15 - *(int *)pbVar15) - (uint)bVar32;
  cVar7 = (char)iVar9;
  *pbVar24 = *pbVar24 + bVar6;
  uVar3 = (undefined3)(CONCAT22((short)((uint)iVar9 >> 0x10),CONCAT11(0x24,cVar7)) >> 8);
  cVar7 = cVar7 + '\x02';
  uVar10 = CONCAT31(uVar3,cVar7);
  puVar14 = (uint *)(ulonglong)uVar10;
  *(char *)((longlong)ppuVar31 + (longlong)param_2 * 2) =
       *(char *)((longlong)ppuVar31 + (longlong)param_2 * 2) + cVar7;
  *puVar14 = *puVar14 | uVar10;
  if (*puVar14 == 0) {
    if ((POPCOUNT(uVar10 - *puVar14 & 0xff) & 1U) != 0) {
      *pbVar17 = *pbVar17 + bVar28;
      *param_4 = *param_4 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[0x4d] = unaff_RDI[0x4d] | 0x24;
  *pbVar24 = *pbVar24 + 0x24;
  *(char *)puVar14 = (char)*puVar14 + cVar7;
  cVar19 = bVar28 + bVar26;
  if (SCARRY1(bVar28,bVar26) != cVar19 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(unaff_BH,cVar19) != (char)(unaff_BH + cVar19) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar10 = CONCAT31(uVar3,cVar7 + bVar25);
  puVar18 = (uint *)(ulonglong)uVar10;
  *param_4 = *param_4 + bVar6;
  *(byte *)puVar18 = (char)*puVar18 + cVar7 + bVar25;
  puVar14 = puVar18 + -0xa7ff921;
  uVar8 = *puVar14;
  *(char *)puVar14 = (char)*puVar14 + cVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
  if (SCARRY1((char)uVar8,cVar19) != (char)*puVar14 < '\0') {
    pcVar13 = (char *)(ulonglong)(uVar10 | *puVar18);
    *(char *)((longlong)ppuVar31 + (longlong)pbVar24) =
         *(char *)((longlong)ppuVar31 + (longlong)pbVar24) + bVar26;
    *(char *)(uVar23 + 0x1b7cafff) = *(char *)(uVar23 + 0x1b7cafff) + cVar19;
    if (SCARRY1(cVar19,bVar26) == (char)(cVar19 + bVar26) < '\0') {
      *pcVar13 = *pcVar13 + bVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)puVar18 = (char)*puVar18 + bVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

