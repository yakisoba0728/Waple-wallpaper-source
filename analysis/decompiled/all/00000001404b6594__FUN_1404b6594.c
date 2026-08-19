// Function: FUN_1404b6594
// Addr: 1404b6594
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

void FUN_1404b6594(byte *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined3 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte bVar17;
  uint *in_RAX;
  uint *puVar12;
  char *pcVar13;
  int *piVar14;
  byte bVar18;
  byte *pbVar15;
  uint *puVar16;
  char cVar19;
  byte bVar20;
  char cVar21;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  byte bVar22;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar23;
  ulonglong uStack_8;
  
  cVar19 = (char)((ulonglong)param_1 >> 8);
  bVar6 = (byte)param_1;
  *param_4 = *param_4;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pbVar15 = (byte *)((longlong)in_RAX + 0x73);
  bVar20 = *pbVar15;
  bVar17 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar15 = *pbVar15 + bVar17;
  uVar10 = (uint)CARRY1(bVar20,bVar17);
  uVar8 = *in_RAX;
  uVar9 = (uint)in_RAX - *in_RAX;
  uVar7 = uVar9 - uVar10;
  puVar12 = (uint *)(ulonglong)uVar7;
  bVar20 = (byte)param_2;
  bVar17 = (byte)((ulonglong)param_2 >> 8);
  if (uVar7 == 0) {
code_r0x0001404b6615:
    *(byte *)(in_FS_OFFSET + (longlong)puVar12) =
         *(byte *)(in_FS_OFFSET + (longlong)puVar12) | (byte)puVar12;
    *(char *)(unaff_RBP + 0x1b) = *(char *)(unaff_RBP + 0x1b) + bVar17;
    *unaff_RDI = *unaff_RDI + cVar19;
    bVar23 = *unaff_RDI == 0;
  }
  else {
    uVar2 = *puVar12;
    *param_4 = *param_4;
    uVar8 = ((uVar7 - uVar2) - (uint)((uint)in_RAX < uVar8 || uVar9 < uVar10)) + 0x74050002;
    *(byte *)(ulonglong)uVar8 = *(byte *)(ulonglong)uVar8 | (byte)uVar8;
    pcVar13 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                      CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *pcVar13 = *pcVar13 + bVar17;
    iVar11 = 0x210049ec;
    bVar5 = (char)uRam00000000210049ec - 0x14;
    cVar4 = bVar5 + bVar20;
    uRam00000000210049ec = CONCAT31(uRam00000000210049ec._1_3_,cVar4);
    if (cVar4 == '\0') {
      uVar8 = (uint)CARRY1(bVar5,bVar20);
      iVar11 = (0x210049ec - uRam00000000210049ec) - uVar8;
      iVar11 = CONCAT31((int3)((uint)iVar11 >> 8),
                        (char)iVar11 + 'b' +
                        (0x210049ec < uRam00000000210049ec ||
                        0x210049ec - uRam00000000210049ec < uVar8));
code_r0x0001404b65e2:
      *param_1 = *param_1;
      uVar8 = iVar11 + 0x64050002;
      *(byte *)(ulonglong)uVar8 = *(byte *)(ulonglong)uVar8 | (byte)uVar8;
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
    uVar8 = (int)CONCAT71((int7)(CONCAT62(0x2100,CONCAT11(-(0xec < bRam00000000420093d8 ||
                                                           (byte)(-bRam00000000420093d8 - 0x14) <
                                                           bVar23),cVar4)) >> 8),cVar4) + 0xa74;
    cVar4 = (char)uVar8;
    if (uVar8 == 0) {
      *unaff_RDI = *unaff_RDI + cVar19;
      if (*unaff_RDI != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_2 = *param_2 + bVar20;
      iVar11 = 0;
      goto code_r0x0001404b65e2;
    }
    *param_4 = *param_4;
    *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + cVar4;
    *unaff_RDI = *unaff_RDI + cVar19;
    if (*unaff_RDI != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar13 = (char *)(unaff_RBP + 0x1b + CONCAT44(unaff_00000034,unaff_ESI) * 2);
    *pcVar13 = *pcVar13 + unaff_BH;
    uVar8 = CONCAT22((short)(uVar8 >> 0x10),CONCAT11((char)(uVar8 >> 8) + unaff_BH,cVar4));
    param_4[in_FS_OFFSET] = param_4[in_FS_OFFSET];
    *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar4;
    *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + cVar4;
    cVar4 = in(4);
    puVar12 = (uint *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),cVar4);
    *(byte *)puVar12 = (byte)*puVar12 + cVar4;
    bVar23 = (byte)*puVar12 == 0;
    if (!bVar23) {
      *(byte *)puVar12 = (byte)*puVar12 + cVar4;
      goto code_r0x0001404b6615;
    }
  }
  if (bVar23) {
    *param_2 = *param_2 + bVar20;
    *param_1 = *param_1;
    bVar5 = (byte)puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + bVar5;
    uVar8 = *puVar12;
    *(byte *)puVar12 = (byte)*puVar12 + bVar5;
    if ((byte)*puVar12 == 0) {
      *unaff_RDI = *unaff_RDI + cVar19;
      if (*unaff_RDI == 0) {
        *param_2 = *param_2 + bVar20;
        *param_1 = *param_1;
        puVar12 = (uint *)CONCAT62((int6)((ulonglong)puVar12 >> 0x10),
                                   CONCAT11(-(bVar5 < *(byte *)((longlong)puVar12 * 2)),
                                            bVar5 - *(byte *)((longlong)puVar12 * 2)));
        goto code_r0x0001404b663a;
      }
    }
    else {
      uVar8 = (uint)CARRY1((byte)uVar8,bVar5);
      uVar10 = (uint)puVar12 - *puVar12;
      uVar9 = uVar10 - uVar8;
      register0x00000020 = (BADSPACEBASE *)&uStack_8;
      uStack_8 = (ulonglong)uVar9;
      iVar11 = uVar9 + 0x1421004a + (uint)((uint)puVar12 < *puVar12 || uVar10 < uVar8);
      puVar12 = (uint *)(ulonglong)CONCAT31((int3)((uint)iVar11 >> 8),(char)iVar11 + -0xc);
    }
  }
  else {
code_r0x0001404b663a:
    uVar8 = (uint)puVar12 | *puVar12;
    bVar23 = 0x5ffff7cb < uVar8;
    uVar8 = uVar8 + 0xa0000834;
    puVar12 = (uint *)(ulonglong)uVar8;
    if (bVar23 || uVar8 == 0) goto code_r0x0001404b665e;
    bVar23 = CARRY1(unaff_BH,bVar6);
    unaff_BH = unaff_BH + bVar6;
    if (bVar23 || unaff_BH == 0) {
      bVar23 = false;
      *param_4 = *param_4;
      goto code_r0x0001404b665e;
    }
    *(byte *)((longlong)puVar12 + 0x15) = *(byte *)((longlong)puVar12 + 0x15) + bVar20;
  }
  bVar5 = *param_1;
  bVar22 = (byte)register0x00000020;
  *param_1 = *param_1 + bVar22;
  *(char *)((longlong)register0x00000020 + CONCAT44(unaff_00000034,unaff_ESI) * 8) =
       *(char *)((longlong)register0x00000020 + CONCAT44(unaff_00000034,unaff_ESI) * 8) + bVar20;
  uVar10 = (uint)CONCAT71((int7)((ulonglong)puVar12 >> 8),
                          (char)puVar12 + '\x04' + CARRY1(bVar5,bVar22));
  uVar8 = uVar10 + 0xcf000a54;
  puVar12 = (uint *)(ulonglong)uVar8;
  if (uVar10 < 0x30fff5ac && uVar8 != 0) {
    pbVar15 = unaff_RDI + CONCAT44(unaff_00000034,unaff_ESI) * 2;
    bVar23 = CARRY1(*pbVar15,unaff_BL);
    *pbVar15 = *pbVar15 + unaff_BL;
code_r0x0001404b665e:
    uVar8 = ((int)puVar12 - *puVar12) - (uint)bVar23;
    pbVar15 = (byte *)(ulonglong)uVar8;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)register0x00000020;
    *pbVar15 = *pbVar15 + (byte)uVar8;
    if (CARRY1(unaff_BH,bVar6) || (byte)(unaff_BH + bVar6) == '\0') {
      *pbVar15 = *pbVar15 | (byte)uVar8;
      uVar8 = CONCAT31((int3)(uVar8 >> 8),uRam50001b76cf001b76) + 0x21004a;
      pbVar15 = (byte *)(ulonglong)uVar8;
      bVar20 = *pbVar15;
      *pbVar15 = *pbVar15 + (byte)uVar8;
      uVar8 = CONCAT31((int3)(uVar8 >> 8),uRam50001b76cf001b76) + 0x1821004a +
              (uint)CARRY1(bVar20,(byte)uVar8);
      *(byte *)(ulonglong)uVar8 = *(byte *)(ulonglong)uVar8 | (byte)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar1 = unaff_RDI + CONCAT44(unaff_00000034,unaff_ESI) * 2;
    bVar20 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    uVar8 = (uVar8 - *(int *)pbVar15) - (uint)CARRY1(bVar20,unaff_BL);
    pcVar13 = (char *)(ulonglong)uVar8;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)register0x00000020;
    *pcVar13 = *pcVar13 + bVar6;
    *pcVar13 = *pcVar13 + (char)uVar8;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)puVar12 = (byte)*puVar12 | (byte)uVar8;
  uVar8 = CONCAT22((short)(uVar8 >> 0x10),
                   CONCAT11(((char)(uVar8 >> 8) + bVar17) * '\x02',(byte)uVar8));
  uVar8 = uVar8 | *(uint *)(ulonglong)uVar8;
  piVar14 = (int *)(ulonglong)uVar8;
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + bVar20;
  *(byte *)((longlong)piVar14 + (longlong)param_1) =
       *(byte *)((longlong)piVar14 + (longlong)param_1) + bVar17;
  pbVar15 = (byte *)((longlong)piVar14 + -0x30ffe48a);
  bVar5 = *pbVar15;
  bVar18 = (byte)(uVar8 >> 8);
  *pbVar15 = *pbVar15 + bVar18;
  if (CARRY1(bVar5,bVar18) || *pbVar15 == 0) {
    halt_baddata();
  }
  *(char *)((longlong)piVar14 + 0x15) = *(char *)((longlong)piVar14 + 0x15) + bVar20;
  *param_1 = *param_1 + bVar22;
  *(char *)piVar14 = (char)*piVar14 + (char)uVar8;
  pbVar15 = (byte *)((longlong)piVar14 + -0x30ffe48a);
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar18;
  if (!CARRY1(bVar5,bVar18) && *pbVar15 != 0) {
    *(char *)((longlong)piVar14 + 0x15) = *(char *)((longlong)piVar14 + 0x15) + bVar20;
    bVar20 = *param_1;
    *param_1 = *param_1 + bVar22;
    *(byte *)piVar14 = ((char)*piVar14 - bVar6) - CARRY1(bVar20,bVar22);
    *(byte *)piVar14 = (char)*piVar14 + unaff_BL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar8 = (uVar8 - *piVar14) - (uint)CARRY1(bVar5,bVar18);
  piVar14 = (int *)(ulonglong)uVar8;
  bVar5 = (byte)uVar8;
  if (-1 < (char)(bVar5 - *unaff_RDI)) {
    param_1[CONCAT44(unaff_00000034,unaff_ESI) * 8 + 0x49] =
         param_1[CONCAT44(unaff_00000034,unaff_ESI) * 8 + 0x49] + unaff_BL;
    *param_1 = *param_1 + (char)(uVar8 >> 8);
    *(byte *)piVar14 = (char)*piVar14 + bVar6;
    *(byte *)piVar14 = (char)*piVar14 + bVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar8 = (uVar8 - *piVar14) - (uint)(bVar5 < *unaff_RDI);
  pbVar15 = (byte *)(ulonglong)uVar8;
  bVar6 = (byte)uVar8;
  if (-1 < (char)(bVar6 - unaff_RDI[1])) {
    param_1[CONCAT44(unaff_00000034,unaff_ESI) * 8 + 0x49] =
         param_1[CONCAT44(unaff_00000034,unaff_ESI) * 8 + 0x49] + unaff_BL;
    bVar5 = (byte)(uVar8 >> 8);
    *param_1 = *param_1 + bVar5;
    *pbVar15 = *pbVar15 + bVar6;
    pbVar1 = pbVar15 + -0x51ffe488;
    bVar23 = CARRY1(*pbVar1,bVar6);
    *pbVar1 = *pbVar1 + bVar6;
    if ((char)*pbVar1 < '\0') goto code_r0x0001404b670a;
    param_1[CONCAT44(unaff_00000034,unaff_ESI) * 8 + 0x49] =
         param_1[CONCAT44(unaff_00000034,unaff_ESI) * 8 + 0x49] + unaff_BL;
    bVar18 = *param_1;
    *param_1 = *param_1 + bVar5;
    pbVar15 = (byte *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar6 + 6 + CARRY1(bVar18,bVar5));
    *(char *)((longlong)register0x00000020 + CONCAT44(unaff_00000034,unaff_ESI) * 2) =
         *(char *)((longlong)register0x00000020 + CONCAT44(unaff_00000034,unaff_ESI) * 2) + bVar20;
  }
  *pbVar15 = *pbVar15 | (byte)pbVar15;
  unaff_RDI[(longlong)(param_1 + 2)] = unaff_RDI[(longlong)(param_1 + 2)] + bVar17;
  *(byte *)register0x00000020 = *(char *)register0x00000020 + (byte)pbVar15;
  pbVar15 = (byte *)(ulonglong)((int)pbVar15 + 0x1b7a5000);
  pbVar1 = (byte *)(unaff_RBP + 0x7a);
  bVar23 = CARRY1(*pbVar1,bVar17);
  *pbVar1 = *pbVar1 + bVar17;
code_r0x0001404b670a:
  iVar11 = ((int)pbVar15 - *(int *)pbVar15) - (uint)bVar23;
  cVar4 = (char)iVar11;
  *param_1 = *param_1 + bVar22;
  uVar3 = (undefined3)(CONCAT22((short)((uint)iVar11 >> 0x10),CONCAT11(0x24,cVar4)) >> 8);
  cVar4 = cVar4 + '\x02';
  uVar8 = CONCAT31(uVar3,cVar4);
  puVar12 = (uint *)(ulonglong)uVar8;
  *(char *)((longlong)register0x00000020 + (longlong)param_2 * 2) =
       *(char *)((longlong)register0x00000020 + (longlong)param_2 * 2) + cVar4;
  *puVar12 = *puVar12 | uVar8;
  if (*puVar12 == 0) {
    if ((POPCOUNT(uVar8 - *puVar12 & 0xff) & 1U) != 0) {
      *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
           *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar17;
      *param_4 = *param_4 + bVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[0x4d] = unaff_RDI[0x4d] | 0x24;
  *param_1 = *param_1 + 0x24;
  *(char *)puVar12 = (char)*puVar12 + cVar4;
  cVar21 = bVar17 + bVar20;
  if (SCARRY1(bVar17,bVar20) != cVar21 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(unaff_BH,cVar21) != (char)(unaff_BH + cVar21) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = CONCAT31(uVar3,cVar4 + cVar19);
  puVar16 = (uint *)(ulonglong)uVar8;
  *param_4 = *param_4 + bVar22;
  *(char *)puVar16 = (char)*puVar16 + cVar4 + cVar19;
  puVar12 = puVar16 + -0xa7ff921;
  uVar10 = *puVar12;
  *(char *)puVar12 = (char)*puVar12 + cVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
  if (SCARRY1((char)uVar10,cVar21) == (char)*puVar12 < '\0') {
    *(char *)puVar16 = (char)*puVar16 + cVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar13 = (char *)(ulonglong)(uVar8 | *puVar16);
  *(char *)((longlong)register0x00000020 + (longlong)param_1) =
       *(char *)((longlong)register0x00000020 + (longlong)param_1) + bVar20;
  param_1[0x1b7cb000] = param_1[0x1b7cb000] + cVar21;
  if (SCARRY1(cVar21,bVar20) == (char)(cVar21 + bVar20) < '\0') {
    *pcVar13 = *pcVar13 + cVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

