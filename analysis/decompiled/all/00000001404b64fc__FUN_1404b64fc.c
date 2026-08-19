// Function: FUN_1404b64fc
// Addr: 1404b64fc
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

void FUN_1404b64fc(byte *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte bVar16;
  uint *in_RAX;
  uint *puVar11;
  char *pcVar12;
  int *piVar13;
  byte bVar17;
  byte bVar18;
  byte *pbVar14;
  uint *puVar15;
  char cVar19;
  byte bVar20;
  char cVar21;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar22;
  ulonglong uStack_8;
  
  cVar19 = (char)((ulonglong)param_1 >> 8);
  bVar18 = (byte)param_1;
  bVar16 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar16;
  bVar4 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar4;
  pbVar14 = (byte *)((longlong)in_RAX + -0x53ffe48e);
  bVar6 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar4;
  bVar20 = (byte)param_2;
  if (!CARRY1(bVar6,bVar4)) {
    *param_1 = *param_1 + bVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4;
  *(byte *)in_RAX = (char)*in_RAX + bVar4;
  pbVar14 = (byte *)((longlong)in_RAX + 0x73);
  bVar6 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar16;
  uVar8 = *in_RAX;
  uVar9 = (uint)in_RAX - *in_RAX;
  uVar7 = uVar9 - CARRY1(bVar6,bVar16);
  puVar11 = (uint *)(ulonglong)uVar7;
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  if (uVar7 == 0) {
code_r0x0001404b6615:
    *(byte *)(in_FS_OFFSET + (longlong)puVar11) =
         *(byte *)(in_FS_OFFSET + (longlong)puVar11) | (byte)puVar11;
    *(char *)(unaff_RBP + 0x1b) = *(char *)(unaff_RBP + 0x1b) + bVar4;
    *unaff_RDI = *unaff_RDI + cVar19;
    bVar22 = *unaff_RDI == 0;
  }
  else {
    uVar2 = *puVar11;
    *param_4 = *param_4;
    uVar8 = ((uVar7 - uVar2) - (uint)((uint)in_RAX < uVar8 || uVar9 < CARRY1(bVar6,bVar16))) +
            0x74050002;
    *(byte *)(ulonglong)uVar8 = *(byte *)(ulonglong)uVar8 | (byte)uVar8;
    pcVar12 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                      CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *pcVar12 = *pcVar12 + bVar4;
    iVar10 = 0x210049ec;
    bVar6 = (char)uRam00000000210049ec - 0x14;
    cVar5 = bVar6 + bVar20;
    uRam00000000210049ec = CONCAT31(uRam00000000210049ec._1_3_,cVar5);
    if (cVar5 == '\0') {
      uVar8 = (uint)CARRY1(bVar6,bVar20);
      iVar10 = (0x210049ec - uRam00000000210049ec) - uVar8;
      iVar10 = CONCAT31((int3)((uint)iVar10 >> 8),
                        (char)iVar10 + 'b' +
                        (0x210049ec < uRam00000000210049ec ||
                        0x210049ec - uRam00000000210049ec < uVar8));
code_r0x0001404b65e2:
      *param_1 = *param_1;
      uVar8 = iVar10 + 0x64050002;
      *(byte *)(ulonglong)uVar8 = *(byte *)(ulonglong)uVar8 | (byte)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
    if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) == '\0')
    goto code_r0x0001404b65e2;
    bVar22 = CARRY1(bRam00000000420093d8,unaff_BH);
    bRam00000000420093d8 = bRam00000000420093d8 + unaff_BH;
    cVar5 = (-bRam00000000420093d8 - 0x14) - bVar22;
    uVar8 = (int)CONCAT71((int7)(CONCAT62(0x2100,CONCAT11(-(0xec < bRam00000000420093d8 ||
                                                           (byte)(-bRam00000000420093d8 - 0x14) <
                                                           bVar22),cVar5)) >> 8),cVar5) + 0xa74;
    cVar5 = (char)uVar8;
    if (uVar8 == 0) {
      *unaff_RDI = *unaff_RDI + cVar19;
      if (*unaff_RDI != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_2 = *param_2 + bVar20;
      iVar10 = 0;
      goto code_r0x0001404b65e2;
    }
    *param_4 = *param_4;
    *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + cVar5;
    *unaff_RDI = *unaff_RDI + cVar19;
    if (*unaff_RDI != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar12 = (char *)(unaff_RBP + 0x1b + CONCAT44(unaff_00000034,unaff_ESI) * 2);
    *pcVar12 = *pcVar12 + unaff_BH;
    uVar8 = CONCAT22((short)(uVar8 >> 0x10),CONCAT11((char)(uVar8 >> 8) + unaff_BH,cVar5));
    param_4[in_FS_OFFSET] = param_4[in_FS_OFFSET];
    *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar5;
    *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + cVar5;
    cVar5 = in(4);
    puVar11 = (uint *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),cVar5);
    *(byte *)puVar11 = (byte)*puVar11 + cVar5;
    bVar22 = (byte)*puVar11 == 0;
    if (!bVar22) {
      *(byte *)puVar11 = (byte)*puVar11 + cVar5;
      goto code_r0x0001404b6615;
    }
  }
  if (bVar22) {
    *param_2 = *param_2 + bVar20;
    *param_1 = *param_1;
    bVar6 = (byte)puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + bVar6;
    uVar8 = *puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + bVar6;
    if ((byte)*puVar11 == 0) {
      *unaff_RDI = *unaff_RDI + cVar19;
      if (*unaff_RDI == 0) {
        *param_2 = *param_2 + bVar20;
        *param_1 = *param_1;
        puVar11 = (uint *)CONCAT62((int6)((ulonglong)puVar11 >> 0x10),
                                   CONCAT11(-(bVar6 < *(byte *)((longlong)puVar11 * 2)),
                                            bVar6 - *(byte *)((longlong)puVar11 * 2)));
        goto code_r0x0001404b663a;
      }
    }
    else {
      uVar8 = (uint)CARRY1((byte)uVar8,bVar6);
      uVar9 = (uint)puVar11 - *puVar11;
      uVar7 = uVar9 - uVar8;
      register0x00000020 = (BADSPACEBASE *)&uStack_8;
      uStack_8 = (ulonglong)uVar7;
      iVar10 = uVar7 + 0x1421004a + (uint)((uint)puVar11 < *puVar11 || uVar9 < uVar8);
      puVar11 = (uint *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),(char)iVar10 + -0xc);
    }
  }
  else {
code_r0x0001404b663a:
    uVar8 = (uint)puVar11 | *puVar11;
    bVar22 = 0x5ffff7cb < uVar8;
    uVar8 = uVar8 + 0xa0000834;
    puVar11 = (uint *)(ulonglong)uVar8;
    if (bVar22 || uVar8 == 0) goto code_r0x0001404b665e;
    bVar22 = CARRY1(unaff_BH,bVar18);
    unaff_BH = unaff_BH + bVar18;
    if (bVar22 || unaff_BH == 0) {
      bVar22 = false;
      *param_4 = *param_4;
      goto code_r0x0001404b665e;
    }
    *(byte *)((longlong)puVar11 + 0x15) = *(byte *)((longlong)puVar11 + 0x15) + bVar20;
  }
  bVar6 = *param_1;
  bVar16 = (byte)register0x00000020;
  *param_1 = *param_1 + bVar16;
  *(char *)((longlong)register0x00000020 + CONCAT44(unaff_00000034,unaff_ESI) * 8) =
       *(char *)((longlong)register0x00000020 + CONCAT44(unaff_00000034,unaff_ESI) * 8) + bVar20;
  uVar9 = (uint)CONCAT71((int7)((ulonglong)puVar11 >> 8),
                         (char)puVar11 + '\x04' + CARRY1(bVar6,bVar16));
  uVar8 = uVar9 + 0xcf000a54;
  puVar11 = (uint *)(ulonglong)uVar8;
  if (uVar9 < 0x30fff5ac && uVar8 != 0) {
    pbVar14 = unaff_RDI + CONCAT44(unaff_00000034,unaff_ESI) * 2;
    bVar22 = CARRY1(*pbVar14,unaff_BL);
    *pbVar14 = *pbVar14 + unaff_BL;
code_r0x0001404b665e:
    uVar8 = ((int)puVar11 - *puVar11) - (uint)bVar22;
    pbVar14 = (byte *)(ulonglong)uVar8;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)register0x00000020;
    *pbVar14 = *pbVar14 + (byte)uVar8;
    if (CARRY1(unaff_BH,bVar18) || (byte)(unaff_BH + bVar18) == '\0') {
      *pbVar14 = *pbVar14 | (byte)uVar8;
      uVar8 = CONCAT31((int3)(uVar8 >> 8),uRam50001b76cf001b76) + 0x21004a;
      pbVar14 = (byte *)(ulonglong)uVar8;
      bVar6 = *pbVar14;
      *pbVar14 = *pbVar14 + (byte)uVar8;
      uVar8 = CONCAT31((int3)(uVar8 >> 8),uRam50001b76cf001b76) + 0x1821004a +
              (uint)CARRY1(bVar6,(byte)uVar8);
      *(byte *)(ulonglong)uVar8 = *(byte *)(ulonglong)uVar8 | (byte)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar1 = unaff_RDI + CONCAT44(unaff_00000034,unaff_ESI) * 2;
    bVar6 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    uVar8 = (uVar8 - *(int *)pbVar14) - (uint)CARRY1(bVar6,unaff_BL);
    pcVar12 = (char *)(ulonglong)uVar8;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)register0x00000020;
    *pcVar12 = *pcVar12 + bVar18;
    *pcVar12 = *pcVar12 + (char)uVar8;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)puVar11 = (byte)*puVar11 | (byte)uVar8;
  uVar8 = CONCAT22((short)(uVar8 >> 0x10),
                   CONCAT11(((char)(uVar8 >> 8) + bVar4) * '\x02',(byte)uVar8));
  uVar8 = uVar8 | *(uint *)(ulonglong)uVar8;
  piVar13 = (int *)(ulonglong)uVar8;
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + bVar20;
  *(byte *)((longlong)piVar13 + (longlong)param_1) =
       *(byte *)((longlong)piVar13 + (longlong)param_1) + bVar4;
  pbVar14 = (byte *)((longlong)piVar13 + -0x30ffe48a);
  bVar6 = *pbVar14;
  bVar17 = (byte)(uVar8 >> 8);
  *pbVar14 = *pbVar14 + bVar17;
  if (CARRY1(bVar6,bVar17) || *pbVar14 == 0) {
    halt_baddata();
  }
  *(char *)((longlong)piVar13 + 0x15) = *(char *)((longlong)piVar13 + 0x15) + bVar20;
  *param_1 = *param_1 + bVar16;
  *(char *)piVar13 = (char)*piVar13 + (char)uVar8;
  pbVar14 = (byte *)((longlong)piVar13 + -0x30ffe48a);
  bVar6 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar17;
  if (!CARRY1(bVar6,bVar17) && *pbVar14 != 0) {
    *(char *)((longlong)piVar13 + 0x15) = *(char *)((longlong)piVar13 + 0x15) + bVar20;
    bVar6 = *param_1;
    *param_1 = *param_1 + bVar16;
    *(byte *)piVar13 = ((char)*piVar13 - bVar18) - CARRY1(bVar6,bVar16);
    *(byte *)piVar13 = (char)*piVar13 + unaff_BL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar8 = (uVar8 - *piVar13) - (uint)CARRY1(bVar6,bVar17);
  piVar13 = (int *)(ulonglong)uVar8;
  bVar6 = (byte)uVar8;
  if (-1 < (char)(bVar6 - *unaff_RDI)) {
    param_1[CONCAT44(unaff_00000034,unaff_ESI) * 8 + 0x49] =
         param_1[CONCAT44(unaff_00000034,unaff_ESI) * 8 + 0x49] + unaff_BL;
    *param_1 = *param_1 + (char)(uVar8 >> 8);
    *(byte *)piVar13 = (char)*piVar13 + bVar18;
    *(byte *)piVar13 = (char)*piVar13 + bVar6;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar8 = (uVar8 - *piVar13) - (uint)(bVar6 < *unaff_RDI);
  pbVar14 = (byte *)(ulonglong)uVar8;
  bVar6 = (byte)uVar8;
  if (-1 < (char)(bVar6 - unaff_RDI[1])) {
    param_1[CONCAT44(unaff_00000034,unaff_ESI) * 8 + 0x49] =
         param_1[CONCAT44(unaff_00000034,unaff_ESI) * 8 + 0x49] + unaff_BL;
    bVar18 = (byte)(uVar8 >> 8);
    *param_1 = *param_1 + bVar18;
    *pbVar14 = *pbVar14 + bVar6;
    pbVar1 = pbVar14 + -0x51ffe488;
    bVar22 = CARRY1(*pbVar1,bVar6);
    *pbVar1 = *pbVar1 + bVar6;
    if ((char)*pbVar1 < '\0') goto code_r0x0001404b670a;
    param_1[CONCAT44(unaff_00000034,unaff_ESI) * 8 + 0x49] =
         param_1[CONCAT44(unaff_00000034,unaff_ESI) * 8 + 0x49] + unaff_BL;
    bVar17 = *param_1;
    *param_1 = *param_1 + bVar18;
    pbVar14 = (byte *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar6 + 6 + CARRY1(bVar17,bVar18));
    *(char *)((longlong)register0x00000020 + CONCAT44(unaff_00000034,unaff_ESI) * 2) =
         *(char *)((longlong)register0x00000020 + CONCAT44(unaff_00000034,unaff_ESI) * 2) + bVar20;
  }
  *pbVar14 = *pbVar14 | (byte)pbVar14;
  unaff_RDI[(longlong)(param_1 + 2)] = unaff_RDI[(longlong)(param_1 + 2)] + bVar4;
  *(byte *)register0x00000020 = *(char *)register0x00000020 + (byte)pbVar14;
  pbVar14 = (byte *)(ulonglong)((int)pbVar14 + 0x1b7a5000);
  pbVar1 = (byte *)(unaff_RBP + 0x7a);
  bVar22 = CARRY1(*pbVar1,bVar4);
  *pbVar1 = *pbVar1 + bVar4;
code_r0x0001404b670a:
  iVar10 = ((int)pbVar14 - *(int *)pbVar14) - (uint)bVar22;
  cVar5 = (char)iVar10;
  *param_1 = *param_1 + bVar16;
  uVar3 = (undefined3)(CONCAT22((short)((uint)iVar10 >> 0x10),CONCAT11(0x24,cVar5)) >> 8);
  cVar5 = cVar5 + '\x02';
  uVar8 = CONCAT31(uVar3,cVar5);
  puVar11 = (uint *)(ulonglong)uVar8;
  *(char *)((longlong)register0x00000020 + (longlong)param_2 * 2) =
       *(char *)((longlong)register0x00000020 + (longlong)param_2 * 2) + cVar5;
  *puVar11 = *puVar11 | uVar8;
  if (*puVar11 == 0) {
    if ((POPCOUNT(uVar8 - *puVar11 & 0xff) & 1U) != 0) {
      *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
           *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar4;
      *param_4 = *param_4 + bVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[0x4d] = unaff_RDI[0x4d] | 0x24;
  *param_1 = *param_1 + 0x24;
  *(char *)puVar11 = (char)*puVar11 + cVar5;
  cVar21 = bVar4 + bVar20;
  if (SCARRY1(bVar4,bVar20) != cVar21 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(unaff_BH,cVar21) != (char)(unaff_BH + cVar21) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = CONCAT31(uVar3,cVar5 + cVar19);
  puVar15 = (uint *)(ulonglong)uVar8;
  *param_4 = *param_4 + bVar16;
  *(char *)puVar15 = (char)*puVar15 + cVar5 + cVar19;
  puVar11 = puVar15 + -0xa7ff921;
  uVar9 = *puVar11;
  *(char *)puVar11 = (char)*puVar11 + cVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
  if (SCARRY1((char)uVar9,cVar21) == (char)*puVar11 < '\0') {
    *(char *)puVar15 = (char)*puVar15 + cVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar12 = (char *)(ulonglong)(uVar8 | *puVar15);
  *(char *)((longlong)register0x00000020 + (longlong)param_1) =
       *(char *)((longlong)register0x00000020 + (longlong)param_1) + bVar20;
  param_1[0x1b7cb000] = param_1[0x1b7cb000] + cVar21;
  if (SCARRY1(cVar21,bVar20) == (char)(cVar21 + bVar20) < '\0') {
    *pcVar12 = *pcVar12 + cVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

