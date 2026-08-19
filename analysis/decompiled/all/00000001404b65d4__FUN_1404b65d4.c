// Function: FUN_1404b65d4
// Addr: 1404b65d4
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

void FUN_1404b65d4(byte *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined3 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar16;
  int in_EAX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar12;
  int *piVar13;
  byte *pbVar14;
  uint *puVar15;
  char cVar17;
  char cVar18;
  byte bVar19;
  char cVar20;
  byte unaff_BL;
  byte unaff_BH;
  byte bVar21;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte *unaff_RDI;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar22;
  ulonglong uStack_8;
  uint *puVar11;
  
  cVar17 = (char)((ulonglong)param_1 >> 8);
  bVar5 = (byte)param_1;
  uVar7 = in_EAX + 0xa74;
  cVar6 = (char)uVar7;
  cVar18 = (char)param_2;
  if (uVar7 == 0) {
    *unaff_RDI = *unaff_RDI + cVar17;
    if (*unaff_RDI == 0) {
      *param_2 = *param_2 + cVar18;
      *param_1 = *param_1;
      uVar7 = in_EAX + 0x64050a76;
      *(byte *)(ulonglong)uVar7 = *(byte *)(ulonglong)uVar7 | (byte)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + cVar6;
  *unaff_RDI = *unaff_RDI + cVar17;
  if (*unaff_RDI != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar12 = (char *)(unaff_RBP + 0x1b + (longlong)unaff_RSI * 2);
  *pcVar12 = *pcVar12 + unaff_BH;
  uVar2 = (undefined2)(uVar7 >> 0x10);
  uVar7 = CONCAT22(uVar2,CONCAT11((char)(uVar7 >> 8) + unaff_BH,cVar6));
  param_4[in_FS_OFFSET] = param_4[in_FS_OFFSET];
  *unaff_RSI = *unaff_RSI + cVar6;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + cVar6;
  bVar4 = in(4);
  uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar4);
  puVar11 = (uint *)(ulonglong)uVar7;
  *(byte *)puVar11 = (byte)*puVar11 + bVar4;
  bVar22 = (byte)*puVar11 == 0;
  bVar19 = (byte)((ulonglong)param_2 >> 8);
  if (!bVar22) {
    *(byte *)puVar11 = (byte)*puVar11 + bVar4;
    *(byte *)(in_FS_OFFSET + (longlong)puVar11) =
         *(byte *)(in_FS_OFFSET + (longlong)puVar11) | bVar4;
    *(char *)(unaff_RBP + 0x1b) = *(char *)(unaff_RBP + 0x1b) + bVar19;
    *unaff_RDI = *unaff_RDI + cVar17;
    bVar22 = *unaff_RDI == 0;
  }
  if (bVar22) {
    *param_2 = *param_2 + cVar18;
    *param_1 = *param_1;
    *(byte *)puVar11 = (byte)*puVar11 + bVar4;
    uVar9 = *puVar11;
    *(byte *)puVar11 = (byte)*puVar11 + bVar4;
    if ((byte)*puVar11 == 0) {
      *unaff_RDI = *unaff_RDI + cVar17;
      if (*unaff_RDI == 0) {
        *param_2 = *param_2 + cVar18;
        *param_1 = *param_1;
        puVar11 = (uint *)(ulonglong)
                          CONCAT22(uVar2,CONCAT11(-(bVar4 < *(byte *)((longlong)puVar11 * 2)),
                                                  bVar4 - *(byte *)((longlong)puVar11 * 2)));
        goto code_r0x0001404b663a;
      }
    }
    else {
      uVar9 = (uint)CARRY1((byte)uVar9,bVar4);
      uVar8 = (uVar7 - *puVar11) - uVar9;
      register0x00000020 = (BADSPACEBASE *)&uStack_8;
      uStack_8 = (ulonglong)uVar8;
      iVar10 = uVar8 + 0x1421004a + (uint)(uVar7 < *puVar11 || uVar7 - *puVar11 < uVar9);
      puVar11 = (uint *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),(char)iVar10 + -0xc);
    }
  }
  else {
code_r0x0001404b663a:
    uVar7 = (uint)puVar11 | *puVar11;
    bVar22 = 0x5ffff7cb < uVar7;
    uVar7 = uVar7 + 0xa0000834;
    puVar11 = (uint *)(ulonglong)uVar7;
    if (bVar22 || uVar7 == 0) goto code_r0x0001404b665e;
    bVar22 = CARRY1(unaff_BH,bVar5);
    unaff_BH = unaff_BH + bVar5;
    if (bVar22 || unaff_BH == 0) {
      bVar22 = false;
      *param_4 = *param_4;
      goto code_r0x0001404b665e;
    }
    *(byte *)((longlong)puVar11 + 0x15) = *(byte *)((longlong)puVar11 + 0x15) + cVar18;
  }
  bVar4 = *param_1;
  bVar21 = (byte)register0x00000020;
  *param_1 = *param_1 + bVar21;
  *(char *)((longlong)register0x00000020 + (longlong)unaff_RSI * 8) =
       *(char *)((longlong)register0x00000020 + (longlong)unaff_RSI * 8) + cVar18;
  uVar9 = (uint)CONCAT71((int7)((ulonglong)puVar11 >> 8),
                         (char)puVar11 + '\x04' + CARRY1(bVar4,bVar21));
  uVar7 = uVar9 + 0xcf000a54;
  puVar11 = (uint *)(ulonglong)uVar7;
  if (uVar9 < 0x30fff5ac && uVar7 != 0) {
    pbVar14 = unaff_RDI + (longlong)unaff_RSI * 2;
    bVar22 = CARRY1(*pbVar14,unaff_BL);
    *pbVar14 = *pbVar14 + unaff_BL;
code_r0x0001404b665e:
    uVar7 = ((int)puVar11 - *puVar11) - (uint)bVar22;
    pbVar14 = (byte *)(ulonglong)uVar7;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)register0x00000020;
    *pbVar14 = *pbVar14 + (byte)uVar7;
    if (CARRY1(unaff_BH,bVar5) || (byte)(unaff_BH + bVar5) == '\0') {
      *pbVar14 = *pbVar14 | (byte)uVar7;
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
    pbVar1 = unaff_RDI + (longlong)unaff_RSI * 2;
    bVar4 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    uVar7 = (uVar7 - *(int *)pbVar14) - (uint)CARRY1(bVar4,unaff_BL);
    pcVar12 = (char *)(ulonglong)uVar7;
    param_4[unaff_GS_OFFSET] = param_4[unaff_GS_OFFSET] + (char)register0x00000020;
    *pcVar12 = *pcVar12 + bVar5;
    *pcVar12 = *pcVar12 + (char)uVar7;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)puVar11 = (byte)*puVar11 | (byte)uVar7;
  uVar7 = CONCAT22((short)(uVar7 >> 0x10),
                   CONCAT11(((char)(uVar7 >> 8) + bVar19) * '\x02',(byte)uVar7));
  uVar7 = uVar7 | *(uint *)(ulonglong)uVar7;
  piVar13 = (int *)(ulonglong)uVar7;
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + cVar18;
  *(byte *)((longlong)piVar13 + (longlong)param_1) =
       *(byte *)((longlong)piVar13 + (longlong)param_1) + bVar19;
  pbVar14 = (byte *)((longlong)piVar13 + -0x30ffe48a);
  bVar4 = *pbVar14;
  bVar16 = (byte)(uVar7 >> 8);
  *pbVar14 = *pbVar14 + bVar16;
  if (CARRY1(bVar4,bVar16) || *pbVar14 == 0) {
    halt_baddata();
  }
  *(char *)((longlong)piVar13 + 0x15) = *(char *)((longlong)piVar13 + 0x15) + cVar18;
  *param_1 = *param_1 + bVar21;
  *(char *)piVar13 = (char)*piVar13 + (char)uVar7;
  pbVar14 = (byte *)((longlong)piVar13 + -0x30ffe48a);
  bVar4 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar16;
  if (!CARRY1(bVar4,bVar16) && *pbVar14 != 0) {
    *(char *)((longlong)piVar13 + 0x15) = *(char *)((longlong)piVar13 + 0x15) + cVar18;
    bVar4 = *param_1;
    *param_1 = *param_1 + bVar21;
    *(byte *)piVar13 = ((char)*piVar13 - bVar5) - CARRY1(bVar4,bVar21);
    *(byte *)piVar13 = (char)*piVar13 + unaff_BL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar7 = (uVar7 - *piVar13) - (uint)CARRY1(bVar4,bVar16);
  piVar13 = (int *)(ulonglong)uVar7;
  bVar4 = (byte)uVar7;
  if (-1 < (char)(bVar4 - *unaff_RDI)) {
    param_1[(longlong)unaff_RSI * 8 + 0x49] = param_1[(longlong)unaff_RSI * 8 + 0x49] + unaff_BL;
    *param_1 = *param_1 + (char)(uVar7 >> 8);
    *(byte *)piVar13 = (char)*piVar13 + bVar5;
    *(byte *)piVar13 = (char)*piVar13 + bVar4;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar7 = (uVar7 - *piVar13) - (uint)(bVar4 < *unaff_RDI);
  pbVar14 = (byte *)(ulonglong)uVar7;
  bVar5 = (byte)uVar7;
  if (-1 < (char)(bVar5 - unaff_RDI[1])) {
    param_1[(longlong)unaff_RSI * 8 + 0x49] = param_1[(longlong)unaff_RSI * 8 + 0x49] + unaff_BL;
    bVar4 = (byte)(uVar7 >> 8);
    *param_1 = *param_1 + bVar4;
    *pbVar14 = *pbVar14 + bVar5;
    pbVar1 = pbVar14 + -0x51ffe488;
    bVar22 = CARRY1(*pbVar1,bVar5);
    *pbVar1 = *pbVar1 + bVar5;
    if ((char)*pbVar1 < '\0') goto code_r0x0001404b670a;
    param_1[(longlong)unaff_RSI * 8 + 0x49] = param_1[(longlong)unaff_RSI * 8 + 0x49] + unaff_BL;
    bVar16 = *param_1;
    *param_1 = *param_1 + bVar4;
    pbVar14 = (byte *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar5 + 6 + CARRY1(bVar16,bVar4));
    *(char *)((longlong)register0x00000020 + (longlong)unaff_RSI * 2) =
         *(char *)((longlong)register0x00000020 + (longlong)unaff_RSI * 2) + cVar18;
  }
  *pbVar14 = *pbVar14 | (byte)pbVar14;
  unaff_RDI[(longlong)(param_1 + 2)] = unaff_RDI[(longlong)(param_1 + 2)] + bVar19;
  *(byte *)register0x00000020 = *(char *)register0x00000020 + (byte)pbVar14;
  pbVar14 = (byte *)(ulonglong)((int)pbVar14 + 0x1b7a5000);
  pbVar1 = (byte *)(unaff_RBP + 0x7a);
  bVar22 = CARRY1(*pbVar1,bVar19);
  *pbVar1 = *pbVar1 + bVar19;
code_r0x0001404b670a:
  iVar10 = ((int)pbVar14 - *(int *)pbVar14) - (uint)bVar22;
  cVar6 = (char)iVar10;
  *param_1 = *param_1 + bVar21;
  uVar3 = (undefined3)(CONCAT22((short)((uint)iVar10 >> 0x10),CONCAT11(0x24,cVar6)) >> 8);
  cVar6 = cVar6 + '\x02';
  uVar7 = CONCAT31(uVar3,cVar6);
  puVar11 = (uint *)(ulonglong)uVar7;
  *(char *)((longlong)register0x00000020 + (longlong)param_2 * 2) =
       *(char *)((longlong)register0x00000020 + (longlong)param_2 * 2) + cVar6;
  *puVar11 = *puVar11 | uVar7;
  if (*puVar11 == 0) {
    if ((POPCOUNT(uVar7 - *puVar11 & 0xff) & 1U) != 0) {
      *unaff_RSI = *unaff_RSI + bVar19;
      *param_4 = *param_4 + bVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[0x4d] = unaff_RDI[0x4d] | 0x24;
  *param_1 = *param_1 + 0x24;
  *(char *)puVar11 = (char)*puVar11 + cVar6;
  cVar20 = bVar19 + cVar18;
  if (SCARRY1(bVar19,cVar18) != cVar20 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(unaff_BH,cVar20) != (char)(unaff_BH + cVar20) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = CONCAT31(uVar3,cVar6 + cVar17);
  puVar15 = (uint *)(ulonglong)uVar7;
  *param_4 = *param_4 + bVar21;
  *(char *)puVar15 = (char)*puVar15 + cVar6 + cVar17;
  puVar11 = puVar15 + -0xa7ff921;
  uVar9 = *puVar11;
  *(char *)puVar11 = (char)*puVar11 + cVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  if (SCARRY1((char)uVar9,cVar20) == (char)*puVar11 < '\0') {
    *(char *)puVar15 = (char)*puVar15 + cVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar12 = (char *)(ulonglong)(uVar7 | *puVar15);
  *(char *)((longlong)register0x00000020 + (longlong)param_1) =
       *(char *)((longlong)register0x00000020 + (longlong)param_1) + cVar18;
  param_1[0x1b7cb000] = param_1[0x1b7cb000] + cVar20;
  if (SCARRY1(cVar20,cVar18) == (char)(cVar20 + cVar18) < '\0') {
    *pcVar12 = *pcVar12 + cVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

