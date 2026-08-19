// Function: FUN_1404b6614
// Addr: 1404b6614
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b6676) overlaps instruction at (ram,0x0001404b6675)
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

void FUN_1404b6614(byte *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  undefined3 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte bVar15;
  uint *in_RAX;
  char *pcVar10;
  int *piVar11;
  byte *pbVar12;
  uint *puVar14;
  char cVar16;
  char cVar17;
  byte bVar18;
  char cVar19;
  byte unaff_BL;
  byte unaff_BH;
  byte bVar20;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte *unaff_RDI;
  longlong unaff_GS_OFFSET;
  bool bVar21;
  ulonglong uStack_8;
  uint *puVar13;
  
  cVar16 = (char)((ulonglong)param_1 >> 8);
  bVar4 = (byte)param_1;
  *(byte *)((longlong)in_RAX + (longlong)param_1) =
       *(byte *)((longlong)in_RAX + (longlong)param_1) + (char)((ulonglong)in_RAX >> 8);
  bVar18 = (byte)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBP + 0x1b) = *(char *)(unaff_RBP + 0x1b) + bVar18;
  *unaff_RDI = *unaff_RDI + cVar16;
  cVar17 = (char)param_2;
  if (*unaff_RDI == 0) {
    *param_2 = *param_2 + cVar17;
    *param_1 = *param_1;
    bVar3 = (byte)in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX + bVar3;
    uVar6 = *in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX + bVar3;
    if ((byte)*in_RAX == 0) {
      *unaff_RDI = *unaff_RDI + cVar16;
      if (*unaff_RDI == 0) {
        *param_2 = *param_2 + cVar17;
        *param_1 = *param_1;
        in_RAX = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                  CONCAT11(-(bVar3 < *(byte *)((longlong)in_RAX * 2)),
                                           bVar3 - *(byte *)((longlong)in_RAX * 2)));
        goto code_r0x0001404b663a;
      }
    }
    else {
      uVar6 = (uint)CARRY1((byte)uVar6,bVar3);
      uVar8 = (uint)in_RAX - *in_RAX;
      uVar7 = uVar8 - uVar6;
      register0x00000020 = (BADSPACEBASE *)&uStack_8;
      uStack_8 = (ulonglong)uVar7;
      iVar9 = uVar7 + 0x1421004a + (uint)((uint)in_RAX < *in_RAX || uVar8 < uVar6);
      in_RAX = (uint *)(ulonglong)CONCAT31((int3)((uint)iVar9 >> 8),(char)iVar9 + -0xc);
    }
  }
  else {
code_r0x0001404b663a:
    uVar6 = (uint)in_RAX | *in_RAX;
    bVar21 = 0x5ffff7cb < uVar6;
    uVar6 = uVar6 + 0xa0000834;
    in_RAX = (uint *)(ulonglong)uVar6;
    if (bVar21 || uVar6 == 0) goto code_r0x0001404b665e;
    bVar21 = CARRY1(unaff_BH,bVar4);
    unaff_BH = unaff_BH + bVar4;
    if (bVar21 || unaff_BH == 0) {
      bVar21 = false;
      *param_4 = *param_4;
      goto code_r0x0001404b665e;
    }
    *(byte *)((longlong)in_RAX + 0x15) = *(byte *)((longlong)in_RAX + 0x15) + cVar17;
  }
  bVar3 = *param_1;
  bVar20 = (byte)register0x00000020;
  *param_1 = *param_1 + bVar20;
  *(char *)((longlong)register0x00000020 + (longlong)unaff_RSI * 8) =
       *(char *)((longlong)register0x00000020 + (longlong)unaff_RSI * 8) + cVar17;
  uVar8 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '\x04' + CARRY1(bVar3,bVar20)
                        );
  uVar6 = uVar8 + 0xcf000a54;
  in_RAX = (uint *)(ulonglong)uVar6;
  if (uVar8 < 0x30fff5ac && uVar6 != 0) {
    pbVar12 = unaff_RDI + (longlong)unaff_RSI * 2;
    bVar21 = CARRY1(*pbVar12,unaff_BL);
    *pbVar12 = *pbVar12 + unaff_BL;
code_r0x0001404b665e:
    uVar6 = ((int)in_RAX - *in_RAX) - (uint)bVar21;
    pbVar12 = (byte *)(ulonglong)uVar6;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)register0x00000020;
    *pbVar12 = *pbVar12 + (byte)uVar6;
    if (CARRY1(unaff_BH,bVar4) || (byte)(unaff_BH + bVar4) == '\0') {
      *pbVar12 = *pbVar12 | (byte)uVar6;
      uVar6 = CONCAT31((int3)(uVar6 >> 8),uRam50001b76cf001b76) + 0x21004a;
      pbVar12 = (byte *)(ulonglong)uVar6;
      bVar4 = *pbVar12;
      *pbVar12 = *pbVar12 + (byte)uVar6;
      uVar6 = CONCAT31((int3)(uVar6 >> 8),uRam50001b76cf001b76) + 0x1821004a +
              (uint)CARRY1(bVar4,(byte)uVar6);
      *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 | (byte)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar1 = unaff_RDI + (longlong)unaff_RSI * 2;
    bVar18 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    uVar6 = (uVar6 - *(int *)pbVar12) - (uint)CARRY1(bVar18,unaff_BL);
    pcVar10 = (char *)(ulonglong)uVar6;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)register0x00000020;
    *pcVar10 = *pcVar10 + bVar4;
    *pcVar10 = *pcVar10 + (char)uVar6;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)in_RAX = (byte)*in_RAX | (byte)uVar6;
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),
                   CONCAT11(((char)(uVar6 >> 8) + bVar18) * '\x02',(byte)uVar6));
  uVar6 = uVar6 | *(uint *)(ulonglong)uVar6;
  piVar11 = (int *)(ulonglong)uVar6;
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + cVar17;
  *(byte *)((longlong)piVar11 + (longlong)param_1) =
       *(byte *)((longlong)piVar11 + (longlong)param_1) + bVar18;
  pbVar12 = (byte *)((longlong)piVar11 + -0x30ffe48a);
  bVar3 = *pbVar12;
  bVar15 = (byte)(uVar6 >> 8);
  *pbVar12 = *pbVar12 + bVar15;
  if (CARRY1(bVar3,bVar15) || *pbVar12 == 0) {
    halt_baddata();
  }
  *(char *)((longlong)piVar11 + 0x15) = *(char *)((longlong)piVar11 + 0x15) + cVar17;
  *param_1 = *param_1 + bVar20;
  *(char *)piVar11 = (char)*piVar11 + (char)uVar6;
  pbVar12 = (byte *)((longlong)piVar11 + -0x30ffe48a);
  bVar3 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar15;
  if (!CARRY1(bVar3,bVar15) && *pbVar12 != 0) {
    *(char *)((longlong)piVar11 + 0x15) = *(char *)((longlong)piVar11 + 0x15) + cVar17;
    bVar18 = *param_1;
    *param_1 = *param_1 + bVar20;
    *(byte *)piVar11 = ((char)*piVar11 - bVar4) - CARRY1(bVar18,bVar20);
    *(byte *)piVar11 = (char)*piVar11 + unaff_BL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar6 = (uVar6 - *piVar11) - (uint)CARRY1(bVar3,bVar15);
  piVar11 = (int *)(ulonglong)uVar6;
  bVar3 = (byte)uVar6;
  if (-1 < (char)(bVar3 - *unaff_RDI)) {
    param_1[(longlong)unaff_RSI * 8 + 0x49] = param_1[(longlong)unaff_RSI * 8 + 0x49] + unaff_BL;
    *param_1 = *param_1 + (char)(uVar6 >> 8);
    *(byte *)piVar11 = (char)*piVar11 + bVar4;
    *(byte *)piVar11 = (char)*piVar11 + bVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar6 = (uVar6 - *piVar11) - (uint)(bVar3 < *unaff_RDI);
  pbVar12 = (byte *)(ulonglong)uVar6;
  bVar4 = (byte)uVar6;
  if (-1 < (char)(bVar4 - unaff_RDI[1])) {
    param_1[(longlong)unaff_RSI * 8 + 0x49] = param_1[(longlong)unaff_RSI * 8 + 0x49] + unaff_BL;
    bVar3 = (byte)(uVar6 >> 8);
    *param_1 = *param_1 + bVar3;
    *pbVar12 = *pbVar12 + bVar4;
    pbVar1 = pbVar12 + -0x51ffe488;
    bVar21 = CARRY1(*pbVar1,bVar4);
    *pbVar1 = *pbVar1 + bVar4;
    if ((char)*pbVar1 < '\0') goto code_r0x0001404b670a;
    param_1[(longlong)unaff_RSI * 8 + 0x49] = param_1[(longlong)unaff_RSI * 8 + 0x49] + unaff_BL;
    bVar15 = *param_1;
    *param_1 = *param_1 + bVar3;
    pbVar12 = (byte *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar4 + 6 + CARRY1(bVar15,bVar3));
    *(char *)((longlong)register0x00000020 + (longlong)unaff_RSI * 2) =
         *(char *)((longlong)register0x00000020 + (longlong)unaff_RSI * 2) + cVar17;
  }
  *pbVar12 = *pbVar12 | (byte)pbVar12;
  unaff_RDI[(longlong)(param_1 + 2)] = unaff_RDI[(longlong)(param_1 + 2)] + bVar18;
  *(byte *)register0x00000020 = *(char *)register0x00000020 + (byte)pbVar12;
  pbVar12 = (byte *)(ulonglong)((int)pbVar12 + 0x1b7a5000);
  pbVar1 = (byte *)(unaff_RBP + 0x7a);
  bVar21 = CARRY1(*pbVar1,bVar18);
  *pbVar1 = *pbVar1 + bVar18;
code_r0x0001404b670a:
  iVar9 = ((int)pbVar12 - *(int *)pbVar12) - (uint)bVar21;
  cVar5 = (char)iVar9;
  *param_1 = *param_1 + bVar20;
  uVar2 = (undefined3)(CONCAT22((short)((uint)iVar9 >> 0x10),CONCAT11(0x24,cVar5)) >> 8);
  cVar5 = cVar5 + '\x02';
  uVar6 = CONCAT31(uVar2,cVar5);
  puVar13 = (uint *)(ulonglong)uVar6;
  *(char *)((longlong)register0x00000020 + (longlong)param_2 * 2) =
       *(char *)((longlong)register0x00000020 + (longlong)param_2 * 2) + cVar5;
  *puVar13 = *puVar13 | uVar6;
  if (*puVar13 == 0) {
    if ((POPCOUNT(uVar6 - *puVar13 & 0xff) & 1U) != 0) {
      *unaff_RSI = *unaff_RSI + bVar18;
      *param_4 = *param_4 + bVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[0x4d] = unaff_RDI[0x4d] | 0x24;
  *param_1 = *param_1 + 0x24;
  *(char *)puVar13 = (char)*puVar13 + cVar5;
  cVar19 = bVar18 + cVar17;
  if (SCARRY1(bVar18,cVar17) != cVar19 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(unaff_BH,cVar19) != (char)(unaff_BH + cVar19) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = CONCAT31(uVar2,cVar5 + cVar16);
  puVar14 = (uint *)(ulonglong)uVar6;
  *param_4 = *param_4 + bVar20;
  *(char *)puVar14 = (char)*puVar14 + cVar5 + cVar16;
  puVar13 = puVar14 + -0xa7ff921;
  uVar8 = *puVar13;
  *(char *)puVar13 = (char)*puVar13 + cVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
  if (SCARRY1((char)uVar8,cVar19) == (char)*puVar13 < '\0') {
    *(char *)puVar14 = (char)*puVar14 + cVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar10 = (char *)(ulonglong)(uVar6 | *puVar14);
  *(char *)((longlong)register0x00000020 + (longlong)param_1) =
       *(char *)((longlong)register0x00000020 + (longlong)param_1) + cVar17;
  param_1[0x1b7cb000] = param_1[0x1b7cb000] + cVar19;
  if (SCARRY1(cVar19,cVar17) == (char)(cVar19 + cVar17) < '\0') {
    *pcVar10 = *pcVar10 + cVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

