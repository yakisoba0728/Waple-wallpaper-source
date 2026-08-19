// Function: FUN_1404b6564
// Addr: 1404b6564
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

void FUN_1404b6564(byte *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined3 uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte bVar16;
  undefined8 in_RAX;
  uint *puVar10;
  uint *puVar11;
  char *pcVar12;
  int *piVar13;
  byte *pbVar14;
  byte bVar17;
  byte *pbVar15;
  char cVar18;
  byte bVar19;
  byte bVar20;
  char cVar21;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  byte bVar22;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool in_CF;
  bool bVar23;
  ulonglong uStack_8;
  
  cVar18 = (char)((ulonglong)param_1 >> 8);
  bVar17 = (byte)param_1;
  pbVar14 = unaff_RSI + 1;
  bVar5 = *unaff_RSI;
  puVar10 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5);
  if (in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_2[0x68001b72] = param_2[0x68001b72] + unaff_BH;
  param_4[in_FS_OFFSET] = param_4[in_FS_OFFSET];
  *(byte *)puVar10 = (char)*puVar10 + bVar5;
  pbVar15 = (byte *)((longlong)puVar10 + -0x53ffe48e);
  bVar20 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar5;
  bVar22 = (byte)((ulonglong)in_RAX >> 8);
  bVar19 = (byte)param_2;
  if (!CARRY1(bVar20,bVar5)) {
    *param_1 = *param_1 + bVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4;
  *(byte *)puVar10 = (char)*puVar10 + bVar5;
  pbVar15 = (byte *)((longlong)puVar10 + 0x73);
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar22;
  uVar7 = *puVar10;
  uVar8 = (uint)puVar10 - *puVar10;
  uVar6 = uVar8 - CARRY1(bVar5,bVar22);
  puVar11 = (uint *)(ulonglong)uVar6;
  bVar20 = (byte)((ulonglong)param_2 >> 8);
  if (uVar6 == 0) {
code_r0x0001404b6615:
    *(byte *)(in_FS_OFFSET + (longlong)puVar11) =
         *(byte *)(in_FS_OFFSET + (longlong)puVar11) | (byte)puVar11;
    *(char *)(unaff_RBP + 0x1b) = *(char *)(unaff_RBP + 0x1b) + bVar20;
    *unaff_RDI = *unaff_RDI + cVar18;
    bVar23 = *unaff_RDI == 0;
  }
  else {
    uVar2 = *puVar11;
    *param_4 = *param_4;
    uVar7 = ((uVar6 - uVar2) - (uint)((uint)puVar10 < uVar7 || uVar8 < CARRY1(bVar5,bVar22))) +
            0x74050002;
    *(byte *)(ulonglong)uVar7 = *(byte *)(ulonglong)uVar7 | (byte)uVar7;
    pcVar12 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                      CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *pcVar12 = *pcVar12 + bVar20;
    iVar9 = 0x210049ec;
    bVar5 = (char)uRam00000000210049ec - 0x14;
    cVar4 = bVar5 + bVar19;
    uRam00000000210049ec = CONCAT31(uRam00000000210049ec._1_3_,cVar4);
    if (cVar4 == '\0') {
      uVar7 = (uint)CARRY1(bVar5,bVar19);
      iVar9 = (0x210049ec - uRam00000000210049ec) - uVar7;
      iVar9 = CONCAT31((int3)((uint)iVar9 >> 8),
                       (char)iVar9 + 'b' +
                       (0x210049ec < uRam00000000210049ec ||
                       0x210049ec - uRam00000000210049ec < uVar7));
code_r0x0001404b65e2:
      *param_1 = *param_1;
      uVar7 = iVar9 + 0x64050002;
      *(byte *)(ulonglong)uVar7 = *(byte *)(ulonglong)uVar7 | (byte)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
    if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) == '\0')
    goto code_r0x0001404b65e2;
    bVar23 = CARRY1(bRam00000000420093d8,unaff_BH);
    bRam00000000420093d8 = bRam00000000420093d8 + unaff_BH;
    cVar4 = (-bRam00000000420093d8 - 0x14) - bVar23;
    uVar7 = (int)CONCAT71((int7)(CONCAT62(0x2100,CONCAT11(-(0xec < bRam00000000420093d8 ||
                                                           (byte)(-bRam00000000420093d8 - 0x14) <
                                                           bVar23),cVar4)) >> 8),cVar4) + 0xa74;
    cVar4 = (char)uVar7;
    if (uVar7 == 0) {
      *unaff_RDI = *unaff_RDI + cVar18;
      if (*unaff_RDI != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_2 = *param_2 + bVar19;
      iVar9 = 0;
      goto code_r0x0001404b65e2;
    }
    *param_4 = *param_4;
    *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + cVar4;
    *unaff_RDI = *unaff_RDI + cVar18;
    if (*unaff_RDI != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar12 = (char *)(unaff_RBP + 0x1b + (longlong)pbVar14 * 2);
    *pcVar12 = *pcVar12 + unaff_BH;
    uVar7 = CONCAT22((short)(uVar7 >> 0x10),CONCAT11((char)(uVar7 >> 8) + unaff_BH,cVar4));
    param_4[in_FS_OFFSET] = param_4[in_FS_OFFSET];
    *pbVar14 = *pbVar14 + cVar4;
    *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + cVar4;
    cVar4 = in(4);
    puVar11 = (uint *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),cVar4);
    *(byte *)puVar11 = (byte)*puVar11 + cVar4;
    bVar23 = (byte)*puVar11 == 0;
    if (!bVar23) {
      *(byte *)puVar11 = (byte)*puVar11 + cVar4;
      goto code_r0x0001404b6615;
    }
  }
  if (bVar23) {
    *param_2 = *param_2 + bVar19;
    *param_1 = *param_1;
    bVar5 = (byte)puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + bVar5;
    uVar7 = *puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + bVar5;
    if ((byte)*puVar11 == 0) {
      *unaff_RDI = *unaff_RDI + cVar18;
      if (*unaff_RDI == 0) {
        *param_2 = *param_2 + bVar19;
        *param_1 = *param_1;
        puVar11 = (uint *)CONCAT62((int6)((ulonglong)puVar11 >> 0x10),
                                   CONCAT11(-(bVar5 < *(byte *)((longlong)puVar11 * 2)),
                                            bVar5 - *(byte *)((longlong)puVar11 * 2)));
        goto code_r0x0001404b663a;
      }
    }
    else {
      uVar7 = (uint)CARRY1((byte)uVar7,bVar5);
      uVar8 = (uint)puVar11 - *puVar11;
      uVar6 = uVar8 - uVar7;
      register0x00000020 = (BADSPACEBASE *)&uStack_8;
      uStack_8 = (ulonglong)uVar6;
      iVar9 = uVar6 + 0x1421004a + (uint)((uint)puVar11 < *puVar11 || uVar8 < uVar7);
      puVar11 = (uint *)(ulonglong)CONCAT31((int3)((uint)iVar9 >> 8),(char)iVar9 + -0xc);
    }
  }
  else {
code_r0x0001404b663a:
    uVar7 = (uint)puVar11 | *puVar11;
    bVar23 = 0x5ffff7cb < uVar7;
    uVar7 = uVar7 + 0xa0000834;
    puVar11 = (uint *)(ulonglong)uVar7;
    if (bVar23 || uVar7 == 0) goto code_r0x0001404b665e;
    bVar23 = CARRY1(unaff_BH,bVar17);
    unaff_BH = unaff_BH + bVar17;
    if (bVar23 || unaff_BH == 0) {
      bVar23 = false;
      *param_4 = *param_4;
      goto code_r0x0001404b665e;
    }
    *(byte *)((longlong)puVar11 + 0x15) = *(byte *)((longlong)puVar11 + 0x15) + bVar19;
  }
  bVar5 = *param_1;
  bVar22 = (byte)register0x00000020;
  *param_1 = *param_1 + bVar22;
  *(char *)((longlong)register0x00000020 + (longlong)pbVar14 * 8) =
       *(char *)((longlong)register0x00000020 + (longlong)pbVar14 * 8) + bVar19;
  uVar8 = (uint)CONCAT71((int7)((ulonglong)puVar11 >> 8),
                         (char)puVar11 + '\x04' + CARRY1(bVar5,bVar22));
  uVar7 = uVar8 + 0xcf000a54;
  puVar11 = (uint *)(ulonglong)uVar7;
  if (uVar8 < 0x30fff5ac && uVar7 != 0) {
    pbVar15 = unaff_RDI + (longlong)pbVar14 * 2;
    bVar23 = CARRY1(*pbVar15,unaff_BL);
    *pbVar15 = *pbVar15 + unaff_BL;
code_r0x0001404b665e:
    uVar7 = ((int)puVar11 - *puVar11) - (uint)bVar23;
    pbVar15 = (byte *)(ulonglong)uVar7;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)register0x00000020;
    *pbVar15 = *pbVar15 + (byte)uVar7;
    if (CARRY1(unaff_BH,bVar17) || (byte)(unaff_BH + bVar17) == '\0') {
      *pbVar15 = *pbVar15 | (byte)uVar7;
      uVar7 = CONCAT31((int3)(uVar7 >> 8),uRam50001b76cf001b76) + 0x21004a;
      pbVar14 = (byte *)(ulonglong)uVar7;
      bVar5 = *pbVar14;
      *pbVar14 = *pbVar14 + (byte)uVar7;
      uVar7 = CONCAT31((int3)(uVar7 >> 8),uRam50001b76cf001b76) + 0x1821004a +
              (uint)CARRY1(bVar5,(byte)uVar7);
      *(byte *)(ulonglong)uVar7 = *(byte *)(ulonglong)uVar7 | (byte)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar14 = unaff_RDI + (longlong)pbVar14 * 2;
    bVar5 = *pbVar14;
    *pbVar14 = *pbVar14 + unaff_BL;
    uVar7 = (uVar7 - *(int *)pbVar15) - (uint)CARRY1(bVar5,unaff_BL);
    pcVar12 = (char *)(ulonglong)uVar7;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)register0x00000020;
    *pcVar12 = *pcVar12 + bVar17;
    *pcVar12 = *pcVar12 + (char)uVar7;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)puVar11 = (byte)*puVar11 | (byte)uVar7;
  uVar7 = CONCAT22((short)(uVar7 >> 0x10),
                   CONCAT11(((char)(uVar7 >> 8) + bVar20) * '\x02',(byte)uVar7));
  uVar7 = uVar7 | *(uint *)(ulonglong)uVar7;
  piVar13 = (int *)(ulonglong)uVar7;
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + bVar19;
  *(byte *)((longlong)piVar13 + (longlong)param_1) =
       *(byte *)((longlong)piVar13 + (longlong)param_1) + bVar20;
  pbVar15 = (byte *)((longlong)piVar13 + -0x30ffe48a);
  bVar5 = *pbVar15;
  bVar16 = (byte)(uVar7 >> 8);
  *pbVar15 = *pbVar15 + bVar16;
  if (CARRY1(bVar5,bVar16) || *pbVar15 == 0) {
    halt_baddata();
  }
  *(char *)((longlong)piVar13 + 0x15) = *(char *)((longlong)piVar13 + 0x15) + bVar19;
  *param_1 = *param_1 + bVar22;
  *(char *)piVar13 = (char)*piVar13 + (char)uVar7;
  pbVar15 = (byte *)((longlong)piVar13 + -0x30ffe48a);
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar16;
  if (!CARRY1(bVar5,bVar16) && *pbVar15 != 0) {
    *(char *)((longlong)piVar13 + 0x15) = *(char *)((longlong)piVar13 + 0x15) + bVar19;
    bVar5 = *param_1;
    *param_1 = *param_1 + bVar22;
    *(byte *)piVar13 = ((char)*piVar13 - bVar17) - CARRY1(bVar5,bVar22);
    *(byte *)piVar13 = (char)*piVar13 + unaff_BL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar7 = (uVar7 - *piVar13) - (uint)CARRY1(bVar5,bVar16);
  piVar13 = (int *)(ulonglong)uVar7;
  bVar5 = (byte)uVar7;
  if (-1 < (char)(bVar5 - *unaff_RDI)) {
    param_1[(longlong)pbVar14 * 8 + 0x49] = param_1[(longlong)pbVar14 * 8 + 0x49] + unaff_BL;
    *param_1 = *param_1 + (char)(uVar7 >> 8);
    *(byte *)piVar13 = (char)*piVar13 + bVar17;
    *(byte *)piVar13 = (char)*piVar13 + bVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar7 = (uVar7 - *piVar13) - (uint)(bVar5 < *unaff_RDI);
  pbVar15 = (byte *)(ulonglong)uVar7;
  bVar5 = (byte)uVar7;
  if (-1 < (char)(bVar5 - unaff_RDI[1])) {
    param_1[(longlong)pbVar14 * 8 + 0x49] = param_1[(longlong)pbVar14 * 8 + 0x49] + unaff_BL;
    bVar17 = (byte)(uVar7 >> 8);
    *param_1 = *param_1 + bVar17;
    *pbVar15 = *pbVar15 + bVar5;
    pbVar1 = pbVar15 + -0x51ffe488;
    bVar23 = CARRY1(*pbVar1,bVar5);
    *pbVar1 = *pbVar1 + bVar5;
    if ((char)*pbVar1 < '\0') goto code_r0x0001404b670a;
    param_1[(longlong)pbVar14 * 8 + 0x49] = param_1[(longlong)pbVar14 * 8 + 0x49] + unaff_BL;
    bVar16 = *param_1;
    *param_1 = *param_1 + bVar17;
    pbVar15 = (byte *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar5 + 6 + CARRY1(bVar16,bVar17));
    *(char *)((longlong)register0x00000020 + (longlong)pbVar14 * 2) =
         *(char *)((longlong)register0x00000020 + (longlong)pbVar14 * 2) + bVar19;
  }
  *pbVar15 = *pbVar15 | (byte)pbVar15;
  unaff_RDI[(longlong)(param_1 + 2)] = unaff_RDI[(longlong)(param_1 + 2)] + bVar20;
  *(byte *)register0x00000020 = *(char *)register0x00000020 + (byte)pbVar15;
  pbVar15 = (byte *)(ulonglong)((int)pbVar15 + 0x1b7a5000);
  pbVar1 = (byte *)(unaff_RBP + 0x7a);
  bVar23 = CARRY1(*pbVar1,bVar20);
  *pbVar1 = *pbVar1 + bVar20;
code_r0x0001404b670a:
  iVar9 = ((int)pbVar15 - *(int *)pbVar15) - (uint)bVar23;
  cVar4 = (char)iVar9;
  *param_1 = *param_1 + bVar22;
  uVar3 = (undefined3)(CONCAT22((short)((uint)iVar9 >> 0x10),CONCAT11(0x24,cVar4)) >> 8);
  cVar4 = cVar4 + '\x02';
  uVar7 = CONCAT31(uVar3,cVar4);
  puVar10 = (uint *)(ulonglong)uVar7;
  *(char *)((longlong)register0x00000020 + (longlong)param_2 * 2) =
       *(char *)((longlong)register0x00000020 + (longlong)param_2 * 2) + cVar4;
  *puVar10 = *puVar10 | uVar7;
  if (*puVar10 == 0) {
    if ((POPCOUNT(uVar7 - *puVar10 & 0xff) & 1U) != 0) {
      *pbVar14 = *pbVar14 + bVar20;
      *param_4 = *param_4 + bVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[0x4d] = unaff_RDI[0x4d] | 0x24;
  *param_1 = *param_1 + 0x24;
  *(char *)puVar10 = (char)*puVar10 + cVar4;
  cVar21 = bVar20 + bVar19;
  if (SCARRY1(bVar20,bVar19) != cVar21 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(unaff_BH,cVar21) != (char)(unaff_BH + cVar21) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = CONCAT31(uVar3,cVar4 + cVar18);
  puVar11 = (uint *)(ulonglong)uVar7;
  *param_4 = *param_4 + bVar22;
  *(char *)puVar11 = (char)*puVar11 + cVar4 + cVar18;
  puVar10 = puVar11 + -0xa7ff921;
  uVar8 = *puVar10;
  *(char *)puVar10 = (char)*puVar10 + cVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
  if (SCARRY1((char)uVar8,cVar21) == (char)*puVar10 < '\0') {
    *(char *)puVar11 = (char)*puVar11 + cVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar12 = (char *)(ulonglong)(uVar7 | *puVar11);
  *(char *)((longlong)register0x00000020 + (longlong)param_1) =
       *(char *)((longlong)register0x00000020 + (longlong)param_1) + bVar19;
  param_1[0x1b7cb000] = param_1[0x1b7cb000] + cVar21;
  if (SCARRY1(cVar21,bVar19) == (char)(cVar21 + bVar19) < '\0') {
    *pcVar12 = *pcVar12 + cVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

