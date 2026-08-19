// Function: FUN_1404b6554
// Addr: 1404b6554
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b65fb) overlaps instruction at (ram,0x0001404b65fa)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b6796) */
/* WARNING: Removing unreachable block (ram,0x0001404b67af) */
/* WARNING: Removing unreachable block (ram,0x0001404b67a7) */
/* WARNING: Removing unreachable block (ram,0x0001404b682c) */
/* WARNING: Removing unreachable block (ram,0x0001404b67b2) */
/* WARNING: Removing unreachable block (ram,0x0001404b67c9) */
/* WARNING: Removing unreachable block (ram,0x0001404b67bf) */
/* WARNING: Removing unreachable block (ram,0x0001404b67d3) */
/* WARNING: Removing unreachable block (ram,0x0001404b67ee) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1404b6554(byte *param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  undefined3 uVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte bVar20;
  undefined8 in_RAX;
  int *piVar15;
  uint *puVar16;
  char *pcVar17;
  byte *pbVar18;
  uint *puVar19;
  byte bVar22;
  byte bVar23;
  char cVar24;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  byte bVar25;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte *unaff_RDI;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool in_CF;
  bool bVar27;
  ulonglong auStack_10 [2];
  undefined7 uVar21;
  ulonglong *puVar26;
  
  bVar22 = (byte)((ulonglong)param_1 >> 8);
  bVar9 = (byte)param_1;
  uVar21 = (undefined7)((ulonglong)in_RAX >> 8);
  piVar15 = (int *)CONCAT71(uVar21,*unaff_RSI);
  pcVar17 = unaff_RSI + 1;
  if (in_CF) {
    *(char *)piVar15 = (char)*piVar15 + *unaff_RSI;
    param_2[0x1b] = param_2[0x1b];
    pcVar17 = unaff_RSI + 2;
    piVar15 = (int *)CONCAT71(uVar21,unaff_RSI[1]);
  }
  param_2[0x68001b72] = param_2[0x68001b72] + unaff_BH;
  param_4[in_FS_OFFSET] = param_4[in_FS_OFFSET];
  *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
  pbVar18 = (byte *)(param_2 + (longlong)pcVar17 * 2 + 0x72ba001b);
  bVar8 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar22;
  uVar10 = ((int)piVar15 - *piVar15) - (uint)CARRY1(bVar8,bVar22);
  puVar16 = (uint *)(ulonglong)uVar10;
  auStack_10[1] = 0x21004b64;
  bVar6 = (byte)uVar10;
  *(byte *)puVar16 = (char)*puVar16 + bVar6;
  pbVar18 = (byte *)((longlong)puVar16 + -0x53ffe48e);
  bVar8 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar6;
  bVar25 = (byte)(uVar10 >> 8);
  bVar23 = (byte)param_2;
  if (!CARRY1(bVar8,bVar6)) {
    *param_1 = *param_1 + bVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar20 = (byte)(auStack_10 + 1);
  *param_4 = *param_4 + bVar20;
  *(byte *)puVar16 = (char)*puVar16 + bVar6;
  pbVar18 = (byte *)((longlong)puVar16 + 0x73);
  bVar8 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar25;
  uVar12 = *puVar16;
  uVar13 = *puVar16;
  uVar11 = (uVar10 - uVar13) - (uint)CARRY1(bVar8,bVar25);
  puVar16 = (uint *)(ulonglong)uVar11;
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  if (uVar11 == 0) {
code_r0x0001404b6615:
    *(byte *)(in_FS_OFFSET + (longlong)puVar16) =
         *(byte *)(in_FS_OFFSET + (longlong)puVar16) | (byte)puVar16;
    *(char *)(unaff_RBP + 0x1b) = *(char *)(unaff_RBP + 0x1b) + bVar6;
    *unaff_RDI = *unaff_RDI + bVar22;
    bVar27 = *unaff_RDI == 0;
  }
  else {
    uVar3 = *puVar16;
    *param_4 = *param_4 + bVar20;
    uVar10 = ((uVar11 - uVar3) -
             (uint)(uVar10 < uVar12 || uVar10 - uVar13 < (uint)CARRY1(bVar8,bVar25))) + 0x74050002;
    *(byte *)(ulonglong)uVar10 = *(byte *)(ulonglong)uVar10 | (byte)uVar10;
    pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                     CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *pcVar2 = *pcVar2 + bVar6;
    iVar14 = 0x210049ec;
    bVar8 = (char)uRam00000000210049ec - 0x14;
    cVar7 = bVar8 + bVar23;
    uRam00000000210049ec = CONCAT31(uRam00000000210049ec._1_3_,cVar7);
    if (cVar7 == '\0') {
      uVar10 = (uint)CARRY1(bVar8,bVar23);
      iVar14 = (0x210049ec - uRam00000000210049ec) - uVar10;
      iVar14 = CONCAT31((int3)((uint)iVar14 >> 8),
                        (char)iVar14 + 'b' +
                        (0x210049ec < uRam00000000210049ec ||
                        0x210049ec - uRam00000000210049ec < uVar10));
code_r0x0001404b65e2:
      *param_1 = *param_1 + bVar20;
      uVar10 = iVar14 + 0x64050002;
      *(byte *)(ulonglong)uVar10 = *(byte *)(ulonglong)uVar10 | (byte)uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
    if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) == '\0')
    goto code_r0x0001404b65e2;
    bVar27 = CARRY1(bRam00000000420093d8,unaff_BH);
    bRam00000000420093d8 = bRam00000000420093d8 + unaff_BH;
    cVar7 = (-bRam00000000420093d8 - 0x14) - bVar27;
    uVar10 = (int)CONCAT71((int7)(CONCAT62(0x2100,CONCAT11(-(0xec < bRam00000000420093d8 ||
                                                            (byte)(-bRam00000000420093d8 - 0x14) <
                                                            bVar27),cVar7)) >> 8),cVar7) + 0xa74;
    cVar7 = (char)uVar10;
    if (uVar10 == 0) {
      *unaff_RDI = *unaff_RDI + bVar22;
      if (*unaff_RDI != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_2 = *param_2 + bVar23;
      iVar14 = 0;
      goto code_r0x0001404b65e2;
    }
    *param_4 = *param_4 + bVar20;
    *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + cVar7;
    *unaff_RDI = *unaff_RDI + bVar22;
    if (*unaff_RDI != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar2 = (char *)(unaff_RBP + 0x1b + (longlong)pcVar17 * 2);
    *pcVar2 = *pcVar2 + unaff_BH;
    uVar10 = CONCAT22((short)(uVar10 >> 0x10),CONCAT11((char)(uVar10 >> 8) + unaff_BH,cVar7));
    param_4[in_FS_OFFSET] = param_4[in_FS_OFFSET] + bVar20;
    *pcVar17 = *pcVar17 + cVar7;
    *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + cVar7;
    cVar7 = in(4);
    puVar16 = (uint *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),cVar7);
    *(byte *)puVar16 = (byte)*puVar16 + cVar7;
    bVar27 = (byte)*puVar16 == 0;
    if (!bVar27) {
      *(byte *)puVar16 = (byte)*puVar16 + cVar7;
      goto code_r0x0001404b6615;
    }
  }
  if (bVar27) {
    *param_2 = *param_2 + bVar23;
    *param_1 = *param_1 + bVar20;
    bVar8 = (byte)puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + bVar8;
    uVar10 = *puVar16;
    *(byte *)puVar16 = (byte)*puVar16 + bVar8;
    if ((byte)*puVar16 == 0) {
      *unaff_RDI = *unaff_RDI + bVar22;
      puVar26 = auStack_10 + 1;
      if (*unaff_RDI == 0) {
        *param_2 = *param_2 + bVar23;
        bVar25 = *param_1;
        *param_1 = *param_1 + bVar20;
        bVar4 = bVar8 - *(byte *)((longlong)puVar16 * 2);
        puVar16 = (uint *)CONCAT62((int6)((ulonglong)puVar16 >> 0x10),
                                   CONCAT11(-(bVar8 < *(byte *)((longlong)puVar16 * 2) ||
                                             bVar4 < CARRY1(bVar25,bVar20)),
                                            bVar4 - CARRY1(bVar25,bVar20)));
        goto code_r0x0001404b663a;
      }
    }
    else {
      uVar10 = (uint)CARRY1((byte)uVar10,bVar8);
      uVar13 = (uint)puVar16 - *puVar16;
      uVar12 = uVar13 - uVar10;
      puVar26 = auStack_10;
      auStack_10[0] = (ulonglong)uVar12;
      iVar14 = uVar12 + 0x1421004a + (uint)((uint)puVar16 < *puVar16 || uVar13 < uVar10);
      puVar16 = (uint *)(ulonglong)CONCAT31((int3)((uint)iVar14 >> 8),(char)iVar14 + -0xc);
    }
  }
  else {
code_r0x0001404b663a:
    uVar10 = (uint)puVar16 | *puVar16;
    bVar27 = 0x5ffff7cb < uVar10;
    uVar10 = uVar10 + 0xa0000834;
    puVar16 = (uint *)(ulonglong)uVar10;
    puVar26 = auStack_10 + 1;
    if (bVar27 || uVar10 == 0) goto code_r0x0001404b665e;
    bVar27 = CARRY1(unaff_BH,bVar9);
    unaff_BH = unaff_BH + bVar9;
    if (bVar27 || unaff_BH == 0) {
      bVar27 = CARRY1(*param_4,bVar20);
      *param_4 = *param_4 + bVar20;
      puVar26 = auStack_10 + 1;
      goto code_r0x0001404b665e;
    }
    *(byte *)((longlong)puVar16 + 0x15) = *(byte *)((longlong)puVar16 + 0x15) + bVar23;
    puVar26 = auStack_10 + 1;
  }
  bVar8 = *param_1;
  bVar25 = (byte)puVar26;
  *param_1 = *param_1 + bVar25;
  *(byte *)(puVar26 + (longlong)pcVar17) = *(char *)(puVar26 + (longlong)pcVar17) + bVar23;
  uVar10 = (uint)CONCAT71((int7)((ulonglong)puVar16 >> 8),
                          (char)puVar16 + '\x04' + CARRY1(bVar8,bVar25));
  uVar13 = uVar10 + 0xcf000a54;
  puVar16 = (uint *)(ulonglong)uVar13;
  if (uVar10 < 0x30fff5ac && uVar13 != 0) {
    pbVar18 = unaff_RDI + (longlong)pcVar17 * 2;
    bVar27 = CARRY1(*pbVar18,unaff_BL);
    *pbVar18 = *pbVar18 + unaff_BL;
code_r0x0001404b665e:
    uVar10 = ((int)puVar16 - *puVar16) - (uint)bVar27;
    pbVar18 = (byte *)(ulonglong)uVar10;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)puVar26;
    *pbVar18 = *pbVar18 + (byte)uVar10;
    if (CARRY1(unaff_BH,bVar9) || (byte)(unaff_BH + bVar9) == '\0') {
      *pbVar18 = *pbVar18 | (byte)uVar10;
      uVar10 = CONCAT31((int3)(uVar10 >> 8),uRam50001b76cf001b76) + 0x21004a;
      pbVar18 = (byte *)(ulonglong)uVar10;
      bVar9 = *pbVar18;
      *pbVar18 = *pbVar18 + (byte)uVar10;
      uVar10 = CONCAT31((int3)(uVar10 >> 8),uRam50001b76cf001b76) + 0x1821004a +
               (uint)CARRY1(bVar9,(byte)uVar10);
      *(byte *)(ulonglong)uVar10 = *(byte *)(ulonglong)uVar10 | (byte)uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar1 = unaff_RDI + (longlong)pcVar17 * 2;
    bVar22 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    uVar10 = (uVar10 - *(int *)pbVar18) - (uint)CARRY1(bVar22,unaff_BL);
    pcVar17 = (char *)(ulonglong)uVar10;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)puVar26;
    *pcVar17 = *pcVar17 + bVar9;
    *pcVar17 = *pcVar17 + (char)uVar10;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)puVar16 = (byte)*puVar16 | (byte)uVar13;
  uVar10 = CONCAT22((short)(uVar13 >> 0x10),
                    CONCAT11(((char)(uVar13 >> 8) + bVar6) * '\x02',(byte)uVar13));
  uVar10 = uVar10 | *(uint *)(ulonglong)uVar10;
  piVar15 = (int *)(ulonglong)uVar10;
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + bVar23;
  *(byte *)((longlong)piVar15 + (longlong)param_1) =
       *(byte *)((longlong)piVar15 + (longlong)param_1) + bVar6;
  pbVar18 = (byte *)((longlong)piVar15 + -0x30ffe48a);
  bVar8 = *pbVar18;
  bVar20 = (byte)(uVar10 >> 8);
  *pbVar18 = *pbVar18 + bVar20;
  if (CARRY1(bVar8,bVar20) || *pbVar18 == 0) {
    halt_baddata();
  }
  *(char *)((longlong)piVar15 + 0x15) = *(char *)((longlong)piVar15 + 0x15) + bVar23;
  *param_1 = *param_1 + bVar25;
  *(char *)piVar15 = (char)*piVar15 + (char)uVar10;
  pbVar18 = (byte *)((longlong)piVar15 + -0x30ffe48a);
  bVar8 = *pbVar18;
  *pbVar18 = *pbVar18 + bVar20;
  if (!CARRY1(bVar8,bVar20) && *pbVar18 != 0) {
    *(char *)((longlong)piVar15 + 0x15) = *(char *)((longlong)piVar15 + 0x15) + bVar23;
    bVar22 = *param_1;
    *param_1 = *param_1 + bVar25;
    *(byte *)piVar15 = ((char)*piVar15 - bVar9) - CARRY1(bVar22,bVar25);
    *(byte *)piVar15 = (char)*piVar15 + unaff_BL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar10 = (uVar10 - *piVar15) - (uint)CARRY1(bVar8,bVar20);
  piVar15 = (int *)(ulonglong)uVar10;
  bVar8 = (byte)uVar10;
  if (-1 < (char)(bVar8 - *unaff_RDI)) {
    param_1[(longlong)pcVar17 * 8 + 0x49] = param_1[(longlong)pcVar17 * 8 + 0x49] + unaff_BL;
    *param_1 = *param_1 + (char)(uVar10 >> 8);
    *(byte *)piVar15 = (char)*piVar15 + bVar9;
    *(byte *)piVar15 = (char)*piVar15 + bVar8;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar10 = (uVar10 - *piVar15) - (uint)(bVar8 < *unaff_RDI);
  pbVar18 = (byte *)(ulonglong)uVar10;
  bVar9 = (byte)uVar10;
  if (-1 < (char)(bVar9 - unaff_RDI[1])) {
    param_1[(longlong)pcVar17 * 8 + 0x49] = param_1[(longlong)pcVar17 * 8 + 0x49] + unaff_BL;
    bVar8 = (byte)(uVar10 >> 8);
    *param_1 = *param_1 + bVar8;
    *pbVar18 = *pbVar18 + bVar9;
    pbVar1 = pbVar18 + -0x51ffe488;
    bVar27 = CARRY1(*pbVar1,bVar9);
    *pbVar1 = *pbVar1 + bVar9;
    if ((char)*pbVar1 < '\0') goto code_r0x0001404b670a;
    param_1[(longlong)pcVar17 * 8 + 0x49] = param_1[(longlong)pcVar17 * 8 + 0x49] + unaff_BL;
    bVar20 = *param_1;
    *param_1 = *param_1 + bVar8;
    pbVar18 = (byte *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),bVar9 + 6 + CARRY1(bVar20,bVar8));
    *(char *)((longlong)puVar26 + (longlong)pcVar17 * 2) =
         *(char *)((longlong)puVar26 + (longlong)pcVar17 * 2) + bVar23;
  }
  *pbVar18 = *pbVar18 | (byte)pbVar18;
  unaff_RDI[(longlong)(param_1 + 2)] = unaff_RDI[(longlong)(param_1 + 2)] + bVar6;
  *(byte *)puVar26 = (char)*puVar26 + (byte)pbVar18;
  pbVar18 = (byte *)(ulonglong)((int)pbVar18 + 0x1b7a5000);
  pbVar1 = (byte *)(unaff_RBP + 0x7a);
  bVar27 = CARRY1(*pbVar1,bVar6);
  *pbVar1 = *pbVar1 + bVar6;
code_r0x0001404b670a:
  iVar14 = ((int)pbVar18 - *(int *)pbVar18) - (uint)bVar27;
  cVar7 = (char)iVar14;
  *param_1 = *param_1 + bVar25;
  uVar5 = (undefined3)(CONCAT22((short)((uint)iVar14 >> 0x10),CONCAT11(0x24,cVar7)) >> 8);
  cVar7 = cVar7 + '\x02';
  uVar10 = CONCAT31(uVar5,cVar7);
  puVar16 = (uint *)(ulonglong)uVar10;
  *(char *)((longlong)puVar26 + (longlong)param_2 * 2) =
       *(char *)((longlong)puVar26 + (longlong)param_2 * 2) + cVar7;
  *puVar16 = *puVar16 | uVar10;
  if (*puVar16 == 0) {
    if ((POPCOUNT(uVar10 - *puVar16 & 0xff) & 1U) != 0) {
      *pcVar17 = *pcVar17 + bVar6;
      *param_4 = *param_4 + bVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[0x4d] = unaff_RDI[0x4d] | 0x24;
  *param_1 = *param_1 + 0x24;
  *(char *)puVar16 = (char)*puVar16 + cVar7;
  cVar24 = bVar6 + bVar23;
  if (SCARRY1(bVar6,bVar23) != cVar24 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(unaff_BH,cVar24) != (char)(unaff_BH + cVar24) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar10 = CONCAT31(uVar5,cVar7 + bVar22);
  puVar19 = (uint *)(ulonglong)uVar10;
  *param_4 = *param_4 + bVar25;
  *(byte *)puVar19 = (char)*puVar19 + cVar7 + bVar22;
  puVar16 = puVar19 + -0xa7ff921;
  uVar13 = *puVar16;
  *(char *)puVar16 = (char)*puVar16 + cVar24;
                    /* WARNING: Bad instruction - Truncating control flow here */
  if (SCARRY1((char)uVar13,cVar24) == (char)*puVar16 < '\0') {
    *(byte *)puVar19 = (char)*puVar19 + bVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar17 = (char *)(ulonglong)(uVar10 | *puVar19);
  *(char *)((longlong)puVar26 + (longlong)param_1) =
       *(char *)((longlong)puVar26 + (longlong)param_1) + bVar23;
  param_1[0x1b7cb000] = param_1[0x1b7cb000] + cVar24;
  if (SCARRY1(cVar24,bVar23) == (char)(cVar24 + bVar23) < '\0') {
    *pcVar17 = *pcVar17 + bVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

