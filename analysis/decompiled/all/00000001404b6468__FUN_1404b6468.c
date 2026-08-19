// Function: FUN_1404b6468
// Addr: 1404b6468
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

void FUN_1404b6468(longlong param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  undefined3 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar19;
  byte bVar20;
  int iVar12;
  char cVar18;
  char *in_RAX;
  char *pcVar13;
  uint *puVar14;
  undefined6 uVar22;
  undefined7 uVar21;
  byte *pbVar15;
  int *piVar16;
  uint *puVar17;
  byte bVar24;
  byte *pbVar23;
  byte bVar25;
  char unaff_BL;
  byte bVar26;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  byte bVar27;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar29;
  ulonglong uStack_10;
  undefined *puStack_8;
  undefined **ppuVar28;
  
  *(uint *)(param_2 + (longlong)in_RAX) = *(uint *)(param_2 + (longlong)in_RAX) & (uint)in_RAX;
  bVar5 = (byte)in_RAX;
  unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + bVar5;
  *in_RAX = *in_RAX + bVar5;
  pbVar23 = (byte *)(param_1 + -1);
  if (pbVar23 == (byte *)0x0 || *in_RAX == '\0') {
    while (pbVar23 != (byte *)0x0) {
      pbVar23 = pbVar23 + -1;
      out(*(undefined4 *)unaff_RSI,(short)param_2);
      unaff_RSI = unaff_RSI + 4;
    }
    pbVar15 = unaff_RSI + 1;
    *unaff_RDI = *unaff_RSI;
    puStack_8 = &UNK_1404b647e;
    pcVar13 = (char *)func_0x0001406c64c7();
    *pcVar13 = *pcVar13 + (char)pcVar13;
    pbVar23 = pbVar23 + -1;
    if (pbVar23 == (byte *)0x0 || *pcVar13 == '\0') {
      while (pbVar23 != (byte *)0x0) {
        pbVar23 = pbVar23 + -1;
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
    uVar8 = (int)pcVar13 + 0x74050002;
    *(byte *)(ulonglong)uVar8 = *(byte *)(ulonglong)uVar8 | (byte)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar5 = bVar5 ^ 6;
  bVar6 = bVar5 * '\x02';
  pcVar13 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar6);
  uVar22 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar25 = (byte)param_2;
  bVar20 = (byte)pbVar23;
  cVar7 = (char)((ulonglong)in_RAX >> 8);
  if (SCARRY1(bVar5,bVar5)) {
    pcVar13 = (char *)CONCAT62(uVar22,CONCAT11(cVar7 + bVar25,bVar6));
    if (!SCARRY1(cVar7,bVar25)) {
      *pcVar13 = *pcVar13 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RDI[(longlong)param_2 * 4 + 0x4a] = unaff_RDI[(longlong)param_2 * 4 + 0x4a] + bVar20;
    *pbVar23 = *pbVar23 + cVar7 + bVar25;
    goto code_r0x0001404b64f1;
  }
  *param_4 = *param_4;
  *pcVar13 = *pcVar13 + bVar6;
  cVar18 = cVar7 + bVar25;
  pbVar15 = (byte *)CONCAT62(uVar22,CONCAT11(cVar18,bVar6));
  if (!SCARRY1(cVar7,bVar25)) {
    *pbVar15 = *pbVar15 | bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar24 = (byte)((ulonglong)pbVar23 >> 8);
  bVar26 = unaff_BL + bVar24;
  if (!SCARRY1(unaff_BL,bVar24)) {
    halt_baddata();
  }
  *pbVar15 = *pbVar15 + bVar20;
  param_4[in_FS_OFFSET] = param_4[in_FS_OFFSET];
  *pbVar15 = *pbVar15 + bVar6;
  uVar21 = (undefined7)((ulonglong)pbVar15 >> 8);
  cVar7 = bVar5 * '\x04';
  if (SCARRY1(bVar6,bVar6)) {
    pcVar13 = (char *)CONCAT62(uVar22,CONCAT11(cVar18 + bVar25,cVar7));
    if (SCARRY1(cVar18,bVar25)) {
      unaff_RDI[(longlong)param_2 * 4 + 0x4a] = unaff_RDI[(longlong)param_2 * 4 + 0x4a] + bVar20;
      *pbVar23 = *pbVar23 + cVar7;
      halt_baddata();
    }
    uVar11 = (uint)CONCAT71((int7)((ulonglong)pcVar13 >> 8),cVar7 + *pcVar13);
    uVar8 = uVar11 + 0x80000854;
    pbVar15 = unaff_RSI;
    if (uVar11 < 0x7ffff7ac) goto code_r0x0001404b6543;
    *param_4 = *param_4;
  }
  else {
    pbVar15 = (byte *)(CONCAT71(uVar21,cVar7) | 0xc0);
    uRam0000000194506540 = uRam0000000194506540 & (uint)pbVar15;
    *pbVar15 = *pbVar15 | (byte)pbVar15;
    param_2[0x1b] = param_2[0x1b];
    pbVar15 = unaff_RSI + 1;
    uVar8 = (uint)CONCAT71(uVar21,*unaff_RSI);
    *pbVar23 = *pbVar23 + cVar18;
code_r0x0001404b6543:
    param_2[(longlong)pbVar15 * 2 + 0x6454001b] =
         param_2[(longlong)pbVar15 * 2 + 0x6454001b] + bVar24;
    *param_4 = *param_4;
    uVar8 = uVar8 + 0x74050002;
    *(uint *)(ulonglong)uVar8 = *(uint *)(ulonglong)uVar8 | uVar8;
    unaff_RSI = pbVar15 + 1;
    uVar8 = CONCAT31((int3)(uVar8 >> 8),*pbVar15);
  }
  piVar16 = (int *)(ulonglong)uVar8;
  param_2[0x68001b72] = param_2[0x68001b72] + unaff_BH;
  param_4[in_FS_OFFSET] = param_4[in_FS_OFFSET];
  *(char *)piVar16 = (char)*piVar16 + (char)uVar8;
  pbVar15 = (byte *)(param_2 + (longlong)unaff_RSI * 2 + 0x72ba001b);
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar24;
  uVar8 = (uVar8 - *piVar16) - (uint)CARRY1(bVar5,bVar24);
  puVar14 = (uint *)(ulonglong)uVar8;
  puStack_8 = (undefined *)0x21004b64;
  bVar6 = (byte)uVar8;
  *(byte *)puVar14 = (char)*puVar14 + bVar6;
  pbVar15 = (byte *)((longlong)puVar14 + -0x53ffe48e);
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar6;
  bVar27 = (byte)(uVar8 >> 8);
  if (!CARRY1(bVar5,bVar6)) {
    *pbVar23 = *pbVar23 + bVar27;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar19 = (byte)&puStack_8;
  *param_4 = *param_4 + bVar19;
  *(byte *)puVar14 = (char)*puVar14 + bVar6;
  pbVar15 = (byte *)((longlong)puVar14 + 0x73);
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar27;
  uVar10 = *puVar14;
  uVar11 = *puVar14;
  uVar9 = (uVar8 - uVar11) - (uint)CARRY1(bVar5,bVar27);
  puVar14 = (uint *)(ulonglong)uVar9;
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  if (uVar9 == 0) {
code_r0x0001404b6615:
    *(byte *)(in_FS_OFFSET + (longlong)puVar14) =
         *(byte *)(in_FS_OFFSET + (longlong)puVar14) | (byte)puVar14;
    *(char *)(unaff_RBP + 0x1b) = *(char *)(unaff_RBP + 0x1b) + bVar6;
    *unaff_RDI = *unaff_RDI + bVar24;
    bVar29 = *unaff_RDI == 0;
  }
  else {
    uVar2 = *puVar14;
    *param_4 = *param_4 + bVar19;
    uVar8 = ((uVar9 - uVar2) - (uint)(uVar8 < uVar10 || uVar8 - uVar11 < (uint)CARRY1(bVar5,bVar27))
            ) + 0x74050002;
    *(byte *)(ulonglong)uVar8 = *(byte *)(ulonglong)uVar8 | (byte)uVar8;
    pcVar13 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,bVar26)) +
                      CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,bVar26)));
    *pcVar13 = *pcVar13 + bVar6;
    iVar12 = 0x210049ec;
    bVar5 = (char)uRam00000000210049ec - 0x14;
    cVar7 = bVar5 + bVar25;
    uRam00000000210049ec = CONCAT31(uRam00000000210049ec._1_3_,cVar7);
    if (cVar7 == '\0') {
      uVar8 = (uint)CARRY1(bVar5,bVar25);
      iVar12 = (0x210049ec - uRam00000000210049ec) - uVar8;
      iVar12 = CONCAT31((int3)((uint)iVar12 >> 8),
                        (char)iVar12 + 'b' +
                        (0x210049ec < uRam00000000210049ec ||
                        0x210049ec - uRam00000000210049ec < uVar8));
code_r0x0001404b65e2:
      *pbVar23 = *pbVar23 + bVar19;
      uVar8 = iVar12 + 0x64050002;
      *(byte *)(ulonglong)uVar8 = *(byte *)(ulonglong)uVar8 | (byte)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,bVar26)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,bVar26)) + unaff_BH;
    if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,bVar26)) == '\0')
    goto code_r0x0001404b65e2;
    bVar29 = CARRY1(bRam00000000420093d8,unaff_BH);
    bRam00000000420093d8 = bRam00000000420093d8 + unaff_BH;
    cVar7 = (-bRam00000000420093d8 - 0x14) - bVar29;
    uVar8 = (int)CONCAT71((int7)(CONCAT62(0x2100,CONCAT11(-(0xec < bRam00000000420093d8 ||
                                                           (byte)(-bRam00000000420093d8 - 0x14) <
                                                           bVar29),cVar7)) >> 8),cVar7) + 0xa74;
    cVar7 = (char)uVar8;
    if (uVar8 == 0) {
      *unaff_RDI = *unaff_RDI + bVar24;
      if (*unaff_RDI != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_2 = *param_2 + bVar25;
      iVar12 = 0;
      goto code_r0x0001404b65e2;
    }
    *param_4 = *param_4 + bVar19;
    *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + cVar7;
    *unaff_RDI = *unaff_RDI + bVar24;
    if (*unaff_RDI != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar13 = (char *)(unaff_RBP + 0x1b + (longlong)unaff_RSI * 2);
    *pcVar13 = *pcVar13 + unaff_BH;
    uVar8 = CONCAT22((short)(uVar8 >> 0x10),CONCAT11((char)(uVar8 >> 8) + unaff_BH,cVar7));
    param_4[in_FS_OFFSET] = param_4[in_FS_OFFSET] + bVar19;
    *unaff_RSI = *unaff_RSI + cVar7;
    *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + cVar7;
    cVar7 = in(4);
    puVar14 = (uint *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),cVar7);
    *(byte *)puVar14 = (byte)*puVar14 + cVar7;
    bVar29 = (byte)*puVar14 == 0;
    if (!bVar29) {
      *(byte *)puVar14 = (byte)*puVar14 + cVar7;
      goto code_r0x0001404b6615;
    }
  }
  if (bVar29) {
    *param_2 = *param_2 + bVar25;
    *pbVar23 = *pbVar23 + bVar19;
    bVar5 = (byte)puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + bVar5;
    uVar8 = *puVar14;
    *(byte *)puVar14 = (byte)*puVar14 + bVar5;
    if ((byte)*puVar14 == 0) {
      *unaff_RDI = *unaff_RDI + bVar24;
      ppuVar28 = &puStack_8;
      if (*unaff_RDI == 0) {
        *param_2 = *param_2 + bVar25;
        bVar27 = *pbVar23;
        *pbVar23 = *pbVar23 + bVar19;
        bVar3 = bVar5 - *(byte *)((longlong)puVar14 * 2);
        puVar14 = (uint *)CONCAT62((int6)((ulonglong)puVar14 >> 0x10),
                                   CONCAT11(-(bVar5 < *(byte *)((longlong)puVar14 * 2) ||
                                             bVar3 < CARRY1(bVar27,bVar19)),
                                            bVar3 - CARRY1(bVar27,bVar19)));
        goto code_r0x0001404b663a;
      }
    }
    else {
      uVar8 = (uint)CARRY1((byte)uVar8,bVar5);
      uVar11 = (uint)puVar14 - *puVar14;
      uVar10 = uVar11 - uVar8;
      ppuVar28 = (undefined **)&uStack_10;
      uStack_10 = (ulonglong)uVar10;
      iVar12 = uVar10 + 0x1421004a + (uint)((uint)puVar14 < *puVar14 || uVar11 < uVar8);
      puVar14 = (uint *)(ulonglong)CONCAT31((int3)((uint)iVar12 >> 8),(char)iVar12 + -0xc);
    }
  }
  else {
code_r0x0001404b663a:
    uVar8 = (uint)puVar14 | *puVar14;
    bVar29 = 0x5ffff7cb < uVar8;
    uVar8 = uVar8 + 0xa0000834;
    puVar14 = (uint *)(ulonglong)uVar8;
    ppuVar28 = &puStack_8;
    if (bVar29 || uVar8 == 0) goto code_r0x0001404b665e;
    bVar29 = CARRY1(unaff_BH,bVar20);
    unaff_BH = unaff_BH + bVar20;
    if (bVar29 || unaff_BH == 0) {
      bVar29 = CARRY1(*param_4,bVar19);
      *param_4 = *param_4 + bVar19;
      ppuVar28 = &puStack_8;
      goto code_r0x0001404b665e;
    }
    *(byte *)((longlong)puVar14 + 0x15) = *(byte *)((longlong)puVar14 + 0x15) + bVar25;
    ppuVar28 = &puStack_8;
  }
  bVar5 = *pbVar23;
  bVar27 = (byte)ppuVar28;
  *pbVar23 = *pbVar23 + bVar27;
  *(char *)((longlong)ppuVar28 + (longlong)unaff_RSI * 8) =
       *(char *)((longlong)ppuVar28 + (longlong)unaff_RSI * 8) + bVar25;
  uVar8 = (uint)CONCAT71((int7)((ulonglong)puVar14 >> 8),
                         (char)puVar14 + '\x04' + CARRY1(bVar5,bVar27));
  uVar11 = uVar8 + 0xcf000a54;
  puVar14 = (uint *)(ulonglong)uVar11;
  if (uVar8 < 0x30fff5ac && uVar11 != 0) {
    pbVar23 = unaff_RDI + (longlong)unaff_RSI * 2;
    bVar29 = CARRY1(*pbVar23,bVar26);
    *pbVar23 = *pbVar23 + bVar26;
code_r0x0001404b665e:
    uVar8 = ((int)puVar14 - *puVar14) - (uint)bVar29;
    pbVar23 = (byte *)(ulonglong)uVar8;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)ppuVar28;
    *pbVar23 = *pbVar23 + (byte)uVar8;
    if (CARRY1(unaff_BH,bVar20) || (byte)(unaff_BH + bVar20) == '\0') {
      *pbVar23 = *pbVar23 | (byte)uVar8;
      uVar8 = CONCAT31((int3)(uVar8 >> 8),uRam50001b76cf001b76) + 0x21004a;
      pbVar23 = (byte *)(ulonglong)uVar8;
      bVar5 = *pbVar23;
      *pbVar23 = *pbVar23 + (byte)uVar8;
      uVar8 = CONCAT31((int3)(uVar8 >> 8),uRam50001b76cf001b76) + 0x1821004a +
              (uint)CARRY1(bVar5,(byte)uVar8);
      *(byte *)(ulonglong)uVar8 = *(byte *)(ulonglong)uVar8 | (byte)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar15 = unaff_RDI + (longlong)unaff_RSI * 2;
    bVar5 = *pbVar15;
    *pbVar15 = *pbVar15 + bVar26;
    uVar8 = (uVar8 - *(int *)pbVar23) - (uint)CARRY1(bVar5,bVar26);
    pcVar13 = (char *)(ulonglong)uVar8;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)ppuVar28;
    *pcVar13 = *pcVar13 + bVar20;
    *pcVar13 = *pcVar13 + (char)uVar8;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)puVar14 = (byte)*puVar14 | (byte)uVar11;
  uVar8 = CONCAT22((short)(uVar11 >> 0x10),
                   CONCAT11(((char)(uVar11 >> 8) + bVar6) * '\x02',(byte)uVar11));
  uVar8 = uVar8 | *(uint *)(ulonglong)uVar8;
  piVar16 = (int *)(ulonglong)uVar8;
  param_2[(longlong)pbVar23] = param_2[(longlong)pbVar23] + bVar25;
  *(byte *)((longlong)piVar16 + (longlong)pbVar23) =
       *(byte *)((longlong)piVar16 + (longlong)pbVar23) + bVar6;
  pbVar15 = (byte *)((longlong)piVar16 + -0x30ffe48a);
  bVar5 = *pbVar15;
  bVar19 = (byte)(uVar8 >> 8);
  *pbVar15 = *pbVar15 + bVar19;
  if (CARRY1(bVar5,bVar19) || *pbVar15 == 0) {
    halt_baddata();
  }
  *(char *)((longlong)piVar16 + 0x15) = *(char *)((longlong)piVar16 + 0x15) + bVar25;
  *pbVar23 = *pbVar23 + bVar27;
  *(char *)piVar16 = (char)*piVar16 + (char)uVar8;
  pbVar15 = (byte *)((longlong)piVar16 + -0x30ffe48a);
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar19;
  if (!CARRY1(bVar5,bVar19) && *pbVar15 != 0) {
    *(char *)((longlong)piVar16 + 0x15) = *(char *)((longlong)piVar16 + 0x15) + bVar25;
    bVar5 = *pbVar23;
    *pbVar23 = *pbVar23 + bVar27;
    *(byte *)piVar16 = ((char)*piVar16 - bVar20) - CARRY1(bVar5,bVar27);
    *(byte *)piVar16 = (char)*piVar16 + bVar26;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar8 = (uVar8 - *piVar16) - (uint)CARRY1(bVar5,bVar19);
  piVar16 = (int *)(ulonglong)uVar8;
  bVar5 = (byte)uVar8;
  if (-1 < (char)(bVar5 - *unaff_RDI)) {
    pcVar13 = (char *)(param_1 + 0x48 + (longlong)unaff_RSI * 8);
    *pcVar13 = *pcVar13 + bVar26;
    *pbVar23 = *pbVar23 + (char)(uVar8 >> 8);
    *(byte *)piVar16 = (char)*piVar16 + bVar20;
    *(byte *)piVar16 = (char)*piVar16 + bVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar8 = (uVar8 - *piVar16) - (uint)(bVar5 < *unaff_RDI);
  pbVar15 = (byte *)(ulonglong)uVar8;
  bVar5 = (byte)uVar8;
  if (-1 < (char)(bVar5 - unaff_RDI[1])) {
    pcVar13 = (char *)(param_1 + 0x48 + (longlong)unaff_RSI * 8);
    *pcVar13 = *pcVar13 + bVar26;
    bVar20 = (byte)(uVar8 >> 8);
    *pbVar23 = *pbVar23 + bVar20;
    *pbVar15 = *pbVar15 + bVar5;
    pbVar1 = pbVar15 + -0x51ffe488;
    bVar29 = CARRY1(*pbVar1,bVar5);
    *pbVar1 = *pbVar1 + bVar5;
    if ((char)*pbVar1 < '\0') goto code_r0x0001404b670a;
    pcVar13 = (char *)(param_1 + 0x48 + (longlong)unaff_RSI * 8);
    *pcVar13 = *pcVar13 + bVar26;
    bVar26 = *pbVar23;
    *pbVar23 = *pbVar23 + bVar20;
    pbVar15 = (byte *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar5 + 6 + CARRY1(bVar26,bVar20));
    *(char *)((longlong)ppuVar28 + (longlong)unaff_RSI * 2) =
         *(char *)((longlong)ppuVar28 + (longlong)unaff_RSI * 2) + bVar25;
  }
  *pbVar15 = *pbVar15 | (byte)pbVar15;
  (unaff_RDI + 2)[(longlong)pbVar23] = (unaff_RDI + 2)[(longlong)pbVar23] + bVar6;
  *(byte *)ppuVar28 = *(char *)ppuVar28 + (byte)pbVar15;
  pbVar15 = (byte *)(ulonglong)((int)pbVar15 + 0x1b7a5000);
  pbVar1 = (byte *)(unaff_RBP + 0x7a);
  bVar29 = CARRY1(*pbVar1,bVar6);
  *pbVar1 = *pbVar1 + bVar6;
code_r0x0001404b670a:
  iVar12 = ((int)pbVar15 - *(int *)pbVar15) - (uint)bVar29;
  cVar7 = (char)iVar12;
  *pbVar23 = *pbVar23 + bVar27;
  uVar4 = (undefined3)(CONCAT22((short)((uint)iVar12 >> 0x10),CONCAT11(0x24,cVar7)) >> 8);
  cVar7 = cVar7 + '\x02';
  uVar8 = CONCAT31(uVar4,cVar7);
  puVar14 = (uint *)(ulonglong)uVar8;
  *(char *)((longlong)ppuVar28 + (longlong)param_2 * 2) =
       *(char *)((longlong)ppuVar28 + (longlong)param_2 * 2) + cVar7;
  *puVar14 = *puVar14 | uVar8;
  if (*puVar14 == 0) {
    if ((POPCOUNT(uVar8 - *puVar14 & 0xff) & 1U) != 0) {
      *unaff_RSI = *unaff_RSI + bVar6;
      *param_4 = *param_4 + bVar27;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[0x4d] = unaff_RDI[0x4d] | 0x24;
  *pbVar23 = *pbVar23 + 0x24;
  *(char *)puVar14 = (char)*puVar14 + cVar7;
  cVar18 = bVar6 + bVar25;
  if (SCARRY1(bVar6,bVar25) != cVar18 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(unaff_BH,cVar18) != (char)(unaff_BH + cVar18) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = CONCAT31(uVar4,cVar7 + bVar24);
  puVar17 = (uint *)(ulonglong)uVar8;
  *param_4 = *param_4 + bVar27;
  *(byte *)puVar17 = (char)*puVar17 + cVar7 + bVar24;
  puVar14 = puVar17 + -0xa7ff921;
  uVar11 = *puVar14;
  *(char *)puVar14 = (char)*puVar14 + cVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
  if (SCARRY1((char)uVar11,cVar18) != (char)*puVar14 < '\0') {
    pcVar13 = (char *)(ulonglong)(uVar8 | *puVar17);
    *(char *)((longlong)ppuVar28 + (longlong)pbVar23) =
         *(char *)((longlong)ppuVar28 + (longlong)pbVar23) + bVar25;
    *(char *)(param_1 + 0x1b7cafff) = *(char *)(param_1 + 0x1b7cafff) + cVar18;
    if (SCARRY1(cVar18,bVar25) == (char)(cVar18 + bVar25) < '\0') {
      *pcVar13 = *pcVar13 + bVar24;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)puVar17 = (char)*puVar17 + bVar24;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

